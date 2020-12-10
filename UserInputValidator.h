///
/// \file UserInputValidator.h
/// \date 30.11.2016
/// \author Michael Trummer
///

#ifndef USERINPUTVALIDATOR_H
#define USERINPUTVALIDATOR_H

#include <QValidator>

///
/// \brief The UserInputValidator class
///
class UserInputValidator : public QValidator
{
public:
    ///
    /// \brief UserInputValidator used to convert an input string into a double
    ///       and verifies if the convertion was valid.
    /// \param[in] unit string that contains which unit should be removed/parsed.
    ///       For example "V" or "Ohm".
    /// \param[in,out] parent QObject
    ///
    UserInputValidator(const QString& unit, QObject* parent=0);

    ///
    /// \brief This virtual function returns Invalid if input is invalid
    /// according to this validator's rules, Intermediate if it is  likely
    /// that a little more editing will make the input acceptable (e.g. the user
    /// types "4" into a widget which accepts integers between 10 and 99),
    /// and Acceptable if the input is valid.
    ///
    /// The function can change both input and pos (the cursor position)
    /// if required.
    /// \param input string to be converted
    /// \param pos not used in this context
    /// \return State if convertion was Invalid, Intermediate, or Acceptable.
    ///
    virtual State validate(QString &input, int &pos) const;

    ///
    /// \brief getValue of the last checked input. Check \ref getIsValid first
    ///        to be sure the return value of this getter is valid.
    /// \return the value of the last converted input as double
    ///
    double getValue() const
    {
        return value;
    }

    ///
    /// \brief getIsValid return true if the last converted input string was
    ///        successfully converted into double data type. The corresponding
    ///        value can be retrieved with the \ref getValue method.
    /// \return returns true if the last converted input string value was valid.
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
