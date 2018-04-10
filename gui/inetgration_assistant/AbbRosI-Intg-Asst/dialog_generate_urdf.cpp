#include "dialog_generate_urdf.h"
#include "ui_dialog_generate_urdf.h"

#include <QFile>
#include <QXmlStreamWriter>
#include <QDomDocument>
#include <qdebug.h>//找bug用的输出工具，正式时可以去除

Dialog_Generate_URDF::Dialog_Generate_URDF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Generate_URDF)
{
    ui->setupUi(this);

    ui->lineEdit_bl_origin->setPlaceholderText("for example: -0.070 0 -0.352");
}

Dialog_Generate_URDF::~Dialog_Generate_URDF()
{
    delete ui;
}

void Dialog_Generate_URDF::writeXML() {
    QString strFile("../test_urdf.xml");
    QFile file(strFile);
    if (!file.open(QFile::WriteOnly | QFile::Text)) { // 只写模式打开文件
        qDebug() << QString("Cannot write file %1(%2).").arg(strFile).arg(file.errorString());
        return;
    }

    QDomDocument doc;

    QXmlStreamWriter writer(&file);
    // writer.setCodec("GBK");  // XML 编码
    writer.setAutoFormatting(true); // 自动格式化
    writer.writeStartDocument("1.0", true);  // 开始文档（XML 声明）
    //writer.writeProcessingInstruction("xml-stylesheet type=\"text/css\" href=\"style.css\"");  // 处理指令

    // DTD
    writer.writeStartElement("robot");  // 开始根元素 <robot>
    writer.writeAttribute("xmlns:xacro", "http://ros.org/wiki/xacro");

    writer.writeStartElement("xacro:include");  // 开始子元素 <xacro:include>
    writer.writeAttribute("filename", "$(find abb_resources)/urdf/common_materials.xacro");
    writer.writeEndElement();  // 结束子元素 </xacro:include>

    writer.writeStartElement("xacro:macro");  // 开始子元素 <xacro:macro>
    writer.writeComment(QString::fromLocal8Bit(" link list "));  // 注释

    writer.writeStartElement("link");  // 开始子元素 <link>//base link
    writer.writeAttribute("name", "${prefix}base_link");
    writer.writeStartElement("visual");  // 开始子元素 <visual>
    writer.writeStartElement("origin");  // 开始子元素 <origin>
    writer.writeAttribute("xyz", "0 0 0");
    writer.writeAttribute("rpy", "0 0 0");
    writer.writeEndElement();  // 结束根元素 </origin>
    writer.writeEndElement();  // 结束根元素 </visual>
    writer.writeEndElement();  // 结束根元素 </link>

    //writer.writeTextElement(QString::fromLocal8Bit("作者"), QString::fromLocal8Bit("一去丶二三里"));

    writer.writeEndElement();  // 结束子元素 </xacro:macro>

    writer.writeEndElement();  // 结束根元素 </robot>
    writer.writeEndDocument();  // 结束文档

    file.close();  // 关闭文件
}

void Dialog_Generate_URDF::on_pushButton_generate_xacro_clicked()
{
    Dialog_Generate_URDF::writeXML();
}
