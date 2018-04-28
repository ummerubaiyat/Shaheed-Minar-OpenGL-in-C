#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

int pk,x,y,r,a,b,c,p;

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
r=60;
x=0;
y=r;
    pk=1-r;

    while(x<=y){
        if(pk<0){
            pk=pk+(2*x)+1;
            x++;
        }
        else if(pk>=0){
            pk=pk+(2*x)+1-(2*y);
            x++;
            y--;
        }

glColor3f (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d(3*x,3*y);
glVertex2d(-3*x,-3*y);
glVertex2d(3*x,-3*y);
glVertex2d(3*-x,3*y);
glVertex2d(3*-y,3*x);
glVertex2d(3*y,3*-x);
glVertex2d(3*-y,3*-x);
glVertex2d(3*y,3*x);

glEnd();
}

//1st low
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (-700, -550);
glVertex2d (700, -550);
glVertex2d (700, -500);
glVertex2d (-700, -500);
glEnd();
//2nd low
glColor3ub (255, 0, 0);
glBegin(GL_POLYGON);
glVertex2d (-600, -550);
glVertex2d (600, -550);
glVertex2d (600, -450);
glVertex2d (-600, -450);
glEnd();
//mid left
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-150, -500);
glVertex2d (-120, -500);
glVertex2d (-120, 100);
glVertex2d (-150, 100);
glEnd();
//mid upper left
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-150, 100);
glVertex2d (-120, 100);
glVertex2d (50, 420);
glVertex2d (20, 420);
glEnd();
//mid exact
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-10, -500);
glVertex2d (-40, -500);
glVertex2d (-40, 100);
glVertex2d (-10, 100);
glEnd();
//mid upper exact
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-10, 100);
glVertex2d (-40, 100);
glVertex2d (110, 420);
glVertex2d (140, 420);
glEnd();
//mid right
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (100, -500);
glVertex2d (130, -500);
glVertex2d (130, 100);
glVertex2d (100, 100);
glEnd();
//mid upper right
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (100, 100);
glVertex2d (130, 100);
glVertex2d (250, 420);
glVertex2d (220, 420);
glEnd();
//mid upper only
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (20, 420);
glVertex2d (250, 420);
glVertex2d (265, 450);
glVertex2d (35, 450);
glEnd();
//left1st
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-280, -500);
glVertex2d (-310, -500);
glVertex2d (-310, 100);
glVertex2d (-280, 100);
glEnd();
//left1st2
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-430, -500);
glVertex2d (-460, -500);
glVertex2d (-460, 100);
glVertex2d (-430, 100);
glEnd();

//left1st up
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-280, 100);
glVertex2d (-460, 100);
glVertex2d (-460, 130);
glVertex2d (-280, 130);
glEnd();
//left2nd
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-530, -500);
glVertex2d (-550, -500);
glVertex2d (-550, 20);
glVertex2d (-530, 20);
glEnd();
//left2nd2
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-630, -500);
glVertex2d (-610, -500);
glVertex2d (-610, 20);
glVertex2d (-630, 20);
glEnd();

//left2nd up
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (-530, 20);
glVertex2d (-630, 20);
glVertex2d (-630, 50);
glVertex2d (-530, 50);
glEnd();
//right1st
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (280, -500);
glVertex2d (310, -500);
glVertex2d (310, 100);
glVertex2d (280, 100);
glEnd();
//right1st2
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (430, -500);
glVertex2d (460, -500);
glVertex2d (460, 100);
glVertex2d (430, 100);
glEnd();

//right1st up
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (280, 100);
glVertex2d (460, 100);
glVertex2d (460, 130);
glVertex2d (280, 130);
glEnd();


//right2nd
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (530, -500);
glVertex2d (550, -500);
glVertex2d (550, 20);
glVertex2d (530, 20);
glEnd();
//right2nd2
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (630, -500);
glVertex2d (610, -500);
glVertex2d (610, 20);
glVertex2d (630, 20);
glEnd();

//right2nd up
glColor3ub (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (530, 20);
glVertex2d (630, 20);
glVertex2d (630, 50);
glVertex2d (530, 50);
glEnd();
 glFlush ();
}

void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(-700,700,-700,700);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Umme Rubaiyat Chowdhury");
init ();
//scanf("%d",&r);

glutDisplayFunc(display);
glutMainLoop();

return 0; /* ISO C requires main to return int. */

}

