#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Table{
  private:
    int numberOfFurniture;
    string distance;
    vector <int> vectorTableNum = {}; 
    vector <string> vectorTableStr = {};

  public:
    Table(); 
    void AddTotalFurniture(); 
    void showFurniture(); 
    int getNumberOfFurniture();
    void modified_vector_string(int);
    int setPersons(int, int);
    void setDistance(string);
    void displayTable();
}; 