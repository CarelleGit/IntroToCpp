#pragma once


struct piggyBank
{
	int dollar;
	int dollar2;
	int dollar5;
	int quarter;
	int dime;
	int nickel;
	int pennie;
};
float calcDollars(piggyBank bank);
float calcCoins(piggyBank bank);
float calcTotal(piggyBank bank);
