#include<GL/gl.h>
#include<GL/glut.h>
#include <cstdio>
#include<iostream>
using namespace std;

int pntx1,pnty1,r;

void plot(int x,int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x+pntx1,y+pnty1);
    glEnd();
}
void myInit(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(1.0f,1.0f,0.0f);

    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);

}
void midPointCircle()
{

    int x=0;
    int y=r;
    float choice = 5/4 -r;
    plot(x,y);

    while(y>x)
    {
        if(choice<0)
        {
            x++;
            choice+=2*x+1;
        }
        else
        {
            y--;
            x++;
            choice+=2*(x-y)+1;
        }

    plot(x,y);
    plot(x,-y);
    plot(-x,y);
    plot(-x,-y);
    plot(y,x);
    plot(-y,x);
    plot(y,-x);
    plot(-y,-x);

    }


}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(125.0,0.0,0.0);
    glPointSize(5.0);
    midPointCircle();
    glFlush();

}

 main(int argc,char** argv)
{
    cout<<" Enter X Co-ordinates: ";
    cin>>pntx1;
    cout<<"Enter Y Co-ordinates: ";
    cin>>pnty1;
    cout<<"Enter radius: ";
    cin>>r;

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,150);
    glutCreateWindow("Circle");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
