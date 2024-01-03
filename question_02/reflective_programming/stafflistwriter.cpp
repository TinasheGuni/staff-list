#include "stafflistwriter.h"
#include "filewriter.h"

#include <QDebug>
#include <QFile>
#include <QMetaProperty>
#include <QTextStream>

StaffListWriter::StaffListWriter(StaffList sl) : list(sl) {}

void StaffListWriter::write(QObject *obj) {
  QFile file("staffDetails.txt");
  file.open(QIODevice::WriteOnly);
  QTextStream outFile(&file);

  const QMetaObject *mo = obj->metaObject();
  for (int i = mo->propertyOffset(); i < mo->propertyCount(); ++i) {
    const QMetaProperty prop = mo->property(i);
    QString name = prop.name();
    QVariant value = prop.read(obj);
    QString valueString = value.toString();

    //    outFile << value << Qt::endl;
    qDebug() << "Staff list written to file: " << valueString;
  }
  file.close();
}

// bool StaffListWriter::write(QString fileName) {
//   QString outStr;

//  foreach (StaffDetails *details, list.getStaffList()) {
//    outStr.append(QString("%1 %2 %3")
//                      .arg(details->getName())
//                      .arg(details->getBirthDate().toString())
//                  /*.arg(details->getAppointmentType()*/);
//  }

//  FileWriter fw(fileName);
//  if (!fw.write(outStr)) {
//    return false;
//  }

//  return true;
//}
