#include<stdio.h>
#include<GL/glut.h>

#include<stdio.h>
#include<GL/glut.h>
void lineSegmentH();
void lineSegmentM();
GLint a = 10, b=30, x=1 , i =1;
GLfloat sc1 , sc2;

GLuint id;

void init( void )
{
id = glGenLists( x );
glNewList( id, GL_COMPILE );
lineSegmentH();
lineSegmentM();

glEndList();
x++;
}

void display(  ){
init();
glCallList(id);
glCallList(id);

//a+=30;
//b+=30;
return ;


printf("Dispalu");
}


void lineSegmentH(void)
{
    // H
printf("HM");
    //draw H

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(30.0,0.0,0.0);
    glPushMatrix();
//    glScalef(0.1,0.2,0);
    glLineWidth(8.0);
    glBegin(GL_LINES);
    glVertex2i(a,10);
    glVertex2i(a,30);
    glVertex2i(a+10,10);
    glVertex2i(a+10,30);
    glVertex2i(a,20);
    glVertex2i(a+10,20);
    glPopMatrix();

    glEnd();
    glFlush();

// Draw M
}
void lineSegmentM(void)
{


   glPushMatrix();
//glScalef(0.1,0.2,0);
    glTranslatef(30.0,0.0,0.0);
    glLineWidth(8.0);
    glBegin(GL_LINES);
    glVertex2i(b,10);
    glVertex2i(b,30);
    glVertex2i(b,30);
    glVertex2i(b+5,10);
    glVertex2i(b+5,10);
    glVertex2i(b+10,30);
    glVertex2i(b+10,10);
    glVertex2i(b+10,30);
   glPopMatrix();


    glEnd();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800,800);
    glutCreateWindow("HM ");
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 150.0);
for (i =1 ; i<6 ; i++){
        sc1= 1/i;
        sc2 = 1/(i+1);
    glutDisplayFunc(display);
    printf("Ahlan ana feloop");
}
   // glutDisplayFunc(lineSegment);
  //  printf("Hiiii");

    glutMainLoop();

    return 0;
}


/*
glBegin(GL_LINES);
glVertex2i(0,0);
glVertex2i(0,2);
glVertex2i(1,0);
glVertex2i(1,2);
glVertex2i(0,1);
glVertex2i(1,1);

glEnd();

*/
