#include <qapplication.h>

#include "ch6.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter6 w;
  w.show();
	
	return a.exec();
}
