#include "config.h"

#include <QApplication>
#include <QDir>

#include "ch7.h"

int main( int argc, char **argv )
{
	QApplication a( argc, argv );

        QString dir = QCoreApplication::applicationDirPath();
        QDir::setCurrent( dir );

  NeHeChapter7 w;
  w.show();
	
	return a.exec();
}
