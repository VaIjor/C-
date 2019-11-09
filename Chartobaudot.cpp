/*
charToBaudot coverstion test code.
Code By: J.R.D.Morritt.
code complet date: 9/11/19.

*/

#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>
//#include <boost/utility/binary.hpp>


using namespace std;


//____________________________________//
//          Main program loop
int main()
{
//____________________________________//
//          Varbles delering
  map<char , int>charToBaudot; // Map setup with the first member a char and the
                              // outher being a int the map is called charToBaudot
  int i;
  char c;
  int BaudotFromChar;
  map<char , int>::iterator inputchar; // this iterator though the map until the "inputchar"
                                // value is found


//____________________________________//
//       Baudot coverstion Table



// this pice of code store char letters in the map and the corponding baoudot,
// Binaery value.
  charToBaudot[' ']=0b00100;
  charToBaudot['Q']=0b10111;
  charToBaudot['W']=0b10011;
  charToBaudot['E']=0b00001;
  charToBaudot['R']=0b01010;
  charToBaudot['T']=0b10000;
  charToBaudot['Y']=0b10101;
  charToBaudot['U']=0b00111;
  charToBaudot['I']=0b00110;
  charToBaudot['O']=0b11000;
  charToBaudot['P']=0b10110;
  charToBaudot['A']=0b00011;
  charToBaudot['S']=0b00101;
  charToBaudot['D']=0b01001;
  charToBaudot['F']=0b01101;
  charToBaudot['G']=0b11010;
  charToBaudot['H']=0b10100;
  charToBaudot['J']=0b01011;
  charToBaudot['K']=0b01111;
  charToBaudot['L']=0b10010;
  charToBaudot['Z']=0b10001;
  charToBaudot['X']=0b11101;
  charToBaudot['C']=0b01110;
  charToBaudot['V']=0b11110;
  charToBaudot['B']=0b11001;
  charToBaudot['N']=0b01100;
  charToBaudot['M']=0b01000;

//____________________________________//
//        Char to Baudot covertion

  inputchar = charToBaudot.find('I');// find a the baoudot value of a given Char input
                                    // and save this in a maped var alonf with corponding char
                                   // the code is only set for testing one given char
                                  // and not a full mesg TBC for impmention
  //std::cout << charToBaudot['S'] << '\n';

  if(inputchar == charToBaudot.end())// if no value for given Char is found prodces FaiL Error
    std::cout << "FaiL" << '\n';
  else                          // else stament if value has ben found.
  //bitset BaudotFromChar;
  c = inputchar->first; // stores the char value in varible "c"
  BaudotFromChar = inputchar->second; // store the Baoudot value in BaudotFromChar var
  bitset<5> bset1(BaudotFromChar);  // as the boaut values are acult stored as
                                   // decimals this coverst it back to the given
                                  // Binaery 5 bit binaery stream
  //cout<<c<<"::"<<BaudotFromChar<<endl;
  cout<<c<<"::"<<bset1<<endl; // test print code







}
