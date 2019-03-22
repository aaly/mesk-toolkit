/********************************************************************************
** Form generated from reading UI file 'loadingPage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGPAGE_H
#define UI_LOADINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadingPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *iconLabel;
    QLabel *messageLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *loadingPage)
    {
        if (loadingPage->objectName().isEmpty())
            loadingPage->setObjectName(QString::fromUtf8("loadingPage"));
        loadingPage->resize(625, 404);
        verticalLayout = new QVBoxLayout(loadingPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        iconLabel = new QLabel(loadingPage);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(iconLabel);

        messageLabel = new QLabel(loadingPage);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        sizePolicy.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(messageLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(loadingPage);

        QMetaObject::connectSlotsByName(loadingPage);
    } // setupUi

    void retranslateUi(QWidget *loadingPage)
    {
        loadingPage->setWindowTitle(QApplication::translate("loadingPage", "Form", 0, QApplication::UnicodeUTF8));
        iconLabel->setText(QString());
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loadingPage: public Ui_loadingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGPAGE_H
