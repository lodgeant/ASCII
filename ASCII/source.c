#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "utils.h"

#define COLUMN_WIDTH 4


// ** PROTOTYPES **
int IntToBinary(int k);


// ** MAIN **
int main()
{


	// ** Run process over and over **
	while (1)
	{		
		// ** Get start and end values from user **	
		int startIndex;// = 48;
		int endIndex;// = 58;
		printf("Enter Start Index: ");
		scanf("%d", &startIndex);		
		if (startIndex == -1) break;
		printf("Enter End Index: ");
		scanf("%d", &endIndex);		
		if (endIndex == -1) break;

		// ** Print ASCII details for range using user provided details **	
		printf("\n\n");
		int i = 1;
		for (int a = startIndex; a <= endIndex; a++)
		{
			printf("%03d %08d %c\t\t", a, IntToBinary(a), a);
			if (i % COLUMN_WIDTH == 0) printf("\n");
			i++;
		}

		// ** Add padding **
		printf("\n\n\n");
	}

		


	// ** Finish Up **
	printf("\n\n\n");
	printf("Function completed...Press any key to continue\n");
	//getchar();
	return 0;
}
