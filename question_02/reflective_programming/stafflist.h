#ifndef STAFFLIST_H
#define STAFFLIST_H

// A QList container to save the staff details
#include "staffdetails.h"
#include <QList>

class StaffList : public QList<StaffDetails *> {
public:
  StaffList();
  QList<StaffDetails *> getStaffList() const;
  QString toString() const;
};

#endif // STAFFLIST_H
