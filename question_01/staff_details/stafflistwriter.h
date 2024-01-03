#ifndef STAFFLISTWRITER_H
#define STAFFLISTWRITER_H

#include "stafflist.h"

class StaffListWriter {
public:
  StaffListWriter(StaffList sl);
  bool write(QString fileName = "staffDetails.txt");

private:
  StaffList list;
};

#endif // STAFFLISTWRITER_H
