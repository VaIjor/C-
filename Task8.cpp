/*
Task 8 C++ code
By Joseph Morritt
ID:
Date:

*/
#include <iostream>
#include <map>
#include <string>



using namespace std;


class CarbonFootprint{
public:
   vector<string> CarbonFootprint;

   virtual void getCarbonFootprint(){


     std::cout << "CarbonFootprint is:" << '\n';

   }
};
class Car :public CarbonFootprint {
  string Enginsize;
  void getCarbonFootprint(){
    std::cout << "CarbonFootprint is 17,000 Kg " << '\n';

  }

};
class Building : public CarbonFootprint{
  int numberoffloors;
  int staffperfloor;
public:
  int Totalstaff(){
    return numberoffloors*staffperfloor;}
  void getCarbonFootprint(){

    std::cout << "CarbonFootprint is 50,000 Kg " << '\n';

  }
};

class Bicycle :public CarbonFootprint {
  int cassetspeed;
  int chainsetsize;
public:
  int Numberofgears(){
    return cassetspeed*chainsetsize;}
  void getCarbonFootprint(){
    std::cout << "CarbonFootprint is  100 Kg " << '\n';
  }

};
int main()
{
//vector<string> CarbonFootprint;
CarbonFootprint.

vector<getCarbonFootprint*> CarbonFootprint;
}
