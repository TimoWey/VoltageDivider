/********************************************************************************
** Form generated from reading UI file 'voltagedividerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLTAGEDIVIDERWIDGET_H
#define UI_VOLTAGEDIVIDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QLabel *label_9;
    QLineEdit *lineEditR1;
    QLabel *label_12;
    QLineEdit *lineEditR2;
    QLabel *label;
    QLineEdit *lineEditVout;
    QLabel *label_2;
    QLineEdit *lineEditAccuracy;
    QLineEdit *lineEditU1;
    QLineEdit *lineEditU2;
    QLineEdit *lineEditRmin;
    QLineEdit *lineEditRmax;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(469, 641);
        verticalLayout_2 = new QVBoxLayout(Form);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/vDivider.gif")));
        label_5->setScaledContents(true);

        horizontalLayout->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_10 = new QLabel(Form);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_10);

        label_7 = new QLabel(Form);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(Form);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_6 = new QLabel(Form);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(Form);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);

        label_11 = new QLabel(Form);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_11);

        label_9 = new QLabel(Form);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEditR1 = new QLineEdit(Form);
        lineEditR1->setObjectName(QString::fromUtf8("lineEditR1"));
        lineEditR1->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        lineEditR1->setPalette(palette);
        lineEditR1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditR1->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditR1);

        label_12 = new QLabel(Form);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_12);

        lineEditR2 = new QLineEdit(Form);
        lineEditR2->setObjectName(QString::fromUtf8("lineEditR2"));
        lineEditR2->setEnabled(false);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        lineEditR2->setPalette(palette1);
        lineEditR2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditR2->setReadOnly(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEditR2);

        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label);

        lineEditVout = new QLineEdit(Form);
        lineEditVout->setObjectName(QString::fromUtf8("lineEditVout"));
        lineEditVout->setReadOnly(true);

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEditVout);

        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_2);

        lineEditAccuracy = new QLineEdit(Form);
        lineEditAccuracy->setObjectName(QString::fromUtf8("lineEditAccuracy"));

        formLayout->setWidget(11, QFormLayout::FieldRole, lineEditAccuracy);

        lineEditU1 = new QLineEdit(Form);
        lineEditU1->setObjectName(QString::fromUtf8("lineEditU1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditU1);

        lineEditU2 = new QLineEdit(Form);
        lineEditU2->setObjectName(QString::fromUtf8("lineEditU2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditU2);

        lineEditRmin = new QLineEdit(Form);
        lineEditRmin->setObjectName(QString::fromUtf8("lineEditRmin"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditRmin);

        lineEditRmax = new QLineEdit(Form);
        lineEditRmax->setObjectName(QString::fromUtf8("lineEditRmax"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditRmax);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_5->setText(QString());
        label_10->setText(QApplication::translate("Form", "Input", nullptr));
        label_7->setText(QApplication::translate("Form", "U1", nullptr));
        label_8->setText(QApplication::translate("Form", "U2", nullptr));
        label_3->setText(QApplication::translate("Form", "Rmin", nullptr));
        label_4->setText(QApplication::translate("Form", "Rmax", nullptr));
        label_6->setText(QApplication::translate("Form", "R Decade", nullptr));
        label_11->setText(QApplication::translate("Form", "Output", nullptr));
        label_9->setText(QApplication::translate("Form", "R1", nullptr));
        label_12->setText(QApplication::translate("Form", "R2", nullptr));
        label->setText(QApplication::translate("Form", "Vout", nullptr));
        label_2->setText(QApplication::translate("Form", "Accuracy", nullptr));
        pushButton->setText(QApplication::translate("Form", "calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLTAGEDIVIDERWIDGET_H
