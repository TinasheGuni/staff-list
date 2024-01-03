
#ifndef STAFFDETAILS_H
#define STAFFDETAILS_H

#include <QDate>
#include <QMetaEnum>
#include <QObject>
#include <QString>

class StaffDetails : public QObject {
  Q_PROPERTY(QString name READ getName WRITE setName)
  Q_PROPERTY(QDate date READ getBirthDate WRITE setBirthDate)
  Q_PROPERTY(QVariant appointmentType READ getAppointmentType)

  Q_OBJECT
public:
  explicit StaffDetails(QObject *parent = nullptr);
  StaffDetails(QString n, QDate bd);
  ~StaffDetails();

  enum AppointmentTypes { permanent, part_time, contract };
  Q_ENUM(AppointmentTypes)

public slots:

private:
  QString name;
  QDate birthDate;
  AppointmentTypes appointmentType;

  QString getName() const;
  void setName(QString n);

  QDate getBirthDate() const;
  void setBirthDate(QDate bd);

  void getAppointmentType(QString appointmentType);
};

#endif // STAFFDETAILS_H
