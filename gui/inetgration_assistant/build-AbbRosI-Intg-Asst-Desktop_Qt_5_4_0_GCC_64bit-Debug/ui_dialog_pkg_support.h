/********************************************************************************
** Form generated from reading UI file 'dialog_pkg_support.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PKG_SUPPORT_H
#define UI_DIALOG_PKG_SUPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Pkg_Support
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_title_7;
    QCommandLinkButton *commandLinkButton_5;
    QTextBrowser *textBrowser_6;
    QWidget *page_2;
    QLabel *label_title_2;
    QWidget *page_3;
    QLabel *label_title_3;
    QLabel *label_3_2;
    QLabel *label_3_3;
    QLabel *label_3_4;
    QWidget *page_4;
    QLabel *label_title_4;
    QWidget *page_5;
    QLabel *label_title_5;
    QComboBox *comboBox;
    QWidget *page_6;
    QLabel *label_title_6;
    QWidget *page_7;
    QWidget *page_8;
    QLabel *label_title_8;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_ChLst_Ubt;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_ChLst_Prp;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QGroupBox *groupBox_ChLst_Pkg;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_6;
    QGroupBox *groupBox_Btn;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog_Pkg_Support)
    {
        if (Dialog_Pkg_Support->objectName().isEmpty())
            Dialog_Pkg_Support->setObjectName(QStringLiteral("Dialog_Pkg_Support"));
        Dialog_Pkg_Support->resize(1144, 723);
        Dialog_Pkg_Support->setStyleSheet(QLatin1String("QListWidget::item {\n"
"    height: 40px;\n"
"    border: 1px solid silver;\n"
"}\n"
"QListWidget::item:hover {\n"
"	border: 1px solid grey;\n"
"}\n"
"QListWidget::item:selected {\n"
"	background-color: rgb(240, 120, 70);\n"
"	color: white;\n"
"    border: 1px solid rgb(240, 120, 70);\n"
"}\n"
"QListWidget::item:selected:!active {\n"
"	background-color: silver;\n"
"	color: black;\n"
"    border: 1px solid grey;\n"
"}\n"
"\n"
"QLabel#label_title_1, #label_title_2, #label_title_3, #label_title_4, #label_title_5, #label_title_6, #label_title_7, #label_title_8, #label_title_9 {\n"
"    font: 75 16pt \"DejaVu Sans\";\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox#groupBox_ChLst_Ubt, #groupBox_ChLst_Win, #groupBox_Btn {\n"
"    font: 16px;\n"
"    font-weight: bold;\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    margin-top: 6px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_ChLst_Ubt::title, #groupBox_ChLst_Win::title{\n"
"    subcontrol-origin: margin;\n"
"    /*subcontrol-position: middle;*/\n"
"    "
                        "left: 40px;\n"
