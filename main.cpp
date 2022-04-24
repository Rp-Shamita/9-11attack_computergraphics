#ifdef __MINGW32__
 #define APIENTRY __stdcall
 #define CALLBACK __stdcall
 #endif
 #include<GL/glut.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
/*
int i,flag=0,flagb=1,flags=0,flagt=0,flagp=0,flagw=1,flagx=0;
float a=0.0f,b=0.0f,c=0.0f,m=0.0f,n=0.0f,o=0.0f,p=0.0f,q=0.0f,r=0.0f,x=0.0f,y=0.0f,z=0.0f,a1=0.0,a2=0.0,a3=0.0;
float j;
int SCENE_ID;
void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}
void drawstring(char string[],float x1,float y1,float z1)
{
    int i,j;
	j=strlen(string);
	glRasterPos2f(x1,y1);
	for (i=0;i<j;i++)
	{
        glutBitmapCharacter(currentfont, string[i]);
	}
}

void screen1()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,0.7,0.7);
    char str4[]="-*-   SIMULATION OF 9/11 ATTACK   -*-";
    drawstring(str4,-0.35,0.5,0.0);
    glColor3f(0.2,0.8,0.5);
    char str5[]="BY  :";
    drawstring(str5,-0.0,0.4,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="R P SHAMITA     (4NM19CS145)";
    drawstring(str6,-0.25,0.3,0.0);
    char str7[]="RASHMI M   (4NM19CS155)";
    drawstring(str7,-0.25,0.2,0.0);
    glColor3f(0.2,0.8,0.5);
    char str8[]="UNDER THE GUIDANCE OF:";
    drawstring(str8,-0.25,0.0,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="Mr. PRADEEP KANCHAN";
    drawstring(str9,-0.2,-0.1,0.0);
    glColor3f(1.0,1.0,0.0);
    char str10[]="Associate Professor Gd-III";
    drawstring(str10,-0.2,-0.2,0.0);
    char str11[]="INSTRUCTIONS ";
    drawstring(str11,-0.1,-0.4,0.0);
    char str12[]="----------------";
    drawstring(str12,-0.1,-0.5,0.0);
    char str13[]=" * * *   PRESS     -N-     TO  START  * * *";
    drawstring(str13,-0.3,-0.6,0.0);
    glFlush();
}

void screen2()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    char str4[]=" 11/09/2001 ";
    drawstring(str4,-0.99,0.88,0.0);
    glColor3f(1.0,1.0,1.0);
    char str5[]="Location:";
    drawstring(str5,-0.98,0.78,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="World Trade Center, New York City, U.S";
    drawstring(str6,-0.98,0.71,0.0);
    glColor3f(0.2,0.8,0.5);
    char str7[]="The Pentagon, Arlington, Virginia, U.S";
    drawstring(str7,-0.98,0.65,0.0);
    glColor3f(0.2,0.8,0.5);
    char str8[]="Stonycreek Township, Pennsylvania, U.S";
    drawstring(str8,-0.98,0.59,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="What would soon be called the most disastrous event in the United States since pearl harbour occured on this fateful morning.";
    drawstring(str9,-0.98,0.50,0.0);
    /*char str11[]="At 9:59 AM the World Trade Center’s heavily damaged south tower collapsed, and the north tower fell 29 minutes later. \nClouds of smoke and debris quickly filled the streets of Lower Manhattan. \nOffice workers and residents ran in panic as they tried to outpace the billowing debris clouds.\nA number of other buildings adjacent to the twin towers suffered serious damage, and several subsequently fell. ";
    drawstring(str11,-0.3,-0.5,0.0);
    char str12[]="Casualties:";
    drawstring(str12,-0.35,-0.55,0.0);
    char str13[]=" Nearly 3,000 people had perished: some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died. Included in the total in New York City were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into the towers.";
    drawstring(str13,-0.9,-0.7,0.0);
    char str16[]="Casualties:";
    drawstring(str16,-0.99,-0.2,0.0);
    char str17[]="Nearly 3,000 people had perished:";
    drawstring(str17,-0.99,-0.3,0.0);
    char str18[]="some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died.";
    drawstring(str18,-0.99,-0.4,0.0);
    char str19[]="Included in the total were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into the towers.";
    drawstring(str19,-0.99,-0.5,0.0);

    glFlush();
}

void screen3()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    char str4[]=" The Attack: ";
    drawstring(str4,-0.99,0.88,0.0);
    glColor3f(0.2,0.8,0.5);
    char str5[]="Groups of attackers boarded four domestic aircraft at three East Coast airports, and soon after takeoff they disabled the crews.";
    drawstring(str5,-0.98,0.78,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="The hijackers then took control of the aircraft.";
    drawstring(str6,-0.98,0.71,0.0);
    glColor3f(0.2,0.8,0.5);
    char str7[]="At 8:46 AM the first plane, American Airlines flight 11,originated from Boston, was piloted into the north tower of the World Trade Center in NYC.";
    drawstring(str7,-0.98,0.65,0.0);
    glColor3f(0.2,0.8,0.5);
    char str8[]="The second plane, United Airlines flight 175, also from Boston, struck the south tower 17 minutes later.";
    drawstring(str8,-0.98,0.59,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="The third plane, American Airlines flight 77, taking off from Dulles Airport near Washington, D.C., struck the southwest side of the Pentagon .";
    drawstring(str9,-0.98,0.50,0.0);
    char str10[]="The fourth plane,United Airlines flight 93,crashed in the Pennsylvania countryside after its passengers attempted to overpower their assailants.";
    drawstring(str10,-0.98,0.45,0.0);


    char str15[]=" Damage: ";
    drawstring(str15,-0.99,0.35,0.0);
    char str11[]=" At 9:59 AM the World Trade Center’s heavily damaged south tower collapsed, and the north tower fell 29 minutes later. ";
    drawstring(str11,-0.99,0.25,0.0);
    char str12[]=" Clouds of smoke and debris quickly filled the streets of Lower Manhattan. ";
    drawstring(str12,-0.99,0.15,0.0);
    char str13[]=" Office workers and residents ran in panic as they tried to outpace the billowing debris clouds.";
    drawstring(str13,-0.99,-0.0,0.0);
    char str14[]=" A number of other buildings adjacent to the twin towers suffered serious damage, and several subsequently fell.  ";
    drawstring(str14,-0.99,-0.1,0.0);
/*
    char str16[]="Casualties:";
    drawstring(str16,-0.99,-0.2,0.0);
    char str17[]="Nearly 3,000 people had perished:";
    drawstring(str17,-0.99,-0.3,0.0);
    char str18[]="some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died.";
    drawstring(str18,-0.99,-0.4,0.0);
    char str19[]="Included in the total were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into the towers.";
    drawstring(str19,-0.99,-0.5,0.0);

    glFlush();
}


void keyPress(unsigned char key, int x, int y) {
	switch (key) {
	// Go to Previous Scene
	case 'b':
	case 'B':
		if (SCENE_ID == 0)
			break;
		SCENE_ID--;
		break;
	// Go to Next Scene
	case 'n':
	case 'N':
		if (SCENE_ID == 15)
			break;
		SCENE_ID++;
		break;
	// Quit Story
	case 'q':
	case 'Q':
		exit(0);
		break;
	default:
		break;
	}

	glutPostRedisplay();
}

void renderScene() {
	// Switch to know which scene is playing
	switch (SCENE_ID) {
	case 0:
		screen1();
		break;
	case 1:
		screen2();
		break;
    case 2:
        screen3();
        break;
	default:
		break;
	}

	// glFush sends it to the Display Buffer
	glFlush();
}


int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1500,1000);
    glutCreateWindow("9/11 attack");
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
    //glutReshapeFunc(reshape);
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(keyPress);
    glutMainLoop();
    return 0;
}
*/

