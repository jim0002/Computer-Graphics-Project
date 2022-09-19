#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

//----dayRiver----
void dayRiver(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(214, 234, 248);
    glVertex2f(-1.0f, -0.3f); //down left
        glColor3ub(36, 113, 163);
	glVertex2f(-1.0f, 0.2f); //top left
        glColor3ub(36, 113, 163);
	glVertex2f(1.0f, 0.2f); //top right
        glColor3ub(214, 234, 248);
	glVertex2f(1.0f, -0.08f); //down right

	glEnd();
}

//------nightRiver---
void nightRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);
    glColor3ub(133, 193, 233); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}


void rainyRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(153, 163, 164); //color mixing
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

void eveningRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(191, 201, 202);

    glVertex2f(-1.0f, -0.4f);
        glColor3ub(93, 109, 126); //color mixing
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(133, 146, 158); //color mixing
	glVertex2f(1.0f, 0.2f);
        glColor3ub(214, 234, 248); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

void daySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(84, 153, 199); //up left corner
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(127, 179, 213); //up right corner
	glVertex2f(1.1f, 1.0f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}

void eveningSky(){
    //GL_QUADS
    glBegin(GL_QUADS);
    glColor4f(0.8f, 0.7f, 0.5f, 1.0f);
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(235, 222, 240); //color mixing
	glVertex2f(1.1f, 1.0f);
        glColor3ub(250, 215, 160); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(215, 189, 226); //color mixing
	glVertex2f(-1.1f, -0.4f);
	glEnd();
}

void rainySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
    glColor3ub(242, 243, 244);
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(178, 186, 187); //color mixing
	glVertex2f(1.1f, 1.0f);
        glColor3ub(113, 125, 126); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(97, 106, 107); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}

void dayBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(244, 236, 252);
    glVertex2f(-1.0f, -0.3f); //top left
        glColor3ub(214, 234, 248);
    glVertex2f(1.0f, -0.08f); //top right
        glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void nightBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(234, 237, 237);
    glVertex2f(-1.0f, -0.4f); //top left
        glColor3ub(234, 237, 237);
    glVertex2f(1.0f, -0.1f); //top right
        glColor3ub(171, 178, 185);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(171, 178, 185);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void eveningBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(213, 219, 219);
    glVertex2f(-1.0f, -0.4f); //top left
        glColor3ub(213, 219, 219);
    glVertex2f(1.0f, -0.15f); //top right
        glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

GLfloat positionCloud1 = 0.4f;
GLfloat speed = 0.009f; //declared globally for every movable object... ... ...SPEED... ... ...!!! !!! !!!

