#include "Bank.h"
#include<iostream>


float calcDollars(piggyBank bank)
{
	int total;
	total = (bank.dollar) + (bank.dollar2 * 2) + (bank.dollar5 * 5);
 


	return total;
}

float calcCoins(piggyBank bank)
{    
	int total;
	total = (bank.dime * 10) + (bank.nickel * 5) + (bank.pennie) + (bank.quarter * 25);
	return total;
}

float calcTotal(piggyBank bank)
{ 
	return (calcCoins(bank) / 100) + calcDollars(bank);
}
