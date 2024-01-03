
#ifndef STAFFDETAILS_H
#define STAFFDETAILS_H

#include <QDate>
#include <QMetaEnum>
#include <QObject>
#include <QString>

class StaffDetails : public QObject {
  Q_OBJECT
public:
  explicit StaffDetails(QObject *parent = nullptr);
  StaffDetails(QString n, QDate bd);
  ~StaffDetails();

  QString getName() const;
  void setName(QString n);

  QDate getBirthDate() const;
  void setBirthDate(QDate bd);

  enum AppointmentTypes { permanent, part_time, contract };
  Q_ENUM(AppointmentTypes)

public slots:
  void getAppointmentType(QString appointmentType);

private:
  QString name;
  QDate birthDate;
  AppointmentTypes appointmentType;
};

#endif // STAFFDETAILS_H
