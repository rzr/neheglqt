#include <qapplication.h>

#include "ch3.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter3 w;
  w.show();

	return a.exec();
}
