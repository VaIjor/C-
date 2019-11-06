/*
Task 1 C++ code
By Joseph Morritt
ID:
Date: 13/10/19

*/
#include <iostream> /*this is a hedder that alows for inputs and outputs */

using namespace std; // this makes identphiers viable to each outher

int main()// main function
{
int score;// delering the varible score as an interger

cout << "Enter your score: "; // prints out to the user to ask for input
cin >> score;// takes the user input and put this value in to the score variable

if(score > 100)// if score is larger then 100
  cout << "Score too large";// prints out Score too large

else if (score >= 90 && score <= 100)// checks to see if score is in 90 to 100 range
  cout << "You got an A\n";   // Prints out You got an A

else if (score >= 80 && score <= 89)// checks to see if score is in 80 to 89 range
  cout << "You got a B\n";   // Prints out You got an B

else if (score >= 70 && score <= 79)// checks to see if score is in 70 to 79 range
  cout << "You got a C\n";   // Prints out You got an C

else if (score >= 60 && score <= 69)// checks to see if score is in 60 to 69 range
  cout << "You got a D\n";   // Prints out You got an D

else if (score >= 0 && score <= 59)// checks to see if score is in 0 to 59 range
  cout << "You got a F\n";   // Prints out You got an F


return 0;
}
