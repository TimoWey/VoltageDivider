#ifndef ERESISTOR_H
#define ERESISTOR_H

#include <cmath>
#include "IESeries.h"

///
/// \brief Ein Objekt der EResistor Klasse steht für einen Widerstand der
///  entsprechenden E-Serie in Ctor.
///

class EResistor {
 public:
  ///
  /// \brief Das enum AssignMethod wird in Ctor als Argument verwendet. 
  /// Es definiert, ob der nächste Werterepräsentant der E-Serie unter oder über 
  /// einem bestimmten Wert gesucht wird.
  ///
  enum AssignMethod
  {
    assignUpperEValue,
    assignLowerEValue
  };

  ///
  /// \brief EResistor Ctor
  /// \param value für diesen Wert wird ein Repräsentant in der 
  /// entsprechenden serieType E-Serie gesucht.
  /// \param method definiert, ob der Repräsentant über dem zugewiesenen Wert
  /// oder darunter sucht.
  /// \param serie wird definiert, welche E-Serie zur Suche nach dem Repräsentanten 
  /// verwendet werden soll.
  ///
  EResistor(double value, AssignMethod method, const IESeries& serie);

  ///
  /// \brief Operator <
  /// \param rhs Objekt auf der rechten Seite
  /// \return true, wenn der Wert des lhs-Objekts kleiner ist
  ///
  bool operator<(const EResistor& rhs) const
  {
    return getValue() < rhs.getValue();
  }

  ///
  /// \brief Operator <=
  /// \param rhs Objekt auf der rechten Seite
  /// \return true, wenn der Wert des lhs-Objekts kleiner oder gleich dem 
  /// rhs ist
  ///
  bool operator<=(const EResistor& rhs) const
  {
    return getValue() <= rhs.getValue();
  }

  ///
  /// \brief Operator >
  /// \param rhs Objekt auf der rechten Seite
  /// \return true, wenn der Wert des lhs-Objekts grösser als der des 
  ///         rhs-Objekts ist
  ///
  bool operator>(const EResistor& rhs) const
  {
    return getValue() > rhs.getValue();
  }

  ///
  /// \brief Operator >=
  /// \param rhs Objekt auf der rechten Seite
  /// \return true, wenn der Wert des lhs-Objekts grösser oder gleich dem 
  /// rhs-Objekt ist
  ///
  bool operator>=(const EResistor& rhs) const
  {
    return getValue() >= rhs.getValue();
  }

  ///
  /// \brief Operator ++ erhöht den Widerstandswert. Der nächste Wert in der
  /// entsprechenden E-Serie wird ausgewählt. Wenn für den nächsten Wert ein 
  /// Überlauf der E-Serie auftritt, wird auch der Exponent des Werts erhöht.
  /// \return der inkrementierte Repräsentant
  ///
  const EResistor& operator++()
  {
    if (++index >= eSerie.getElemCnt())
    {
      index = 0;
      exp++;
    }
    return *this;
  }

  ///
  /// \brief Operator +
  /// \param rhs Objekt auf der rechten Seite
  /// \return die Summe aus dem rhs-Wert und dem lhs-Wert als double Typ
  ///
  double operator+(const EResistor& rhs)
  {
    double sum = getValue() + rhs.getValue();

    return sum;
  }

  ///
  /// \brief Operator *
  /// \param rhs Objekt auf der rechten Seite
  /// \return das Produkt aus dem rhs-Wert und dem lhs-Wert als double Typ
  ///
  double operator*(const EResistor& rhs)
  {
    double rhsVal = rhs.getValue();
    double val = getValue();
    return rhsVal * val;
  }

  ///
  /// \brief Operator double für die Typkonvertierung von EResistor nach double
  ///
  operator double() const
  {
    return getValue();
  }

  ///
  /// \brief getValue
  /// \return der tatsächliche Wert des Widerstands
  ///
  double getValue() const
  {
    return eSerie[index] * pow(10, exp);
  }

  ///
  /// \brief getSerie getter Methode
  /// \return die entsprechende E-Serie
  ///
  const IESeries& getSerie() const
  {
    return eSerie;
  }

 private:
  unsigned int index;
  int exp;

  void setLowerOrEqValue(double value);
  void setUpperOrEqValue(double value);

  const IESeries& eSerie;
};

#endif  // ERESISTOR_H
