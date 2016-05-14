#include<iostream>

using namespace std;

class account
{
	private:
		int money;
		string username[20];
		int password;
		
	public:
		void account(string name,int curcash,int pin);
		int balancerequiry(void);
		void increase(int amount);
		void decrease(int amount);
};

account::account(string name,int curcash,int pin)
{
	
}

class Atm
{
	public:
		void transfer(account1,account2,int amount);
		int withdraw(int amount,account,int pin);
		int paybill(int amount,account,int pin);
		string bankstatement(account);
};
