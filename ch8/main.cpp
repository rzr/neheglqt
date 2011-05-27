#include <qapplication.h>

#include "ch8.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );

  NeHeChapter8 w;
  w.show();
	
	return a.exec();
}
