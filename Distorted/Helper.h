#pragma once
#include <string>

void nameInput(std::string & UserInput);
void Gender(std::string & Input1, std::string & Input2, std::string & Input3);
void askInput(std::string &Name, std::string &gender, std::string &gender2, std::string &gender3);
void Clearing();
void pausing();
void MainMenu(std::string & Name, std::string & gender, std::string & gender2, std::string & gender3);
int diceRoll(int dice, int side);
void DelayText(int millisec, char word[]);