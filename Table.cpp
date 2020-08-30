#include "Table.h"

Table::Table(){}

void Table::AddTotalFurniture(){
  cout<<"------------------------------------------------------------"<<endl;
  cout<<"How many tables do you want to add? "<<endl;
  cin>>numberOfFurniture;
  cout<<endl;
  cout<<numberOfFurniture<<" tables added succesfully!"<<endl;

  for(int i  = 0; i < numberOfFurniture; i++){
    vectorTableNum.push_back(i+1);
    vectorTableStr.push_back("O");
  }
  cout<<endl;
}

void Table::showFurniture(){
  cout<<endl<<endl;
  cout<<"There are "<<numberOfFurniture<<" number of tables" << endl;
  cout<<"O -> Available tables"<<endl;
  cout<<"X -> Occupied tables"<<endl;
  cout<<endl<<endl;
  cout<<"|||||||||||||||||||||||||  "<<distance<<"m |||||||||||||||||||||||||||||"<<endl;
  cout<<endl;cout<<endl;

  for(int i = 0; i<numberOfFurniture;i++){
    cout<<vectorTableNum[i]<<"."<<vectorTableStr[i]<<" --- "<<distance<<"m --- ";
    if ((i+1) % 4 == 0){
      cout<<endl<<endl;
      cout<<"|||||||||||||||||||||||||  "<<distance<<"m |||||||||||||||||||||||||||||"<<endl;
      cout<<endl<<endl;
    }
  }
  cout<<endl;
}

//   O -> Disponible
//   X -> Ocupado

//   1.O --- 2m --- 2.X --- 2m --- 3.O --- 2m --- 4.O 
// |||||||||||||||||||||||||||||| 2m |||||||||||||||||||||
//   5.O --- 2m --- 6.X --- 1,5m --- 7.X --- 2m --- 8.O 


//ancho: 6

int Table::getNumberOfFurniture(){
  return numberOfFurniture;
}

void Table::modified_vector_string(int position){
  vectorTableStr[position-1] = "O";
}

int Table::setPersons(int customers, int position){
  
  if (customers > 4){
    vectorTableStr[position-1] = "X4";
    customers = customers - 4;
    string people = to_string(customers);
    if (vectorTableStr[position+1]=="O"){
      vectorTableStr[position] = "X" + people;
    }
    else{
      vectorTableStr[position-2] = "X" + people;
    }
    return 2;
  }
  else{
    string people = to_string(customers);
    vectorTableStr[position-1] = "X" + people;
    return 1;
  }
}

void Table::setDistance(string _distance){
  distance = _distance;
}
void Table::displayTable(){
  float widthTable = 1.25;
  float largeTable = .75;
  cout<<endl;cout<<"   Measurements of the Tables"<<endl<<endl;
  cout<< "      "<<widthTable<<"m  "<<endl;
  cout<< "-----------------"<<endl;
  cout<< "|               |"<<endl;
  cout<< "|               | "<< largeTable <<"m"<<endl;
  cout<< "|               |"<<endl;
  cout<< "-----------------"<<endl;
  cout<<endl;


}