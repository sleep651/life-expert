
#ifndef LIFE_EXPERT_PAN_H
#define LIFE_EXPERT_PAN_H

/** life_expert application panic codes */
enum Tlife_expertPanics
	{
	Elife_expertUi = 1
	// add further panics here
	};

inline void Panic(Tlife_expertPanics aReason)
	{
	_LIT(applicationName,"life_expert");
	User::Panic(applicationName, aReason);
	}

#endif // LIFE_EXPERT_PAN_H
