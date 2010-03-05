/*
========================================================================
 Name        : life_expertDocument.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef LIFE_EXPERTDOCUMENT_H
#define LIFE_EXPERTDOCUMENT_H

#include <akndoc.h>
		
class CEikAppUi;

/**
* @class	Clife_expertDocument life_expertDocument.h
* @brief	A CAknDocument-derived class is required by the S60 application 
*           framework. It is responsible for creating the AppUi object. 
*/
class Clife_expertDocument : public CAknDocument
	{
public: 
	// constructor
	static Clife_expertDocument* NewL( CEikApplication& aApp );

private: 
	// constructors
	Clife_expertDocument( CEikApplication& aApp );
	void ConstructL();
	
public: 
	// from base class CEikDocument
	CEikAppUi* CreateAppUiL();
	};
#endif // LIFE_EXPERTDOCUMENT_H
