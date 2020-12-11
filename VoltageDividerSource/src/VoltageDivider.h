///
/// \file src/VoltageDivider.h
/// \date 10.12.2020
/// \author Timo Wey, Patrick Jansky und Joel Fuchs
///

#ifndef VOLTAGEDIVIDER_H
#define VOLTAGEDIVIDER_H

#include <QObject>
#include <QString>
#include <cassert>
#include "EResistor.h"

///
/// \brief Die VoltageDivider Klasse
///
class VoltageDivider {
 public:
  ///
  /// \brief Die ResultingResistors Struktur
  ///
  struct ResultingResistors
  {
    ///
    /// \brief r1 repräsentiert den oberen Widerstand in einem unbelasteten Spannungsteiler
    ///
    double r1;
    ///
    /// \brief r2 repräsentiert den unteren Widerstand in einem unbelasteten Spannungsteiler
    ///
    double r2;
  };

  ///
  /// \brief Berechnet die optimalen Werte für r1 und r2. Die Grundformel
  /// hinter dieser Berechnung steht \ f $ u1 = u2 {r2 \ über r2 + r1} \ f $.
  /// \pre \p u1 > \p u2
  /// \pre \p u2 > 0
  /// \pre \p lowerRTh < \p upperRTh
  /// \pre \p lowerRTh > 0
  /// \param u1 Wert für U1 in V
  /// \param u2 Wert für U2 in V
  /// \param lowerRTh legt die Untergrenze für die Widerstandswertausgabe fest
  /// \param upperRTh legt die Obergrenze für die Widerstandswertausgabe fest
  /// \return Gibt die resultierenden Widerstandswerte zurück, wenn die Berechnung 
  ///         erfolgreich abgeschlossen wurde. Andernfalls wird 0 in r1 und r2 zurückgegeben.
  ///
  static ResultingResistors calc(double u1, double u2,
                                 const EResistor& lowerRTh,
                                 const EResistor& upperRTh)
  {
    assert(u1 > u2);
    assert(u2 > 0);
    assert(lowerRTh < upperRTh);
    assert(lowerRTh > 0);

    double dMin = std::numeric_limits<double>::infinity();
    double r1saved = 0;
    double r2saved = 0;

    for (EResistor r1 = lowerRTh; r1 < upperRTh; ++r1)
    {
      for (EResistor r2 = lowerRTh; r2 < upperRTh; ++r2)
      {
        long double ua = u1;
        long double r = r1;
        r += r2;
        ua /= r;
        ua *= r2;
        double d;
        d = ua > u2 ? ua - u2 : u2 - ua;
        if (d < dMin)
        {
          dMin = d;
          r1saved = r1;
          r2saved = r2;
        }
      }
    }
    assert(upperRTh >= r1saved);
    assert(lowerRTh <= r1saved);
    assert(upperRTh >= r2saved);
    assert(lowerRTh <= r2saved);
    ResultingResistors resResistors;
    resResistors.r1 = r1saved;
    resResistors.r2 = r2saved;
    return resResistors;
  }

 private:
  ///
  /// \brief VoltageDivider Ctor ist privat, um die Instanziierung dieser Klasse 
  /// einzuschränken..
  ///
  VoltageDivider()
  {
  }

  enum
  {
    destExp = 2,
  };
};

#endif  // VOLTAGEDIVIDER_H
