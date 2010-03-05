/*
========================================================================
 Name        : life_expertAppUi.h
 Author      : ZhangJiawei
 Copyright   : 
 Description : 
========================================================================
*/
#ifndef LIFE_EXPERTAPPUI_H
#define LIFE_EXPERTAPPUI_H

// [[[ begin generated region: do not modify [Generated Includes]
#include <aknviewappui.h>
// ]]] end generated region [Generated Includes]

// [[[ begin generated region: do not modify [Generated Forward Declarations]
class CMainGridContainerView;
class CMobileNumberOwnerContainerView;
class CWeatherReportContainerView;
class CSettingContainerView;
// ]]] end generated region [Generated Forward Declarations]

/**
 * @class	Clife_expertAppUi life_expertAppUi.h
 * @brief The AppUi class handles application-wide aspects of the user interface, including
 *        view management and the default menu, control pane, and status pane.
 */
class Clife_expertAppUi : public CAknViewAppUi
	{
public: 
	// constructor and destructor
	Clife_expertAppUi();
	virtual ~Clife_expertAppUi();
	void ConstructL();

public:
	// from CCoeAppUi
	TKeyResponse HandleKeyEventL(
				const TKeyEvent& aKeyEvent,
				TEventCode aType );

	// from CEikAppUi
	void HandleCommandL( TInt aCommand );
	void HandleResourceChangeL( TInt aType );

	// from CAknAppUi
	void HandleViewDeactivation( 
			const TVwsViewId& aViewIdToBeDeactivated, 
			const TVwsViewId& aNewlyActivatedViewId );

private:
	void InitializeContainersL();
	// [[[ begin generated region: do not modify [Generated Methods]
public: 
	// ]]] end generated region [Generated Methods]
	
	// [[[ begin generated region: do not modify [Generated Instance Variables]
private: 
	CMainGridContainerView* iMainGridContainerView;
	CMobileNumberOwnerContainerView* iMobileNumberOwnerContainerView;
	CWeatherReportContainerView* iWeatherReportContainerView;
	CSettingContainerView* iSettingContainerView;
	// ]]] end generated region [Generated Instance Variables]
	
	
	// [[[ begin [User Handlers]
protected: 
	// ]]] end [User Handlers]
	
	};

#endif // LIFE_EXPERTAPPUI_H			
