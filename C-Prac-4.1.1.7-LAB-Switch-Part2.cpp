//Scenario
//Write a program that asks the user to enter the number of a month, and prints the number of days before this month since the start of the year.
//When the number does not correspond to a month(less than 1 or greater than 12), the program prints : Error: no such month in my calendar..
//Use only switch for computing the sum of the days(don't use any loops).
//You don't have to check whether or not the year is a leap year - assume it is a leap year.
//If you can't remember all the names and the number of days (and of course to speed up your programming), here is a list:
//
//1 : January - 31
//2 : February - 28 or 29 (during a leap year)
//3 : March - 31
//4 : April - 30
//5 : May - 31
//6 : June - 30
//7 : July - 31
//8 : August - 31
//9 : September - 30
//10 : October - 31
//11 : November - 30
//12 : December - 31 - of course you don't need this value in this task
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//2
//
//Expected output
//There are 31 days before the given month.
//
//Sample Input
//1
//
//Expected output
//There are 0 days before the given month.
//
//Sample Input
//4
//
//Expected output
//There are 91 days before the given month.
//
//Sample Input
//12
//
//Expected output
//There are 355 days before the given month.
//
//Sample Input
//13
//
//Expected output
//Error : no such month in my calendar.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int v=0,d=0;
	printf("Please enter a number:\n");
	scanf_s("%d", &v);
	switch (v) {
	case 12: d += 30;
	case 11: d += 31;
	case 10: d += 30;
	case 9 : d += 31;
	case 8 : d += 31;
	case 7 : d += 30;
	case 6 : d += 31;
	case 5 : d += 30;
	case 4 : d += 31;
	case 3 : d += 29;
	case 2 : d += 31;
	case 1 : printf("There are %d days  before the given month", d); break;
	default: printf("Error: No such month in calendar."); break;
	}
	return 0;
}
//
//1 : January - 31
//2 : February - 29 (during a leap year)
//3 : March - 31
//4 : April - 30
//5 : May - 31
//6 : June - 30
//7 : July - 31
//8 : August - 31
//9 : September - 30
//10 : October - 31
//11 : November - 30
//12 : December - Not needed