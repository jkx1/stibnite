// JUST A BOILERPLATE!!!

#include "translate.h"

#include "s2lang/s2object.h"

#include <QApplication>
#include <QMainWindow>

using namespace s2lang;

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QMainWindow window;
	
	Translator *t = new Translator("/projects/stibnite-src/testing/test.lang");
	QString title = t->getWord("test2");
	
	S2Object *object = new S2Object("_OBJECT_1");
	object->setEvalRank(1);
	object->assignParams("[1, 2, 3]");
	
	window.setWindowTitle(title);
	window.show();
	return app.exec();
}
