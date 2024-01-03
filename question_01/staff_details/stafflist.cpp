#include "stafflist.h"

StaffList::StaffList() {}

QList<StaffDetails *> StaffList::getStaffList() const {
  QList<StaffDetails *> staffList;

  //  get the staff details from StaffDetails class
  for (int i = 0; i < staffList.size(); i++) {
    staffList.append(this->at(i));
  }
  return staffList;
}

QString StaffList::toString() const {
  QString outStr;

  for (int count = 0; count < this->size(); count++) {
    //    outStr << this->at(count);
  }

  return outStr;
}
