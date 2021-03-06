#ifndef __HighCreditAccount_h__
#define __HighCreditAccount_h__
#include "Account.h"

class HighCreditAccount :public Account
{
private:
	double ratio;
	int cre;
public:
	HighCreditAccount(String accid,int money, String name, double r, int c);
	virtual void GetDeposit(int m);
	virtual void GetCheckInfo();
};

#endif