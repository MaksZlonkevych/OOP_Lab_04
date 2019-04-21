#include"PercentAccount.hpp"

int main()
{
		//deposit_account da("ivanov", 2500.00);
		//deposit_account da1;
		//da1.input();
		//da.output();
		//da1.output();
		//percent_account pa;//("petrov", 15000.00, 24, 15);
		//pa.input();
		//pa.output();
	int account_number;
	const int most_number = 1;
	cout << "amount of accounts:\t";
	cin >> account_number;
	cin.ignore(1);
	percent_account** account_list = new percent_account*[account_number];
	for (size_t i = 0; i < account_number; i++)
	{
		account_list[i] = new percent_account();
		account_list[i]->input();
	}
	system("cls");
	for (size_t i = 0; i < account_number; i++)
	{
		account_list[i]->output();
		cout << "______________________________________" << endl;
	}
	sort_desc(account_list, account_number);
	cout << "\n\nafter sort:\t"<<endl;
	for (size_t i = 0; i < account_number; i++)
	{
		account_list[i]->output();
		cout << "______________________________________" << endl;
	}
	cout << "\n\nmost profitable accounts:" << endl;
	for (size_t i = 0; i < most_number; i++)
	{
		account_list[i]->output();
	}
	
	system("pause>void");
		return 0;
}