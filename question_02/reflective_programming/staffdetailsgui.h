
#ifndef STAFFDETAILSGUI_H
#define STAFFDETAILSGUI_H

#include "staffdetails.h"
#include <QWidget>

// Forward Declations
class QPushButton;
class QTextEdit;
class QLineEdit;
class QHBoxLayout;
class QLabel;
class QVBoxLayout;
class QMessageBox;
class QComboBox;

class StaffDetailsGui : public QWidget {
  Q_OBJECT
public:
  explicit StaffDetailsGui(QWidget *parent = nullptr);
  ~StaffDetailsGui();
  StaffDetails *getStaffDetails() const;

public slots:
  void processDetails();
  void writeToFile();

private:
  StaffDetails *staffDetails;

  void setupGUI();
  QLineEdit *name;
  QLineEdit *dateOfBirth;
  QComboBox *appointmentType;

  QTextEdit *textEditDisplay;

  QPushButton *buttonProcess;
  QPushButton *buttonSave;
  QPushButton *buttonClose;
};

#endif // STAFFDETAILSGUI_H
