/*
========================================================================
 Name        : life_expertApplication.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef LIFE_EXPERTAPPLICATION_H
#define LIFE_EXPERTAPPLICATION_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknapp.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Constants]
const TUid KUidlife_expertApplication = { 0xED494E10 };
// ]]] end generated region [Generated Constants]

/**
 *
 * @class	Clife_expertApplication life_expertApplication.h
 * @brief	A CAknApplication-derived class is required by the S60 application 
 *          framework. It is subclassed to create the application's document 
 *          object.
 */
class Clife_expertApplication : public CAknApplication
	{
private:
	TUid AppDllUid() const;
	CApaDocument* CreateDocumentL();
	
	};
			
#endif // LIFE_EXPERTAPPLICATION_H		