void updateCloud1(int value) {

    if(positionCloud1 <-1.0)
        positionCloud1 = 1.0f;

    positionCloud1 -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, updateCloud1, 0);
}
void cloud1(){

    glPushMatrix();
    glTranslatef(-positionCloud1,0.0f,0.0f);


    //circle-1
	int jeight;
	GLfloat p8=.34f; GLfloat q8=.8f; GLfloat radius8 =.08f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p8, q8); // center of circle
		for(jeight = 0; jeight <= triangleAmount8; jeight++) {
			glVertex2f(
		            p8 + (radius8 * cos(jeight *  twicePi8 / triangleAmount8)),
			    q8 + (radius8 * sin(jeight * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	//circle-2
	int jnine;

	GLfloat p9=.41f; GLfloat q9=.87f; GLfloat radius9 =.07f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p9, q9); // center of circle
		for(jnine = 0; jnine <= triangleAmount9; jnine++) {
			glVertex2f(
		            p9 + (radius9 * cos(jnine *  twicePi9 / triangleAmount9)),
			    q9 + (radius9 * sin(jnine * twicePi9 / triangleAmount9))
			);
		}
	glEnd();

	//circle-3
	int jten;

	GLfloat p10=.30f; GLfloat q10=.87f; GLfloat radius10 =.08f;
	int triangleAmount10 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p10, q10); // center of circle
		for(jten = 0; jten <= triangleAmount10; jten++) {
			glVertex2f(
		            p10 + (radius10 * cos(jten *  twicePi10 / triangleAmount10)),
			    q10 + (radius10* sin(jten * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

	//circle-4
	int jeleven;

	GLfloat p11=.45f; GLfloat q11=.8f; GLfloat radius11 =.08f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p11, q11); // center of circle
		for(jeleven = 0; jeleven <= triangleAmount11; jeleven++) {
			glVertex2f(
		            p11 + (radius11 * cos(jeleven *  twicePi11 / triangleAmount11)),
			    q11 + (radius11* sin(jeleven * twicePi11 / triangleAmount11))
			);
		}
	glEnd();

	glPopMatrix();

	glFlush();
}


GLfloat positionCloud2 = 0.5f;
//GLfloat speed = 0.1f;

void updateCloud2(int value) {

    if(positionCloud2 <-1.5)
        positionCloud2 = 1.0f;

    positionCloud2 -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, updateCloud2, 0);
}

void cloud2(){

    glPushMatrix();
    glTranslatef(-positionCloud2, 0.0f, 0.0f);

    //circle-1
	int j;

	GLfloat p=-.5f; GLfloat q=.77f; GLfloat radius1 =.09f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p, q); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            p + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    q + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	//circle-2
	int jj;

	GLfloat p2=-.4f; GLfloat q2=.77f; GLfloat radius2 =.09f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p2, q2); // center of circle
		for(jj = 0; jj <= triangleAmount1;jj++) {
			glVertex2f(
		            p2 + (radius2 * cos(jj *  twicePi2 / triangleAmount2)),
			    q2 + (radius2 * sin(jj * twicePi2 / triangleAmount2))
			);
		}
	glEnd();




	//circle-3
	int jjj;

	GLfloat p3=-.3f; GLfloat q3=.77f; GLfloat radius3 =.09f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p3, q3); // center of circle
		for(jjj = 0; jjj <= triangleAmount1;jjj++) {
			glVertex2f(
		            p3 + (radius3 * cos(jjj *  twicePi3 / triangleAmount3)),
			    q3 + (radius3 * sin(jjj * twicePi3 / triangleAmount3))
			);
		}
	glEnd();



	//circle-4
	int jfour;

	GLfloat p4=-.2f; GLfloat q4=.77f; GLfloat radius4 =.09f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p4, q4); // center of circle
		for(jfour = 0; jfour <= triangleAmount4;jfour++) {
			glVertex2f(
		            p4 + (radius4 * cos(jfour *  twicePi4 / triangleAmount4)),
			    q4 + (radius4 * sin(jfour * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	//circle-5
	int jfive;

	GLfloat p5=-.25f; GLfloat q5=.82f; GLfloat radius5 =.09f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p5, q5); // center of circle
		for(jfive = 0; jfive <= triangleAmount5; jfive++) {
			glVertex2f(
		            p5 + (radius5 * cos(jfive *  twicePi5 / triangleAmount5)),
			    q5 + (radius5 * sin(jfive * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	//circle-6
	int jsix;

	GLfloat p6=-.35f; GLfloat q6=.86f; GLfloat radius6 =.09f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p6, q6); // center of circle
		for(jsix = 0; jsix <= triangleAmount6; jsix++) {
			glVertex2f(
		            p6 + (radius6 * cos(jsix *  twicePi6 / triangleAmount6)),
			    q6 + (radius6 * sin(jsix * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	//circle-7
	int jsvn;

	GLfloat p7=-.45f; GLfloat q7=.82f; GLfloat radius7 =.09f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(253, 254, 254);
		glVertex2f(p7, q7); // center of circle
		for(jsvn = 0; jsvn <= triangleAmount7; jsvn++) {
			glVertex2f(
		            p7 + (radius6 * cos(jsvn *  twicePi7 / triangleAmount7)),
			    q7 + (radius6 * sin(jsvn * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	glPopMatrix();

	glFlush();
}

void fornt(){
	//GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(238 ,238, 209);

	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
        glColor3ub(215, 219, 221);
	glVertex2f(1.0f, -1.0f);

	glEnd();

}


GLfloat position = 0.0f;
//GLfloat speed = 0.009f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void boat1(){

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(184,134,11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.1f,  0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();
glPopMatrix();



   glFlush();

}

GLfloat position1 = 0.0f;
//GLfloat speed = 0.1f;

void update1(int value) {

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void boat2(){
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.2f, 0.05f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.3f, 0.35f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.15f, 0.15f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	glEnd();

	glPopMatrix();



   glFlush();

}
void Bigtree(){

    glBegin(GL_QUADS);
	glColor3ub(139, 71, 38);

	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-1.0f, -0.8f);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-0.9f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, -0.3f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, 0.1f);
	glVertex2f(-0.925f, 0.1f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.925f, 0.0f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.6f, 0.8f);
	glVertex2f(-0.925f, 0.0f);
	glVertex2f(-0.925f, 0.3f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-0.8f, 0.9f);
	glVertex2f(-0.95f, 0.3f);
	glVertex2f(-0.925f, 0.1f);

	glEnd();


    glBegin(GL_TRIANGLES);
	glColor3ub(46, 139, 87);

	glVertex2f(-1.0f, 0.9f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.925f, 0.1f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(46, 139, 87);

	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(-0.925f, 0.3f);
	glVertex2f(-0.925f, 0.0f);

	glEnd();
}

GLfloat positionBellon = 0.0f;
void updateBellon(int value) {

    if(positionBellon >1.0)
        positionBellon = -1.0f;

    positionBellon += speed;

	glutPostRedisplay();


	glutTimerFunc(300, updateBellon, 0);
}


void hotBellon(){
    glPushMatrix();
     glTranslatef(positionBellon,0.0f, 0.0f);

glColor3ub(205, 92 ,92);
	int j;
	GLfloat x=-0.3f; GLfloat y=0.7f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255 ,255 ,0);

	glVertex2f(-0.35f,  0.35f);
	glVertex2f(-0.3f, 0.425f);
	glVertex2f(-0.25f, 0.35f);

	glEnd();

			//GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(139, 69 ,19);

	glVertex2f(-0.35f, 0.3f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.25f, 0.3f);

	glEnd();

	    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(-0.4f,  0.675f);
	glVertex2f(-0.2f, 0.675f);
	glVertex2f(-0.3f, 0.5f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.4f, 0.7f);
	glVertex2f(-0.35f, 0.3f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(-0.25f, 0.3f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(-0.3f, 0.7f);
	glVertex2f(-0.3f, 0.3f);

	glEnd();

	glPopMatrix();



   glFlush();


}

//plane
GLfloat position2 = -0.7f;
GLfloat speedn = 0.015f;

void update2(int value){

    if(position2 >1.4)
        position2 = -1.0f;

    position2 += speedn;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void plane(){
    glPushMatrix();
   glTranslatef(position2,0.0f, 0.0f);

    //main body
    glBegin(GL_POLYGON);
            glColor3ub(255, 212, 128);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
            glColor3ub(255, 187, 51);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
	glEnd();

    //Back stand
    glBegin(GL_POLYGON);
            glColor3ub(230, 138, 0);
        glVertex2f(-0.13f, 0.68f);
            glColor3ub(255, 194, 102);
        glVertex2f(-0.045f, 0.680f);
        glVertex2f(-0.04f, 0.67f);
        glVertex2f(-0.045f, 0.66f);
        glVertex2f(-0.13f, 0.66f);
        glVertex2f(-0.135f, 0.67f);
	glEnd();

	//back rudder
    glBegin(GL_POLYGON);
            glColor3ub(255, 133, 102);
        glVertex2f(-0.12f, 0.83f);
        glVertex2f(-0.1f, 0.828f);
        glVertex2f(-0.096f, 0.825f);
        glVertex2f(-0.086f, 0.820f);
        glVertex2f(-0.074f, 0.810f);
        glVertex2f(-0.045f, 0.74f);
        glVertex2f(-0.043f, 0.720f);
        glVertex2f(0.01f, 0.72f);
            glColor3ub(255, 184, 77);
        glVertex2f(-0.085f, 0.693f);
	glEnd();

	//right wing
    glBegin(GL_QUADS);
            glColor3ub(255, 204, 153);
        glVertex2f(0.05f, 0.55f);
        glVertex2f(0.0f, 0.55f);
            glColor3ub(255, 166, 77);
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.2f, 0.62f);
	glEnd();

    //left wing
    glBegin(GL_QUADS);
            glColor3ub(255, 166, 77);
        glVertex2f(0.2f, 0.72f);
        glVertex2f(0.1f, 0.72f);
            glColor3ub(255, 204, 153);
        glVertex2f(0.0f, 0.78f);
        glVertex2f(0.08f, 0.78f);
	glEnd();

	//door
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(-0.01f, 0.68f);
        glVertex2f(0.0f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.0f, 0.64f);
        glVertex2f(-0.01f, 0.64f);
	glEnd();

    //side windows --- from LEFT_TO_RIGHT
    //1
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.03f, 0.68f);
        glVertex2f(0.02f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.02f, 0.66f);
        glVertex2f(0.03f, 0.66f);
	glEnd();
	//2
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.05f, 0.68f);
        glVertex2f(0.04f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.04f, 0.66f);
        glVertex2f(0.05f, 0.66f);
	glEnd();
	//3
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.07f, 0.68f);
        glVertex2f(0.06f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.06f, 0.66f);
        glVertex2f(0.07f, 0.66f);
	glEnd();
	//4
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.09f, 0.68f);
        glVertex2f(0.08f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.08f, 0.66f);
        glVertex2f(0.09f, 0.66f);
	glEnd();
	//5
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.11f, 0.68f);
        glVertex2f(0.10f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.10f, 0.66f);
        glVertex2f(0.11f, 0.66f);
	glEnd();
	//6
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.13f, 0.68f);
        glVertex2f(0.12f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.12f, 0.66f);
        glVertex2f(0.13f, 0.66f);
	glEnd();
	//7
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.15f, 0.68f);
        glVertex2f(0.14f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.14f, 0.66f);
        glVertex2f(0.15f, 0.66f);
	glEnd();
	//8
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.17f, 0.68f);
        glVertex2f(0.16f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.16f, 0.66f);
        glVertex2f(0.17f, 0.66f);
	glEnd();
	//9
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.19f, 0.68f);
        glVertex2f(0.18f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.18f, 0.66f);
        glVertex2f(0.19f, 0.66f);
	glEnd();
	//10
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.21f, 0.68f);
        glVertex2f(0.20f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.20f, 0.66f);
        glVertex2f(0.21f, 0.66f);
	glEnd();
	//11
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.23f, 0.68f);
        glVertex2f(0.22f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.22f, 0.66f);
        glVertex2f(0.23f, 0.66f);
	glEnd();
	//12
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.25f, 0.68f);
        glVertex2f(0.24f, 0.68f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.24f, 0.66f);
        glVertex2f(0.25f, 0.66f);
	glEnd();


	//front windows
    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.34f, 0.68f);
        glVertex2f(0.33f, 0.67f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.31f, 0.694f);
        glVertex2f(0.32f, 0.705f);
	glEnd();

    glBegin(GL_QUADS);
            glColor3ub(173, 173, 133);
        glVertex2f(0.327f, 0.670f);
        glVertex2f(0.31f, 0.662f);
            glColor3ub(194, 194, 163);
        glVertex2f(0.295f, 0.69f);
        glVertex2f(0.309f, 0.693f);
	glEnd();


    glPopMatrix();
    glFlush();
}



void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void chair(){

    //Chair Umbrella
    glBegin(GL_TRIANGLES);
        glColor3ub(188 ,143 ,143);
	glVertex2f(1.0f,  -0.2f);
	glVertex2f(0.4f, -0.2);
	glVertex2f(0.7f, 0.1f);
	glEnd();

    //Chair Umbrella Stand
    glBegin(GL_QUADS);
        glColor3ub(139, 69, 19);
	glVertex2f(0.715f, -0.7f);
	glVertex2f(0.685f, -0.7f);
	glVertex2f(0.685f, -0.2f);
	glVertex2f(0.715f, -0.2f);
	glEnd();


	//----------------chair------------
	//sit
    glBegin(GL_QUADS);
        glColor3ub(205 ,186 ,150);
	glVertex2f(0.65f, -0.5f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	//sit left label
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.58);
	glEnd();
	//sit back label
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.50f);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.55f);
	glEnd();
	//chair relaxer
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.65f, -0.53f);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.63f, -0.48);
    glVertex2f(0.68f, -0.44);
	glEnd();

    //chair legs - left front
     glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.35f, -0.58);
	glVertex2f(0.37f, -0.58f);
	glVertex2f(0.37f, -0.65f);
	glVertex2f(0.35f, -0.65);
	glEnd();
	//chair legs - right front
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.4f, -0.58);
	glVertex2f(0.42f, -0.58f);
	glVertex2f(0.42f, -0.62f);
	glVertex2f(0.4f, -0.62);
	glEnd();
    //chair legs - right back
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.645f, -0.52f);
	glVertex2f(0.645f, -0.6f);
	glVertex2f(0.625f, -0.6f);
	glVertex2f(0.625f, -0.52);
	glEnd();
    //chair legs - left back
    glBegin(GL_QUADS);
        glColor3ub(118, 215, 196);
	glVertex2f(0.6f, -0.58f);
	glVertex2f(0.6f, -0.65f);
	glVertex2f(0.58f, -0.65f);
	glVertex2f(0.58f, -0.58);
	glEnd();

}

