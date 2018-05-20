// s²
// Copyright (c) 2018 Jan Kowalewicz.

#include "s2object.h"

#include <QString>

using namespace s2lang;
namespace s2lang
{
	S2Object::S2Object(const QString &_objectName) : objectName(_objectName)
	{
	}
	
	S2Object::~S2Object()
	{
	}
	
	int S2Object::setEvalRank(int rank)
	{
		return rank;
	}
	
	void S2Object::assignParams(const QString &_paramCode)
	{
		// TODO: Hinzufügen einer Möglichkeit diese Operation
		// anzeigen zu lassen.
		paramCode = _paramCode;
	}
}
