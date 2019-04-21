#pragma once
#include"Account.hpp"

class percent_account : public deposit_account
{
private:
	int term_month;
	double rate_year;
public:
	percent_account();
	percent_account(const char * name, double amount,int term, double rate);
	void output();
	void input();
	double percent_sum();

};


void sort_desc(percent_account** list, int count);
