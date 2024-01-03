
#include "staffdetails.h"
#include "staffdetailsgui.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  //  StaffDetails member1;
  //  member1.setName("Tinashe Guni");
  //  member1.setBirthDate(QDate(1998, 02, 04));

  //  qDebug() << member1.getName().toLatin1();
  //  qDebug() << member1.getBirthDate().toString();
  //  member1.getAppointmentType("permanent");

  StaffDetailsGui details;
  details.show();

  return a.exec();
}
