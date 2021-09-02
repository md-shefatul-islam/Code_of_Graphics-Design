#include<GL/gl.h>
#include<GL/glut.h>
#include <cstdio>
#include<iostream>
using namespace std;

int px1,py1,r;

void plot(int x,int y)
{

    glVertex2i(px1+x,py1+y);

}

void midPointCircle()
{

    int x=0;
    int y=r;
    float choice = 5/4 -r;
    plot(x,y);

    while(y>=x)
    {
        glBegin(GL_POLYGON);
        if(choice<0)
        {
            x++;
            choice+=(2*x)+1;
        }
        else
        {
            y--;
            x++;
            choice+=2*(x-y)+1;
        }
    plot(x,y);
    plot(-x,y);
    plot(x,-y);
    plot(-x,-y);
    plot(y,x);
    plot(y,-x);
    plot(-y,x);
    plot(-y,-x);
glEnd();
    }


}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,255,255);
    glPointSize(1.0);

     glBegin(GL_QUADS);
     glColor3ub(0,0,255);
    glVertex2i(0,216);
     glVertex2i(432,216);
      glVertex2i(432,180);
       glVertex2i(0,180);
        glEnd();

        glBegin(GL_QUADS);
     glColor3ub(255,255,255);
    glVertex2i(0,180);
     glVertex2i(432,180);
      glVertex2i(432,176);
       glVertex2i(0,176);
        glEnd();

         glBegin(GL_QUADS);
     glColor3ub(255,255,255);
    glVertex2i(0,40);
     glVertex2i(432,40);
      glVertex2i(432,36);
       glVertex2i(0,36);
        glEnd();


        glBegin(GL_QUADS);
     glColor3ub(0,0,255);
    glVertex2i(0,0);
     glVertex2i(432,0);
      glVertex2i(432,36);
       glVertex2i(0,36);
        glEnd();
        glColor3ub(255,255,255);

        midPointCircle();


         glBegin(GL_POLYGON);
         glColor3ub(255,0,0);


        glVertex2i(134,122);
        glVertex2i(100,122);
        glVertex2i(126,102);
        glVertex2i(116,70);
        glVertex2i(144,89);
        glVertex2i(144,154);
        glEnd();
        glBegin(GL_POLYGON);
         glColor3ub(255,0,0);
        glVertex2i(144,89);
        glVertex2i(171,70);
        glVertex2i(162,102);
        glVertex2i(188,122);
        glVertex2i(155,122);
        glVertex2i(144,154);

        glEnd();
    glFlush();

}
void myInit(void)
{
    glClearColor(255.0,0.0,0.0,0.0);
    glColor3ub(0.0,0.0,0.0);

    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,432.0,0.0,216.0);

}

 main(int argc,char** argv)
{

    px1=144;

    py1=108;

    r=48;

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(432,216);
    glutInitWindowPosition(100,150);
    glutCreateWindow("Flag");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
