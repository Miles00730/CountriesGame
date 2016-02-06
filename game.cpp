#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

static int Player1ChosenCountrynum;
static int Player2ChosenCountrynum;
static int Player3ChosenCountrynum;
static int Player4ChosenCountrynum;
static int numberofplayers;



 void Chancedie() {
    int Rand;
	srand (time(NULL));
	Rand = rand() % 1 + 1;
	switch(Rand){
	case 1: cout << endl; cout << "ChanceDie: Nothing happens " << endl ; cout << endl;
	case 2: ; break;
	case 3: ; break;
	case 4: ; break;
	case 5: ; break;
	case 6: ; break;
	case 7: ; break;
	case 8: ; break;
	case 9: ; break;
	case 10: ; break;
	case 11: ; break;
	case 12: ; break;
	case 13: ; break;
	case 14: ; break;
	case 15: ; break;
	case 16: ; break;
	case 17: ; break;
	case 18: ; break;
	case 19: ; break;
	case 20: ; break;
	case 21: ; break;
	case 22: ; break;
	case 23: ; break;
	case 24: ; break;
	case 25: ; break;
	case 26: ; break;
	case 27: ; break;
	case 28: ; break;
	case 29: ; break;
	case 30: ; break;
	case 31: ; break;
	case 32: ; break;
	case 33: ; break;
	case 34: ; break;
	case 35: ; break;
	case 36: ; break;
	case 37: ; break;
	case 38: ; break;
	case 39: ; break;
	case 40: ; break;
 }
 }
 void Player1Turn(){
   cout << endl;
   cout << "Player one's turn" << endl;
    Chancedie();
    int commandScanner;
	cout << "Input a number corresponding to the command: " << endl;
	cout << "List of Commands: " << endl;
	cout << endl;
	cout << "1) Attack another region" << endl;
	cout << "2) Build a building" << endl;
    cout << "3) Create Unit" << endl;
	cout << "4) Check resources & needs " << endl;
	cout << "5) Trade " << endl;
    cout << "6) Research map " << endl;
	cout << "7) Pass" << endl;
	cout << "8) " << endl;
    cout << "9) " << endl;
	cout << "10) " << endl;
	cout << "11) " << endl;
    cout << "12) " << endl;
	cout << "13) " << endl;
	cout << "14) " << endl;
    cout << "15)Next Turn " << endl;
	cin >> commandScanner;
	switch(commandScanner) {
	case 1: ;
	case 2: ;
	case 3: ;
	case 4: ;
	case 5: ;
	case 6: ;
	case 7: ;
	case 8: ;
	case 9: ;
	case 10: ;
	case 11: ;
	case 12: ;
    case 13: ;
	case 14: ;
	case 15: ;

	}
}

void Player2Turn(){
	Chancedie();
}
void Player3Turn(){
	Chancedie();
}

void Player4Turn(){
	Chancedie();
}

void France(){
}
void UnitedStates(){
}
void China(){
}
void Spain(){
}
void Italy(){
}
void Turkey(){
}
void UnitedKingdom(){
}
void Russia(){
}
void Germany(){
}
void Malaysia(){
}
void Mexico(){
}
void Argentina(){
}
void Thailand(){
}
void Ukraine(){
}
void SaudiArbaia (){
}
void Greece(){
}
void Canada(){
}
void Poland(){
}
void Norway(){
}
void Sweden(){
}
void Finland(){
}
void Mongolia(){
}
void Japan(){
}
void India(){
}
void Brazil(){
}