GLfloat positionBird = 0.0f;

void updateBird(int value) {

    if(positionBird >1.0)
        positionBird = -1.0f;

    positionBird += speed;

	glutPostRedisplay();


	glutTimerFunc(100, updateBird, 0);
}

void bird1(){
//bird-1
    glPushMatrix();
     glTranslatef(positionBird,0.0f, 0.0f);
    //bird left wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.37f, 0.42f);
        glVertex2f(0.32f, 0.44f);
        glVertex2f(0.37f, 0.4f);
	glEnd();

    //bird leaps
	glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84); //green
        glVertex2f(0.45f, 0.41f);
        glVertex2f(0.45f, 0.43f);
        glVertex2f(0.47f, 0.41f);
	glEnd();

    //bird legs
	glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.37f, 0.36f);
        glVertex2f(0.39f, 0.37f);
	glEnd();
    glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.39f, 0.35f);
        glVertex2f(0.41f, 0.37f);
	glEnd();


	//circle-1 --- bird body
	int i;
	GLfloat x=.4f; GLfloat y=.4f; GLfloat radius =.04f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(213, 244, 13); //yellow
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




    //circle-2 --- bird head
    int i1;
	GLfloat x1=.44f; GLfloat y1=.42f; GLfloat radius1 =.02f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18); //orange
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



    //circle-3 --- bird eye
    int i11;
	GLfloat x11=.45f; GLfloat y11=.42f; GLfloat radius11 =.005f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(39, 55, 70); //black
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11 <= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();

    //bird right wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.35f, 0.45f);
        glVertex2f(0.4f, 0.4f);
	glEnd();

	glPopMatrix();

	glFlush();
}


