#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>

#include <bitset>

using namespace std;

class wheel{
public:
  //vector<int>pins;
  int pinSetting;// current pin

  wheel() {}  // default constructor
  wheel(string pinSet, int pinSetting = 0);

};
class wheelGroup{
public:

    string wheelGroupchi;
    //string wheelGroup(){}
    //wheelGroup(string wheel1, string wheel2, string wheel3, string wheel4, string wheel5);
    //string wheelGroupchi;
};





int main()
{

wheelGroup wheelGroupObj;
string Tranfer;
string Tranfer2;

string out;
string out2;

int R = 0;

string chigroup[5];
string psigroup[5];


std::string chi_encr;




string pinSettings;
ifstream infile;

////__________________________________\\
//            Open file


infile.open("pinsettings.txt");
getline(infile,pinSettings);
infile.close();

//std::cout << pinSettings<< '\n';



////__________________________________\\
//     Putting pin setting in to wheel

  string chi1(pinSettings.substr(0,43));// this starts at 0 point in the file
  string chi2(pinSettings.substr(43,47));//and write up to 43 values into
  string chi3(pinSettings.substr(90,51));
  string chi4(pinSettings.substr(141,53));
  string chi5(pinSettings.substr(194,59));

  string wheelGroupchi[5]{chi1,chi2,chi3,chi4,chi5};

  string m37(pinSettings.substr(253,37));
	string m61(pinSettings.substr(290,61));

	// Creates psi wheel objects
	string psi1(pinSettings.substr(351,41));
	string psi2(pinSettings.substr(392,31));
	string psi3(pinSettings.substr(423,29));
	string psi4(pinSettings.substr(452,26));
	string psi5(pinSettings.substr(478,23));

  string wheelGrouppsi[5]{psi1,psi2,psi3,psi4,psi5};

  //std::cout << psi1 << '\n';
  //std::cout << psi1(1) << '\n';
  //std::cout << chi1.at(1);
  ////__________________________________\\
  //           Encodeing binaery value





//std::cout << chi1 << '\n';
//std::cout << chi2 << '\n';
//std::cout << chi3 << '\n';
//std::cout << chi4 << '\n';
//std::cout << chi5 << '\n';
std::cout << psi1 << '\n';
std::cout << psi2 << '\n';
std::cout << psi3 << '\n';
std::cout << psi4 << '\n';
std::cout << psi5 << '\n';




for(int i=0; i<5; ){
  Tranfer = wheelGroupchi[i];

  out = Tranfer.substr(R,1);
  //cout << out <<" ";
  chigroup[i]= out;
  i++;
}
//std::cout << test << '\n';
//for(int i=0; i<5; ){
//std::cout << arrr[i] << '\n';
//i++;
//}
for(int i=0; i<5; ){
  Tranfer2 = wheelGrouppsi[i];

  out2 = Tranfer2.substr(R,1);
  //cout << out <<" ";
  psigroup[i]= out2;
  i++;
}

for(int i=0; i<5; ){
  std::cout << psigroup[i] << '\n';
  i++;
}











for(int j=0; j<5;){
  string am;
  am = chigroup[j];


  chi_encr += am;
  j++;
}
//std::cout << chi_encr << '\n';


bitset<5> letter(25);
//std::cout << letter << '\n';
bitset<5> chi_pinset(chi_encr);

//std::cout << chi_pinset << '\n';




//bitset<5>arrr[i];



return 0;
}
