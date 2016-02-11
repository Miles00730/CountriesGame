#ifndef COUNTRY_H
#define COUNTRY_H

#include <SFML/Graphics>
#include <iostream>
#include <string>

class Country {
    public:
        Country(string countryName);
        
        string name;
        
        int getSoybeans();
        int getUranium();
        int getWater();
        int getubber();
        int getNaturalGas();
        int getGold();
        int getCotton();
        int getSilver();
        int getCorn();
        int getOil();
        int getRice();
        int getDiamonds();
        int getPopulation(); 
        Country(int, int, int, int, int, int, int, int, int,int, int, int, int, string);  
    private:
        int soybeans;
        int uranium;
        int wheat;
        int water;
        int rubber;
        int naturalGas;
        int gold;
        int cotton;
        int silver;
        int corn;
        int oil;
        int rice;
        int diamonds;
        int Population
};
void Country::Country(  int soybeans, int uranium,int wheat,int water,int rubber,int naturalGas,int gold,int cotton,int silver
,int corn,int oil,int rice, int diamonds, int Population, string name) { 
   this -> soybeans = soybeans; 
   this -> uranium = uranium;
   this -> wheat = wheat;
   this -> water = water;
   this -> rubber = rubber;
   this -> naturalGas = naturalGas;
  this -> gold = gold;
  this -> cotton = cotton;
  this -> silver = silver;
  this -> corn = corn;
  this -> oil = oil;
   this -> rice = rice;
  this -> diamonds = diamonds;
   this -> Population = Population;
    this -> name = name;
  
  
    
} 
int main() {
  Country France(// pass values from constructor Countries 
  );
  Country UnitedStates(); 
  
    
} 

#endif