GLfloat positionBird2 = 0.0f;

void updateBird2(int value) {

    if(positionBird2 >1.0)
        positionBird2 = -1.0f;

    positionBird2 += speed;

	glutPostRedisplay();


	glutTimerFunc(100, updateBird2, 0);
}
void bird2(){
//bird-2

    glPushMatrix();
    glTranslatef(positionBird2,0.0f, 0.0f);

    //bird left wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.57f, 0.62f);
        glVertex2f(0.52f, 0.63f);
        glVertex2f(0.57f, 0.6f);
	glEnd();

    //bird leaps
	glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84); //green
        glVertex2f(0.65f, 0.61f);
        glVertex2f(0.65f, 0.63f);
        glVertex2f(0.67f, 0.61f);
	glEnd();

    //bird legs
	glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.57f, 0.56f);
        glVertex2f(0.59f, 0.57f);
	glEnd();
    glBegin(GL_LINES);
        glColor3ub(44, 62, 80); //black
        glVertex2f(0.59f, 0.55f);
        glVertex2f(0.61f, 0.57f);
	glEnd();


	//circle-1 --- bird body
	int i2;
	GLfloat x2=.6f; GLfloat y2=.6f; GLfloat radius2 =.04f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(213, 244, 13); //yellow
		glVertex2f(x2, y2); // center of circle
		for(i2 = 0; i2 <= triangleAmount2;i2++) {
			glVertex2f(
		            x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();




    //circle-2 --- bird head
    int i12;
	GLfloat x12=.64f; GLfloat y12=.62f; GLfloat radius12 =.02f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(243, 156, 18); //orange
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12 <= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



    //circle-3 --- bird eye
    int i112;
	GLfloat x112=.65f; GLfloat y112=.62f; GLfloat radius112 =.005f;
	int triangleAmount112 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi112 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(39, 55, 70); //black
		glVertex2f(x112, y112); // center of circle
		for(i112 = 0; i112 <= triangleAmount112;i112++) {
			glVertex2f(
		            x112 + (radius112 * cos(i112 *  twicePi112 / triangleAmount112)),
			    y112 + (radius112 * sin(i112 * twicePi112 / triangleAmount112))
			);
		}
	glEnd();

    //bird right wing
	glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113); //light orange
        glVertex2f(0.6f, 0.62f);
        glVertex2f(0.55f, 0.65f);
        glVertex2f(0.6f, 0.6f);
	    glEnd();


		glPopMatrix();
        glFlush();
}

