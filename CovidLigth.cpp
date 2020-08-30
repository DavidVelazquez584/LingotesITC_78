#include "CovidLigth.h"

CovidLigth::CovidLigth(){}

void CovidLigth::setColor(){
  string _color;
  cout<<endl;
  cout<<"Green = 50% of the furniture that can stay occupied by people in the restaurant"<<endl;
  cout<<"Yellow = 30% of the furniture that can stay occupied by people in the restaurant"<<endl;
  cout<<"Red = 10% of the furniture that can stay occupied by people in the restaurant"<<endl;
  cout<<endl;
  cout<<"Set the color of the CovidLigth (in lowercase): "<<endl;
  cin>>_color;
  cout<<"The color selected is: "<< _color <<endl;
  color = _color;
  cout<<endl;
}
void CovidLigth::whichColor(){
  cout<<endl<<endl;

  if(color == "green"){
    cout<< "Today's CovidLigth state: Green"<<endl;
    cout << "The capacity is 50% of the tables"<<endl;
  }
  else if(color == "yellow"){
    cout<< "Today's CovidLigth state: Yellow"<<endl;
    cout <<"The capacity is 30% of the tables"<<endl;
  }
  else if(color == "red"){
    cout<< "Today's CovidLigth state: Red"<<endl;
    cout<<"The capacity is 10% of the tables"<<endl;
  }
  cout<<"-----------------------------------------------------------------------"<<endl;
}

void CovidLigth::setPercentageOfFurnitureInside(int _numberOfFurniture){
  percentageOfFurnitureOcuppied = (furnitureOccupied * 100)/_numberOfFurniture;
}

void CovidLigth::getPercentageOfFurnitureInside(){
  cout<<endl;
  cout<<"The percentage of the tables occupied is: "<<percentageOfFurnitureOcuppied<< "%"<<endl;
}

void CovidLigth::addNumberOfFurnitureOccupied(){
  furnitureOccupied = furnitureOccupied + 1;
}
void CovidLigth::deleteNumberOfFurnitureOccupied(){
  furnitureOccupied = furnitureOccupied - 1;
  if (furnitureOccupied <= 0){
    furnitureOccupied = 0;
  }
}

bool CovidLigth::passOrNotPass(){
  cout<<endl;
  if (color == "green"){
    if (percentageOfFurnitureOcuppied >= 50){
      return false;
    }
    else if (percentageOfFurnitureOcuppied < 50) {
      return true;
    }
  }
  if (color == "yellow"){
    if (percentageOfFurnitureOcuppied >= 30){
      return false;
    }
    else if (percentageOfFurnitureOcuppied < 30){
      return true;
    }
  }
  if (color == "red"){
    if (percentageOfFurnitureOcuppied >= 10){
      return false;
    }
    else if (percentageOfFurnitureOcuppied < 10){
      return true;
    }
  }
  return true;
  cout<<"------------------------------------------------------------------"<<endl;
};