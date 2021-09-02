#include<GL/gl.h>
#include <stdio.h>
#include <GL/glut.h>


bool color = true;
int x = 80, y = 80;

void BlackPart(int x, int y)
{
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	glVertex2i(x, y + 80);
	glVertex2i(x + 80, y + 80);
	glVertex2i(x + 80, y);
	glEnd();
}

void DefaultPart(int x, int y)
{
	glBegin(GL_LINE_LOOP);
	glVertex2i(x, y);
	glVertex2i(x, y + 80);
	glVertex2i(x + 80, y + 80);
	glVertex2i(x + 80, y);
	glEnd();
}

void Border(int x, int y)
{

	glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(x,y);
    glVertex2i(x, y + 640);
	glVertex2i(x-5, y + 645);
	glVertex2i(x-5, y -5);

	glVertex2i(x , y + 640);
	glVertex2i(x - 5, y + 645);
	glVertex2i(x + 645, y+645);
	glVertex2i(x + 640, y+640);

	glVertex2i(x + 645, y+645);
	glVertex2i(x + 640, y+640);
	glVertex2i(x+640 , y);
	glVertex2i(x +645, y-5);

	glVertex2i(x + 645, y-5);
	glVertex2i(x + 640, y);
	glVertex2i(x , y);
	glVertex2i(x -5, y-5);

	glEnd();
}


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	Border(x,y);


	for (int i = 0; i < 8 ; i++)
	{
		if (i % 2 == 0)
		{
			color = true;
		}
		else
		{
			color = false;
		}

		for (int j = 0; j < 8; j++)
		{
			if (color)
			{
				BlackPart(x, y);
				color = false;
			}
			else
			{
				DefaultPart(x, y);
				color = true;
			}
			x += 80;
		}
		y += 80;
		x = 80;
	}

	glFlush();
}


void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Chess Board");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