#include <stdio.h>
#include <GL/glut.h>
#include<string.h>
GLfloat a = 0, b = 0, c = 0, d = 0, e = 0;
int i,flag=0,flagb=1,flags=0,flagt=0,flagp=0,flagw=1,flagx=0;
float j;
int SCENE_ID;
void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}
void drawstring(char string[],float x1,float y1,float z1)
{
    int i,j;
	j=strlen(string);
	glRasterPos2f(x1,y1);
	for (i=0;i<j;i++)
	{
        glutBitmapCharacter(currentfont, string[i]);
	}
}

void screen1()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,0.7,0.7);
    char str4[]="-*-   SIMULATION OF 9/11 ATTACK   -*-";
    drawstring(str4,-0.35,0.7,0.0);
    glColor3f(0.2,0.8,0.5);
    char str5[]="BY  :";
    drawstring(str5,-0.0,0.6,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="R P SHAMITA     (4NM19CS145)";
    drawstring(str6,-0.25,0.5,0.0);
    char str7[]="RASHMI M   (4NM19CS155)";
    drawstring(str7,-0.25,0.4,0.0);
    glColor3f(0.2,0.8,0.5);
    char str8[]="UNDER THE GUIDANCE OF:";
    drawstring(str8,-0.25,0.2,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="Mr. PRADEEP KANCHAN";
    drawstring(str9,-0.2,0.1,0.0);
    glColor3f(1.0,1.0,0.0);
    char str10[]="Assisstant Professor Gd-III";
    drawstring(str10,-0.2,0.0,0.0);
    char str11[]="Department of CSE";
    drawstring(str11,-0.2,-0.1,0.0);
    char str12[]="NMAMIT, Nitte";
    drawstring(str12,-0.2,-0.2,0.0);
    char str13[]="INSTRUCTIONS ";
    drawstring(str13,-0.1,-0.4,0.0);
    char str14[]="----------------";
    drawstring(str14,-0.1,-0.5,0.0);
    char str15[]=" * * *   PRESS     -N-     TO  START  * * *";
    drawstring(str15,-0.3,-0.6,0.0);
    glutSwapBuffers();

}

void screen2()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    char str4[]=" 11/09/2001 ";
    drawstring(str4,-0.99,0.88,0.0);
    glColor3f(0.2,0.8,0.5);
    char str5[]="Location:";
    drawstring(str5,-0.98,0.78,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="World Trade Center, New York City, U.S";
    drawstring(str6,-0.98,0.68,0.0);
    glColor3f(1.0,1.0,0.0);
    char str7[]="The Pentagon, Arlington, Virginia, U.S";
    drawstring(str7,-0.98,0.58,0.0);
    glColor3f(1.0,1.0,0.0);
    char str8[]="Stonycreek Township, Pennsylvania, U.S";
    drawstring(str8,-0.98,0.48,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="What would soon be called the most disastrous event in the United States since Pearl Harbor occurred on this fateful morning.";
    drawstring(str9,-0.98,0.38,0.0);
    /*char str11[]="At 9:59 AM the World Trade Center’s heavily damaged south tower collapsed, and the north tower fell 29 minutes later. \nClouds of smoke and debris quickly filled the streets of Lower Manhattan. \nOffice workers and residents ran in panic as they tried to outpace the billowing debris clouds.\nA number of other buildings adjacent to the twin towers suffered serious damage, and several subsequently fell. ";
    drawstring(str11,-0.3,-0.5,0.0);
    char str12[]="Casualties:";
    drawstring(str12,-0.35,-0.55,0.0);
    char str13[]=" Nearly 3,000 people had perished: some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died. Included in the total in New York City were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into the towers.";
    drawstring(str13,-0.9,-0.7,0.0);*/
    glColor3f(0.2,0.8,0.5);
    char str16[]="Casualties:";
    drawstring(str16,-0.99,-0.2,0.0);
    glColor3f(1.0,1.0,0.0);
    char str17[]="Nearly 3,000 people had perished:";
    drawstring(str17,-0.99,-0.3,0.0);
    char str18[]="some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died.";
    drawstring(str18,-0.99,-0.4,0.0);
    char str19[]="Included in the total were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into";
    drawstring(str19,-0.99,-0.5,0.0);
    char str20[]="the towers";
    drawstring(str20,-0.99,-0.6,0.0);
    glutSwapBuffers();

}

void screen3()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.2,0.8,0.5);
    char str4[]=" The Attack: ";
    drawstring(str4,-0.99,0.9,0.0);
    glColor3f(1.0,1.0,0.0);
    char str5[]="Groups of attackers boarded four domestic aircraft at three East Coast airports, and soon after takeoff they disabled the crews.";
    drawstring(str5,-0.98,0.8,0.0);
    glColor3f(1.0,1.0,0.0);
    char str6[]="The hijackers then took control of the aircraft.";
    drawstring(str6,-0.98,0.7,0.0);
    glColor3f(1.0,1.0,0.0);
    char str7[]="At 8:46 AM the first plane, American Airlines flight 11,originated from Boston, was piloted into the north tower of the World";
    drawstring(str7,-0.98,0.6,0.0);
    char str18[]="Trade Center in NYC.";
    drawstring(str18,-0.98,0.5,0.0);
    glColor3f(1.0,1.0,0.0);
    char str8[]="The second plane, United Airlines flight 175, also from Boston, struck the south tower 17 minutes later.";
    drawstring(str8,-0.98,0.4,0.0);
    glColor3f(1.0,1.0,0.0);
    char str9[]="The third plane, American Airlines flight 77, taking off from Dulles Airport near Washington, D.C., struck the southwest side of ";
    drawstring(str9,-0.98,0.30,0.0);
    char str16[]="the Pentagon .";
    drawstring(str16,-0.98,0.2,0.0);
    char str10[]="The fourth plane,United Airlines flight 93,crashed in the Pennsylvania countryside after its passengers attempted to overpower";
    drawstring(str10,-0.98,0.1,0.0);
    char str17[]="their assailants.";
    drawstring(str17,-0.98,0.0,0.0);

    glColor3f(0.2,0.8,0.5);
    char str15[]=" Damage: ";
    drawstring(str15,-0.99,-0.25,0.0);
    glColor3f(1.0,1.0,0.0);
    char str11[]=" At 9:59 AM the World Trade Center’s heavily damaged south tower collapsed, and the north tower fell 29 minutes later. ";
    drawstring(str11,-0.99,-0.35,0.0);
    char str12[]=" Clouds of smoke and debris quickly filled the streets of Lower Manhattan. ";
    drawstring(str12,-0.99,-0.45,0.0);
    char str13[]=" Office workers and residents ran in panic as they tried to outpace the billowing debris clouds.";
    drawstring(str13,-0.99,-0.55,0.0);
    char str14[]=" A number of other buildings adjacent to the twin towers suffered serious damage, and several subsequently fell.  ";
    drawstring(str14,-0.99,-0.65,0.0);
/*
    char str16[]="Casualties:";
    drawstring(str16,-0.99,-0.2,0.0);
    char str17[]="Nearly 3,000 people had perished:";
    drawstring(str17,-0.99,-0.3,0.0);
    char str18[]="some 2,750 people in New York, 184 at the Pentagon, and 40 in Pennsylvania; all 19 terrorists also died.";
    drawstring(str18,-0.99,-0.4,0.0);
    char str19[]="Included in the total were more than 400 police officers and firefighters, who had lost their lives after rushing to the scene and into the towers.";
    drawstring(str19,-0.99,-0.5,0.0);
*/
    glutSwapBuffers();

}

