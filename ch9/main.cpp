#include <qapplication.h>

#include "ch9.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter9 w;
  w.show();
	
	return a.exec();
}
