/*
========================================================================
 Name        : MobileNumberOwnerContainerView.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef MOBILENUMBEROWNERCONTAINERVIEW_H
#define MOBILENUMBEROWNERCONTAINERVIEW_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknview.h>
// ]]] end generated region [Generated Includes]


// [[[ begin [Event Handler Includes]
// ]]] end [Event Handler Includes]

// [[[ begin generated region: do not modify [Generated Constants]
// ]]] end generated region [Generated Constants]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CMobileNumberOwnerContainer;
// ]]] end generated region [Generated Forward Declarations]

/**
 * Avkon view class for MobileNumberOwnerContainerView. It is register with the view server
 * by the AppUi. It owns the container control.
 * @class	CMobileNumberOwnerContainerView MobileNumberOwnerContainerView.h
 */						
			
class CMobileNumberOwnerContainerView : public CAknView
	{
	
	
	// [[[ begin [Public Section]
public:
	// constructors and destructor
	CMobileNumberOwnerContainerView();
	static CMobileNumberOwnerContainerView* NewL();
	static CMobileNumberOwnerContainerView* NewLC();        
	void ConstructL();
	virtual ~CMobileNumberOwnerContainerView();
						
	// from base class CAknView
	TUid Id() const;
	void HandleCommandL( TInt aCommand );
	
	// [[[ begin generated region: do not modify [Generated Methods]
	CMobileNumberOwnerContainer* CreateContainerL();
	// ]]] end generated region [Generated Methods]
	
	// ]]] end [Public Section]
	
	
	// [[[ begin [Protected Section]
protected:
	// from base class CAknView
	void DoActivateL(
		const TVwsViewId& aPrevViewId,
		TUid aCustomMessageId,
		const TDesC8& aCustomMessage );
	void DoDeactivate();
	void HandleStatusPaneSizeChange();
	
	// [[[ begin generated region: do not modify [Overridden Methods]
	// ]]] end generated region [Overridden Methods]
	
	
	// [[[ begin [User Handlers]
	// ]]] end [User Handlers]
	
	// ]]] end [Protected Section]
	
	
	// [[[ begin [Private Section]
private:
	void SetupStatusPaneL();
	void CleanupStatusPane();
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
	CMobileNumberOwnerContainer* iMobileNumberOwnerContainer;
	// ]]] end generated region [Generated Instance Variables]
	
	// [[[ begin generated region: do not modify [Generated Methods]
	// ]]] end generated region [Generated Methods]
	
	// ]]] end [Private Section]
	
	};

#endif // MOBILENUMBEROWNERCONTAINERVIEW_H
