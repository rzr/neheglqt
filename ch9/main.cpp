#include "config.h"

#include <QApplication>
#include <QDir>

#include "ch9.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );

        QString dir = QCoreApplication::applicationDirPath();
        QDir::setCurrent( dir );

  NeHeChapter9 w;
  w.show();
	
	return a.exec();
}
