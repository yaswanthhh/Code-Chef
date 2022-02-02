#include <iostream>
using namespace std;

int main() 
{
	float withdraw_amount;
	float balance;

	cin>>withdraw_amount>>balance;

	if((int)withdraw_amount % 5 == 0 && balance - withdraw_amount - 0.5 >= 0)
	{
		balance -= withdraw_amount + 0.5;
	}

	cout<<balance;
}
