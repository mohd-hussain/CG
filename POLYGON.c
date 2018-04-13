#include<GL/glut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); 
	
	glBegin(GL_POLYGON);
	glColor3f( 1.0f, 0.0f, 2.0f );
	glVertex2f(0.0f,0.5f);
	glColor3f( 0.0f, 1.0f, 0.0f );
	glVertex2f(0.5f,0.0f);
	glColor3f( 0.0f, 0.0f, 1.0f );
	glVertex2f(0.4f,0.3f);
	glColor3f( 0.0f, 0.0f, 1.0f );
	glVertex2f(0.0f,0.1f);
	glFlush();
	
	glEnd();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);                 // Initialize GLUT
   glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
   glutInitWindowSize(320,320);   // Set the window's initial width & height
   glutInitWindowPosition(50,150); // Position the window's initial top-left corner
   glutDisplayFunc(display); // Register display callback handler for window re-paint
   glutMainLoop();           // Enter the event-processing loop
   return 0;
}
