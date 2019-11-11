#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <map>
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
string out3;
string out4;

int R =2;
int psiR = 0;
int M37_R = 0;


string chigroup[5];
string psigroup[5];


string chi_encr;
string psi_encr;



string pinSettings;
ifstream infile;



map<char , int>charToBaudot; // Map setup with the first member a char and the
                            // outher being a int the map is called charToBaudot
int i;
char c;
int BaudotFromChar;
map<char , int>::iterator inputchar; // this iterator though the map until the "inputchar"
                              // value is found








////__________________________________\\
//            Open file


infile.open("pinsettings.txt");
getline(infile,pinSettings);
infile.close();

//cout << pinSettings<< '\n';



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

  //cout << psi1 << '\n';
  //cout << psi1(1) << '\n';
  //cout << chi1.at(1);
  ////__________________________________\\
  //           Encodeing binaery value




//________________________//
//       Test bitset

// cout << chi1 << '\n';
// cout << chi2 << '\n';
// cout << chi3 << '\n';
// cout << chi4 << '\n';
// cout << chi5 << '\n';
// cout << psi1 << '\n';
// cout << psi2 << '\n';
// cout << psi3 << '\n';
// cout << psi4 << '\n';
//cout << psi5 << '\n';

//string mesg ("HELLO WORLD");

//_________________________//
//          CHI Key

for(int i=0; i<5; ){
  Tranfer = wheelGroupchi[i];// takeing pin values of the chi wheels

  out = Tranfer.substr(R,1);
  //cout << out <<" ";
  chigroup[i]= out;
  i++;
}
//cout << test << '\n';
//for(int i=0; i<5; ){
//cout << chigroup[i] << ":"<<endl;
//i++;
//}


int psi_trigger;
if(psi_trigger ==1){ // checks to see if the psi wheel shoud roate
  psi_trigger = 0;
  psiR++;
}


//________________________//
//          PSI Key

for(int i=0; i<5; ){
  Tranfer2 = wheelGrouppsi[i]; // takeing the pin values

  out2 = Tranfer2.substr(psiR,1);
  //cout << out <<" ";
  psigroup[i]= out2;
  i++;
  }

//for(int i=0; i<5; ){
//  cout << psigroup[i] << '\n';
//  i++;
//}



// take the arry values and put them in a string
for(int j=0; j<5;){
  string chm;
  chm = chigroup[j];


  chi_encr += chm;
  j++;
}

for(int k=0; k<5;){
  string psm;
  psm = psigroup[k];


  psi_encr += psm;
  k++;
}



std::cout << "/* message */" << '\n';







//cout << chi_encr << '\n';


bitset<5> letter(25); // test letter value
//cout << letter << '\n';

bitset<5> psi_pinset(psi_encr);
bitset<5> chi_pinset(chi_encr);

cout <<"CHI: " << chi_pinset << '\n';
cout << "PSI: "  << psi_pinset << '\n';

//string Key;
//Key =  (chi_pinset^psi_pinset);

//Key = (psi_encrchi_pinset);

bitset<5> Key(chi_pinset ^ psi_pinset);

cout << "the key: " << Key << '\n';
//cout << (chi_pinset ^ psi_pinset) << endl;

cout <<"Letter: " << letter << '\n';
bitset<5> encryptedChar(Key^letter);
cout << "encrypted Char: " << encryptedChar<< '\n';




//________________________//
//      Rotaion code


//_________________________//
int m37_triger;
if(m37_triger==1){ // check to see if the m37 wheel shoud be rotated
  m37_triger = 0;
  M37_R++; // roate the M37 wheel
}

  out4 = m37.substr(M37_R,1); // pin value of the m37 wheel
  out3 = m61.substr(R,1);    // pin value of the m61 wheel

//________________________//
//    M61 value check
  bitset<1>ones(1);         // this sets a bit up for comparsent
  bitset<1>m61bit(out3);    // Takes the current pin setting of m61 wheel.
  bitset<1>m61_Thr(m61bit & ones);// This checks to see if the current pin setting
                               // is a 1 by using an and gate

if(m61_Thr==1){ // if the M61 wheel is a 1 .
m37_triger = 1;// the m37 whel with turn next input
}

cout << "output m61 " <<out3 << '\n';
//cout <<"pinsetting m61 " << m61 << '\n';
cout << "output m37 " << out4 << '\n';
//cout << "pinsetting m37: " << m37 <<  '\n';
//_________________________//
//           PSI



bitset<1>ones2(1);
bitset<1>psibit(out4);
bitset<1>psi_Thr(psibit & ones2);



if(psi_Thr== 1){
psi_trigger = 1;
}
















return 0;
}