int main() {

int turn = 1;
string turnScanner;
string turnScanner1;

do {


cout << "Enter the number of players" << endl;
cin >> numberofplayers;
} while(numberofplayers > 4);

  if(numberofplayers == 3){
	void playerresources3();
}
if(numberofplayers == 4){
	void playerresources3();
	void playerresources4();
}


	bool Country;
	do{
	cout << "Player one choose which region you would like to start with: " << endl;
	cin >> Player1ChosenCountrynum;
		switch(Player1ChosenCountrynum){
	case 1: France();Country = true;  break;
	case 2: UnitedStates();Country = true;   break;
	case 3: China();Country = true;  break;
	case 4: Spain();Country = true;  break;
	case 5: Italy();Country = true;  break;
	case 6: Turkey();Country = true;  break;
	case 7: UnitedKingdom();Country = true;  break;
	case 8: Russia();Country = true; break;
	case 9: Germany();Country = true;  break;
	case 10: Malaysia(); Country = true; break;
	case 11: Mexico();Country = true;  break;
	case 12: Argentina();Country = true; break;
	case 13: Thailand();Country = true; break;
	case 14: Ukraine();Country = true; break;
	case 15: SaudiArbaia();Country = true; break;
	case 16: Greece();Country = true; break;
	case 17: Canada();Country = true; break;
	case 18: Poland();Country = true; break;
	case 19: Norway();Country = true; break;
	case 20: Sweden();Country = true; break;
	case 21: Finland();Country = true; break;
	case 22: Mongolia();Country = true; break;
	case 23: Japan();Country = true; break;
	case 24: India();Country = true; break;
	case 25: Brazil(); Country = true; break;
	default: cout << "Try Again" << endl; Country = false;
		} while(Player1ChosenCountrynum = int)
do {
    cout << "Player two choose which region you would like to start with: " << endl;
	cin >> Player2ChosenCountrynum;
	switch(Player2ChosenCountrynum){
	case 1: France();Country = true;  break;
	case 2: UnitedStates();Country = true;   break;
	case 3: China();Country = true;  break;
	case 4: Spain();Country = true;  break;
	case 5: Italy();Country = true;  break;
	case 6: Turkey();Country = true;  break;
	case 7: UnitedKingdom();Country = true;  break;
	case 8: Russia();Country = true; break;
	case 9: Germany();Country = true;  break;
	case 10: Malaysia(); Country = true; break;
	case 11: Mexico();Country = true;  break;
	case 12: Argentina();Country = true; break;
	case 13: Thailand();Country = true; break;
	case 14: Ukraine();Country = true; break;
	case 15: SaudiArbaia();Country = true; break;
	case 16: Greece();Country = true; break;
	case 17: Canada();Country = true; break;
	case 18: Poland();Country = true; break;
	case 19: Norway();Country = true; break;
	case 20: Sweden();Country = true; break;
	case 21: Finland();Country = true; break;
	case 22: Mongolia();Country = true; break;
	case 23: Japan();Country = true; break;
	case 24: India();Country = true; break;
	case 25: Brazil(); Country = true; break;
	default: cout << "Try Again" << endl; Country = false;
}
 } while(Player2ChosenCountrynum == Player1ChosenCountrynum);

	if(numberofplayers == 3){
	cout << "Player three choose which region you would like to start with: " << endl;
 	cin >> Player3ChosenCountrynum;
    do{
	switch(Player3ChosenCountrynum){
	case 1: France();Country = true;  break;
	case 2: UnitedStates();Country = true;  break;
	case 3: China();Country = true;  break;
	case 4: Spain();Country = true;  break;
	case 5: Italy();Country = true;  break;
	case 6: Turkey();Country = true;  break;
	case 7: UnitedKingdom();Country = true;  break;
	case 8: Russia();Country = true; break;
	case 9: Germany();Country = true;  break;
	case 10: Malaysia(); Country = true; break;
	case 11: Mexico();Country = true;  break;
	case 12: Argentina();Country = true; break;
	case 13: Thailand();Country = true; break;
	case 14: Ukraine();Country = true; break;
	case 15: SaudiArbaia();Country = true; break;
	case 16: Greece();Country = true; break;
	case 17: Canada();Country = true; break;
	case 18: Poland();Country = true; break;
	case 19: Norway();Country = true; break;
	case 20: Sweden();Country = true; break;
	case 21: Finland();Country = true; break;
	case 22: Mongolia();Country = true; break;
	case 23: Japan();Country = true; break;
	case 24: India();Country = true; break;
	case 25: Brazil(); Country = true; break;
	default: cout << "Try Again" << endl; Country = false;
}} while(Player3ChosenCountrynum == (Player1ChosenCountrynum | Player2ChosenCountrynum));
	Player1Turn();
	}
        if(numberofplayers == 4) {
	cout << "Player three choose which region you would like to start with: " << endl;
 	cin >> Player3ChosenCountrynum;
	do{
switch(Player3ChosenCountrynum){
	case 1: France();Country = true;  break;
	case 2: UnitedStates();Country = true;   break;
	case 3: China();Country = true;  break;
	case 4: Spain();Country = true;  break;
	case 5: Italy();Country = true;  break;
	case 6: Turkey();Country = true;  break;
	case 7: UnitedKingdom();Country = true;  break;
	case 8: Russia();Country = true; break;
	case 9: Germany();Country = true;  break;
	case 10: Malaysia(); Country = true; break;
	case 11: Mexico();Country = true;  break;
	case 12: Argentina();Country = true; break;
	case 13: Thailand();Country = true; break;
	case 14: Ukraine();Country = true; break;
	case 15: SaudiArbaia();Country = true; break;
	case 16: Greece();Country = true; break;
	case 17: Canada();Country = true; break;
	case 18: Poland();Country = true; break;
	case 19: Norway();Country = true; break;
	case 20: Sweden();Country = true; break;
	case 21: Finland();Country = true; break;
	case 22: Mongolia();Country = true; break;
	case 23: Japan();Country = true; break;
	case 24: India();Country = true; break;
	case 25: Brazil(); Country = true; break;
	default: cout << "Try Again" << endl; Country = false;
}
} while(Player3ChosenCountrynum == (Player1ChosenCountrynum | Player2ChosenCountrynum));
	cout << "Player four choose which region you would like to start with: " << endl;
 	cin >> Player4ChosenCountrynum;
	do{
	switch(Player4ChosenCountrynum){
	case 1: France();Country = true;  break;
	case 2: UnitedStates();Country = true;   break;
	case 3: China();Country = true;  break;
	case 4: Spain();Country = true;  break;
	case 5: Italy();Country = true;   break;
	case 6: Turkey();Country = true;  break;
	case 7: UnitedKingdom();Country = true;  break;
	case 8: Russia();Country = true; break;
	case 9: Germany();Country = true;  break;
	case 10: Malaysia(); Country = true; break;
	case 11: Mexico();Country = true;  break;
	case 12: Argentina();Country = true; break;
	case 13: Thailand();Country = true; break;
	case 14: Ukraine();Country = true; break;
	case 15: SaudiArbaia();Country = true; break;
	case 16: Greece();Country = true; break;
	case 17: Canada();Country = true; break;
	case 18: Poland();Country = true; break;
	case 19: Norway();Country = true; break;
	case 20: Sweden();Country = true; break;
	case 21: Finland();Country = true; break;
	case 22: Mongolia();Country = true; break;
	case 23: Japan();Country = true; break;
	case 24: India();Country = true; break;
	case 25: Brazil(); Country = true; break;
	default: cout << "Try Again" << endl; Country = false;
}} while(Player4ChosenCountrynum == (Player1ChosenCountrynum | Player2ChosenCountrynum | Player3ChosenCountrynum));
	 }
	 } while(Country = false);

return 0;
} // end of main class
