//      ____                                   ______                    __
//     / __ \__  ______  ____ _____  ____     / ____/________ __      __/ /__  _____
//    / / / / / / / __ \/ __ `/ __ \/ __ \   / /   / ___/ __ `/ | /| / / / _ \/ ___/
//   / /_/ / /_/ / / / / /_/ / /_/ / / / /  / /___/ /  / /_/ /| |/ |/ / /  __/ /
//  /_____/\__,_/_/ /_/\__, /\____/_/ /_/   \____/_/   \__,_/ |__/|__/_/\___/_/
//                    /____/

// Code By: Joseph Morritt
// Task 4 code

#include <iostream>
#include <windows.h>
#include<bits/stdc++.h>
#include <cstdlib>
#include <random>
#include <chrono>
#include <thread>
// include headder files for the varus fuctions
using namespace std;


class Grid{ // Grid class
  public:

    int Row;
    int Coloms;


};

int main()
{


//________________________\\
//      Varbles

    Grid Obj;

    Obj.Row = 6;
    Obj.Coloms = 20;



    int GameLoop = 0;


    int posX_trap[5];
    int posY_trap[5];

    int posX_player = 0;
    int posY_player = 0;

    int posX_Tresuer = 0;
    int posY_Tresuer = 0;

//________________________\\
//      Random Values
  srand(time(0));/// set the seed that ramdom value wil be genrtaed from

  // seting up the random values for the
  posX_player = rand() % 20; //posX_player in range of 0 to 2
  posY_player = rand() % 6;

  posX_Tresuer = rand() %20;
  posY_Tresuer = rand() %6;

  for(int x_rand = 0; x_rand<5;){

    posX_trap[x_rand] = rand() %20;
    if(posX_trap[x_rand]==posX_player){
    }
    else if(posX_trap[x_rand]==posX_Tresuer){
    }
    else{
    x_rand++;
    }
  }

  for(int y_rand = 0; y_rand<5;){

    posY_trap[y_rand] = rand() %6;
    y_rand++;
  }


//_________________________\\
    // Create a vector containing n
    //vectors of size Coloms.
    vector<vector<string> > GRID(   Obj.Row , vector<string> (  Obj.Coloms));

    for (int i = 0; i <   Obj.Row; i++) {
        for (int j = 0; j <   Obj.Coloms; j++){
            GRID[i][j] = ".";
        }
    }

    cout<< "          _____Dungon Crawler_____\n";


//____________________________________\\
//          Game Object setup

    GRID[posY_player][posX_player]= "@";
    GRID[posY_Tresuer][posX_Tresuer]= "X";


    int x_pos = 0;
    int y_pos = 0;
    while(x_pos < 5){
          GRID[posY_trap[y_pos] ][posX_trap[x_pos] ]= "T";
          y_pos++;
          x_pos++;
    }




//____________________________________\\
//          Grid Print

    for(int i = 0; i <   Obj.Row; i++) {
        for(int j = 0; j <   Obj.Coloms; j++){
            cout<< GRID[i][j]<< " ";
        }
          cout<< "\n";
    }

//n___________________________________\\
//                Object loactions







//____________________________________\\
//            This is the game loop

    while(GameLoop==0){

        int Shift_R = 0;
        int Shift_L = 0;
        int Shift_D = 0;
        int Shift_U = 0;
        int Trap_x;
        int Trap_y;
        string input;










        while (input!="quit") {
          cout << "\nIn which direction do you wanna move?\n";
          cout << "(w , a , s , d or quit):";
          cout << "\n____________________________________________________\n";
          cin >> input;


          if(input=="d"){

            GRID[posY_player][posX_player]=".";
            posX_player++;
            if (posY_player==posY_Tresuer && posX_player == posX_Tresuer) {
            cout << "BOOM treasure\n";
            return 0;
            }
            else if (GRID[posY_player][posX_player]=="T") {
              cout << "BOOM Trap\n";
              return 0;

            }

              GRID[posY_player][posX_player]="@";

              for(int i = 0; i <   Obj.Row; i++) {
                  for(int j = 0; j <   Obj.Coloms; j++){
                      cout<< GRID[i][j]<< " ";
                  }
                        cout<< "\n";
                }
            }
          if(input=="a"){
          GRID[posY_player][posX_player]=".";
          posX_player--;

          if (posY_player==posY_Tresuer && posX_player == posX_Tresuer) {
          cout << "BOOM treasure\n";
          return 0;
          }
          else if (GRID[posY_player][posX_player]=="T") {
            cout << "BOOM Trap\n";
            return 0;

          }

          GRID[posY_player][posX_player]="@";

          for(int i = 0; i <   Obj.Row; i++) {
              for(int j = 0; j <   Obj.Coloms; j++){
                  cout<< GRID[i][j]<< " ";
              }

                    cout<< "\n";
              }

          }
          if(input=="w"){
          GRID[posY_player][posX_player]=".";
          posY_player--;
          if (posY_player==posY_Tresuer && posX_player == posX_Tresuer) {
          cout << "BOOM treasure\n";
          return 0;
          }
          else if (GRID[posY_player][posX_player]=="T") {
            cout << "BOOM Trap\n";
            return 0;

          }

          GRID[posY_player][posX_player]="@";

          for(int i = 0; i <   Obj.Row; i++) {
              for(int j = 0; j <   Obj.Coloms; j++){
                  cout<< GRID[i][j]<< " ";
              }

                    cout<< "\n";
              }

          }
          if(input=="s"){
          GRID[posY_player][posX_player]=".";
          posY_player++;
          if (posY_player==posY_Tresuer && posX_player == posX_Tresuer) {
          cout << "BOOM treasure\n";
          return 0;
          }
          else if (GRID[posY_player][posX_player]=="T") {
            cout << "BOOM Trap\n";
            return 0;

          }
          GRID[posY_player][posX_player]="@";

          for(int i = 0; i <   Obj.Row; i++) {
              for(int j = 0; j <   Obj.Coloms; j++){
                  cout<< GRID[i][j]<< " ";
              }

                    cout<< "\n";
              }

          }



    }
    if(input=="quit" ){
      cout << "[GAME OVER]\n";

      return 0;


    }



  }







return 0;
}
