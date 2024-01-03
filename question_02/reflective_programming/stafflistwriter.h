#ifndef STAFFLISTWRITER_H
#define STAFFLISTWRITER_H

#include "stafflist.h"

class QFile;
class QTextStream;
class QMetaProperty;

class StaffListWriter {
public:
  StaffListWriter(StaffList sl);
  //  bool write(QString fileName = "staffDetails.txt");
  void write(QObject *obj);

private:
  StaffList list;
};

#endif // STAFFLISTWRITER_H