void star(){
//star-1
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.7f);
        glVertex2f(0.32f, 0.7f);
        glVertex2f(0.31f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.32f, 0.72f);
        glVertex2f(0.31f, 0.69f);
	glEnd();

    //star-2
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.7f);
        glVertex2f(0.52f, 0.7f);
        glVertex2f(0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.5f, 0.72f);
        glVertex2f(0.52f, 0.72f);
        glVertex2f(0.51f, 0.69f);
	glEnd();

    //star-3
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.8f);
        glVertex2f(0.42f, 0.8f);
        glVertex2f(0.41f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.82f);
        glVertex2f(0.42f, 0.82f);
        glVertex2f(0.41f, 0.79f);
	glEnd();

    //star-4
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.4f);
        glVertex2f(0.42f, 0.4f);
        glVertex2f(0.41f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.42f, 0.42f);
        glVertex2f(0.41f, 0.39f);
	glEnd();

    //star-5
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.4f);
        glVertex2f(0.82f, 0.4f);
        glVertex2f(0.81f, 0.435f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.8f, 0.42f);
        glVertex2f(0.82f, 0.42f);
        glVertex2f(0.81f, 0.39f);
	glEnd();

    //star-6
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.6f);
        glVertex2f(0.92f, 0.6f);
        glVertex2f(0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.9f, 0.62f);
        glVertex2f(0.92f, 0.62f);
        glVertex2f(0.91f, 0.59f);
	glEnd();

    //star-7
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.6f);
        glVertex2f(-0.92f, 0.6f);
        glVertex2f(-0.91f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.62f);
        glVertex2f(-0.92f, 0.62f);
        glVertex2f(-0.91f, 0.59f);
	glEnd();

    //star-8
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.7f);
        glVertex2f(-0.52f, 0.7f);
        glVertex2f(-0.51f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.5f, 0.72f);
        glVertex2f(-0.52f, 0.72f);
        glVertex2f(-0.51f, 0.69f);
	glEnd();

    //star-9
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.7f);
        glVertex2f(-0.72f, 0.7f);
        glVertex2f(-0.71f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.7f, 0.72f);
        glVertex2f(-0.72f, 0.72f);
        glVertex2f(-0.71f, 0.69f);
	glEnd();

    //star-10
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.5f);
        glVertex2f(-0.82f, 0.5f);
        glVertex2f(-0.81f, 0.535f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.8f, 0.52f);
        glVertex2f(-0.82f, 0.52f);
        glVertex2f(-0.81f, 0.49f);
	glEnd();

    //star-11
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.6f);
        glVertex2f(-0.22f, 0.6f);
        glVertex2f(-0.21f, 0.635f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.2f, 0.62f);
        glVertex2f(-0.22f, 0.62f);
        glVertex2f(-0.21f, 0.59f);
	glEnd();

    //star-12
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(-0.02f, 0.7f);
        glVertex2f(-0.01f, 0.735f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(-0.02f, 0.72f);
        glVertex2f(-0.01f, 0.69f);
	glEnd();

    //star-13
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.9f);
        glVertex2f(0.07f, 0.9f);
        glVertex2f(0.06f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.05f, 0.92f);
        glVertex2f(0.07f, 0.92f);
        glVertex2f(0.06f, 0.89f);
	glEnd();

    //star-14
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.9f);
        glVertex2f(-0.92f, 0.9f);
        glVertex2f(-0.91f, 0.935f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(-0.9f, 0.92f);
        glVertex2f(-0.92f, 0.92f);
        glVertex2f(-0.91f, 0.89f);
	glEnd();

    //star-15
	glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.8f);
        glVertex2f(0.72f, 0.8f);
        glVertex2f(0.71f, 0.835f);
	glEnd();
    glBegin(GL_TRIANGLES);
        glColor3ub(36, 113, 163);
        glVertex2f(0.7f, 0.82f);
        glVertex2f(0.72f, 0.82f);
        glVertex2f(0.71f, 0.79f);
	glEnd();


}


