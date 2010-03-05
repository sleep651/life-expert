/*
========================================================================
 Name        : MainGridContainer.cpp
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#include <aknviewappui.h>
#include <eikappui.h>
#include <life_expert.rsg>

#include "MainGridContainer.h"
#include "MainGridContainerView.h"
#include "life_expert.hrh"

/**
 * First phase of Symbian two-phase construction. Should not 
 * contain any code that could leave.
 */
CMainGridContainer::CMainGridContainer()
	{
	}
/** 
 * Destroy child controls.
 */
CMainGridContainer::~CMainGridContainer()
	{
	}
				
/**
 * Construct the control (first phase).
 *  Creates an instance and initializes it.
 *  Instance is not left on cleanup stack.
 * @param aRect bounding rectangle
 * @param aParent owning parent, or NULL
 * @param aCommandObserver command observer
 * @return initialized instance of CMainGridContainer
 */
CMainGridContainer* CMainGridContainer::NewL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	CMainGridContainer* self = CMainGridContainer::NewLC( 
			aRect, 
			aParent, 
			aCommandObserver );
	CleanupStack::Pop( self );
	return self;
	}

/**
 * Construct the control (first phase).
 *  Creates an instance and initializes it.
 *  Instance is left on cleanup stack.
 * @param aRect The rectangle for this window
 * @param aParent owning parent, or NULL
 * @param aCommandObserver command observer
 * @return new instance of CMainGridContainer
 */
CMainGridContainer* CMainGridContainer::NewLC( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	CMainGridContainer* self = new ( ELeave ) CMainGridContainer();
	CleanupStack::PushL( self );
	self->ConstructL( aRect, aParent, aCommandObserver );
	return self;
	}
			
/**
 * Construct the control (second phase).
 *  Creates a window to contain the controls and activates it.
 * @param aRect bounding rectangle
 * @param aCommandObserver command observer
 * @param aParent owning parent, or NULL
 */ 
void CMainGridContainer::ConstructL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver )
	{
	if ( aParent == NULL )
	    {
		CreateWindowL();
	    }
	else
	    {
	    SetContainerWindowL( *aParent );
	    }
	iFocusControl = NULL;
	iCommandObserver = aCommandObserver;
	InitializeControlsL();
	SetRect( aRect );
	ActivateL();
	}
			
/**
* Return the number of controls in the container (override)
* @return count
*/
TInt CMainGridContainer::CountComponentControls() const
	{
	return ( int ) ELastControl;
	}
				
/**
* Get the control with the given index (override)
* @param aIndex Control index [0...n) (limited by #CountComponentControls)
* @return Pointer to control
*/
CCoeControl* CMainGridContainer::ComponentControl( TInt aIndex ) const
	{
	switch ( aIndex )
		{
		}
	
	return NULL;
	}
				
/**
 *	Handle resizing of the container. This implementation will lay out
 *  full-sized controls like list boxes for any screen size, and will layout
 *  labels, editors, etc. to the size they were given in the UI designer.
 *  This code will need to be modified to adjust arbitrary controls to
 *  any screen size.
 */				
void CMainGridContainer::SizeChanged()
	{
	CCoeControl::SizeChanged();
	LayoutControls();
	}
				
/**
 * Layout components as specified in the UI Designer
 */
void CMainGridContainer::LayoutControls()
	{
	}

/**
 *	Handle key events.
 */				
TKeyResponse CMainGridContainer::OfferKeyEventL( 
		const TKeyEvent& aKeyEvent, 
		TEventCode aType )
	{
	if ( iFocusControl != NULL
		&& iFocusControl->OfferKeyEventL( aKeyEvent, aType ) == EKeyWasConsumed )
		{
		return EKeyWasConsumed;
		}
	return CCoeControl::OfferKeyEventL( aKeyEvent, aType );
	}
				
/**
 *	Initialize each control upon creation.
 */				
void CMainGridContainer::InitializeControlsL()
	{
	
	}

/** 
 * Handle global resource changes, such as scalable UI or skin events (override)
 */
void CMainGridContainer::HandleResourceChange( TInt aType )
	{
	CCoeControl::HandleResourceChange( aType );
	SetRect( iAvkonViewAppUi->View( TUid::Uid( EMainGridContainerViewId ) )->ClientRect() );
	}
				
/**
 *	Draw container contents.
 */				
void CMainGridContainer::Draw( const TRect& aRect ) const
	{
	CWindowGc& gc = SystemGc();
	gc.Clear( aRect );
	
	}
				
