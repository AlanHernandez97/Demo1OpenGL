#include <gl/glut.h>
#include <iostream>

void myInit(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void pintarPixel(GLint x, GLint y)
{
	glBegin(GL_POINTS);
	glVertex2i(100, 100);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	pintarPixel(200, 100);
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv); //Inicializamos la libreria de open GL
	glutInitWindowSize(640, 480); //Resolución
	glutInitWindowPosition(20, 20); //Posición
	glutCreateWindow("Demo OpenGL"); //Titulo de la ventana
	myInit();
	glutDisplayFunc(display);
	glutMainLoop(); //Limpiar el búffer
	return 0;
}

