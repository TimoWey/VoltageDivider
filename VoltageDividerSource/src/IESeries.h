#ifndef IESERIES_H
#define IESERIES_H

#include <string>

///
/// \brief Die IESerie-Klasse ist eine Schnittstelle, um die ESerie-Klasse aus 
/// Testgründen nachahmen zu können.
///
class IESeries {
 public:
  ///
  /// \brief Ein Objekt der ESerie-Klasse repräsentiert einen Widerstand der E-Serie. 
  /// Zum Beispiel E12 und E24.
  ///
  enum SeriesType
  {
    e12 = 0,
    e24,
    nrOfESeries
  };

  ///
  /// \brief Operator ++ wird verwendet, um die Aufzählungselemente von SeriesType zu erhöhen.
  ///  Wenn ein Überlauf auftritt, ist das nächste Element das erste der SeriesType enum.
  /// \param serie Instanz von SeriesType enum
  /// \return Die Serieninstanz, die um eins erhöht wird.
  ///
  friend SeriesType& operator++(SeriesType& serie);

  ///
  /// \brief Die Funktion getElemCnt gibt die Anzahl der gewünschten E-Serien zurück. 
  /// Zum Beispiel ein als E12-Objekt generiertes Objekt gibt 12 zurück.
  /// \return Anzahl der Elemente in der dargestellten E-Reihe
  ///
  virtual unsigned int getElemCnt() const = 0;

  ///
  /// \brief Die Funktion getName gibt die Zeichenfolge der gewünschten E-Serie zurück. 
  /// Zum Beispiel "E12" für eine E12-Serie.
  /// \return
  ///
  virtual std::string getName() const = 0;

  ///
  /// \brief Operator [], um ein Element der Serie mit einem Index auszulesen.
  /// \pre index < Seriengröße (Elementenzähler)
  /// \pre index >= 0
  /// \param index des zurückzugebenden Elements
  /// \return das Element, das sich an der Indexposition in der vom Objekt 
  ///         dargestellten Serie befindet
  ///
  virtual double operator[](int index) const = 0;
};

#endif  // IESERIES_H
