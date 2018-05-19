// Copyright (c) 2018 Jan Kowalewicz.

#include "translate.h"

#include <QString>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>

Translator::Translator(const QString &fullPath) : languageFilePath(fullPath)
{
	QFileInfo fi(fullPath);
	if (!fi.exists())
	{
		//languageFilePath = ":/strings/en_US.lang";
		// TODO: In Log-Datei schreiben.
	}
}

Translator::~Translator() { }

QString Translator::getWord(const QString &keyword)
{
	QFile f(languageFilePath);
	if (f.open(QIODevice::ReadOnly))
	{
		QTextStream in(&f);
		while (!in.atEnd())
		{
			QString line = in.readLine();
			QString _keyword(keyword + " = ");
			int keywordPos = line.indexOf(_keyword);
			if (keywordPos >= 0)
			{
				return line.mid(keywordPos + _keyword.length());
			}
		}
	}
	return keyword; // => Fallback.
}
