/*
========================================================================
 Name        : MainGridContainer.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef MAINGRIDCONTAINER_H
#define MAINGRIDCONTAINER_H

#include <coecntrl.h>		

class MEikCommandObserver;		

/**
 * Container class for MainGridContainer
 * 
 * @class	CMainGridContainer MainGridContainer.h
 */
class CMainGridContainer : public CCoeControl
	{
public:
	// constructors and destructor
	CMainGridContainer();
	static CMainGridContainer* NewL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	static CMainGridContainer* NewLC( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	void ConstructL( 
		const TRect& aRect, 
		const CCoeControl* aParent, 
		MEikCommandObserver* aCommandObserver );
	virtual ~CMainGridContainer();

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
	
public: 
	enum TControls
		{
		ELastControl
		};
	};
				
#endif // MAINGRIDCONTAINER_H
