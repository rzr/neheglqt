#include <qapplication.h>

#include "ch10.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter10 w;
  w.show();
	
	return a.exec();
}
