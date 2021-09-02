#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (250, 0, 0);
glPointSize(5.0);


glBegin(GL_POLYGON);
glVertex2i(476,256);
glVertex2i(288,144);
glVertex2i(354,340);
glVertex2i(174,458);
glVertex2i(404,464);
glVertex2i(476,660);
glVertex2i(550,465);
glVertex2i(780,460);
glVertex2i(600,340);
glVertex2i(665,145);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 1.0, 0.0, 0.0);
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
glutCreateWindow ("Star");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
