/*
========================================================================
 Name        : SettingContainer.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef SETTINGCONTAINER_H
#define SETTINGCONTAINER_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <coecntrl.h>		
// ]]] end generated region [Generated Includes]


// [[[ begin [Event Handler Includes]
// ]]] end [Event Handler Includes]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class MEikCommandObserver;		
// ]]] end generated region [Generated Forward Declarations]

/**
 * Container class for SettingContainer
 * 
 * @class	CSettingContainer SettingContainer.h
 */
class CSettingContainer : public CCoeControl
	{
public:
	// constructors and destructor
	CSettingContainer();
	static CSettingContainer* NewL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	static CSettingContainer* NewLC( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	void ConstructL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	virtual ~CSettingContainer();

public:
	// from base class CCoeControl
	TInt CountComponentControls() const;
	CCoeControl* ComponentControl( TInt aIndex ) const;
	TKeyResponse OfferKeyEventL( 
			const TKeyEvent& aKeyEvent, 
			TEventCode aType );
	void HandleResourceChange( TInt aType );
	
protected:
	// from base class CCoeControl
	void SizeChanged();

private:
	// from base class CCoeControl
	void Draw( const TRect& aRect ) const;

private:
	void InitializeControlsL();
	void LayoutControls();
	CCoeControl* iFocusControl;
	MEikCommandObserver* iCommandObserver;
	// [[[ begin generated region: do not modify [Generated Methods]
public: 
	// ]]] end generated region [Generated Methods]
	
	// [[[ begin generated region: do not modify [Generated Type Declarations]
public: 
	// ]]] end generated region [Generated Type Declarations]
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
private: 
	// ]]] end generated region [Generated Instance Variables]
	
	
	// [[[ begin [Overridden Methods]
protected: 
	// ]]] end [Overridden Methods]
	
	
	// [[[ begin [User Handlers]
protected: 
	// ]]] end [User Handlers]
	
public: 
	enum TControls
		{
		// [[[ begin generated region: do not modify [Generated Contents]
		
		// ]]] end generated region [Generated Contents]
		
		// add any user-defined entries here...
		
		ELastControl
		};
	};
				
#endif // SETTINGCONTAINER_H
