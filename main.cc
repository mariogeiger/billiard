#include <QApplication>
#include "view.hh"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  View w;
  w.show();

  return a.exec();
}
