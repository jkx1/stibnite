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
		// TODO: Die Datei existiert nicht. Normalerweise müsste
		// hier komplett abschmieren. Eine Möglichkeit wäre automatisch
		// Englisch (English:EN_US) auszuwählen. Fehler in eine Log-Datei schreiben?
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
			if (!line.contains(keyword, Qt::CaseSensitive))
			{
				// TODO: Fallback? Das Keyword ist falsch oder nicht
				// existent. Fehler in eine Log-Datei schreiben?
			}
			else
			{
				QString _keyword(keyword + " = ");
				int keywordPos = line.indexOf(_keyword);
				if (keywordPos >= 0)
				{
					return line.mid(keywordPos + _keyword.length());
				}
			}
		}
	}
	return keyword; // => Fallback.
}
