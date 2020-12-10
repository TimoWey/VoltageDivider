///
/// \file VoltageDividerWidget.h
/// \date 30.11.2016
/// \author Michael Trummer
///

#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "ESeries.h"
#include "UserInputValidator.h"
#include "VoltageDivider.h"

namespace Ui
{
class Form;
}

///
/// \brief The VoltageDividerWidget class represents a widget with integrated
///        sub widgets for input and output. It uses the VoltageDivider class
///        to determine the output resistors in addiction to the voltage input
///        values.
///
class VoltageDividerWidget : public QWidget {
  Q_OBJECT

 public:
  ///
  /// \brief VoltageDividerWidget
  /// \param[in,out] parent QObject for an object of VoltageDividerWidget
  ///
  explicit VoltageDividerWidget(QWidget *parent = 0);

  ///
  /// \brief Destructor
  ///
  ~VoltageDividerWidget();

 public slots:
  ///
  /// \brief Calling this slot cause the GUI to update R1 and R2 value
  /// with given values. The function append a 10base Unit like k and the "Ohm"
  /// unit.
  ///
  /// \param r1 Value of first Resistor in Ohm
  /// \param r2 Value of second Resistor in Ohm
  ///
  void onResultRefresh(double r1, double r2);

 private:
  Ui::Form *ui;
  UserInputValidator *validateU1;
  UserInputValidator *validateU2;
  UserInputValidator *validateRmin;
  UserInputValidator *validateRmax;

  double u1;
  double u2;
  double vOut;

  void onNewU1Value();
  void onNewU2Value();
  void onNewRmaxValue();
  void onNewRminValue();
  void onCalcRequest();
  void onResistorDecadeChanged(int idx);
  void clearResult();
};

#endif  // FORM_H
