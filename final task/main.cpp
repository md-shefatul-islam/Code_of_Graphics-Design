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
    //glColor3ub(255,255,255);
    glPointSize(1.0);

     glBegin(GL_QUADS);
     glColor3ub(255,255,255);
     glVertex2i(0,0);
     glVertex2i(1150,0);
      glVertex2i(1150,172);
       glVertex2i(0,172);
        glEnd();

        glBegin(GL_QUADS);
     glColor3ub(150,150,150);
    glVertex2i(0,0);
     glVertex2i(252,0);
      glVertex2i(252,32);
       glVertex2i(0,32);

         glVertex2i(46,32);
     glVertex2i(286,32);
      glVertex2i(286,68);
       glVertex2i(46,68);

        glColor3ub(140,100,60);
       glVertex2i(158,136);
     glVertex2i(158,210);
      glVertex2i(262,210);
       glVertex2i(262,136);

        glVertex2i(262,136);
         glVertex2i(262,339);
     glVertex2i(492,339);
      glVertex2i(492,136);

      glEnd();

      glBegin(GL_POLYGON);
         glColor3ub(137,92,55);
    glVertex2i(178,339);
         glVertex2i(178,353);
     glVertex2i(261,395);
      glVertex2i(492,395);
      glVertex2i(492,339);

        glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(137,92,55);
        glVertex2i(493,68);
         glVertex2i(493,395);
        glVertex2i(261,412);
        glVertex2i(492,395);
        glVertex2i(492,339);

        glEnd();

         glBegin(GL_LINES);
         glColor3ub(0,0,0);
        glVertex2i(178,352);
         glVertex2i(493,352);


         glVertex2i(424,339);
         glVertex2i(424,353);

         glVertex2i(424,353);
          glVertex2i(492,395);

          glVertex2i(493,68);
          glVertex2i(493,395);
            glEnd();

        glBegin(GL_POLYGON);
         glColor3ub(150,150,150);
    glVertex2i(0,0);
     glVertex2i(254,0);
      glVertex2i(252,32);
       glVertex2i(286,32);
       glVertex2i(286,68);
       glVertex2i(1075,68);
       glVertex2i(1075,0);
        glEnd();

         glBegin(GL_POLYGON);
          glColor3ub(140,100,60);

    glVertex2i(310,68);
     glVertex2i(310,102);
       glVertex2i(358,102);
     glVertex2i(358,136);
       glVertex2i(512,136);
       glVertex2i(512,68);
        glEnd();

         glBegin(GL_QUADS);
     glColor3ub(140,100,60);
    glVertex2i(86,68);
     glVertex2i(86,102);
      glVertex2i(310,102);
       glVertex2i(310,68);

         glVertex2i(132,102);
     glVertex2i(132,136);
      glVertex2i(358,136);
       glVertex2i(358,102);

        glEnd();


        glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
        glVertex2i(0,0);
        glVertex2i(252,0);
        glVertex2i(252,32);
        glVertex2i(0,32);
        glEnd();


        glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
        glVertex2i(46,32);
        glVertex2i(286,32);
        glVertex2i(286,68);
        glVertex2i(46,68);
        glEnd();

         glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
        glVertex2i(252,0);
      glVertex2i(252,32);
       glVertex2i(286,32);
       glVertex2i(286,68);
       glVertex2i(1075,68);
       glVertex2i(1075,0);
        glEnd();

        glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
    glVertex2i(86,68);
     glVertex2i(86,102);
      glVertex2i(310,102);
       glVertex2i(310,68);

        glEnd();


        glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
      glVertex2i(132,102);
     glVertex2i(132,136);
      glVertex2i(358,136);
       glVertex2i(358,102);
        glEnd();

         glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
      glVertex2i(310,68);
     glVertex2i(310,102);
       glVertex2i(358,102);
     glVertex2i(358,136);
       glVertex2i(512,136);
       glVertex2i(512,68);
        glEnd();

        glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
     glVertex2i(158,136);
     glVertex2i(158,210);
      glVertex2i(262,210);
       glVertex2i(262,136);
 glEnd();

       glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
        glVertex2i(262,136);
         glVertex2i(262,339);
     glVertex2i(492,339);
      glVertex2i(492,136);
         glEnd();

          glBegin(GL_LINE_LOOP);
        glColor3ub(0,0,0);
    glVertex2i(178,339);
         glVertex2i(178,353);
     glVertex2i(261,395);
      glVertex2i(492,395);
      glVertex2i(492,339);
         glEnd();
    glFlush();

}
void myInit(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3ub(0.0,0.0,0.0);

    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1150.0,0.0,750.0);

}

 main(int argc,char** argv)
{

    px1=144;

    py1=108;

    r=48;

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1150,750);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Flag");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
