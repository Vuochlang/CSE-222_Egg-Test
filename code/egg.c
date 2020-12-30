#include "all.h"

//save[floors][egg];
int save[500][500]={0};

//egg-function
int egg(int floor, int eggs)
{       int i=1, j=1;
        int result1,result2,MIN=floor,MAX;
        if(save[floor][eggs]!=0)        return (save[floor][eggs]);//check if there's an existing value in the save
        if (floor<=0)   return 0;//if floor is less than 1
        if(floor==1)    return 1;//if floor is 1, then only 1 trial is needed
        if(eggs==1)     return floor;//if there is one egg
        for(i=1;i<=floor;i++)//loop to go through possible output from 1 to floor
        {       result1=egg(i-1,eggs-1);//recursive call 1
                save[i-1][eggs-1]=result1;

                result2=egg(floor-i,eggs);//recursive call 2
                save[floor-i][eggs]=result2;

                MAX=max(result1,result2);//get the max between both calls
                MIN=min(MIN,MAX+1);//get the min
        }//run the loop again until i >floor then exit the loop
        return MIN;
}

