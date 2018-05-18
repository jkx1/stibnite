// Copyright (c) 2018 Jan Kowalewicz.

#ifndef TRANSLATE_H
#define TRANSLATE_H

#include <QString>

class Translator
{
public:
	explicit Translator(const QString &fullPath);
	~Translator();
	
	/*
	 * Returns a specific word based on a keyword.
	 */
	QString getWord(const QString &keyword);
	
	/*
	 * The language file full path.
	 */
	QString languageFilePath;
};

#endif // TRANSLATE_H
