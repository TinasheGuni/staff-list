
#include "staffdetails.h"

StaffDetails::StaffDetails(QObject *parent) : QObject(parent) {}

StaffDetails::StaffDetails(QString n, QDate bd) : name(n), birthDate(bd) {}

StaffDetails::~StaffDetails() {}

QString StaffDetails::getName() const { return name; }

void StaffDetails::setName(QString n) { name = n; }

QDate StaffDetails::getBirthDate() const { return birthDate; }

void StaffDetails::setBirthDate(QDate bd) { birthDate = bd; }

void StaffDetails::getAppointmentType(QString appointmentType) {
  QMetaObject MetaOject = this->staticMetaObject;
  QMetaEnum MetaEnum =
      MetaOject.enumerator(MetaOject.indexOfEnumerator("AppointmentTypes"));

  switch (MetaEnum.keysToValue(appointmentType.toLatin1())) {
  case permanent:
    qDebug() << "This staff member is on a permanent contract";
    break;

  case part_time:
    qDebug() << "This staff member is on a part time contract";
    break;

  case contract:
    qDebug() << "This staff member is on a contract";
    break;

  default:
    qDebug() << "Contract details unavailable!!!";
    break;
  }
}
