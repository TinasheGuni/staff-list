
#include "staffdetailsgui.h"
#include <QComboBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

StaffDetailsGui::StaffDetailsGui(QWidget *parent)
    : QWidget(parent), textEditDisplay(new QTextEdit), name(new QLineEdit),
      dateOfBirth(new QLineEdit), appointmentType(new QComboBox),
      buttonProcess(new QPushButton("Process")),
      buttonClose(new QPushButton("Close")), buttonSave(new QPushButton("Save"))

{
  setWindowTitle("Staff Details");

  setupGUI();

  //  connecting signals and slots

  //  Display Staff details
  connect(buttonProcess, &QPushButton::clicked, this,
          &StaffDetailsGui::processDetails);

  //  Save staff Details
  connect(buttonSave, &QPushButton::clicked, this,
          &StaffDetailsGui::writeToFile);

  //  close the GUI
  connect(buttonClose, &QPushButton::clicked, this, &QWidget::close);
}

StaffDetailsGui::~StaffDetailsGui() {}

StaffDetails *StaffDetailsGui::getStaffDetails() const { return staffDetails; }

void StaffDetailsGui::processDetails() {
  //  staffDetails->setName(name->text());
  //  staffDetails->setBirthDate(dateOfBirth->text());
  //  staffDetails->AppointmentTypes(appointmentType->currentText());

  QMessageBox msgBox;
  msgBox.setText("Staff Details have been Modified");
  msgBox.setInformativeText("Do you want to save your changes?");
  msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
  msgBox.setDefaultButton(QMessageBox::Save);
  int ret = msgBox.exec();

  switch (ret) {
  case QMessageBox::Save: {
    textEditDisplay->clear();
    textEditDisplay->append(name->text());
    textEditDisplay->append(dateOfBirth->text());
    textEditDisplay->append(appointmentType->currentText());
  } break;

  case QMessageBox::Cancel: {
    textEditDisplay->clear();
  } break;

  default:
    msgBox.setText("Invalid Choice");
    break;
  }
}

void StaffDetailsGui::writeToFile() {
  QMessageBox msgBox;
  msgBox.setText("Staff Details Written to File");
  msgBox.exec();
}

void StaffDetailsGui::setupGUI() {
  QVBoxLayout *layout(new QVBoxLayout(this));
  QHBoxLayout *hLayout = new QHBoxLayout;

  // Name
  QLabel *lblName(new QLabel("Name"));
  layout->addWidget(lblName);
  layout->addWidget(name);
  name->setPlaceholderText("Enter Your Name");

  // DOB
  QLabel *lblDOB(new QLabel("Date Of Birth"));
  layout->addWidget(lblDOB);
  layout->addWidget(dateOfBirth);
  dateOfBirth->setPlaceholderText("Enter your date of birth here");

  // Appointment type
  QLabel *lblAPType(new QLabel("Appointment Type"));
  layout->addWidget(lblAPType);
  layout->addWidget(appointmentType);
  //  appointmentType->setPlaceholderText("permanent, part_time, contract");

  //  Appointment type default values
  QStringList list = QStringList() << "permanent"
                                   << "part_time"
                                   << "contract";
  appointmentType->addItems(list);

  // Display
  layout->addWidget(textEditDisplay);

  // Process and Close
  hLayout->addWidget(buttonProcess);
  hLayout->addWidget(buttonSave);
  hLayout->addWidget(buttonClose);
  layout->addLayout(hLayout);
}
