/********************************************************************************
** Form generated from reading UI file 'groupSelector.ui'
**
** Created: Sat Jun 22 04:00:34 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSELECTOR_H
#define UI_GROUPSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_groupSelector
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *groupsLayout;

    void setupUi(QWidget *groupSelector)
    {
        if (groupSelector->objectName().isEmpty())
            groupSelector->setObjectName(QString::fromUtf8("groupSelector"));
        groupSelector->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(groupSelector);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(groupSelector);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupsLayout = new QHBoxLayout();
        groupsLayout->setObjectName(QString::fromUtf8("groupsLayout"));

        verticalLayout->addLayout(groupsLayout);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(groupSelector);

        QMetaObject::connectSlotsByName(groupSelector);
    } // setupUi

    void retranslateUi(QWidget *groupSelector)
    {
        groupSelector->setWindowTitle(QApplication::translate("groupSelector", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("groupSelector", "Title:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class groupSelector: public Ui_groupSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSELECTOR_H
