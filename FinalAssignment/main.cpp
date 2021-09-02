#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

float ma, mb;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed1 = 0.03f;
GLfloat speed2 = 0.07f;
GLfloat speed3 = 0.05f;
GLfloat speed4 = 0.09f;

float a11=-0.86f;
float a12=-0.80f;
float a13=-0.92f;
float b11=0.85f;
float b12=1.0f;
float b13=1.0f;

float a21=-0.31f;
float a22=-0.25f;
float a23=-0.37f;
float b21=-0.65f;
float b22=-0.50f;
float b23=-0.50f;

float a31=0.31f;
float a32=0.37f;
float a33=0.25f;
float b31=0.0f;
float b32=0.15f;
float b33=0.15f;

float a41=0.86f;
float a42=0.92f;
float a43=0.80f;
float b41=0.85f;
float b42=1.0f;
float b43=1.0f;

void update(int value)
{
    if(b13 < -1.0)
    {
        b11=1.0f;
        b12=1.15f;
        b13=1.15f;
    }
    if(b23 < -1.0)
    {
        b21=1.0f;
        b22=1.15f;
        b23=1.15f;
    }
    if(b33 < -1.0)
    {
        b31=1.0f;
        b32=1.15f;
        b33=1.15f;
    }
    if(b43 < -1.0)
    {
        b41=1.0f;
        b42=1.15f;
        b43=1.15f;
    }

        b11 -= speed1;
        b12 -= speed1;
        b13 -= speed1;

        b21 -= speed2;
        b22 -= speed2;
        b23 -= speed2;

        b31 -= speed3;
        b32 -= speed3;
        b33 -= speed3;

        b41 -= speed4;
        b42 -= speed4;
        b43 -= speed4;

glutPostRedisplay();
glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y)
{
    ma = ((float(x)/1000) - 0.5) * 2;
    mb = -((float(y)/700) - 0.5) * 2;
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            printf("clicked point is %f,%f)\n", ma,mb);
        }
    }
glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(1.0f, 0.0f, 0.0f);

if(ma>=a13 && ma<=a12 && mb>=b11 && mb<=b12)
    {
        a11=-3.5f;
        a12=-3.5f;
        a13=-3.5f;
    }
glPushMatrix();
 glTranslatef(0.0f,position, 0.0f);

 // enemy 1
    glBegin(GL_TRIANGLES);
    glVertex2f(a11,b11);
    glVertex2f(a12,b12);
    glVertex2f(a13,b13);
    glEnd();
    glPopMatrix();

glColor3f(.50f, 1.0f, 1.0f);
if(ma>=a23 && ma<=a22 && mb>=b21 && mb<=b22)
    {
        a21=-3.5f;
        a22=-3.5f;
        a23=-3.5f;
    }
    glPushMatrix();
    glTranslatef(0.0f,position2, 0.0f);

// enemy 2
    glBegin(GL_TRIANGLES);
    glVertex2f(a21,b21);
    glVertex2f(a22,b22);
    glVertex2f(a23,b23);
    glEnd();
glPopMatrix();

glColor3f(1.0f, 1.0f, 1.0f);
if(ma>=a33 && ma<=a32 && mb>=b31 && mb<=b32)
    {
        a31=-3.5f;
        a32=-3.5f;
        a33=-3.5f;
    }
glPushMatrix();
glTranslatef(0.0f,position3, 0.0f);

// enemy 3
    glBegin(GL_TRIANGLES);
    glVertex2f(a31,b31);
    glVertex2f(a32,b32);
    glVertex2f(a33,b33);
    glEnd();
glPopMatrix();

glColor3f(1.0f, 1.0f, 0.0f);
if(ma>=a43 && ma<=a42 && mb>=b41 && mb<=b42)
    {
        a41=-3.5f;
        a42=-3.5f;
        a43=-3.5f;
    }
glPushMatrix();
glTranslatef(0.0f,position4, 0.0f);

// enemy 4
    glBegin(GL_TRIANGLES);
    glVertex2f(a41,b41);
    glVertex2f(a42,b42);
    glVertex2f(a43,b43);
    glEnd();
    glPopMatrix();
glFlush();
}

void init()
{
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1 , 1 , -1 , 1);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitWindowSize(1000, 700);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("Enemy Killed");
   glutDisplayFunc(display);
   init();
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
return 0;
}
