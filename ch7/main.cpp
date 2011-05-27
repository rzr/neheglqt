#include <qapplication.h>

#include "ch7.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter7 w;
  w.show();
	
	return a.exec();
}
