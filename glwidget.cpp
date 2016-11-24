#include "glwidget.h"
#include <GL/glut.h>
#include <cubo.h>

GLWidget::GLWidget(QWidget *parent) : QGLWidget(parent)
{
    connect(&timer,SIGNAL(timeout()), this, SLOT(updateGL()));
    timer.start(16);
}

void GLWidget::initializeGL(){
    glClearColor(0.2,0.2,0.2,1);
    glEnable(GL_DEPTH_TEST);
}
void GLWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glClear(GL_COLOR_BUFFER_BIT);


    Cubo perna1,perna2,perna3,perna4,tampo,cubo;

    glRotatef(0.5,1,1,1);
    perna1.escalonar(0.05,0.03,0.72);
    perna1.transladar(2.10,1.10,0);
    perna1.quad(6, 2, 1, 5);
    perna1.quad(3, 0, 1, 2);
    perna1.quad(5, 1, 0, 4);
    perna1.quad(4, 0, 3, 7);
    perna1.quad(6, 5, 4, 7);
    perna1.quad(7, 3, 2, 6);

    perna2.escalonar(0.05,0.03,0.72);
    perna2.transladar(2.10,-1.10,0);
    perna2.quad(6, 2, 1, 5);
    perna2.quad(3, 0, 1, 2);
    perna2.quad(5, 1, 0, 4);
    perna2.quad(4, 0, 3, 7);
    perna2.quad(6, 5, 4, 7);
    perna2.quad(7, 3, 2, 6);


    perna3.escalonar(0.05,0.03,0.72);
    perna3.transladar(-2.10,1.10,0);
    perna3.quad(6, 2, 1, 5);
    perna3.quad(3, 0, 1, 2);
    perna3.quad(5, 1, 0, 4);
    perna3.quad(4, 0, 3, 7);
    perna3.quad(6, 5, 4, 7);
    perna3.quad(7, 3, 2, 6);


    perna4.escalonar(0.05,0.03,0.72);
    perna4.transladar(-2.10,-1.10,0);
    perna4.quad(6, 2, 1, 5);
    perna4.quad(3, 0, 1, 2);
    perna4.quad(5, 1, 0, 4);
    perna4.quad(4, 0, 3, 7);
    perna4.quad(6, 5, 4, 7);
    perna4.quad(7, 3, 2, 6);

    tampo.escalonar(2.20,1.20,0.03);
    tampo.transladar(0,0,0.72);
    tampo.quad(6, 2, 1, 5);
    tampo.quad(3, 0, 1, 2);
    tampo.quad(5, 1, 0, 4);
    tampo.quad(4, 0, 3, 7);
    tampo.quad(6, 5, 4, 7);
    tampo.quad(7, 3, 2, 6);

    cubo.escalonar(0.2,0.2,0.2);
    cubo.transladar(0,0,0.97);
    cubo.mudarCor(0,0,1);
    cubo.quad(6, 2, 1, 5);
    cubo.quad(3, 0, 1, 2);
    cubo.quad(5, 1, 0, 4);
    cubo.quad(4, 0, 3, 7);
    cubo.quad(6, 5, 4, 7);
    cubo.quad(7, 3, 2, 6);

}
void GLWidget::resizeGL(int w, int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, float(w/h),0.01,100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,10, 0,0,0, 0,1,0);
}
