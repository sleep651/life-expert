/*
========================================================================
 Name        : life_expertDocument.cpp
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
// [[[ begin generated region: do not modify [Generated User Includes]
#include "life_expertDocument.h"
#include "life_expertAppUi.h"
// ]]] end generated region [Generated User Includes]

/**
 * @brief Constructs the document class for the application.
 * @param anApplication the application instance
 */
Clife_expertDocument::Clife_expertDocument( CEikApplication& anApplication )
	: CAknDocument( anApplication )
	{
	}

/**
 * @brief Completes the second phase of Symbian object construction. 
 * Put initialization code that could leave here.  
 */ 
void Clife_expertDocument::ConstructL()
	{
	}
	
/**
 * Symbian OS two-phase constructor.
 *
 * Creates an instance of Clife_expertDocument, constructs it, and
 * returns it.
 *
 * @param aApp the application instance
 * @return the new Clife_expertDocument
 */
Clife_expertDocument* Clife_expertDocument::NewL( CEikApplication& aApp )
	{
	Clife_expertDocument* self = new ( ELeave ) Clife_expertDocument( aApp );
	CleanupStack::PushL( self );
	self->ConstructL();
	CleanupStack::Pop( self );
	return self;
	}

/**
 * @brief Creates the application UI object for this document.
 * @return the new instance
 */	
CEikAppUi* Clife_expertDocument::CreateAppUiL()
	{
	return new ( ELeave ) Clife_expertAppUi;
	}
				
