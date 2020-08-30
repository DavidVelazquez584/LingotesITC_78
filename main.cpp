#include <iostream>
#include "Table.h"
#include "CovidLigth.h"

/////////////   PASSWORD when need (need to put in lowercase):  cbb19 //////////////////

// Go to our html page for more information! https://spaceplannerlingotes.netlify.app/index.html
//
using namespace std;

//Funcion principal
int main() {
  cout<<"                                  CCB19 Program"<<endl;
  
  //Pointers 
  Table* table;
  table = new Table();
  CovidLigth* ligth;
  ligth = new CovidLigth();

  int option = 1;
  //Menu
  while (option != -1){
    cout<<"---------------------------------------------------------------------------"<<endl;
    cout<<"MAIN MENU"<<endl<<endl;
    cout<<"- 1. User in (if you are the client, you must enter here to assign your table or see if you can enter yet)"<<endl;
    cout<<"- 2. User out (When a user goes out to the building it needs to be indicated)"<<endl; 
    cout<<"- 3. In charge (It needs to be initialized first to set variables)"<<endl;
    cout<<"- 4. Show the tables" <<endl;
    cout<<"- 5. Show the measurements of the tables"<<endl;
    cout<<"- 0. Exit"<<endl;
    cout<<endl;
    cout<<"Write the number of the option you want: "<<endl;
    cin>>option;
    //////////////////////////////////// option 1 ////////////////////////////////////////
    if (option == 1 ){
      cout<<endl;
      cout<<"----------------------------------------------------------------------------"<<endl;
      cout<<"Userface interface: "<<endl;
      
      ligth->whichColor();
      ligth->getPercentageOfFurnitureInside();
      ligth->passOrNotPass();
      if (ligth->passOrNotPass()==true){
        cout<<"You can enter to the restaurant"<<endl;
      }
      else {
        cout<<"You can not enter to the restaurant yet"<<endl;
      }
      table->showFurniture();
      if (ligth->passOrNotPass() == true){
        cout<<"Select the number of the table you want to get in: "<<endl;
        int numberOfTable; cin>>numberOfTable;
        cout<<"Set the number of people that are going to be in the table (MAX LIMIT 8)"<<endl;
        int customers;cin>>customers;
        int numberOfTables;
        numberOfTables = table->setPersons(customers, numberOfTable);
        if (numberOfTables == 1){
          ligth->addNumberOfFurnitureOccupied();
        }
        else{
          ligth->addNumberOfFurnitureOccupied();
          ligth->addNumberOfFurnitureOccupied();
        }
      }
      ligth->setPercentageOfFurnitureInside(table->getNumberOfFurniture());

    } 
//////////////////////////////////// option 2 ////////////////////////////////////////
    else if (option == 2){
        cout<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<"Set the number of the table that is unoccupied: "<<endl;
        int numberDelete; cin>>numberDelete;
        table->modified_vector_string(numberDelete);
        ligth->deleteNumberOfFurnitureOccupied();
        ligth->setPercentageOfFurnitureInside(table->getNumberOfFurniture());
      }
  //////////////////////////////////// option 3 //////////////////////////////////////
    else if(option == 3){
      cout<<"Write the password to enter to the EMPLOYEE SECTION (Password indicated in the main code at the beggining): "<<endl;
      // The password is: ccb19 
      string password; cin>>password;
      if(password == "ccb19"){
      }
      else{
        continue;
      }
      int option_employee = 1;
      while (option_employee != 4){
        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<"WELCOME TO THE EMPLOYEE SECTION "<<endl;
        cout<<"(if you get wrong setting the variables, you can select again the option)"<<endl;
        cout<<"- 1. Set the total amount of tables "<<endl;
        cout<<"- 2  Set the color of CovidLigth"<<endl;
        cout<<"- 3. Modify distance between tables"<<endl;
        cout<<"- 4. Return to initial menu"<<endl;
        cout<<"Write the number of the option you want: "<<endl;
        cin >> option_employee;
        
        if (option_employee == 1){
          table->AddTotalFurniture();
        }
        else if (option_employee == 2){
          cout<<endl;
          cout<<"-----------------------------------------------------------------------"<<endl;
          cout<<"Trafic light for covid 19 today: "<<endl;
          ligth->setColor();
        } 
        else if(option_employee == 3){
          string distance = " ";
          cout<<"Enter the distance between tables, in meters (minimum 1,5m) (write only the number, you can use coma for decimals) "<<endl;
          cin>> distance;
          table->setDistance(distance);
        }
        else if(option_employee == 4){
          break;
        }
      }
    }
    //////////////////////////////////// option 4 ////////////////////////////////////////
    else if (option == 4){
      ligth->getPercentageOfFurnitureInside();
      if(ligth->passOrNotPass()== true){
        cout<<"You can enter to the restaurant"<<endl;
      }
      else {
        cout<<"You can not enter to the restaurant yet"<<endl;
      }
      table->showFurniture();
    }
    //////////////////////////////////// option 5 ////////////////////////////////////////
    else if (option == 5){
      cout<<"-------------------------------------------------------------------------"<<endl;
      table->displayTable();
    }
    //////////////////////////////////// option 0 ////////////////////////////////////////
    else if (option == 0){
      cout<<"Write the password to Exit the program (Password indicated in the main code at the beggining): "<<endl;
      // The password is: ccb19 
      string password; cin>>password;
      if(password == "ccb19"){
        break;
      }
      else{
        cout<<endl;
        cout<<"Only the employee can do this with the password"<<endl;
        continue;
      }
    } 
  }  
  cout<<"See you soon!!"<<endl;
  cout<<"Dont forget to check out our HTML website! "<<endl<<"https://spaceplannerlingotes.netlify.app/index.html"<<endl;
    
  return 0;
}