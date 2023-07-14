// Zonte Bryant
// 10/20/2021
//  Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //random numbers

void start();
void house();
void cemetery();
void youDie();




int main()
{
	start(); // function call
	
	return 0;
}

void start()
{
	int choice = 0;
	
	printf("THE HAUNTED ROAD GAME!!!\n\n\n");
	printf("Your car has broken down on a dark road. \n");
	printf("To the right you see an old house. \n");
	printf("To the left you see an small cemetery. \n");
	printf("Enter a 1 to go to the house. Enter a 2 to go to the cemetery. \n");
	scanf(" %i", &choice);
	
	if(choice == 1)
	{
		house(); //function call
	}
	else
	{
	    cemetery(); //function call
    }
}// end of start function

void house()
{
   srand(time(NULL)); // seed the random number generator
   
   int bats = 0;
   
   bats = rand() % 100 + 1;
   
   printf("You walk up to the house and discover the front door is open. \n");
   printf ("You call into the house to see  if anyone is home.... \n\n\n");
   system("pause");
   printf("OUT OF THE DOOR %i BATS COME FLYING AT YOU!! \n", bats);
   
   if(bats > 50)
   {
   	  printf("The bats attack you!!!\n");
   	  youDie();
   }
   else
   {
   	printf("The bats fly away. \n");
   	printf("You see a phone by the door and you call a tow truck. \n");
   	printf("THE END.");
   	start();
   }
} // end of house function 

void cemetery()
{
	int steps = 0;
	
	printf("You walk into the cemetery.... \n");
	printf("With your flashlight you start reading the tombstone\n");
	printf("On one of the tombstone is YOUR NAME!!\n\n");
	printf("How many steps do you want to take toward that tombstone?\n");
	scanf(" %i", &steps);
	
	switch(steps)
	{
		case 1 ... 5:
		    printf("You see that the date death is TODAY!\n");
		    printf("A hand comes out of the graves and pulls you in!!\n");
		    youDie();
		    break;
		case 6 ... 10:
			printf("You see that the date of death is not for 50 more years.... \n");
			printf("You turn and go to the house. \n");
			house();
			break;
		default:
			youDie();
		
	}	
}
void youDie()
{
	printf("OH NO! YOU DIED!!\n\n");
    start(); 
}
