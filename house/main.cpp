#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);
glPointSize(1.0);
 glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
    glVertex2i(36, 87);
    glVertex2i(1778,87);
     glVertex2i(1778,97);
    glVertex2i(36, 97);

    //1
    glColor3ub (160, 144, 144);
    glVertex2i(1660, 97);
    glVertex2i(1660,484);
     glVertex2i(167,484);
    glVertex2i(167, 97);


    glColor3ub (90, 90, 90);
    glVertex2i(82, 484);
    glVertex2i(1748,484);
     glVertex2i(1748,496);
    glVertex2i(82, 496);

    glColor3ub (90, 90, 90);
    glVertex2i(62, 496);
    glVertex2i(1768,496);
     glVertex2i(1768,508);
    glVertex2i(62, 508);
  glEnd();

//7
      glBegin(GL_TRIANGLES);
      glColor3ub (230, 230, 230);
      glVertex2i(80, 508);
    glVertex2i(914,814);
    glVertex2i(1746, 508);
     glEnd();

      glBegin(GL_QUADS);
    glColor3ub (90, 90, 90);
    glVertex2i(240, 540);
    glVertex2i(506,635);
     glVertex2i(506,664);
     glVertex2i(166, 540);

      glVertex2i(506,635);
     glVertex2i(768,540);
     glVertex2i(846,540);
     glVertex2i(506,664);

        glVertex2i(506,664);
         glVertex2i(914,814);
          glVertex2i(914,784);
           glVertex2i(580,664);

           glVertex2i(914,814);
           glVertex2i(1322,664);
          glVertex2i(1248,664);
          glVertex2i(914,784);

    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
     glVertex2i(1248,664);
     glVertex2i(914,784);
    glVertex2i(580,664);
    glVertex2i(506,664);
      glVertex2i(914,814);
     glVertex2i(1322,664);
      glEnd();

      glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2i(240, 540);
    glVertex2i(506,635);
    glVertex2i(768,540);
     glVertex2i(846,540);
     glVertex2i(506,664);
    glVertex2i(166, 540);

      glEnd();

       glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2i(241, 541);
    glVertex2i(507,637);
    glVertex2i(769,541);
     glVertex2i(845,541);
     glVertex2i(505,663);
    glVertex2i(165, 541);

      glEnd();

     glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
       glVertex2i(80, 508);
    glVertex2i(914,814);
    glVertex2i(1746, 508);
     glEnd();

     glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
       glVertex2i(81, 507);
    glVertex2i(913,814);
    glVertex2i(1745, 507);
     glEnd();

      glBegin(GL_LINES);
      glColor3ub (0, 0, 0);
      glVertex2i(1660, 97);
    glVertex2i(1660,484);
    glVertex2i(1661, 97);
    glVertex2i(1661,484);

     glVertex2i(167,484);
     glVertex2i(167, 97);
     glVertex2i(166,484);
     glVertex2i(166, 97);

    glEnd();

    glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
     glVertex2i(82, 484);
    glVertex2i(1748,484);
     glVertex2i(1748,496);
    glVertex2i(82, 496);
