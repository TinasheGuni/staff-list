#include "stafflistwriter.h"
#include "filewriter.h"

StaffListWriter::StaffListWriter(StaffList sl) : list(sl) {}

bool StaffListWriter::write(QString fileName) {
  QString outStr;

  foreach (StaffDetails *details, list.getStaffList()) {
    outStr.append(QString("%1 %2 %3")
                      .arg(details->getName())
                      .arg(details->getBirthDate().toString())
                  /*.arg(details->getAppointmentType()*/);
  }

  FileWriter fw(fileName);
  if (!fw.write(outStr)) {
    return false;
  }

  return true;
}
