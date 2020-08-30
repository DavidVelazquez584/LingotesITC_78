#pragma once
#include <iostream>
using namespace std;

class CovidLigth{
  private:
    string color;
    int furnitureOccupied = 0;
    float percentageOfFurnitureOcuppied;
    
  public:
    CovidLigth(); 
    void whichColor();
    void setColor();
    void setPercentageOfFurnitureInside(int); 
    void getPercentageOfFurnitureInside(); 
    void addNumberOfFurnitureOccupied(); 
    void deleteNumberOfFurnitureOccupied(); 
    bool passOrNotPass(); 
};