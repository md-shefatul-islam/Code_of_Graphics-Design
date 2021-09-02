#include<GL/gl.h>
#include<GL/glut.h>
#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int i,r,s,rx,sy,mx,ny,p;
void mainBlock()
{
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(r,s);
    glVertex2i(r,r);
    glVertex2i(s,r);
    glVertex2i(s,s);

    glEnd();

    if(i==1)
    {
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2i(r+rx,s+sy);
    glVertex2i(r+rx,r+sy);
    glVertex2i(s+rx,r+sy);
    glVertex2i(s+rx,s+sy);

    glEnd();
    }
    else if(i==2)
    {

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2i(r+mx,s+ny);
    glVertex2i(r+mx,r+ny);
    glVertex2i(s+mx,r+ny);
    glVertex2i(s+mx,s+ny);
    glEnd();
    }
    else if(i==3)
    {
        float d=(3.1416/180)*p;

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,255);
    glVertex2i(r,s);
    glVertex2i(r*cos(d)-s*sin(d),r*cos(d)-s*sin(d));
    glVertex2i(r*sin(d)+s*cos(d),r*cos(d)-s*sin(d));
    glVertex2i(r*sin(d)+s*cos(d),r*sin(d)+s*cos(d));

    glEnd();

    }
    else if(i==4)
    {

        float d=(3.1416/180)*p;

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,255);
    glVertex2i(r,s);
    glVertex2i(r*cos(d)+s*sin(d),r*cos(d)+s*sin(d));
    glVertex2i(s*cos(d)-r*sin(d),r*cos(d)+s*sin(d));
    glVertex2i(s*cos(d)-r*sin(d),s*cos(d)-r*sin(d));
    glEnd();

    }
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(0.0,0.0,0.0);
    glPointSize(1.0);
    mainBlock();
    glFlush();

}

void myInit(void)
{
    glClearColor(255.0,0.0,0.0,0.0);
    glColor3ub(0.0,0.0,0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
}

int main(int argc,char** argv)
{
    cout<<"Enter the no. of edges: 3"<<endl;
    cout<<"Enter vertex : "<<endl;
    cin>>r;
    cin>>s;

    cout<<"Enter your option : "<<endl;
    cout<<"1. translation \n2.scaling \n3.anti clockwise rotation \n4.clockwise rotation"<<endl;
    cin>>i;
    if(i==1)
    {
    cout<<"enter the transformation factor : ";
    cin>>rx;
    cin>>sy;
    }
    else if(i==2)
    {
    cout<<"enter the transformation factor : ";
    cin>>mx;
    cin>>ny;
    }
    if(i==3)
    {
    cout<<"enter the transformation factor : ";
    cin>>p;
    }
    if(i==4)
    {
    cout<<"enter the transformation factor : ";
    cin>>p;
    }


    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,150);
    glutCreateWindow("Transformation");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
