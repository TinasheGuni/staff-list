#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <QString>

// forward declaration for Compiler Optimazations
class QFile;
class QTextStream;

class FileWriter {
public:
  FileWriter(QString fName);
  bool write(QString str) const;

private:
  QString fileName;
};

#endif // FILEWRITER_H
