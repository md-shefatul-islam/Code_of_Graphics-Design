#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);


glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
glVertex2i(744, 326);
glVertex2i(207, 326);
glVertex2i(644, 616);
glVertex2i(585, 435);

glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(644, 616);
glVertex2i(477, 143);
glVertex2i(310, 616);
glVertex2i(477, 512);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 800.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 800);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
