// s²
// Copyright (c) 2018 Jan Kowalewicz.

#ifndef S2OBJECT_H
#define S2OBJECT_H

#include <QString>

namespace s2lang
{
	class S2Object
	{
	public:
		explicit S2Object(const QString &_objectName);
		~S2Object();
		
		int setEvalRank(int rank);
		
		void assignParams(const QString &_paramCode);
		
		QString objectName;
		QString paramCode;
		
		// TODO: Funktionen zum ausgeben der Werte => für Editor.
	};
} // namespace

#endif // S2OBJECT_H
