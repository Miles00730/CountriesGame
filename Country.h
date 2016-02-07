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

#endif
