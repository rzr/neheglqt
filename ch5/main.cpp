#include <qapplication.h>

#include "ch5.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );
	
  NeHeChapter5 w;
  w.show();
	
	return a.exec();
}
