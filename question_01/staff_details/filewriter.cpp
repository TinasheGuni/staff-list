#include "filewriter.h"

#include <QFile>
#include <QTextStream>

FileWriter::FileWriter(QString fName) : fileName(fName) {}

bool FileWriter::write(QString str) const {
  QFile outFile(str);
  if (!outFile.open(QIODevice::WriteOnly)) {
    return false;
  }

  QTextStream out(stdout);
  out << str << Qt::endl;
  out.flush();

  outFile.close();
  return true;
}
