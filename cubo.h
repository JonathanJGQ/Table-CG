#ifndef CUBO_H
#define CUBO_H

#include <QGLWidget>

class Cubo : public QGLWidget
{
public:
    Cubo();
    GLfloat vertices[8][3] = {	{-1.0, 1.0, 1.0}, { 1.0, 1.0, 1.0},
                                    { 1.0, 1.0,-1.0}, {-1.0, 1.0,-1.0},
                                    {-1.0,-1.0, 1.0}, { 1.0,-1.0, 1.0},
                                    { 1.0,-1.0,-1.0}, {-1.0,-1.0,-1.0}};
    GLfloat cor[3] = {0.64,0.16,0.16};

    void quad(int a, int b, int c, int d);
    void transladar(float x, float y, float z);
    void escalonar(float x, float y, float z);
    void mudarCor(float x, float y, float z);
};

#endif // CUBO_H
