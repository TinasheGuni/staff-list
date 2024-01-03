#ifndef STAFFLIST_H
#define STAFFLIST_H

// A QList container to save the staff details
#include "staffdetails.h"
#include <QList>

// According to Qt Documentation, we store pointers to QObejct in
// the container class

class StaffList : public QList<StaffDetails *> {
public:
  StaffList();
  QList<StaffDetails *> getStaffList() const;
  QString toString() const;
};

#endif // STAFFLIST_H