void update(int);
void keyPress(unsigned char key, int x, int y) {
	switch (key) {
	// Go to Previous Scene
	case 'b':
	case 'B':
		if (SCENE_ID == 0)
			break;
		SCENE_ID--;
		break;
	// Go to Next Scene
	case 'n':
	case 'N':
		if (SCENE_ID == 15)
			break;
		SCENE_ID++;
		if (SCENE_ID == 3)
			glutTimerFunc(0,update,0);
		break;
	// Quit Story
	case 'q':
	case 'Q':
		exit(0);
		break;
	default:
		break;
	}

	glutPostRedisplay();
}
void myinit()
{
    glClearColor(0.5f, 0.8f, 0.92f, 0.0f);
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void building();
void building1();
void outline();
void blast();
void road();
void display2();
void display3();
void build_outline();
void update(int value)
{   if(SCENE_ID==3){
    a += 20.0;      //Plane position takeoff on x axis
    b -= 10.0;      //Road Strip backward movement
    c += 15;        //take off at certain angle on y axis
    if (b <= -78.0) // moving of run way
        b = 0.0;
    glutPostRedisplay();
    glutTimerFunc(150, update, 0); //delay
}
}
void display()
{
    myinit();
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //rectangular body
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //upper triangle construction plane
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP); //outline of upper triangle plane
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //lower triangle
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //back wing
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //left side wing
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(a, c, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //right side wing
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();
    if (c > 360) //timer to jump to next display
    {
        display2();
        d += 20; //plane takeoff on x in 2nd display
    }
    if (a > 500.0) //window position during take off
    {
        a = 0.0;
        b = 0.0;
    }
    if (c > 750) //timer to jump to 3rd display
    {
        display3();
        e += 20;     //plane takeoff on x in 3rd display
        if (e > 250) //timer to call blast function
        {
            blast();
            e = 250;
        }
    }
    glutSwapBuffers();
}
void building()
{
    glColor3f(0.60, 0.40, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 80.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(400.0, 0.0);
    glEnd();
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2f(400.0, 0.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(450.0, 400.0);
    glVertex2f(450.0, 0.0);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(400.0, 400.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 480.0);
    glVertex2f(450.0, 400.0);
    glEnd();
    glColor3f(0.60, 0.40, 0.70);
    glBegin(GL_POLYGON); //upper triangle of building
    glVertex2f(400.0, 400.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 480.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); //seperation line of floors
    glVertex2f(350.0, 180);
    glVertex2f(400.0, 100);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(350.0, 280);
    glVertex2f(400.0, 200);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(350.0, 380);
    glVertex2f(400.0, 300);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(450.0, 100);
    glVertex2f(400.0, 100);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(450.0, 200);
    glVertex2f(400.0, 200);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(450.0, 300);
    glVertex2f(400.0, 300);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(350.0, 180);
    glEnd();

    //2nd

    glColor3f(0.60, 0.40, 0.70);
    glBegin(GL_POLYGON);
    glVertex2f(250.0, 80.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(300.0, 0.0);
    glEnd();
    glColor3f(0.75, 0.75, 0.75);
    glBegin(GL_POLYGON);
    glVertex2f(300.0, 0.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(350.0, 300.0);
    glVertex2f(350.0, 0.0);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0, 300.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 380.0);
    glVertex2f(350.0, 300.0);
    glEnd();
    glColor3f(0.60, 0.40, 0.70);
    glBegin(GL_POLYGON); //upper triangle of building
    glVertex2f(300.0, 300.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 380.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES); //seperation line of floors
    glVertex2f(250.0, 80);
    glVertex2f(300.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(250.0, 180);
    glVertex2f(300.0, 100);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(250.0, 280);
    glVertex2f(300.0, 200);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(350.0, 0.0);
    glVertex2f(300.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(250.0, 100);
    glVertex2f(300.0, 100);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(350.0, 200);
    glVertex2f(300.0, 200);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(250.0, 80);
    glEnd();

    build_outline();
}
void build_outline() //building out lines
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(350.0, 80.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(400.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(400.0, 0.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(450.0, 400.0);
    glVertex2f(450.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(400.0, 400.0);
    glVertex2f(350.0, 480.0);
    glVertex2f(400.0, 480.0);
    glVertex2f(450.0, 400.0);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(250.0, 80.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(300.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(300.0, 0.0);
    glVertex2f(300.0, 300.0);
    glVertex2f(350.0, 300.0);
    glVertex2f(350.0, 0.0);
    glEnd();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(300.0, 300.0);
    glVertex2f(250.0, 380.0);
    glVertex2f(300.0, 380.0);
    glVertex2f(350.0, 300.0);
    glEnd();
}
void blast(void) //blast polygon construction
{
    /*glPushMatrix();
    glTranslated(-10.0, -60.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(404.4, 320.0);
    glVertex2f(384.0, 285.0);
    glVertex2f(368.0, 344.5);
    glVertex2f(344.0, 355.0);
    glVertex2f(347.2, 414.5);
    glVertex2f(332.8, 442.5);
    glVertex2f(347.2, 477.5);
    glVertex2f(352.0, 530.0);
    glVertex2f(379.2, 519.5);
    glVertex2f(396.8, 565.0);
    glVertex2f(416.0, 530.0);
    glVertex2f(440.0, 547.5);
    glVertex2f(452.8, 512.5);
    glVertex2f(472.0, 512.5);
    glVertex2f(475.2, 470.5);
    glVertex2f(488.0, 442.5);
    glVertex2f(488.0, 404.0);
    glVertex2f(470.0, 372.5);
    glVertex2f(475.2, 337.5);
    glVertex2f(464.0, 306.0);
    glVertex2f(444.8, 320.0);
    glVertex2f(425.6, 285.0);
    glVertex2f(404.8, 320.0);
    glEnd();
    glPopMatrix();*/
}
void road()
{
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //black road
    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 100.0);
    glVertex2f(500.0, 100.0);
    glVertex2f(500.0, 0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //white strips on road
    glVertex2f(0.0,20.0);
    glVertex2f(4.0, 30.0);
    glVertex2f(29.0, 30.0);
    glVertex2f(25.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(50.0, 20.0);
    glVertex2f(54.0, 30.0);
    glVertex2f(79.0, 30.0);
    glVertex2f(75.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(100.0, 20.0);
    glVertex2f(104.0, 30.0);
    glVertex2f(129.0, 30.0);
    glVertex2f(125.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(150.0, 20.0);
    glVertex2f(154.0, 30.0);
    glVertex2f(179.0, 30.0);
    glVertex2f(175.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(200.0, 20.0);
    glVertex2f(204.0, 30.0);
    glVertex2f(229.0, 30.0);
    glVertex2f(225.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(250.0, 20.0);
    glVertex2f(254.0, 30.0);
    glVertex2f(279.0, 30.0);
    glVertex2f(275.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0, 20.0);
    glVertex2f(304.0, 30.0);
    glVertex2f(329.0, 30.0);
    glVertex2f(325.0, 20.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(350.0, 20.0);
    glVertex2f(354.0, 30.0);
    glVertex2f(379.0, 30.0);
    glVertex2f(375.0, 20.0);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(400.0, 20.0);
    glVertex2f(404.0, 30.0);
    glVertex2f(429.0, 30.0);
    glVertex2f(425.0, 20.0);
    glEnd();
    glPopMatrix();
     glPushMatrix();
    glTranslated(b, 0.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(450.0, 20.0);
    glVertex2f(454.0, 30.0);
    glVertex2f(479.0, 30.0);
    glVertex2f(475.0, 20.0);
    glEnd();
    glPopMatrix();
}

void display2()
{
    /*glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0); //rectangulr body
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0); //upper triangle construction plane
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0); //upper triangle construction plane
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //lower triangle
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //back wing
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    //glVertex2f(165.0,40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //left side wing
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(d, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();*/
}

void display3()
{
    /*glClear(GL_COLOR_BUFFER_BIT);
    building();
    building();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 30.0); //rectangular body
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //lower triangle
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //back wing
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    //glVertex2f(165.0,40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    //glVertex2f(165.0,40.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(e, 300.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);
    glEnd();
    glPopMatrix();*/
}
void renderScene() {
	// Switch to know which scene is playing
	switch (SCENE_ID) {
	case 0:
		screen1();
		break;
	case 1:
		screen2();
		break;
    case 2:
        screen3();
        break;
    case 3:
        display();
        break;

	default:
		break;
	}

	// glFush sends it to the Display Buffer
	glFlush();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500.0, 1000.0);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("9/11 ATTACK");
    glutDisplayFunc(renderScene);
    glutKeyboardFunc(keyPress);
    glutMainLoop();
    return 0;
}
