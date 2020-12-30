//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Name: Vuochlang Chang                                                                                                            //
// Class: CSE222        Winter-2020     2419                                                                                        //
// Date: 02/29/2020                                                                                                                 //
// Assignment: PA5 - Eggtest                                                                                                        //
// Description: This code uses recursion and the use of dynamic programming to speed up the egg-function to calculate the highest   //
//              floor that an egg can drop without breaking. The code will ask user number of floors and number of eggs as inputs   //
//              and print out the result (as in the highest floor) using the two inputs from user.                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "all.h"

int main()
{       int f=0, Floor=0;//initializing values
        int e=0, Egg=0;
        int drop=0;
        char temp1[100], temp2[100];

        printf("# of floors: ");//get value for floors
        fgets(temp1,100,stdin);
        f=sscanf(temp1,"%d",&Floor);
        printf("# of eggs: ");//get value for eggs
        fgets(temp2,100,stdin);
        e=sscanf(temp2,"%d",&Egg);
        if(e==1 && f==1)//if value for eggs and floors are numbers
        {
                drop=egg(Floor,Egg);    //call the egg function
        }
        printf("Fewest # of drops= %d\n",drop);//print out the result
return 0;
}

