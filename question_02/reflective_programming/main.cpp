
#include "staffdetails.h"
#include "staffdetailsgui.h"
#include <QApplication>

// I can do much better than this.
// My time management was just off and unfortunately l ran out of time before
// doing enough justice on Question 02 and Question 03

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  //  StaffDetails *myinstance = new StaffDetails;
  //  QObject *object = myinstance;

  //  myinstance->setProperty("name", "Tinashe");
  //  myinstance->setProperty("birthDate", QDate(20 / 02 / 1998));
  //  myinstance->setProperty(StaffDetails::permanent);

  StaffDetailsGui details;
  details.show();

  return a.exec();
}
