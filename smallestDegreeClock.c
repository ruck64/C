#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char** argv)
{
	float hour,minute,total =0;
	float hDegree,mDegree = 0;
	
	//verifing they passed the correct amount of arguments
	if(argc != 3)
	{
		printf("./smallestDegreeClock <hours> <minutes>\n");
		return 0;
	}
	
	//setting initial values for floats 
	hour = atof(argv[1]);
	minute = atof(argv[2]);

	//making sure parameters will work like analog clock
	if(hour > 11 || hour < 0 || minute > 59 || minute < 0)
	{
		printf("Hours must be between 0 and 11\n");
		printf("Minutes must be between 0 and 59\n");
		return 0;
	}	

	hDegree = hour * 30;		//getting degrees for hour out of 360
	hDegree = hDegree + (minute * .5); //adding  minute adjustment to hours
	//printf("hours degrees equals %f\n",hDegree);	
	
	mDegree = minute * 6;		//getting degree for minutes
	//printf("minutes degrees equals %f\n",mDegree);	
	
	total = hDegree - mDegree; //getting degree difference
	
	if(total < 0)
		total = total * -1;
	
	//printf("abs(%f(hDegree) - %f(mDegree))\n",hDegree,mDegree);
	//printf("total = %f\n",total);
	
	//smallest degree cant be greater than 180
	if(total > 180)
		total = 360 - total;
	
	printf("Smallest degree between %.0f hours and %.0f minutes is %.1f\n",hour,minute,total);
	return 0;
}
