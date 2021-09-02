#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<cstdio>

GLfloat position = 0.0f;
GLfloat position_R = 0.0f;
GLfloat position_B = 0.0f;
GLfloat speed = 0.079f;
GLfloat speed_R = 0.071f;
GLfloat speed_B = 0.071f;
GLfloat speed_obj= 0.071f;
GLfloat position_obj= 0.0f;



void Circle(GLfloat cx, GLfloat cy,GLfloat cz, GLfloat radius,int r,int g,int b)
{
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * 3.1416;
    int counter=0;
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
    glVertex3f(cx, cy,cz);
		for(int i = 0; i <= triangleAmount;i++) {
			counter+=1;
			glVertex3f(
            cx + (radius * cos(i *  twicePi / triangleAmount)),
            cy + (radius * sin(i * twicePi / triangleAmount)),cz
			);
		}
	glEnd();
}


void update(int value) {

    if(position > 1.0)
    position = -1.2f;
    position += speed;

    if(position_R > 1.0)
    position_R = -1.2f;
    position_R += speed_R;

    if(position_B > 1.0)
    position_B = -0.071f;
    //position_B = -position_R;
    position_B += speed_B;

    if(position_obj < -1.2)
    position_obj = 1.2f;
    position_obj -=speed_obj;
    glutPostRedisplay();

glutTimerFunc(100, update, 0);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed_B += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
	if (button == GLUT_RIGHT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed_B += 0.2f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'S':
    speed_R = 0.0f;
    break;

case 'A':
    speed_R -= 0.1f;
    if(position_R < -1.0)
        position_R = 1.2f;
    position_R += speed_R;

    break;
case 'B':
    speed_R += 0.1f;
    if(position_R > 1.0)
        position_R = -1.2f;
    position_R += speed_R;
    break;

glutPostRedisplay();
	}
}
void bullet()
{
     glPushMatrix();
     glTranslatef(0.0f, position_B, 0.0f);
     Circle(-0.03f,0.015f,0.0f,0.01f,0,0,153);
     glPopMatrix();
}
void rocket()
{

      glPushMatrix();
      glTranslatef(position_R,0.0f, 0.0f);
      Circle(-0.03f,0.015f,0.0f,0.01f,0,0,153);

      //middle part of rocket
      glBegin(GL_QUADS);
      glColor3ub(0, 0, 153);
      glVertex2f(-0.1f, -0.20f);
      glVertex2f(-0.1f, -0.75f);
      glVertex2f(0.04f, -0.75f);
      glVertex2f(0.04f, -0.20f);
      glEnd();

      //font of rocket
      glBegin(GL_TRIANGLES);
      glColor3ub(250, 50, 0);
      glVertex2f(-0.03f, 0.015f);
      glVertex2f(-0.1f, -0.20f);
      glVertex2f(0.04f, -0.20f);
      glEnd();

      //right wing of rocket
      glBegin(GL_TRIANGLES);
      glColor3ub(250, 50, 0);
      glVertex2f(0.04f, -0.44f);
      glVertex2f(0.04f, -0.72f);
      glVertex2f(0.16f, -0.78f);
      glEnd();

     // left wing of rocket
      glBegin(GL_TRIANGLES);
      glColor3ub(250, 50, 0);
      glVertex2f(-0.1f, -0.44f);
      glVertex2f(-0.22f, -0.78f);
      glVertex2f(-0.1f, -0.72f);
      glEnd();

      //bottom part of rocket
      glBegin(GL_POLYGON);
      glColor3ub(255, 0, 0);
      glVertex2f(-0.08f, -0.75f);
      glVertex2f(-0.08f, -0.80f);
      glVertex2f(-0.03f, -0.85f);
      glVertex2f(0.02f, -0.80f);
      glVertex2f(0.02f, -0.75);
      glEnd();


glPopMatrix();


}

void triangle_obj()
{
     glPushMatrix();
     glTranslatef(0.0f,position_obj,0.0f);

   // enemy 1
     glBegin(GL_TRIANGLES);
     glColor3ub(100, 153, 38);
     glVertex2f(0.4f, 0.3f);
     glVertex2f(0.5f, 0.3f);
     glVertex2f(0.45f, 0.2f);
     glEnd();

  //enemy 2
      glBegin(GL_TRIANGLES);
      glColor3ub(102, 50, 102);
      glVertex2f(0.15f, 0.4f);
      glVertex2f(0.2f, 0.5f);
      glVertex2f(0.1f, 0.5f);
      glEnd();

 // enemy 3
      glBegin(GL_TRIANGLES);
      glColor3ub(255, 255, 0);
      glVertex2f(-0.55f, 0.2f);
      glVertex2f(-0.6f, 0.3f);
      glVertex2f(-0.5f, 0.3f);
      glEnd();

      // enemy 4
      glBegin(GL_TRIANGLES);
      glColor3ub(255, 0, 255);
      glVertex2f(-0.15f, 0.4f);
      glVertex2f(-0.2f, 0.5f);
      glVertex2f(-0.1f, 0.5f);
      glEnd();



      glPopMatrix();


}

void myDisplay(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
rocket();
triangle_obj();
bullet();
glFlush();


}
void myInit(void)
{
glClearColor(.2, .8, .9, 0.5);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(-1.0, 1.0, -1.0, 1.0 );

}

int main(int iArgc, char** cppArgv)

{

glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(150, 150);
glutCreateWindow("Moving Rocket");
glutDisplayFunc(myDisplay);

myInit();
glutKeyboardFunc(handleKeypress);
glutMouseFunc(handleMouse);
glutTimerFunc(1000, update, 0);
glutMainLoop();

return 0;

}