GLfloat positionRain = 0.0f;
GLfloat speed1 = 0.6f;

void updateRain(int value) {

    if(positionRain >1.0)
        positionRain = -1.0f;

    positionRain += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, updateRain, 0);
}

void displayRain(){

    glPushMatrix();
    glTranslatef(0.0f,-positionRain, 0.0f);

//line1
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 1.0f);
	glVertex2f(-1.0f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 1.0f);
	glVertex2f(-0.8f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 1.0f);
	glVertex2f(-0.6f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 1.0f);
	glVertex2f(-0.4f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 1.0f);
	glVertex2f(-0.2f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 1.0f);
	glVertex2f(0.0f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 1.0f);
	glVertex2f(0.2f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 1.0f);
	glVertex2f(0.4f, 0.8f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 1.0f);
	glVertex2f(0.6f, 0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 1.0f);
	glVertex2f(0.8f, 0.8f);

	//line2
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-1.0f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.7f);
	glVertex2f(-0.8f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.7f);
	glVertex2f(-0.6f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.7f);
	glVertex2f(-0.4f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.7f);
	glVertex2f(-0.2f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.7f);
	glVertex2f(0.0f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.7f);
	glVertex2f(0.2f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.7f);
	glVertex2f(0.4f, 0.5f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.6f, 0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.8f, 0.5f);


	//line3
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-1.0f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.8f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.6f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.4f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.2f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.4f);
	glVertex2f(0.0f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.2f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.4f);
	glVertex2f(0.4f, 0.2f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.6f, 0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.8f, 0.2f);


		//line4
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-1.0f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.8f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.6f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.4f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.2f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.2f,-0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.4f, -0.2f);

   glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, 0.0f);
	glVertex2f(0.6f, -0.2f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.8f, -0.2f);

		//line4
    glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.3f);
	glVertex2f(-1.0f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-0.8f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.3f);
	glVertex2f(-0.6f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.3f);
	glVertex2f(-0.4f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.3f);
	glVertex2f(-0.2f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.3f);
	glVertex2f(0.0f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.3f);
	glVertex2f(0.2f,-0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.3f);
	glVertex2f(0.4f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.6f, -0.5f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.3f);
	glVertex2f(0.8f, -0.5f);

    //line5
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.6f);
	glVertex2f(-1.0f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.6f);
	glVertex2f(-0.8f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.6f);
	glVertex2f(-0.6f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.6f);
	glVertex2f(-0.4f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.2f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.0f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.6f);
	glVertex2f(0.2f,-0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.6f);
	glVertex2f(0.4f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.6f);
	glVertex2f(0.6f, -0.8f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.6f);
	glVertex2f(0.8f, -0.8f);

	    //line6
	glBegin(GL_LINES);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.9f, -0.9f);
	glVertex2f(-1.0f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.7f, -0.9f);
	glVertex2f(-0.8f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.6f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.3f, -0.9f);
	glVertex2f(-0.4f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.1f, -0.9f);
	glVertex2f(-0.2f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, -0.9f);
	glVertex2f(0.0f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.2f,-1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.4f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.7f, -0.9f);
	glVertex2f(0.6f, -1.0f);

    glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.9f, -0.9f);
	glVertex2f(0.8f, -1.0f);
	glEnd();

    glPopMatrix();

    glFlush();
}

