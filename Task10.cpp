/*
Task 10 C++ code
By Joseph Morritt
ID:
Date:

*/
#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <string>
#include <random>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;


class Node
{
	public:
	string data;
	Node *next;

/* Reference's (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(Node** head_ref, string new_data)
{
	/* allocates the node */
	Node* new_node = new Node();

	Node *last = *head_ref; /* used in step 5*/

	/* Inputs teh Data*/
	new_node->data = new_data;

	/* The new node will be the
	 last node, so make next NULL*/
	new_node->next = NULL;

	/* if the List is empty,
  make the new node the head */
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	/* Else writes till the last node */
	while (last->next != NULL)
		last = last->next;

	/* Change the penultimate node */
	last->next = new_node;
	return;
}
};
/* Bunny Class liked to the Nod  */
class Bunny : public Node {
public:
/* defining the varbale for random values */
 	int sexgen;
	int colourgen;
	int agegen;
	int namegen;
  /* inslairing the list to start from the head */
	Node* head = NULL;

/* values usd to be called when creating itums in a lined list */
	string Colour[5] = {"white", "brown", "black", "spotted"};
	string Sex[2]={"Male","Female"};
	string Age[11]={"0","1","2","3","4","5","6","7","8","9","10"};
	string Names[11]={"Bob","Mia","Tom","Dan","Joe","eve","Scott","max","Bill","steve"};
/* Function delecration */
  void addlist(){
/* Inserting values in to the end of the linked list  */
	append(&head, Colour[colourgen]);
	append(&head, Sex[sexgen]);
	append(&head, Age[agegen]);
	append(&head, Names[namegen]);
	append(&head, " ");
}
/* function to print out the list */
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data<<'\n';
		node = node->next;
	}
}

};
int main()
{
  /*  setting the sett for the random function */
	srand(time(0));
  /*Class object*/
  Bunny Bun;
   /* defining the input varbel */
	string input;
  /* while loop for the Menu system to run in  */
	while (input !="quit") {
    /* Ask the user what they would like to do.  */
		std::cout << "________________________" << '\n';
		std::cout << "what would you like to  do." << '\n';
    std::cout << "p to print out a Bunny " << '\n';
    std::cout << "q to quit the game " << '\n';

    /* Takes teh input from the user */
		std::cin >> input;
    /*  if steam for given input  */
		if(input == "p")
		{

		int count = 1 ;

			cout<<"Created Linked list is: "<<'\n';
      /* for loop to print out values  */
		for (int i = 0; i < count; i++) {
			/* Random value genrtaion */
			Bun.sexgen = rand() % 2;
			Bun.colourgen = rand() %4;
			Bun.agegen = rand() %11;
			Bun.namegen = rand() %11;
      /* Calles the addlist function to creat list Memebers  */
			Bun.addlist();
      /*  calls print function */
			Bun.printList(Bun.head);
		  std::cout << " " << '\n';
	  	}
	  }
    /* closees program window */
		if(input =="q"){
		return 0;
		}
 }
}