"    padding: 0px 5px 0px 5px;\n"
"}"));
        gridLayout_3 = new QGridLayout(Dialog_Pkg_Support);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(Dialog_Pkg_Support);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(265, 400));
        listWidget->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(Dialog_Pkg_Support);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        gridLayout_2 = new QGridLayout(page_1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_title_7 = new QLabel(page_1);
        label_title_7->setObjectName(QStringLiteral("label_title_7"));
        label_title_7->setMinimumSize(QSize(380, 30));
        label_title_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(label_title_7);

        commandLinkButton_5 = new QCommandLinkButton(page_1);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setMinimumSize(QSize(111, 41));
        commandLinkButton_5->setFocusPolicy(Qt::NoFocus);
        commandLinkButton_5->setStyleSheet(QStringLiteral("font: italic 13pt \"Ubuntu\";"));

        horizontalLayout_4->addWidget(commandLinkButton_5);


        verticalLayout_6->addLayout(horizontalLayout_4);

        textBrowser_6 = new QTextBrowser(page_1);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setMinimumSize(QSize(841, 351));
        textBrowser_6->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));

        verticalLayout_6->addWidget(textBrowser_6);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_title_2 = new QLabel(page_2);
        label_title_2->setObjectName(QStringLiteral("label_title_2"));
        label_title_2->setGeometry(QRect(40, 10, 311, 31));
        label_title_2->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_title_3 = new QLabel(page_3);
        label_title_3->setObjectName(QStringLiteral("label_title_3"));
        label_title_3->setGeometry(QRect(40, 10, 291, 31));
        label_title_3->setStyleSheet(QStringLiteral(""));
        label_3_2 = new QLabel(page_3);
        label_3_2->setObjectName(QStringLiteral("label_3_2"));
        label_3_2->setGeometry(QRect(40, 80, 651, 61));
        label_3_2->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        label_3_3 = new QLabel(page_3);
        label_3_3->setObjectName(QStringLiteral("label_3_3"));
        label_3_3->setGeometry(QRect(90, 160, 491, 61));
        label_3_3->setStyleSheet(QLatin1String("color: rgb(44, 94, 230);\n"
"font: 12pt \"Ubuntu Mono\" bold;"));
        label_3_4 = new QLabel(page_3);
        label_3_4->setObjectName(QStringLiteral("label_3_4"));
        label_3_4->setGeometry(QRect(40, 260, 661, 111));
        label_3_4->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_title_4 = new QLabel(page_4);
        label_title_4->setObjectName(QStringLiteral("label_title_4"));
        label_title_4->setGeometry(QRect(40, 10, 291, 31));
        label_title_4->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_title_5 = new QLabel(page_5);
        label_title_5->setObjectName(QStringLiteral("label_title_5"));
        label_title_5->setGeometry(QRect(40, 10, 291, 31));
        label_title_5->setStyleSheet(QStringLiteral(""));
        comboBox = new QComboBox(page_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 90, 481, 31));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_title_6 = new QLabel(page_6);
        label_title_6->setObjectName(QStringLiteral("label_title_6"));
        label_title_6->setGeometry(QRect(40, 10, 291, 31));
        label_title_6->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        label_title_8 = new QLabel(page_8);
        label_title_8->setObjectName(QStringLiteral("label_title_8"));
        label_title_8->setGeometry(QRect(40, 10, 291, 31));
        label_title_8->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_8);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_5->addLayout(horizontalLayout);

        line = new QFrame(Dialog_Pkg_Support);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        groupBox_ChLst_Ubt = new QGroupBox(Dialog_Pkg_Support);
        groupBox_ChLst_Ubt->setObjectName(QStringLiteral("groupBox_ChLst_Ubt"));
        groupBox_ChLst_Ubt->setFocusPolicy(Qt::NoFocus);
        groupBox_ChLst_Ubt->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(groupBox_ChLst_Ubt);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, -1, -1);
        groupBox_ChLst_Prp = new QGroupBox(groupBox_ChLst_Ubt);
        groupBox_ChLst_Prp->setObjectName(QStringLiteral("groupBox_ChLst_Prp"));
        groupBox_ChLst_Prp->setMinimumSize(QSize(220, 160));
        groupBox_ChLst_Prp->setStyleSheet(QStringLiteral("border: 0px;"));
        verticalLayout_2 = new QVBoxLayout(groupBox_ChLst_Prp);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 15, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        checkBox_1 = new QCheckBox(groupBox_ChLst_Prp);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));

        verticalLayout->addWidget(checkBox_1);

        checkBox_2 = new QCheckBox(groupBox_ChLst_Prp);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox_ChLst_Prp);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox_ChLst_Prp);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(groupBox_ChLst_Prp);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupBox_ChLst_Prp);

        groupBox_ChLst_Pkg = new QGroupBox(groupBox_ChLst_Ubt);
        groupBox_ChLst_Pkg->setObjectName(QStringLiteral("groupBox_ChLst_Pkg"));
        groupBox_ChLst_Pkg->setMinimumSize(QSize(220, 160));
        groupBox_ChLst_Pkg->setStyleSheet(QStringLiteral("border: 0px ;"));
        verticalLayout_4 = new QVBoxLayout(groupBox_ChLst_Pkg);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 15, 10, 10);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        checkBox_7 = new QCheckBox(groupBox_ChLst_Pkg);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        verticalLayout_3->addWidget(checkBox_7);

        checkBox_9 = new QCheckBox(groupBox_ChLst_Pkg);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        verticalLayout_3->addWidget(checkBox_9);

        checkBox_8 = new QCheckBox(groupBox_ChLst_Pkg);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        verticalLayout_3->addWidget(checkBox_8);

        checkBox_10 = new QCheckBox(groupBox_ChLst_Pkg);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        verticalLayout_3->addWidget(checkBox_10);

        checkBox_6 = new QCheckBox(groupBox_ChLst_Pkg);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        verticalLayout_3->addWidget(checkBox_6);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_2->addWidget(groupBox_ChLst_Pkg);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_5->addWidget(groupBox_ChLst_Ubt);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        groupBox_Btn = new QGroupBox(Dialog_Pkg_Support);
        groupBox_Btn->setObjectName(QStringLiteral("groupBox_Btn"));
        groupBox_Btn->setMinimumSize(QSize(212, 180));
        groupBox_Btn->setMaximumSize(QSize(212, 16777215));
        groupBox_Btn->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 3px solid silver;\n"
