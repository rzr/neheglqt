#include "../nehewidget.h"

class NeHeChapter2 : public NeHeWidget
{
public:
  NeHeChapter2( QWidget *parent=0, char *name=0 ) : NeHeWidget( 0, parent , name )
	{
	}
	
protected:
	void initializeGL()
	{
		glShadeModel(GL_SMOOTH);

		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glClearDepth(1.0f);

		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_LEQUAL);

		glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	}
	
	void resizeGL( int width, int height )
	{
  	height = height?height:1;

		glViewport( 0, 0, (GLint)width, (GLint)height );

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);

		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
	}
	
	void paintGL()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();

		glTranslatef(-1.5f,0.0f,-6.0f);

		glBegin(GL_TRIANGLES);
			glVertex3f( 0.0f, 1.0f, 0.0f);
			glVertex3f(-1.0f,-1.0f, 0.0f);
			glVertex3f( 1.0f,-1.0f, 0.0f);
		glEnd(); 

		glTranslatef(3.0f,0.0f,0.0f);

		glBegin(GL_QUADS);
			glVertex3f(-1.0f, 1.0f, 0.0f);
			glVertex3f( 1.0f, 1.0f, 0.0f);
			glVertex3f( 1.0f,-1.0f, 0.0f);
			glVertex3f(-1.0f,-1.0f, 0.0f);
		glEnd();   
	}
};
