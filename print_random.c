#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"         //allows for program to see the random.c file
#include "myHeader.h"       //allows for program to see myHeader.h file

int main()
{
    int min = 65;
    int max = 90;

	/** Seed the randomizer **/
	srand((unsigned)time(NULL));

    /** Print out random word **/
	printf("Today's random word: ");
	for(int a = 0; a < 7; a++) {
        putchar(min + randChar(rand() % (max - min + 1)));      //Uses ASCII values to convert into char
    }

	putchar('\n');

	return(0);
}