void daySound(){

PlaySound("bird-2.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void nightSound(){

PlaySound("night.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void rainSound(){

PlaySound("rain-07.wav",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);
}



//---------calling function-----------

void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //fornt();
    daySky();


    //sun
    glColor3ub(245, 176, 65);
	int j;
	GLfloat x=-0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(245, 249, 10);
		}
	glEnd();

    cloud1();
    cloud2();
    dayRiver();
    dayBeach();
    boat1();
    boat2();
    chair();
    plane();
    Bigtree();

	glFlush();  // Render now
}


void evening(){
	glClearColor(0.8f, 0.7f, 0.5f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //----front()--------------;
    eveningSky();
    eveningRiver();
    eveningBeach();
    boat1();
    boat2();



    glColor3ub(238 ,173,14);
	int j;
	GLfloat x=0.0f; GLfloat y=0.5f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(235, 152, 78);
		}
	glEnd();

	bird1();
	bird2();
	hotBellon();
	chair();
    Bigtree();

	glFlush();

}


void night() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);

    fornt();
    nightRiver();
    nightBeach();
    star();
    boat2();


    //------boat1-------------
    glBegin(GL_QUADS);
	glColor3ub(184,134,11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.1f,  0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();


    //----------------moon--------
    glColor3ub(255, 255 ,255);
	int j;
	GLfloat x=0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(215, 219, 221);
		}
	glEnd();

	//----------
    chair();
    Bigtree();

   glFlush();
}


