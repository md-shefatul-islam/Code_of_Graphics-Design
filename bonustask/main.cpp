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
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glBegin(GL_QUADS);

    //1
    glVertex2i(0, 264);
    glVertex2i(165,264);
     glVertex2i(165,300);
    glVertex2i(0, 300);

   //2
     glVertex2i(0,228 );
    glVertex2i(202, 228);
     glVertex2i(202,264);
      glVertex2i(0,264);

   //3
     glVertex2i(129,191 );
    glVertex2i(458, 191);
     glVertex2i(458,228);
      glVertex2i(129,228);

      //4
     glVertex2i(165,191 );
      glVertex2i(275,191);
    glVertex2i(275,154);
     glVertex2i(165, 154);

     //6
    glVertex2i(238,264 );
    glVertex2i(348,264);
    glVertex2i(348, 228);
      glVertex2i(238,228);

      //7
    glVertex2i(275, 264);
    glVertex2i(312,264);
     glVertex2i(312,300);
    glVertex2i(275, 300);

//5
     glVertex2i(202,154 );
    glVertex2i(238, 154);
     glVertex2i(238,118);
    glVertex2i(202,118);

    //8
     glVertex2i(312,191 );
      glVertex2i(421,191);
     glVertex2i(421,154);
     glVertex2i(312, 154);

//9
     glVertex2i(348,154 );
    glVertex2i(384, 154);
     glVertex2i(384,118);
    glVertex2i(348,118);

    //10
      glVertex2i(385,228 );
    glVertex2i(600, 228);
     glVertex2i(600,264);
      glVertex2i(385,264);

//11
    glVertex2i(422, 264);
    glVertex2i(600,264);
     glVertex2i(600,300);
    glVertex2i(422, 300);

       glEnd();

     glBegin(GL_QUADS);

     //1
      glVertex2i(0, 409);
    glVertex2i(165,409);
     glVertex2i(165,445);
    glVertex2i(0, 445);

   //2
     glVertex2i(0,373 );
    glVertex2i(202, 373);
     glVertex2i(202,409);
      glVertex2i(0,409);

   //3
     glVertex2i(129,336 );
    glVertex2i(458, 336);
     glVertex2i(458,373);
      glVertex2i(129,373);

      //4
     glVertex2i(165,336 );
      glVertex2i(275,336);
    glVertex2i(275,299);
     glVertex2i(165, 299);

     //6
    glVertex2i(238,409 );
    glVertex2i(348,409);
    glVertex2i(348, 373);
      glVertex2i(238,373);

      //7
    glVertex2i(275, 409);
    glVertex2i(312,409);
     glVertex2i(312,445);
    glVertex2i(275, 445);

//5
     glVertex2i(202,299 );
    glVertex2i(238, 299);
     glVertex2i(238,263);
    glVertex2i(202,263);

    //8
     glVertex2i(312,336 );
      glVertex2i(421,336);
     glVertex2i(421,299);
     glVertex2i(312, 299);

//9
     glVertex2i(348,299 );
    glVertex2i(384, 299);
     glVertex2i(384,263);
    glVertex2i(348,263);

    //10
      glVertex2i(385,373 );
    glVertex2i(600, 373);
     glVertex2i(600,409);
      glVertex2i(385,409);

//11
    glVertex2i(422, 409);
    glVertex2i(600,409);
     glVertex2i(600,445);
    glVertex2i(422, 445);
      glEnd();

    glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1820.0, 0.0, 930.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1820, 930);
glutInitWindowPosition (0, 0);
glutCreateWindow ("BONUS TASK");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
