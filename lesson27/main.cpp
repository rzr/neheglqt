#include "config.h"
#include <QApplication>
//#include <kapp.h>
#include "Wnd.h"

using namespace NeHe;

int main( int argc, char **argv )
{
    QApplication a( argc, argv, "NeHe Lesson27");

    MainWindow *window=new MainWindow( "Banu Octavian & NeHe's Shadow Casting Tutorial" );
    //window->resize( 800, 600 );

    //a.setMainWidget( window );
    window->show();

    return a.exec();
}

