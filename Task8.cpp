/*
Task 8 C++ code
By Joseph Morritt
ID:
Date:

*/
#include <iostream>
#include <map>
#include <string>
#include <vector>


using namespace std;


class CarbonFootprint{
public:
  virtual double getCarbonFootprint();
};
double CarbonFootprint::getCarbonFootprint()
{
  return 0;
}


class Car :public CarbonFootprint {
public:
  Car(double YM = 10000, double mpg=34);
  ~Car();

  virtual double getCarbonFootprint();
  private:
  double Milesyear;
  double MPG;
  int CO2=19.5;
};
Car::Car(double YM, double mpg)
{

  Milesyear = YM;
  MPG = mpg;

}
Car::~Car(){
}
double Car::getCarbonFootprint()
{
  std::cout << "Carbon footprint of the car is: " << ((Milesyear / MPG)* CO2) << '\n';
  return((Milesyear / MPG)* CO2);
}


class Building : public CarbonFootprint{
public:
  Building(double Elec = 1200 , double Month = 12);
  ~Building();
   virtual double getCarbonFootprint();
private:
  double electric;
  double months;
};
Building::Building(double Elec, double Month)
{
 electric = Elec;
 months = Month;
}
Building::~Building(){}
double Building::getCarbonFootprint()
{
  std::cout << "CarbonFootprint for the house is: " << (electric*months) << '\n';
  return(electric*months);
}
class Bicycle :public CarbonFootprint {
public:
  Bicycle(int miles = 50,  int cal = 300, int cons = 1000);
  ~Bicycle();
  virtual double getCarbonFootprint();
private:
  int Calories;
  int Miles;
  int Construction;
};
Bicycle::Bicycle(int miles, int cal, int cons){
  Miles = miles;
  Calories = cal;
  Construction = cons;
}
double Bicycle::getCarbonFootprint(){
  std::cout << "Carbon foot print for the bicycle is: " << ((Miles*Calories)+Construction) <<'\n';
  return ((Miles*Calories)+Construction);
}
/*__Main loop__*/
int main()
{
  vector<CarbonFootprint*> Carbonprint;
  int Selection;

  std::cout << "Carbon Foot Print" << '\n';
  std::cout << "_________________" << '\n';
      /*Car*/
      Car *Carpoint;
      Carpoint = new Car;
      Carbonprint.push_back(Carpoint);
      /*Building*/
      Building *Buildingpoint;
      Buildingpoint = new Building;
      Carbonprint.push_back(Buildingpoint);
      /*Bicycle*/
      Bicycle *Bicyclepoint;
      Bicyclepoint = new Bicycle;
      Carbonprint.push_back(Bicyclepoint);



      for(auto member : Carbonprint)
      {

        member->getCarbonFootprint();

      }


}
