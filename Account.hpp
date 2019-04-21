#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;

class deposit_account
{
private:
	char* owner_name;
protected:
	double cash_amount;

public:
	deposit_account();
	deposit_account(const char* name, double amount);
	~deposit_account();

	void output() const;
	void input();
};

