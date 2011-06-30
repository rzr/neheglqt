#include "config.h"

#include <QApplication>
#include <QDir>

#include "ch11.h"

int main( int argc, char **argv )
{
  QApplication a( argc, argv );

  QString dir = QCoreApplication::applicationDirPath();
  QDir::setCurrent( dir );

  NeHeChapter11 w;
  w.show();

  return a.exec();
}
