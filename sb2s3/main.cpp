// JUST A BOILERPLATE!!!

#include "translate.h"

#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QMainWindow window;
	
	Translator *t = new Translator("/projects/stibnite-src/testing/test.language");
	QString title = t->getWord("test1");
	
	window.setWindowTitle(title);
	window.show();
	return app.exec();
}