"    border-radius: 6px;\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(214, 214, 214), stop:0.50001 rgb(236, 236, 236));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 3px solid rgb(255, 157, 68);\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(255, 174, 120), stop:0.50001 rgb(255, 220, 196));\n"
" }\n"
" QPushButton:pressed {\n"
"    font-weight: bold;\n"
"    border: 3px solid rgb(255, 102, 0);\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(240, 120, 70), stop:0.50001 rgb(255, 202, 146));\n"
" }\n"
""));
        gridLayout = new QGridLayout(groupBox_Btn);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(15, 0, 15, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButton_1 = new QPushButton(groupBox_Btn);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(100, 50));
        pushButton_1->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(groupBox_Btn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 50));
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_Btn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 50));
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_Btn);


        verticalLayout_5->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(Dialog_Pkg_Support);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog_Pkg_Support);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Pkg_Support)
    {
        Dialog_Pkg_Support->setWindowTitle(QApplication::translate("Dialog_Pkg_Support", "Dialog", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog_Pkg_Support", "1. Export Models from RobotStudio", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Dialog_Pkg_Support", "2. Create Meshes Package", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Dialog_Pkg_Support", "3. Create URDF Package", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Dialog_Pkg_Support", "4. Create Config Package", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Dialog_Pkg_Support", "5. Create Launch Package", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Dialog_Pkg_Support", "6. \347\225\231\347\251\272", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("Dialog_Pkg_Support", "7. \347\225\231\347\251\272", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("Dialog_Pkg_Support", "8. \347\225\231\347\251\272", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_title_7->setText(QApplication::translate("Dialog_Pkg_Support", "Export Models from RobotStudio", 0));
        commandLinkButton_5->setText(QApplication::translate("Dialog_Pkg_Support", "Next Step", 0));
        textBrowser_6->setHtml(QApplication::translate("Dialog_Pkg_Support", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">In order to create meshes folder for a robot, its 3D models of robot links are required.It's recommend that, all the models are exported from ABB</span><span style=\" font-size:12pt; color:#e01212;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#f9711d;\">RobotStudio</span><span style=\" font-size:12pt; font-weight:600; color:#000000; vertical-align:super;\">\302\256</span><span style=\" font-size:12pt;\"> . These models occupy high quality details and standardized default coordinate system, which"
                        " will simplify the process.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Steps to export Models of a ABB Robot from </span><span style=\" font-size:12pt; font-weight:600; color:#f9711d;\">RobotStudio</span><span style=\" font-size:12pt; font-weight:600; color:#000000; vertical-align:super;\">\302\256</span><span style=\" font-size:12pt;\"> (take </span><span style=\" font-size:12pt; font-style:italic;\">ABB IRB 140 </span><span style=\" font-size:12pt;\">for example)</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; fo"
                        "nt-weight:600;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt; font-weight:600;\">1.  </span><span style=\" font-size:12pt;\">Open RobotStudio on your </span><span style=\" font-size:12pt; font-weight:600;\">Windows </span><span style=\" font-size:12pt;\">Computer and create a new solution with the robot controller IRB140;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><img src=\":/pic/expt_mdl_step_1.png\" /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt; "
                        "font-weight:600;\">2.  </span><span style=\" font-size:12pt;\">In the </span><span style=\" font-size:12pt; font-style:italic;\">Layout </span><span style=\" font-size:12pt;\">browser, right-click the station and select Export Geometry.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><img src=\":/pic/expt_mdl_step_2.png\" /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt; font-weight:600;\">3.  </span><span style=\" font-size:12pt;\">Select </span><span style=\" font-size:12pt; font-weight:600;\">STL</span><span style=\" font-size:12pt;\"> from the Format list on the </span><span style=\" font-siz"
                        "e:12pt; font-style:italic;\">ExportGeometry:Station</span><span style=\" font-size:12pt;\"> pane</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><img src=\":/pic/expt_mdl_step_3.png\" /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt; font-weight:600;\">4.  \343\200\220</span><span style=\" font-size:12pt;\">Check </span><span style=\" font-size:12pt; font-style:italic;\">Binary format</span><span style=\" font-size:12pt;\"> and</span><span style=\" font-size:12pt; font-weight:600;\">\343\200\221</span><span style=\" font-size:12pt;\"> change the value of </span><span style=\" font-size:12pt; font"
                        "-style:italic;\">Scale</span><span style=\" font-size:12pt;\"> to </span><span style=\" font-size:12pt; font-weight:600;\">1</span><span style=\" font-size:12pt;\">. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><img src=\":/pic/expt_mdl_step_4.png\" /></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt; font-weight:600;\">5.  </span><span style=\" font-size:12pt;\">Click </span><span style=\" font-size:12pt; font-style:italic;\">Export</span><span style=\" font-size:12pt;\"> and select the destination folder.</span></p></body></html>", 0));
        label_title_2->setText(QApplication::translate("Dialog_Pkg_Support", "Build Meshes from Model", 0));
        label_title_3->setText(QApplication::translate("Dialog_Pkg_Support", "Create Support Package", 0));
        label_3_2->setText(QApplication::translate("Dialog_Pkg_Support", "Before creating the URDF file for the robot, let's create a ROS package in the catkin\n"
"workspace so that the robot model keeps using the following command:", 0));
        label_3_3->setText(QApplication::translate("Dialog_Pkg_Support", "$ catkin_create_pkg mastering_ros_robot_description_pkg roscpp tf \n"
"geometry_msgs urdf rviz xacro", 0));
        label_3_4->setText(QApplication::translate("Dialog_Pkg_Support", "Before creating the urdf file for this robot, let's create three folders called urdf,\n"
"meshes, and launch inside the package folder. The urdf folder can be used to keep the \n"
"urdf/xacro files that we are going to create. The meshes folder keeps the meshes that \n"
"we need to include in the urdf file and the launch folder keeps the ROS launch files.", 0));
        label_title_4->setText(QApplication::translate("Dialog_Pkg_Support", "Build URDF Description", 0));
        label_title_5->setText(QApplication::translate("Dialog_Pkg_Support", "Build Launch Files", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 120", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 1200", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 140", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 1410", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 1600", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 2400", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 260", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 2600", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 4400", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 460", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 4600", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 660", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 6620", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 6640", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 760", 0)
         << QApplication::translate("Dialog_Pkg_Support", "ABB IRB 8700", 0)
        );
        label_title_6->setText(QApplication::translate("Dialog_Pkg_Support", "Create MoveIt Config Package", 0));
        label_title_8->setText(QApplication::translate("Dialog_Pkg_Support", "Prepair the RobotStudio", 0));
        groupBox_ChLst_Ubt->setTitle(QApplication::translate("Dialog_Pkg_Support", "Checklist : Support Package", 0));
        groupBox_ChLst_Prp->setTitle(QApplication::translate("Dialog_Pkg_Support", "Meshes and URDF:", 0));
        checkBox_1->setText(QApplication::translate("Dialog_Pkg_Support", "Install ROS", 0));
        checkBox_2->setText(QApplication::translate("Dialog_Pkg_Support", "Install ROS-I", 0));
        checkBox_3->setText(QApplication::translate("Dialog_Pkg_Support", "Create Workspace", 0));
        checkBox_4->setText(QApplication::translate("Dialog_Pkg_Support", "Add ABB Driver Package", 0));
        checkBox_5->setText(QApplication::translate("Dialog_Pkg_Support", "CheckBox", 0));
        groupBox_ChLst_Pkg->setTitle(QApplication::translate("Dialog_Pkg_Support", "Config and Launch:", 0));
        checkBox_7->setText(QApplication::translate("Dialog_Pkg_Support", "Support Package", 0));
        checkBox_9->setText(QApplication::translate("Dialog_Pkg_Support", "MoveIt Config Package", 0));
        checkBox_8->setText(QApplication::translate("Dialog_Pkg_Support", "Create Workspace", 0));
        checkBox_10->setText(QApplication::translate("Dialog_Pkg_Support", "Add ABB Driver Package", 0));
        checkBox_6->setText(QApplication::translate("Dialog_Pkg_Support", "CheckBox", 0));
        groupBox_Btn->setTitle(QString());
        pushButton_1->setText(QApplication::translate("Dialog_Pkg_Support", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("Dialog_Pkg_Support", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("Dialog_Pkg_Support", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Pkg_Support: public Ui_Dialog_Pkg_Support {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PKG_SUPPORT_H
