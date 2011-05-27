#include <qapplication.h>

#include "ch4.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter4 w;
  w.show();

	return a.exec();
}
