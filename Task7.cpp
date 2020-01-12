/*
Task 7 C++ code
By Joseph Morritt
ID:
Date:

*/
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cctype>
#include <bits/stdc++.h>

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
        cout << "ID: " << it->first << " Name: " << it->second << '\n';// Print out THe member of the map
        std::cout << " " << '\n';
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
class errors : public studentinfo{
public:
	int n;
  string errorset;
  string errorset2;
  void Iderror()
	{
	for (size_t n = 0; n < errorset.length(); n++)
		{
		if (!isdigit( errorset[ n ] ))
			{
			std::cout << "Invalied id" << '\n';
      exit(0);
			}
		}
	}
  void Nameerror()
  {
    for (size_t n = 0; n < errorset2.length(); n++)
  		{
  		if (!isdigit( errorset2[ n ] ))
  			{
            return;
  			}
     else{
       std::cout << "Invalied Name" << '\n';
       exit(0);

     }
  	}
   }
};

//__________________________________//
//             Main loop
int main()
{

    studentinfo info; // Class objects
		errors error;
    info.id ;// Data member access.
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
      error.errorset = info.id;

      error.Iderror();

      cout << "Name " << '\n';
      cin >> info.firstname; // takes in the name given
      std::cout << " " << '\n';
      error.errorset2 = info.firstname;

      error.Nameerror();

      info.insert();// call the insert function
     }
     if(input == "2"){
       std::cout << "Enter Id to remove";
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