void rain(){
     glClearColor(0.8f, 0.8f, 0.8f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
    //fornt();
    rainySky();
    cloud1();
    cloud2();
    rainyRiver();

    //------boat1-------------
    glBegin(GL_QUADS);
	glColor3ub(184,134,11);

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.1f, 0.2f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.1f,  0.2f);
	glVertex2f(0.2f, 0.04f);
	glVertex2f(0.1f, 0.04f);

	glEnd();

    //----------boat2------------

    glBegin(GL_QUADS);
	glColor3ub(178, 34, 34);

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.2f, 0.05f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139, 69 ,19);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.3f, 0.35f);

	glEnd();

    glBegin(GL_LINES);
	glColor3ub(139 ,69 ,19);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.15f, 0.15f);

	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(205,92,92);

	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	glEnd();

    Bigtree();


    displayRain();

    chair();
    glFlush();

}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
//----------------multiple view------------
    case 'd':
   glutDisplayFunc(day);
   daySound();
   glutPostRedisplay();

    break;
    case 'n':
   glutDisplayFunc(night);
   nightSound();
    glutPostRedisplay();
    break;

    case 'e':
   glutDisplayFunc(evening);
   daySound();
    glutPostRedisplay();
    break;

    case 'r':
   glutDisplayFunc(rain);
   rainSound();
    glutPostRedisplay();
    break;



//-----speed control----

    case 'a'://--------stop----------
    speed = 0.0f;
    speedn=speed;
    break;
    case 's'://--------start-------------
    speed = 0.01f;
    speedn = 0.015f;
    break;
    glutPostRedisplay();
	}

}




/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(900,600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50);

	glutCreateWindow("Day:d , Evening:e ,Night:n ,RainyDay:r ,Start:s ,Stop:a");

	glutDisplayFunc(day);
    init();
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, updateBellon, 0);
    glutTimerFunc(100, updateBird, 0);
    glutTimerFunc(100, updateBird2, 0);
    glutTimerFunc(100, updateCloud1, 0);
    glutTimerFunc(100, updateCloud2, 0);
    glutTimerFunc(100, updateRain, 0);


	glutMainLoop();
	return 0;

}
