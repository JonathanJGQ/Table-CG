#include "cubo.h"
#include "glwidget.h"

Cubo::Cubo()
{

}

void Cubo::quad(int a, int b, int c, int d)
{
    glBegin(GL_QUADS);
        glColor3fv(cor);
        glVertex3fv(vertices[a]);
        glVertex3fv(vertices[b]);
        glVertex3fv(vertices[c]);
        glVertex3fv(vertices[d]);
    glEnd();
}

void Cubo::transladar(float x, float y, float z){
    int i,j;
    for(i=0;i < 8;i++){
        vertices[i][0] = vertices[i][0] + x;
        vertices[i][1] = vertices[i][1] + y;
        vertices[i][2] = vertices[i][2] + z;
    }
}

void Cubo::escalonar(float x, float y, float z){
    int i,j;
    for(i=0;i < 8;i++){
        vertices[i][0] = vertices[i][0] * x;
        vertices[i][1] = vertices[i][1] * y;
        vertices[i][2] = vertices[i][2] * z;
    }
}

void Cubo::mudarCor(float red, float green, float blue){
    cor[0] = red;
    cor[1] = green;
    cor[2] = blue;
}

