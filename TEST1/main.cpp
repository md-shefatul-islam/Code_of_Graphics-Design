#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_LINES);
//glVertex2i(300, 50);
//glVertex2i(300, 300);
//glVertex2i(300, 175);
//glVertex2i(400, 175);
//glVertex2i(300, 300);
//glVertex2i(400, 300);
glVertex2i(0, 400);
glVertex2i(1000, 400);
glVertex2i(500, 0);
glVertex2i(500, 800);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(400, 700);
glVertex2i(100, 700);
glVertex2i(250, 600);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(100, 500);
glVertex2i(400, 500);
glVertex2i(250, 600);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2i(550, 100);
glVertex2i(950, 100);
glVertex2i(750, 300);
glEnd();

glBegin(GL_QUADS);
glVertex2i(800, 750);
glVertex2i(600, 750);
glVertex2i(600, 550);
glVertex2i(800, 550);
glEnd();

glBegin(GL_QUADS);
glVertex2i(700, 650);
glVertex2i(900, 650);
glVertex2i(900, 450);
glVertex2i(700, 450);
glEnd();

glBegin(GL_QUADS);
glVertex2i(700, 650);
glVertex2i(900, 650);
glVertex2i(900, 450);
glVertex2i(700, 450);
glEnd();

glBegin(GL_LINES);
glVertex2i(50, 50);
glVertex2i(100, 350);
glVertex2i(450, 350);
glVertex2i(400, 50);
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
