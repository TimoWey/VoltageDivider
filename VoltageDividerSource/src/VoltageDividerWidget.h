///
/// \file VoltageDividerWidget.h
/// \date 10.12.2020
/// \author Timo Wey, Patrick Jansky und Joel Fuchs
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
/// \brief Die VoltageDividerWidget-Klasse repräsentiert ein Widget mit integrierten 
/// Unter-Widgets für die Ein- und Ausgabe. Es verwendet die VoltageDivider-Klasse, 
/// um die Ausgangswiderstände in Abhängigkeit von den Spannungseingangswerten zu 
/// bestimmen.
///
class VoltageDividerWidget : public QWidget {
  Q_OBJECT

 public:
  ///
  /// \brief VoltageDividerWidget
  /// \param[in,out] parent QObject für ein Objekt von VoltageDividerWidget
  ///
  explicit VoltageDividerWidget(QWidget *parent = 0);

  ///
  /// \brief Destruktor
  ///
  ~VoltageDividerWidget();

 public slots:
  ///
  /// \brief Beim Aufrufen dieses Steckplatzes, aktualisiert die GUI die Werte 
  /// für r1 und r2 mit den angegebenen Werten. Die Funktion hängt eine 10-Basis-Einheit 
  /// wie k und die "Ohm" -Einheit an.
  ///
  /// \param r1 ist der Wert des ersten Widerstands in Ohm
  /// \param r2 ist der Wert des zweiten Widerstands in Ohm
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
