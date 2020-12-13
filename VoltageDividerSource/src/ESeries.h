///
/// \file src/ESeries.h
/// \date 10.11.2020
/// \author Timo Wey, Patrick Jansky und Joel Fuchs
///

#ifndef ESERIES_H
#define ESERIES_H

#include <QString>
#include <cassert>
#include "IESeries.h"


 
///
/// \brief Die ESerie-Klasse repräsentiert die E-Widerstandsreihen E12 und E24. 
/// Wenn mehr E-Widerstandsreihen erforderlich sind, kann diese Klasse 
/// angehängt werden.
///
class ESeries : public IESeries {
 public:
  ///
  /// \brief ESerie Ctor
  /// \param serie definiert welche
  ///
  ESeries(IESeries::SeriesType serie) : type(serie)
  {
    switch (serie)
    {
      case IESeries::e12:
        values = e12Values;
        elemCnt = 12;
        name = "E12";
        break;
      default:
      case IESeries::e24:
        values = e24Values;
        elemCnt = 24;
        name = "E24";
        break;
    }
  }

  ///
  /// \brief Die Funktion getElemCnt gibt die Anzahl der gewünschten E-Serien zurück. 
  /// Zum Beispiel ein als E12-Objekt generiertes Objekt gibt 12 zurück.
  /// \return Anzahl der Elemente in der dargestellten E-Reihe
  ///
  unsigned int getElemCnt() const
  {
    return elemCnt;
  }

  ///
  /// \brief Die Funktion getName gibt die Zeichenfolge der gewünschten E-Serie zurück.
  ///  Zum Beispiel "E12" für eine E12-Serie.
  /// \return
  ///
  std::string getName() const
  {
    return name;
  }

  ///
  /// \brief Operator [], um ein Element der Serie mit einem Index auszulesen
  /// \pre Index < Größe der Serie (Anzahl der Elemente)
  /// \pre Index >= 0
  /// \param Index des zurückzugebenden Elements
  /// \return das Element, das sich an der Indexposition in der vom Objekt dargestellten
  ///         Serie befindet.
  ///
  double operator[](int index) const
  {
    assert(index < static_cast<int>(elemCnt));
    assert(index >= 0);
    return values[index];
  }

 private:
  const double* values;
  unsigned int elemCnt;
  std::string name;
  SeriesType type;
  static const double e12Values[];
  static const double e24Values[];
};
#endif  // ESERIES_H
