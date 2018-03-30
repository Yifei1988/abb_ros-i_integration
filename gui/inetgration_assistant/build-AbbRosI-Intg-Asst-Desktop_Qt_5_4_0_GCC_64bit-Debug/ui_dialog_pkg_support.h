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
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label_title_1;
    QLabel *label_1_2;
    QLabel *label_1_3;
    QTextBrowser *textBrowser;
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
    QLabel *label_title_7;
    QWidget *page_8;
    QLabel *label_title_8;
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
        Dialog_Pkg_Support->resize(1000, 720);
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
        verticalLayout_5 = new QVBoxLayout(Dialog_Pkg_Support);
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
        listWidget->setMinimumSize(QSize(256, 400));
        listWidget->setStyleSheet(QStringLiteral("font: 12pt \"Ubuntu\";"));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(Dialog_Pkg_Support);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
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

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_5->addLayout(horizontalLayout);

        line = new QFrame(Dialog_Pkg_Support);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        label = new QLabel(Dialog_Pkg_Support);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 16pt \"Ubuntu\";\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(label);

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
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 5, -1, -1);
        groupBox_ChLst_Prp = new QGroupBox(groupBox_ChLst_Ubt);
        groupBox_ChLst_Prp->setObjectName(QStringLiteral("groupBox_ChLst_Prp"));
        groupBox_ChLst_Prp->setMinimumSize(QSize(221, 181));
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
        groupBox_ChLst_Pkg->setMinimumSize(QSize(221, 181));
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
        groupBox_Btn->setMinimumSize(QSize(213, 235));
        groupBox_Btn->setMaximumSize(QSize(213, 235));
        groupBox_Btn->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 3px solid silver;\n"
"    border-radius: 6px;\n"
"    background-color: gray;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    font-weight: bold;\n"
" }\n"
" QPushButton:pressed {\n"
"	background-color: rgb(240, 120, 70);\n"
"    color: black;\n"
"    border: 3px solid black;\n"
" }"));
        gridLayout = new QGridLayout(groupBox_Btn);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(15, 0, 15, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        pushButton_1 = new QPushButton(groupBox_Btn);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(100, 50));

        verticalLayout_7->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(groupBox_Btn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 50));

        verticalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_Btn);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 50));

        verticalLayout_7->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);


        horizontalLayout_6->addWidget(groupBox_Btn);


        verticalLayout_5->addLayout(horizontalLayout_6);


        retranslateUi(Dialog_Pkg_Support);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(Dialog_Pkg_Support);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Pkg_Support)
    {
        Dialog_Pkg_Support->setWindowTitle(QApplication::translate("Dialog_Pkg_Support", "Dialog", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog_Pkg_Support", "1. Get Models from Robot Studio", 0));
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

        label_title_1->setText(QApplication::translate("Dialog_Pkg_Support", "\350\257\264\346\230\216", 0));
        label_1_2->setText(QApplication::translate("Dialog_Pkg_Support", "\350\257\264\346\230\216\344\270\200\344\270\213\346\234\254\345\212\251\346\211\213\347\232\204\347\233\256\347\232\204\343\200\201\344\270\200\345\217\245\350\257\235\344\273\213\347\273\215\344\270\200\344\270\213ROS-I\345\222\214RS\343\200\201\344\275\277\347\224\250\347\232\204ROS\345\222\214RS\347\232\204\347\211\210\346\234\254\345\217\267\347\255\211", 0));
        label_1_3->setText(QApplication::translate("Dialog_Pkg_Support", "You can get its documents and 3D Models here:", 0));
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
        label_title_7->setText(QApplication::translate("Dialog_Pkg_Support", "Test", 0));
        label_title_8->setText(QApplication::translate("Dialog_Pkg_Support", "Prepair the RobotStudio", 0));
        label->setText(QApplication::translate("Dialog_Pkg_Support", "Checklist:", 0));
        groupBox_ChLst_Ubt->setTitle(QApplication::translate("Dialog_Pkg_Support", "Support Package", 0));
        groupBox_ChLst_Prp->setTitle(QApplication::translate("Dialog_Pkg_Support", "Meshes & URDF:", 0));
        checkBox_1->setText(QApplication::translate("Dialog_Pkg_Support", "Install ROS", 0));
        checkBox_2->setText(QApplication::translate("Dialog_Pkg_Support", "Install ROS-I", 0));
        checkBox_3->setText(QApplication::translate("Dialog_Pkg_Support", "Create Workspace", 0));
        checkBox_4->setText(QApplication::translate("Dialog_Pkg_Support", "Add ABB Driver Package", 0));
        checkBox_5->setText(QApplication::translate("Dialog_Pkg_Support", "CheckBox", 0));
        groupBox_ChLst_Pkg->setTitle(QApplication::translate("Dialog_Pkg_Support", "Config & Launch:", 0));
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
