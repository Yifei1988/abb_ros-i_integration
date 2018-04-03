/********************************************************************************
** Form generated from reading UI file 'asstmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSTMAINWINDOW_H
#define UI_ASSTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AsstMainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_title_1;
    QLabel *label_1_2;
    QLabel *label_1_3;
    QTextBrowser *textBrowser;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_title_2;
    QCommandLinkButton *commandLinkButton;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *checkBox;
    QCheckBox *checkBox_16;
    QTextBrowser *textBrowser_2;
    QVBoxLayout *verticalLayout_9;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnToRosWiki;
    QPushButton *btnToRosiWiki;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_title_3;
    QCommandLinkButton *commandLinkButton_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_17;
    QTextBrowser *textBrowser_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QTextBrowser *textBrowser_5;
    QPushButton *btnToRosCatkinWs;
    QGraphicsView *graphic_wsLayout;
    QWidget *page_4;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_title_4;
    QCommandLinkButton *commandLinkButton_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_18;
    QHBoxLayout *horizontalLayout_13;
    QTextBrowser *textBrowser_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_15;
    QPushButton *btnToDldPkgAbb;
    QPushButton *btnToCpPkgAbbdriver;
    QWidget *page_5;
    QLabel *label_title_5;
    QComboBox *comboBox;
    QWidget *page_6;
    QLabel *label_title_6;
    QLabel *label_3_5;
    QLabel *label_3_6;
    QLabel *label_3_7;
    QWidget *page_7;
    QLabel *label_title_7;
    QWidget *page_8;
    QLabel *label_title_8;
    QWidget *page_9;
    QLabel *label_title_9;
    QFrame *line;
    QLabel *label;
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
    QGroupBox *groupBox_ChLst_Win;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_ChLst_Rs;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_11;
    QGroupBox *groupBox_Btn;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btn_to_support;
    QPushButton *btn_to_moveit;
    QPushButton *btn_to_rs;

    void setupUi(QMainWindow *AsstMainWindow)
    {
        if (AsstMainWindow->objectName().isEmpty())
            AsstMainWindow->setObjectName(QStringLiteral("AsstMainWindow"));
        AsstMainWindow->resize(1158, 738);
        AsstMainWindow->setStyleSheet(QLatin1String("QListWidget::item {\n"
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
        centralWidget = new QWidget(AsstMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
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
        listWidget->setMinimumSize(QSize(256, 419));
        listWidget->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QLatin1String("QGroupBox{\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    margin-top: 6px;\n"
"}"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        label_title_1 = new QLabel(page_1);
        label_title_1->setObjectName(QStringLiteral("label_title_1"));
        label_title_1->setGeometry(QRect(40, 10, 291, 31));
        label_title_1->setStyleSheet(QStringLiteral(""));
        label_1_2 = new QLabel(page_1);
        label_1_2->setObjectName(QStringLiteral("label_1_2"));
        label_1_2->setGeometry(QRect(40, 64, 651, 21));
        label_1_2->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        label_1_3 = new QLabel(page_1);
        label_1_3->setObjectName(QStringLiteral("label_1_3"));
        label_1_3->setGeometry(QRect(40, 190, 381, 21));
        label_1_3->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        textBrowser = new QTextBrowser(page_1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 250, 561, 61));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_title_2 = new QLabel(page_2);
        label_title_2->setObjectName(QStringLiteral("label_title_2"));
        label_title_2->setMinimumSize(QSize(380, 30));
        label_title_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(label_title_2);

        commandLinkButton = new QCommandLinkButton(page_2);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setMinimumSize(QSize(111, 41));
        commandLinkButton->setStyleSheet(QStringLiteral("font: italic 13pt \"Ubuntu\";"));

        horizontalLayout_9->addWidget(commandLinkButton);


        verticalLayout_12->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(15);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(10);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("font: 75 14pt \"Droid Arabic Naskh\";"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 0, 5, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMinimumSize(QSize(350, 30));
        checkBox->setFocusPolicy(Qt::NoFocus);

        verticalLayout_10->addWidget(checkBox);

        checkBox_16 = new QCheckBox(groupBox_2);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));
        checkBox_16->setMinimumSize(QSize(350, 30));
        checkBox_16->setFocusPolicy(Qt::NoFocus);

        verticalLayout_10->addWidget(checkBox_16);


        gridLayout_3->addLayout(verticalLayout_10, 0, 0, 1, 1);


        verticalLayout_11->addWidget(groupBox_2);

        textBrowser_2 = new QTextBrowser(page_2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(400, 260));
        textBrowser_2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));

        verticalLayout_11->addWidget(textBrowser_2);


        horizontalLayout_8->addLayout(verticalLayout_11);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        graphicsView = new QGraphicsView(page_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(270, 240));
        graphicsView->setMaximumSize(QSize(286, 240));
        graphicsView->setStyleSheet(QLatin1String("border-radius: 6px;\n"
"border-image: url(:/pic/indigoigloo.png);"));

        verticalLayout_9->addWidget(graphicsView);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-radius: 6px;\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(214, 214, 214), stop:0.50001 rgb(236, 236, 236));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(255, 174, 120), stop:0.50001 rgb(255, 220, 196));\n"
" }\n"
" QPushButton:pressed {\n"
"    font-weight: bold;\n"
"    border: 3px solid rgb(255, 102, 0);\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(240, 120, 70), stop:0.50001 rgb(255, 202, 146));\n"
" }"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 0, 2, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btnToRosWiki = new QPushButton(groupBox);
        btnToRosWiki->setObjectName(QStringLiteral("btnToRosWiki"));
        btnToRosWiki->setMinimumSize(QSize(122, 82));
        btnToRosWiki->setStyleSheet(QStringLiteral("QPushButton {border-image: url(:/icon/ros_logo.png);}"));

        horizontalLayout_7->addWidget(btnToRosWiki);

        btnToRosiWiki = new QPushButton(groupBox);
        btnToRosiWiki->setObjectName(QStringLiteral("btnToRosiWiki"));
        btnToRosiWiki->setMinimumSize(QSize(122, 82));
        btnToRosiWiki->setStyleSheet(QStringLiteral("QPushButton {border-image: url(:/icon/rosi_logo.png);}"));

        horizontalLayout_7->addWidget(btnToRosiWiki);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        verticalLayout_9->addWidget(groupBox);


        horizontalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_12->addLayout(horizontalLayout_8);


        gridLayout_4->addLayout(verticalLayout_12, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_title_3 = new QLabel(page_3);
        label_title_3->setObjectName(QStringLiteral("label_title_3"));
        label_title_3->setMinimumSize(QSize(380, 30));
        label_title_3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(label_title_3);

        commandLinkButton_3 = new QCommandLinkButton(page_3);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setMinimumSize(QSize(111, 41));
        commandLinkButton_3->setStyleSheet(QStringLiteral("font: italic 13pt \"Ubuntu\";"));

        horizontalLayout_11->addWidget(commandLinkButton_3);


        verticalLayout_14->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("font: 75 14pt \"Droid Arabic Naskh\";"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 0, 5, 0);
        checkBox_17 = new QCheckBox(groupBox_3);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));
        checkBox_17->setMinimumSize(QSize(350, 30));
        checkBox_17->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(checkBox_17, 0, 0, 1, 1);


        verticalLayout_13->addWidget(groupBox_3);

        textBrowser_3 = new QTextBrowser(page_3);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setMinimumSize(QSize(452, 192));
        textBrowser_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));

        verticalLayout_13->addWidget(textBrowser_3);

        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-radius: 6px;\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(214, 214, 214), stop:0.50001 rgb(236, 236, 236));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(255, 174, 120), stop:0.50001 rgb(255, 220, 196));\n"
" }\n"
" QPushButton:pressed {\n"
"    font-weight: bold;\n"
"    border: 3px solid rgb(255, 102, 0);\n"
"    background-color: qconicalgradient(cx:0.5, cy:0.5, angle:180, stop:0.49999 rgb(240, 120, 70), stop:0.50001 rgb(255, 202, 146));\n"
" }"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(2, 2, 5, 2);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        textBrowser_5 = new QTextBrowser(groupBox_4);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setMinimumSize(QSize(342, 95));
        textBrowser_5->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));

        horizontalLayout_14->addWidget(textBrowser_5);

        btnToRosCatkinWs = new QPushButton(groupBox_4);
        btnToRosCatkinWs->setObjectName(QStringLiteral("btnToRosCatkinWs"));
        btnToRosCatkinWs->setMinimumSize(QSize(120, 70));
        btnToRosCatkinWs->setMaximumSize(QSize(130, 85));
        btnToRosCatkinWs->setStyleSheet(QStringLiteral("border-image: url(:/icon/btn_catkinws.png);"));

        horizontalLayout_14->addWidget(btnToRosCatkinWs);


        gridLayout_6->addLayout(horizontalLayout_14, 0, 0, 1, 1);


        verticalLayout_13->addWidget(groupBox_4);


        horizontalLayout_10->addLayout(verticalLayout_13);

        graphic_wsLayout = new QGraphicsView(page_3);
        graphic_wsLayout->setObjectName(QStringLiteral("graphic_wsLayout"));
        graphic_wsLayout->setMinimumSize(QSize(222, 362));
        graphic_wsLayout->setMaximumSize(QSize(240, 400));
        graphic_wsLayout->setStyleSheet(QLatin1String("border-radius: 6px;\n"
"border-image: url(:/pic/catkin_ws_layout.png);"));

        horizontalLayout_10->addWidget(graphic_wsLayout);


        verticalLayout_14->addLayout(horizontalLayout_10);


        gridLayout_7->addLayout(verticalLayout_14, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_10 = new QGridLayout(page_4);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_title_4 = new QLabel(page_4);
        label_title_4->setObjectName(QStringLiteral("label_title_4"));
        label_title_4->setMinimumSize(QSize(380, 30));
        label_title_4->setStyleSheet(QStringLiteral(""));

        horizontalLayout_12->addWidget(label_title_4);

        commandLinkButton_4 = new QCommandLinkButton(page_4);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setMinimumSize(QSize(111, 41));
        commandLinkButton_4->setStyleSheet(QStringLiteral("font: italic 13pt \"Ubuntu\";"));

        horizontalLayout_12->addWidget(commandLinkButton_4);


        verticalLayout_16->addLayout(horizontalLayout_12);

        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QStringLiteral("font: 75 14pt \"Droid Arabic Naskh\";"));
        gridLayout_8 = new QGridLayout(groupBox_5);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(5, 0, 5, 0);
        checkBox_18 = new QCheckBox(groupBox_5);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));
        checkBox_18->setMinimumSize(QSize(350, 30));
        checkBox_18->setFocusPolicy(Qt::NoFocus);

        gridLayout_8->addWidget(checkBox_18, 0, 0, 1, 1);


        verticalLayout_16->addWidget(groupBox_5);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        textBrowser_4 = new QTextBrowser(page_4);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setMinimumSize(QSize(452, 192));
        textBrowser_4->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0px;"));

        horizontalLayout_13->addWidget(textBrowser_4);

        groupBox_6 = new QGroupBox(page_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
" }"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(2, 0, 2, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(10);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        btnToDldPkgAbb = new QPushButton(groupBox_6);
        btnToDldPkgAbb->setObjectName(QStringLiteral("btnToDldPkgAbb"));
        btnToDldPkgAbb->setMinimumSize(QSize(122, 82));
        btnToDldPkgAbb->setStyleSheet(QStringLiteral("QPushButton {border-image: url(:/icon/btn_dl_pkg_abb.png)}"));

        verticalLayout_15->addWidget(btnToDldPkgAbb);

        btnToCpPkgAbbdriver = new QPushButton(groupBox_6);
        btnToCpPkgAbbdriver->setObjectName(QStringLiteral("btnToCpPkgAbbdriver"));
        btnToCpPkgAbbdriver->setMinimumSize(QSize(122, 82));
        btnToCpPkgAbbdriver->setStyleSheet(QStringLiteral("QPushButton {border-image: url(:/icon/btn_cp_pkg_abbdriver.png)}"));

        verticalLayout_15->addWidget(btnToCpPkgAbbdriver);


        gridLayout_9->addLayout(verticalLayout_15, 0, 0, 1, 1);


        horizontalLayout_13->addWidget(groupBox_6);


        verticalLayout_16->addLayout(horizontalLayout_13);


        gridLayout_10->addLayout(verticalLayout_16, 0, 0, 1, 1);

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
        label_3_5 = new QLabel(page_6);
        label_3_5->setObjectName(QStringLiteral("label_3_5"));
        label_3_5->setGeometry(QRect(40, 250, 661, 111));
        label_3_5->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        label_3_6 = new QLabel(page_6);
        label_3_6->setObjectName(QStringLiteral("label_3_6"));
        label_3_6->setGeometry(QRect(90, 150, 491, 61));
        label_3_6->setStyleSheet(QLatin1String("color: rgb(44, 94, 230);\n"
"font: 12pt \"Ubuntu Mono\" bold;"));
        label_3_7 = new QLabel(page_6);
        label_3_7->setObjectName(QStringLiteral("label_3_7"));
        label_3_7->setGeometry(QRect(40, 70, 651, 61));
        label_3_7->setStyleSheet(QStringLiteral("font: 13pt \"Ubuntu\";"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_title_7 = new QLabel(page_7);
        label_title_7->setObjectName(QStringLiteral("label_title_7"));
        label_title_7->setGeometry(QRect(40, 10, 291, 31));
        label_title_7->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        label_title_8 = new QLabel(page_8);
        label_title_8->setObjectName(QStringLiteral("label_title_8"));
        label_title_8->setGeometry(QRect(40, 10, 291, 31));
        label_title_8->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        label_title_9 = new QLabel(page_9);
        label_title_9->setObjectName(QStringLiteral("label_title_9"));
        label_title_9->setGeometry(QRect(40, 10, 291, 31));
        label_title_9->setStyleSheet(QStringLiteral(""));
        stackedWidget->addWidget(page_9);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_8->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 16pt \"Ubuntu\";\n"
"font-weight: bold;"));

        verticalLayout_8->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        groupBox_ChLst_Ubt = new QGroupBox(centralWidget);
        groupBox_ChLst_Ubt->setObjectName(QStringLiteral("groupBox_ChLst_Ubt"));
        groupBox_ChLst_Ubt->setFocusPolicy(Qt::NoFocus);
        horizontalLayout_3 = new QHBoxLayout(groupBox_ChLst_Ubt);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, -1, -1);
        groupBox_ChLst_Prp = new QGroupBox(groupBox_ChLst_Ubt);
        groupBox_ChLst_Prp->setObjectName(QStringLiteral("groupBox_ChLst_Prp"));
        groupBox_ChLst_Prp->setMinimumSize(QSize(221, 181));
        groupBox_ChLst_Prp->setStyleSheet(QStringLiteral("border: 0px;"));
        verticalLayout_2 = new QVBoxLayout(groupBox_ChLst_Prp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
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
        groupBox_ChLst_Pkg->setMinimumSize(QSize(221, 181));
        groupBox_ChLst_Pkg->setStyleSheet(QStringLiteral("border: 0px ;"));
        verticalLayout_4 = new QVBoxLayout(groupBox_ChLst_Pkg);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
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

        groupBox_ChLst_Win = new QGroupBox(centralWidget);
        groupBox_ChLst_Win->setObjectName(QStringLiteral("groupBox_ChLst_Win"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_ChLst_Win);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 15, 10, 10);
        groupBox_ChLst_Rs = new QGroupBox(groupBox_ChLst_Win);
        groupBox_ChLst_Rs->setObjectName(QStringLiteral("groupBox_ChLst_Rs"));
        groupBox_ChLst_Rs->setMinimumSize(QSize(221, 181));
        groupBox_ChLst_Rs->setStyleSheet(QStringLiteral("border: 0px;"));
        verticalLayout_6 = new QVBoxLayout(groupBox_ChLst_Rs);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 20, 10, 10);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        checkBox_12 = new QCheckBox(groupBox_ChLst_Rs);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        verticalLayout_5->addWidget(checkBox_12);

        checkBox_14 = new QCheckBox(groupBox_ChLst_Rs);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        verticalLayout_5->addWidget(checkBox_14);

        checkBox_13 = new QCheckBox(groupBox_ChLst_Rs);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        verticalLayout_5->addWidget(checkBox_13);

        checkBox_15 = new QCheckBox(groupBox_ChLst_Rs);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));

        verticalLayout_5->addWidget(checkBox_15);

        checkBox_11 = new QCheckBox(groupBox_ChLst_Rs);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        verticalLayout_5->addWidget(checkBox_11);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_4->addWidget(groupBox_ChLst_Rs);


        horizontalLayout_5->addWidget(groupBox_ChLst_Win);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        groupBox_Btn = new QGroupBox(centralWidget);
        groupBox_Btn->setObjectName(QStringLiteral("groupBox_Btn"));
        groupBox_Btn->setMinimumSize(QSize(213, 235));
        groupBox_Btn->setMaximumSize(QSize(213, 235));
        groupBox_Btn->setFocusPolicy(Qt::NoFocus);
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
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(15, 0, 15, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        btn_to_support = new QPushButton(groupBox_Btn);
        btn_to_support->setObjectName(QStringLiteral("btn_to_support"));
        btn_to_support->setMinimumSize(QSize(100, 50));
        btn_to_support->setFocusPolicy(Qt::NoFocus);
        btn_to_support->setStyleSheet(QStringLiteral(""));

        verticalLayout_7->addWidget(btn_to_support);

        btn_to_moveit = new QPushButton(groupBox_Btn);
        btn_to_moveit->setObjectName(QStringLiteral("btn_to_moveit"));
        btn_to_moveit->setMinimumSize(QSize(100, 50));
        btn_to_moveit->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(btn_to_moveit);

        btn_to_rs = new QPushButton(groupBox_Btn);
        btn_to_rs->setObjectName(QStringLiteral("btn_to_rs"));
        btn_to_rs->setMinimumSize(QSize(100, 50));
        btn_to_rs->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(btn_to_rs);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_Btn);


        verticalLayout_8->addLayout(horizontalLayout_6);

        AsstMainWindow->setCentralWidget(centralWidget);

        retranslateUi(AsstMainWindow);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(AsstMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AsstMainWindow)
    {
        AsstMainWindow->setWindowTitle(QApplication::translate("AsstMainWindow", "AsstMainWindow", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AsstMainWindow", "1. \350\257\264\346\230\216", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AsstMainWindow", "2. Install ROS & ROS-Industrial", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("AsstMainWindow", "3. Create a Workspace", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("AsstMainWindow", "4. Install Package abb_driver", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("AsstMainWindow", "5. Create Support Package", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("AsstMainWindow", "6. Create MoveIt Config Package", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("AsstMainWindow", "7. Robot Studio \351\205\215\347\275\256Solution", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("AsstMainWindow", "\347\225\231\347\251\272", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("AsstMainWindow", "\347\225\231\347\251\272", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_title_1->setText(QApplication::translate("AsstMainWindow", "\350\257\264\346\230\216", 0));
        label_1_2->setText(QApplication::translate("AsstMainWindow", "\350\257\264\346\230\216\344\270\200\344\270\213\346\234\254\345\212\251\346\211\213\347\232\204\347\233\256\347\232\204\343\200\201\344\270\200\345\217\245\350\257\235\344\273\213\347\273\215\344\270\200\344\270\213ROS-I\345\222\214RS\343\200\201\344\275\277\347\224\250\347\232\204ROS\345\222\214RS\347\232\204\347\211\210\346\234\254\345\217\267\347\255\211", 0));
        label_1_3->setText(QApplication::translate("AsstMainWindow", "You can get its documents and 3D Models here:", 0));
        label_title_2->setText(QApplication::translate("AsstMainWindow", "Install ROS & ROS-Industrial", 0));
        commandLinkButton->setText(QApplication::translate("AsstMainWindow", "Next Step", 0));
        groupBox_2->setTitle(QString());
        checkBox->setText(QApplication::translate("AsstMainWindow", "I have installed ROS Indigo", 0));
        checkBox_16->setText(QApplication::translate("AsstMainWindow", "I have installed ROS-Industrial Indigo", 0));
        textBrowser_2->setHtml(QApplication::translate("AsstMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\">For the purpose of the itegration of ABB</span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-style:italic;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\">Robot and ROS-Industrial, a Linux-Ubuntu machine with </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600;\">ROS</span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\"> and </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600;\">R"
                        "OS-Industrial</span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\"> installed is required. Within the frame of this project, ROS Indigo Igloo is the selected ROS distribution release and is primarily targeted at the Ubuntu 14.04 LTS </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-style:italic;\">Trusty</span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\"> release.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans';\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\">If you have not yet installed the ROS </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; vertical-align:super;\">Indigo</span><span style=\" font-family:'DejaV"
                        "u Sans'; font-size:12pt; font-weight:600;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\">and ROS-I </span><span style=\" font-family:'DejaVu Sans'; font-size:12pt; font-weight:600; vertical-align:super;\">Indigo</span><span style=\" font-family:'DejaVu Sans'; font-size:12pt;\"> in your Ubuntu machine, you are able to click the right two buttons and follow the official guide to install them.</span></p></body></html>", 0));
        groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        btnToRosWiki->setToolTip(QApplication::translate("AsstMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Go To </span><span style=\" font-size:12pt; font-weight:600;\">Guide to Install </span><span style=\" font-size:12pt; font-weight:600;color:lightblue;\">ROS </span><span style=\" font-size:12pt; font-weight:600; vertical-align:super; color:lightblue;\">Indigo</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnToRosWiki->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnToRosiWiki->setToolTip(QApplication::translate("AsstMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Go To </span><span style=\" font-size:12pt; font-weight:600;\">Guide to Install </span><span style=\" font-size:12pt; font-weight:600;color:lightblue;\">ROS-Industrial </span><span style=\" font-size:12pt; font-weight:600; vertical-align:super; color:lightblue;\">Indigo</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btnToRosiWiki->setText(QString());
        label_title_3->setText(QApplication::translate("AsstMainWindow", "Create a Workspace", 0));
        commandLinkButton_3->setText(QApplication::translate("AsstMainWindow", "Next Step", 0));
        groupBox_3->setTitle(QString());
        checkBox_17->setText(QApplication::translate("AsstMainWindow", "I have created a catkin workspace", 0));
        textBrowser_3->setHtml(QApplication::translate("AsstMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">In the ROS distribution Indigo, we are using the </span><span style=\" font-size:12pt; font-style:italic;\">catkin</span><span style=\" font-size:12pt;\"> build system to build ROS packages. This build system is responsible for generating 'targets' (executable/libraries) from a raw source code that can be used by an end user. The first requirement in creating ROS packages is to create a ROS workspace. A catkin workspace is a folder where you modify, build, and install catkin packages. The right picture shows a typ"
                        "ical layout of a catkin workspace.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">If you have not yet create a workspace, you can click the button follows to read the official guide:</span></p></body></html>", 0));
        groupBox_4->setTitle(QString());
        textBrowser_5->setHtml(QApplication::translate("AsstMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/icon/attention.png\" style=\"float: left;\" /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:6pt;\"> </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\"> In order to simplify the process of the follow steps, we would here just name the workspace folder &quot;</span><span style"
                        "=\" font-size:12pt; font-weight:600;\">catkin_ws</span><span style=\" font-size:12pt;\">&quot; and it's location should be </span><span style=\" font-size:12pt; font-weight:600;\">/home/</span><span style=\" font-weight:600;\">&lt;username&gt;</span><span style=\" font-size:12pt;\">, so if you login as a root user, it may lead to unpredicted issues.</span></p></body></html>", 0));
        btnToRosCatkinWs->setText(QString());
        label_title_4->setText(QApplication::translate("AsstMainWindow", "Install Package abb_driver", 0));
        commandLinkButton_4->setText(QApplication::translate("AsstMainWindow", "Next Step", 0));
        groupBox_5->setTitle(QString());
        checkBox_18->setText(QApplication::translate("AsstMainWindow", "I have installed abb_driver into catkin_ws/src", 0));
        textBrowser_4->setHtml(QApplication::translate("AsstMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">The industrial robot driver package for ABB robot called abb_driver. This package is responsible for interfacing with ABB industrial robot controllers. The package contains industrial robot clients and launches the file to start communicating with the controller.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px;"
                        " margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">If you have not yet install abb_driver, now you have two ways to accomplish it: </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt;\">1. Click the &quot;</span><span style=\" font-size:12pt; font-weight:600; color:#21314e;\">Download Official </span><span style=\" font-size:12pt; font-weight:600; color:#ff5222;\">abb</span><span style=\" font-size:12pt; font-weight:600; color:#21314e;\"> Package</span><span style=\" font-size:12pt;\">&quot; button to download the whole abb packages (inclusive abb_driver) to </span><span style=\" font-size:12pt; font-weight:600;\">~/</span><span style=\" font-size:12pt;\">, and then you can copy it into </span><span style=\" font-size:12pt; font-weight:600;\">~/catkin_ws/src</span><span style=\" font-size:12pt;\"> .</s"
                        "pan></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:20px;\"><span style=\" font-size:12pt;\">2. Click the &quot;</span><span style=\" font-size:12pt; font-weight:600; color:#21314e;\">Local Install </span><span style=\" font-size:12pt; font-weight:600; color:#ff5222;\">abb_driver</span><span style=\" font-size:12pt;\">&quot; button to install abb_driver into </span><span style=\" font-size:12pt; font-weight:600;\">~/catkin_ws/src </span><span style=\" font-size:12pt;\">locally.</span></p></body></html>", 0));
        groupBox_6->setTitle(QString());
        btnToDldPkgAbb->setText(QString());
        btnToCpPkgAbbdriver->setText(QString());
        label_title_5->setText(QApplication::translate("AsstMainWindow", "Build Launch Files", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AsstMainWindow", "ABB IRB 120", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 1200", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 140", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 1410", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 1600", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 2400", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 260", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 2600", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 4400", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 460", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 4600", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 660", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 6620", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 6640", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 760", 0)
         << QApplication::translate("AsstMainWindow", "ABB IRB 8700", 0)
        );
        label_title_6->setText(QApplication::translate("AsstMainWindow", "Create MoveIt Config Package", 0));
        label_3_5->setText(QApplication::translate("AsstMainWindow", "Before creating the urdf file for this robot, let's create three folders called urdf,\n"
"meshes, and launch inside the package folder. The urdf folder can be used to keep the \n"
"urdf/xacro files that we are going to create. The meshes folder keeps the meshes that \n"
"we need to include in the urdf file and the launch folder keeps the ROS launch files.", 0));
        label_3_6->setText(QApplication::translate("AsstMainWindow", "$ catkin_create_pkg mastering_ros_robot_description_pkg roscpp tf \n"
"geometry_msgs urdf rviz xacro", 0));
        label_3_7->setText(QApplication::translate("AsstMainWindow", "Before creating the URDF file for the robot, let's create a ROS package in the catkin\n"
"workspace so that the robot model keeps using the following command:", 0));
        label_title_7->setText(QApplication::translate("AsstMainWindow", "Test", 0));
        label_title_8->setText(QApplication::translate("AsstMainWindow", "Prepair the RobotStudio", 0));
        label_title_9->setText(QApplication::translate("AsstMainWindow", "Execute Integration", 0));
        label->setText(QApplication::translate("AsstMainWindow", "Checklist:", 0));
        groupBox_ChLst_Ubt->setTitle(QApplication::translate("AsstMainWindow", "Ubuntu", 0));
        groupBox_ChLst_Prp->setTitle(QApplication::translate("AsstMainWindow", "Enviroment:", 0));
        checkBox_1->setText(QApplication::translate("AsstMainWindow", "Install ROS", 0));
        checkBox_2->setText(QApplication::translate("AsstMainWindow", "Install ROS-I", 0));
        checkBox_3->setText(QApplication::translate("AsstMainWindow", "Create Workspace: catkin_ws", 0));
        checkBox_4->setText(QApplication::translate("AsstMainWindow", "Add ABB Driver Package", 0));
        checkBox_5->setText(QApplication::translate("AsstMainWindow", "CheckBox", 0));
        groupBox_ChLst_Pkg->setTitle(QApplication::translate("AsstMainWindow", "ABB ROS-I Packages:", 0));
        checkBox_7->setText(QApplication::translate("AsstMainWindow", "Support Package", 0));
        checkBox_9->setText(QApplication::translate("AsstMainWindow", "MoveIt Config Package", 0));
        checkBox_8->setText(QApplication::translate("AsstMainWindow", "Create Workspace", 0));
        checkBox_10->setText(QApplication::translate("AsstMainWindow", "Add ABB Driver Package", 0));
        checkBox_6->setText(QApplication::translate("AsstMainWindow", "CheckBox", 0));
        groupBox_ChLst_Win->setTitle(QApplication::translate("AsstMainWindow", "Windows", 0));
        groupBox_ChLst_Rs->setTitle(QApplication::translate("AsstMainWindow", "RobotStudio Solution:", 0));
        checkBox_12->setText(QApplication::translate("AsstMainWindow", "Create Sloution", 0));
        checkBox_14->setText(QApplication::translate("AsstMainWindow", "Add RAPID", 0));
        checkBox_13->setText(QApplication::translate("AsstMainWindow", "Set Robot IP Address", 0));
        checkBox_15->setText(QApplication::translate("AsstMainWindow", "Add ABB Driver Package", 0));
        checkBox_11->setText(QApplication::translate("AsstMainWindow", "CheckBox", 0));
        groupBox_Btn->setTitle(QString());
        btn_to_support->setText(QApplication::translate("AsstMainWindow", "Create Support Pkg", 0));
        btn_to_moveit->setText(QApplication::translate("AsstMainWindow", "Create MoveIt! Pkg", 0));
        btn_to_rs->setText(QApplication::translate("AsstMainWindow", "Create Solution in RS", 0));
    } // retranslateUi

};

namespace Ui {
    class AsstMainWindow: public Ui_AsstMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSTMAINWINDOW_H
