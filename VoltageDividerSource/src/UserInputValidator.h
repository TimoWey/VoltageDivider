///
/// \file UserInputValidator.h
/// \date 10.12.2020
/// \author Timo Wey, Patrick Jansky und Joel Fuchs
///

#ifndef USERINPUTVALIDATOR_H
#define USERINPUTVALIDATOR_H

#include <QValidator>

///
/// \brief Die UserInputValidator Klasse
///
class UserInputValidator : public QValidator
{
public:
    ///
    /// \brief UserInputValidator wird verwendet, um eine Eingabezeichenfolge in ein
    ///        double zu konvertieren und zu überprüfen, ob die Konvertierung gültig war.
    /// \param[in] unit string beinhaltet units, welche entfernt / analysiert 
    ///       werden soll. Zum Beispiel "V" oder "Ohm".
    /// \param[in,out] parent QObject
    ///
    UserInputValidator(const QString& unit, QObject* parent=0);

    ///
    /// \brief Diese virtuelle Funktion gibt ungültig zurück, wenn die Eingabe 
    /// gemäss den Regeln dieses Validators ungültig ist. Mittelwert, wenn es 
    /// wahrscheinlich ist, dass etwas mehr Bearbeitung, die Eingabe akzeptabel macht 
    /// (z.B. gibt der Benutzer "4" in ein Widget ein, das Ganzzahlen zwischen 10 und 99 akzeptiert) 
    /// und Akzeptabel, wenn die Eingabe gültig ist
    ///
    /// Die Funktion kann bei Bedarf sowohl die Eingabe als auch die Position
    /// (die Cursorposition) ändern.
    /// \param intput Zeichenkette, die konvertiert werden soll.
    /// \param pos wird in diesem Zusammenhang nicht verwendet.
    /// \return State, wenn die Konvertierung ungültig, mittelmässig oder akzeptabel war.
    ///
    virtual State validate(QString &input, int &pos) const;

    ///
    /// \brief getValue der zuletzt überprüften Eingabe. Überprüft zuerst \ ref getIsValid, 
    /// um sicherzustellen, dass der Rückgabewert dieses Getters gültig ist.
    /// \return Der Wert der zuletzt konvertierten Eingabe ist ein double.
    ///
    double getValue() const
    {
        return value;
    }

    ///
    /// \brief getIsValid gibt true zurück, wenn die zuletzt konvertierte Eingabezeichenfolge 
    ///        erfolgreich in einen double-Datentyp konvertiert wurde. Der entsprechende 
    ///        Wert kann mit der Methode \ ref getValue abgerufen werden.
    /// \return Gibt true zurück, wenn der zuletzt konvertierte Eingabezeichenfolgenwert gültig war.
    ///
    bool getIsValid() const
    {
        return isValid;
    }
private:
    const QString unit;
    mutable double value;
    mutable bool isValid;
};

#endif // USERINPUTVALIDATOR_H
