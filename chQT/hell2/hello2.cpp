#include<QApplication>
#include<QTextEdit>
#include<QPushButton>
#include<QVBoxLayout>

int main(int argc,char** argv)
{
	QApplication a(argc,argv);
	QTextEdit *edit = new QTextEdit();
	QPushButton *button = new QPushButton("quit");

	QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));


	QVBoxLayout *l = new QVBoxLayout;
	l->addWidget(edit);
	l->addWidget(button);

	QWidget w;
	w.setLayout(l);
	w.show();

	return a.exec();

}
