/*
 * StateManagementAndDrawingGeometricObjects.cpp
 *
 *  Created on: Aug 30, 2013
 *      Author: pezheng
 */

#include "StateManagementAndDrawingGeometricObjects.h"
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

StateManagementAndDrawingGeometricObjects::StateManagementAndDrawingGeometricObjects() {
	// TODO Auto-generated constructor stub

}

StateManagementAndDrawingGeometricObjects::~StateManagementAndDrawingGeometricObjects() {
	// TODO Auto-generated destructor stub
}

static void init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

static void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2f(1.0, 44.3);
	glVertex2f(41.0, 23.3);
	glEnd();

	glColor3f(0.5, 0.5, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1.0, 5.3);
	glVertex2f(1.4, 27.3);
	glVertex2f(53.3, 17.9);
	glEnd();

	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_LINES);
	glVertex2f(1.0, 73.3);
	glVertex2f(15.4, 89.3);
	glVertex2f(25.3, 87.9);
	glVertex2f(1.3, 98.9);
	glEnd();

	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(31.0, 73.3);
	glVertex2f(45.4, 89.3);
	glVertex2f(55.3, 87.9);
	glVertex2f(78.3, 98.9);
	glEnd();

	glColor3f(0.0, 0.7, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(81.0, 73.3);
	glVertex2f(95.4, 89.3);
	glVertex2f(105.3, 37.9);
	glVertex2f(178.3, 198.9);
	glEnd();

	glColor3f(0.0, 0.7, 0.2);
	glBegin(GL_TRIANGLES);
	glVertex2f(131.0, 73.3);
	glVertex2f(175.4, 89.3);
	glVertex2f(205.3, 37.9);
	glVertex2f(208.3, 98.9);
	glVertex2f(192.6, 28.9);
	glVertex2f(258.1, 58.9);
	glEnd();

	glColor3f(0.0, 0.7, 0.6);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(231.0, 73.3);
	glVertex2f(275.4, 89.3);
	glVertex2f(305.3, 37.9);
	glVertex2f(308.3, 98.9);
	glVertex2f(292.6, 28.9);
	glVertex2f(358.1, 58.9);
	glEnd();

	glColor3f(0.0, 0.7, 0.7);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(331.0, 73.3);
	glVertex2f(375.4, 89.3);
	glVertex2f(405.3, 37.9);
	glVertex2f(408.3, 98.9);
	glVertex2f(392.6, 28.9);
	glVertex2f(458.1, 58.9);
	glEnd();

	glColor3f(0.0, 0.3, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(231.0, 273.3);
	glVertex2f(275.4, 289.3);
	glVertex2f(305.3, 237.9);
	glVertex2f(308.3, 298.9);
	glVertex2f(292.6, 228.9);
	glVertex2f(358.1, 258.9);
	glVertex2f(392.6, 328.9);
	glVertex2f(458.1, 358.9);
	glEnd();

	glColor3f(0.0, 1.0, 0.6);
	glBegin(GL_QUAD_STRIP);
	glVertex2f(431.0, 273.3);
	glVertex2f(475.4, 289.3);
	glVertex2f(505.3, 237.9);
	glVertex2f(508.3, 298.9);
	glVertex2f(492.6, 228.9);
	glVertex2f(558.1, 258.9);
	glVertex2f(592.6, 328.9);
	glVertex2f(658.1, 358.9);
	glEnd();

	glFlush();
	cout << "display" << endl;
}

static void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble) w, 0.0, (GLdouble) h);
	cout << "reshape (" << w << ", " << h << ")" << endl;
}

int StateManagementAndDrawingGeometricObjects::main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowSize(600, 400);
	glutInitWindowPosition(200, 300);
	glutCreateWindow("State Management And Drawing Geometric Objects");

	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
