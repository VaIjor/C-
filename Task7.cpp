/*
Task 7 C++ code
By Joseph Morritt
ID:
Date:

*/
#include <iostream>
#include <map>

using namespace std;
//__________________________________//
//           Class
class studentinfo  {
public:
//__________________________________//
//           Data Memebers
  map<string, string> newMap;
  string firstname;
  string id;
//__________________________________//
//         Member function
  void insert()
  {
    newMap.insert(pair<string, string>(id, firstname));// add student as a member of Map

  }
  void printout() // inslizes the print out function
  {
    for(map<string, string>::iterator it = newMap.begin(); it != newMap.end(); it++)
    {
        cout << "ID " << it->first << " Name " << it->second << endl;// Print out THe member of the map
      }
  }
  void clearing(){ // This inlizes the clear function
    newMap.clear(); // This clears all the member in the map
  }
  void Remove(){ // Inishlized the remove function
  map<string, string>::iterator pt; // this Itorates thought the map and store the postion
  pt=newMap.find(id); // looks for a given ID value in the map
  newMap.erase(pt); // removes the value at the current postion
  }
};
//__________________________________//
//             Main loop
int main()
{

    studentinfo info; // Class objects
    info.id = "default";// Data member access.
    info.firstname;
    string input;// varible delration

//__________________________________//
//            While loop
    while (input !="quit") {
    // Options Menu
    std::cout << "what would you like to do" << '\n';
    std::cout << "1. add new student" << '\n';
    std::cout << "2. remove a member" << '\n';
    std::cout << "3. print student" << '\n';
    std::cout << "4. clear list" << '\n';
    std::cout << "Q. quit" << '\n';

    std::cin >> input;// Takes user input for what they want to do

    if(input =="quit"){//  Quits Program
      return 0;
    }
    if(input =="q"){// Quit program
      return 0;
    }
    //________________________//
    //      add's student
    if(input == "1"){
      cout << "Enter " << " Id and name" << endl; // ask  the user for ID number and name.
      cout << "Id ";
      cin >> info.id; // taks in the given id value
      cout << "Name ";
      cin >> info.firstname; // takes in the name given
      info.insert();// call the insert function
     }
     if(input == "2"){
       std::cout << "Enter Id to remove" << '\n';
       std::cin >> info.id;
       info.Remove(); // calls the remove function.
     }
    if(input == "3"){

      cout << "\n\n" << endl;
      info.printout();
      }
    if(input == "4"){

      info.clearing();

    }
    }

}
