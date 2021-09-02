#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <iostream>
#include <cmath>
using namespace std;


void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (255, 255, 0);
    glPointSize(5.0);
    glBegin(GL_QUADS);

    //1
    glVertex2i(305, 558);
    glVertex2i(248,558);
     glVertex2i(220,530);
    glVertex2i(305, 530);

   //2
    glVertex2i(276, 530);
     glVertex2i(220,530);
    glVertex2i(106, 418);
    glVertex2i(275, 418);

   //3
  glVertex2i(106, 418);
    glVertex2i(814, 418);
     glVertex2i(810,276);
      glVertex2i(106,276);

      glVertex2i(106,276);
glVertex2i(220,162);
glVertex2i(304,162);
glVertex2i(360,276);

 glVertex2i(810,276);
glVertex2i(700,162);
glVertex2i(616,162);
glVertex2i(558,276);

glVertex2i(530,276);
glVertex2i(502,162);
glVertex2i(418,162);
glVertex2i(390,276);

glVertex2i(390,418);
glVertex2i(390,560);
glVertex2i(530,560);
glVertex2i(530,418);

glVertex2i(502,560);
glVertex2i(502,586);
glVertex2i(530,586);
glVertex2i(530,560);

glVertex2i(390,560);
glVertex2i(390,586);
glVertex2i(418,586);
glVertex2i(418,560);

       glEnd();

     glBegin(GL_QUADS);

     glVertex2i(614, 558);
    glVertex2i(671, 558);
     glVertex2i(700,530);
    glVertex2i(614, 530);

    glVertex2i(644, 530);
     glVertex2i(700,530);
    glVertex2i(814, 418);
    glVertex2i(644, 418);
      glEnd();

    glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 925.0, 0.0, 675.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (925, 675);
glutInitWindowPosition (0, 0);
glutCreateWindow ("BONUS TASK");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