glEnd();

  glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
     glVertex2i(83, 483);
    glVertex2i(1747,483);
     glVertex2i(1747,495);
    glVertex2i(83, 495);

    glEnd();


  glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
    glVertex2i(62, 496);
    glVertex2i(1768,496);
     glVertex2i(1768,508);
    glVertex2i(62, 508);
  glEnd();

   glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
    glVertex2i(63, 495);
    glVertex2i(1767,495);
     glVertex2i(1767,507);
    glVertex2i(63, 507);
  glEnd();

   glBegin(GL_LINES);
      glColor3ub (0, 0, 0);
   glVertex2i(845,542);
    glVertex2i(925,508);

    glVertex2i(844,541);
    glVertex2i(924,509);

  glEnd();

  glBegin(GL_TRIANGLES);
      glColor3ub (190, 190, 190);
      glVertex2i(282, 556);
    glVertex2i(505,637);
    glVertex2i(728, 556);
     glEnd();

      glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
   glVertex2i(282, 556);
    glVertex2i(505,637);
    glVertex2i(728, 556);
  glEnd();

   glBegin(GL_TRIANGLES);
      glColor3ub (190, 190, 190);
      glVertex2i(620, 678);
    glVertex2i(914,786);
    glVertex2i(1209, 678);
     glEnd();

      glBegin(GL_LINE_LOOP);
       glColor3ub (0, 0, 0);
    glVertex2i(620, 678);
    glVertex2i(914,786);
    glVertex2i(1209, 678);
  glEnd();

   glBegin(GL_QUADS);
      glColor3ub (190, 190, 190);
      glVertex2i(266, 428);
    glVertex2i(266,176);
    glVertex2i(518, 176);
     glVertex2i(518, 428);
     glEnd();

     glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
      glVertex2i(266, 428);
    glVertex2i(266,176);
    glVertex2i(518, 176);
     glVertex2i(518, 428);
     glEnd();

     glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
      glVertex2i(274,421);
      glVertex2i(511, 421);
    glVertex2i(511, 184);
     glVertex2i(274, 184);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (0, 0, 0);
      glVertex2i(274,421);
    glVertex2i(511, 421);
    glVertex2i(518, 428);
     glVertex2i(266, 428);
     glEnd();

       glBegin(GL_QUADS);
      glColor3ub (0, 0, 0);
      glVertex2i(274,421);
   glVertex2i(274, 184);
       glVertex2i(266,176);
     glVertex2i(266, 428);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (0, 0, 0);
      glVertex2i(518, 176);
       glVertex2i(266,176);
        glVertex2i(274, 184);
    glVertex2i(511, 184);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (0, 0, 0);
      glVertex2i(511, 184);
       glVertex2i(511, 421);
    glVertex2i(518, 428);
     glVertex2i(518, 176);
     glEnd();

       glBegin(GL_QUADS);
      glColor3ub (50, 50, 50);
      glVertex2i(632, 134);
       glVertex2i(801, 134);
    glVertex2i(801, 431);
     glVertex2i(632, 431);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (150, 150, 150);
      glVertex2i(668, 384);
       glVertex2i(778, 384);
    glVertex2i(778, 370);
     glVertex2i(668, 370);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (150, 150, 150);
      glVertex2i(668, 320);
       glVertex2i(778, 320);
    glVertex2i(778, 306);
     glVertex2i(668, 306);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (150, 150, 150);
      glVertex2i(668, 258);
       glVertex2i(778, 258);
    glVertex2i(778, 244);
     glVertex2i(668, 244);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (150, 150, 150);
      glVertex2i(668, 194);
       glVertex2i(778, 194);
    glVertex2i(778, 180);
     glVertex2i(668, 180);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (180, 180, 180);
      glVertex2i(900, 106);
       glVertex2i(900, 430);
    glVertex2i(1576, 430);
     glVertex2i(1576, 106);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (120, 120, 120);
      glVertex2i(148, 122);
       glVertex2i(148, 484);
    glVertex2i(161, 484);
     glVertex2i(161, 116);
     glEnd();

      glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
      glVertex2i(148, 122);
       glVertex2i(148, 484);
    glVertex2i(161, 484);
     glVertex2i(161, 116);
     glEnd();

     glBegin(GL_QUADS);
      glColor3ub (120, 120, 120);
      glVertex2i(148, 122);
       glVertex2i(137, 117);
    glVertex2i(145, 107);
     glVertex2i(161, 116);
     glEnd();

      glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
       glVertex2i(148, 122);
       glVertex2i(137, 117);
    glVertex2i(145, 107);
     glVertex2i(161, 116);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (120, 120, 120);
      glVertex2i(1668, 117);
       glVertex2i(1668, 483);
    glVertex2i(1680, 483);
     glVertex2i(1680, 124);
     glEnd();

      glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
       glVertex2i(1668, 117);
       glVertex2i(1668, 483);
    glVertex2i(1680, 483);
     glVertex2i(1680, 124);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (120, 120, 120);
      glVertex2i(1668, 117);
       glVertex2i(1668, 483);
    glVertex2i(1680, 483);
     glVertex2i(1680, 124);
     glEnd();

      glBegin(GL_QUADS);
      glColor3ub (120, 120, 120);
       glVertex2i(1668, 117);
       glVertex2i(1684, 107);
    glVertex2i(1691, 118);
     glVertex2i(1680, 124);
     glEnd();

     glBegin(GL_LINE_LOOP);
      glColor3ub (0, 0, 0);
      glVertex2i(1668, 117);
       glVertex2i(1684, 107);
    glVertex2i(1691, 118);
     glVertex2i(1680, 124);
     glEnd();

      glBegin(GL_LINES);
      glColor3ub (0, 0, 0);
      glVertex2i(270, 264);
       glVertex2i(514, 264);

    glVertex2i(270, 265);
     glVertex2i(514, 265);

      glVertex2i(270, 266);
     glVertex2i(514, 266);

     glVertex2i(270, 267);
     glVertex2i(514, 267);

      glVertex2i(392, 424);
     glVertex2i(392, 184);

      glVertex2i(393, 424);
     glVertex2i(393, 184);

     glVertex2i(394, 424);
     glVertex2i(394, 184);


      glVertex2i(618, 458);
     glVertex2i(618, 96);

      glVertex2i(618, 458);
     glVertex2i(801, 458);

     glVertex2i(801, 108);
     glVertex2i(801, 458);

     glVertex2i(843, 97);
     glVertex2i(843, 483);

     glVertex2i(843, 107);
     glVertex2i(618, 107);

      glVertex2i(652, 262);
     glVertex2i(652, 292);

     glVertex2i(651, 262);
     glVertex2i(651, 292);

     glVertex2i(650, 262);
     glVertex2i(650, 292);

      glVertex2i(1576, 384);
     glVertex2i(900, 384);

      glVertex2i(1576, 338);
     glVertex2i(900, 338);

      glVertex2i(1576, 290);
     glVertex2i(900, 290);

      glVertex2i(1576, 244);
     glVertex2i(900, 244);

      glVertex2i(1576, 198);
     glVertex2i(900, 198);

      glVertex2i(1576, 152);
     glVertex2i(900, 152);

      glVertex2i(341, 576);
     glVertex2i(672, 576);

      glVertex2i(398, 597);
     glVertex2i(613, 597);

     glVertex2i(458, 619);
     glVertex2i(553, 619);

     glVertex2i(677, 699);
     glVertex2i(1150, 699);

     glVertex2i(738, 720);
     glVertex2i(1091, 720);

     glVertex2i(796, 742);
     glVertex2i(1033, 742);

     glVertex2i(854, 763);
     glVertex2i(975, 763);

     glVertex2i(106, 518);
     glVertex2i(106, 509);

     glVertex2i(128, 526);
     glVertex2i(128, 509);

     glVertex2i(149, 533);
     glVertex2i(149, 509);

     glVertex2i(170, 509);
     glVertex2i(170, 540);


     glVertex2i(191, 509);
     glVertex2i(191, 540);

      glVertex2i(212, 509);
     glVertex2i(212, 540);

      glVertex2i(234, 509);
     glVertex2i(234, 540);

      glVertex2i(255, 509);
     glVertex2i(255, 546);

      glVertex2i(276, 509);
     glVertex2i(276, 554);

      glVertex2i(297, 509);
     glVertex2i(297, 557);

     glVertex2i(319, 509);
     glVertex2i(319, 557);

     glVertex2i(340, 509);
     glVertex2i(340, 557);

     glVertex2i(360, 509);
     glVertex2i(360, 557);

     glVertex2i(382, 509);
     glVertex2i(382, 557);

     glVertex2i(402, 509);
     glVertex2i(402, 557);

     glVertex2i(424, 509);
     glVertex2i(424, 557);

     glVertex2i(445, 509);
     glVertex2i(445, 557);

     glVertex2i(297, 509);
     glVertex2i(297, 557);

     glVertex2i(466, 509);
     glVertex2i(466, 557);

     glVertex2i(487, 509);
     glVertex2i(487, 557);

     glVertex2i(508, 509);
     glVertex2i(508, 557);

     glVertex2i(530, 509);
     glVertex2i(530, 557);

     glVertex2i(551, 509);
     glVertex2i(551, 557);

     glVertex2i(572, 509);
     glVertex2i(572, 557);

     glVertex2i(593, 509);
     glVertex2i(593, 557);

     glVertex2i(614, 509);
     glVertex2i(614, 557);

     glVertex2i(635, 509);
     glVertex2i(635, 557);

     glVertex2i(656, 509);
     glVertex2i(656, 557);

     glVertex2i(677, 509);
     glVertex2i(677, 557);

     glVertex2i(697, 509);
     glVertex2i(697, 557);

    glVertex2i(719, 509);
    glVertex2i(719, 557);

     glVertex2i(741, 509);
     glVertex2i(741, 551);

     glVertex2i(762, 509);
     glVertex2i(762, 543);

     glVertex2i(783, 509);
     glVertex2i(783, 541);

     glVertex2i(804, 509);
     glVertex2i(804, 541);

     glVertex2i(826, 509);
     glVertex2i(826, 541);

     glVertex2i(783, 509);
     glVertex2i(783, 541);

     glVertex2i(530, 654);
     glVertex2i(530, 664);

     glVertex2i(551, 647);
     glVertex2i(551, 664);

      glVertex2i(572, 638);
     glVertex2i(572, 664);

      glVertex2i(593, 631);
     glVertex2i(593, 669);

      glVertex2i(614, 623);
     glVertex2i(614, 676);

      glVertex2i(636, 616);
     glVertex2i(636, 678);

      glVertex2i(375, 347);
     glVertex2i(289, 347);

      glVertex2i(375, 347);
     glVertex2i(360, 331);

     glVertex2i(375, 347);
     glVertex2i(360, 362);

     glVertex2i(288, 221);
     glVertex2i(376, 221);

     glVertex2i(360, 206);
     glVertex2i(376, 221);

     glVertex2i(360, 238);
     glVertex2i(376, 221);
     glEnd();




glFlush ();
}

void myInit (void)
{
glClearColor(255, 255, 255, 0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1820.0, 0.0, 930.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1820, 930);
glutInitWindowPosition (0, 0);
glutCreateWindow ("BONUS TASK");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}



