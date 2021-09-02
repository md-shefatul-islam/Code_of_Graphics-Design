#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float fa, fb;
GLfloat posi = 0.0f;
GLfloat posi2 = 0.0f;
GLfloat posi3 = 0.0f;
GLfloat posi4 = 0.0f;
GLfloat spd = 0.05f;
GLfloat spd2 = 0.09f;
GLfloat spd3 = 0.04f;
GLfloat spd4 = 0.07f;




float a11=-0.8f;
float a12=-0.75f;
float a13=-0.85f;
float b11=0.85f;
float b12=1.0f;
float b13=1.0f;



float a21=-0.25f;
float a22=-0.2f;
float a23=-0.3f;
float b21=-0.65f;
float b22=-0.50f;
float b23=-0.50f;



float a31=0.25f;
float a32=0.3f;
float a33=0.2f;
float b31=0.0f;
float b32=0.15f;
float b33=0.15f;



float a41=0.8f;
float a42=0.85f;
float a43=0.75f;
float b41=0.85f;
float b42=1.0f;
float b43=1.0f;



void update(int value) {



    if(b12 < -1.0)
    {

        b11=1.0f;
        b12=1.15f;
        b13=1.15f;
    }



    if(b22 < -1.0)
    {

        b21=1.0f;
        b22=1.15f;
        b23=1.15f;
    }



    if(b32 < -1.0)
    {

        b31=1.0f;
        b32=1.15f;
        b33=1.15f;
    }



    if(b42 < -1.0)
    {

        b41=1.0f;
        b42=1.15f;
        b43=1.15f;
    }




        b11 -= spd;
        b12 -= spd;
        b13 -= spd;

        b21 -= spd2;
        b22 -= spd2;
        b23 -= spd2;

        b31 -= spd3;
        b32 -= spd3;
        b33 -= spd3;

        b41 -= spd4;
        b42 -= spd4;
        b43 -= spd4;



glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y) {



    fa = ((float(x)/900) - 0.5) * 2;
    fb = -((float(y)/600) - 0.5) * 2;
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            printf("clicked at %f,%f)\n", fa,fb);

        }
    }

glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(0.0f, 1.0f, 0.0f);

if(fa>=a13 && fa<=a12 && fb>=b11 && fb<=b12)
    {
        a11=-2.8f;
        a12=-2.75f;
        a13=-2.85f;
    }

glPushMatrix();
 glTranslatef(0.0f,posi, 0.0f);
glBegin(GL_TRIANGLES);

// enemy no 1

    glVertex2f(a11,b11);
    glVertex2f(a12,b12);
    glVertex2f(a13,b13);
    glEnd();
    glPopMatrix();

glColor3f(0.0f, 1.0f, 0.0f);

if(fa>=a23 && fa<=a22 && fb>=b21 && fb<=b22)
    {
        a21=-2.25f;
        a22=-2.2f;
        a23=-2.3f;
    }
    else
    glColor3f(0.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(0.0f,posi2, 0.0f);



glBegin(GL_TRIANGLES);


// enemy no 2
    glVertex2f(a21,b21);
    glVertex2f(a22,b22);
    glVertex2f(a23,b23);
    glEnd();
glPopMatrix();

glColor3f(1.0f, 0.0f, 1.0f);

if(fa>=a33 && fa<=a32 && fb>=b31 && fb<=b32)
    {
        a31=-2.25f;
        a32=-2.2f;
        a33=-2.3f;
    }

glPushMatrix();
glTranslatef(0.0f,posi3, 0.0f);


glBegin(GL_TRIANGLES);

// enemy no 3

    glVertex2f(a31,b31);
    glVertex2f(a32,b32);
    glVertex2f(a33,b33);
    glEnd();

glPopMatrix();
glColor3f(1.0f, 0.0f, 0.0f);
if(fa>=a43 && fa<=a42 && fb>=b41 && fb<=b42)
    {
        a41=-2.25f;
        a42=-2.2f;
        a43=-2.3f;
    }

glPushMatrix();
glTranslatef(0.0f,posi4, 0.0f);
glBegin(GL_TRIANGLES);

// enemy no 4

    glVertex2f(a41,b41);
    glVertex2f(a42,b42);
    glVertex2f(a43,b43);
    glEnd();
    glPopMatrix();
glFlush();

}

void init() {
    glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-450 , 450 , -300 , 300);
}

int main(int argc, char** argv) {

   glutInit(&argc, argv);
   glutInitWindowSize(900, 600);
   glutInitWindowPosition(300, 150);
   glutCreateWindow("Enemy Detection");
   glutDisplayFunc(display);
   init();
   glutMouseFunc(handleMouse);
   glutTimerFunc(100, update, 0);
   glutMainLoop();

return 0;
}
