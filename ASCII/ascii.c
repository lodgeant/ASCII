#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define VERSION "1.0"
#define CREATED_BY "Antony Lodge"
#define MAX_COLUMNS 5
#define MIN_COLUMNS 1


// ** PROTOTYPES **
int IntToBinary(int k);
void ShowVersion();



// ** MAIN **
int main()
{
	// ** Show application details **
	ShowVersion();


	// ** Start application **
	while (1)
	{
		// ** Clear screen **		
		//system("@cls||clear");

		


		// ** Get start and end values from user **	
		int startIndex = 0;		// = 48;
		int endIndex = 0;		// = 58;
		int columnWidth = 0;

		// ** Get Column Width from user **
		while (columnWidth != -1)
		{
			printf("Enter Column Width: ");
			if (scanf("%d", &columnWidth) != 1)
			{
				// ERROR NEEDS TO BE CAUGHT HERE...
			}
			if (columnWidth == -1) break;			
			else if (columnWidth >= MIN_COLUMNS && columnWidth <= MAX_COLUMNS) break;
			else if (columnWidth < MIN_COLUMNS || columnWidth > MAX_COLUMNS)
			{
				printf("Column width must be between %d and %d\n\n", MIN_COLUMNS, MAX_COLUMNS);
			}			
		}
		if (columnWidth == -1) break;

		// ** Get start and end values from user **			
		printf("Enter Start Index: ");		
		if (scanf("%d", &startIndex) != 1)
		{
			// ERROR NEEDS TO BE CAUGHT HERE...
		}
		if (startIndex == -1) break;

		printf("Enter End Index: ");		
		if (scanf("%d", &endIndex) != 1)
		{
			// ERROR NEEDS TO BE CAUGHT HERE...
		}
		if (endIndex == -1) break;

		// ** Print ASCII details for range using user provided details **	
		printf("\n\n");
		int i = 1;
		for (int a = startIndex; a <= endIndex; a++)
		{
			//printf("%03d %08d %c\t\t", a, IntToBinary(a), a);
			if (a == 10)
			{
				printf("%03d %08d #\t\t", a, IntToBinary(a));
			}
			else
			{
				printf("%03d %08d %c\t\t", a, IntToBinary(a), a);
			}			
			if (i % columnWidth == 0) printf("\n");
			i++;
		}

		// ** Add padding **
		printf("\n\n\n");


		// ** Check if another run is required **
		//char response;
		//printf("Run again...?");
		//if (scanf("%c", &response) != 1)
		//{
		//	// ERROR NEEDS TO BE CAUGHT HERE...
		//}
		//if (response != 'y' && response != 'Y')
		//{
		//	break;
		//}

	}
	
	
	// ** Finish Up **
	//printf("\n\n\n");
	//printf("Function completed...Press any key to continue\n");
	//getchar();
	return 0;
}



int IntToBinary(int k)
{
	if (k == 0) return 0;
	if (k == 1) return 1;                       /* optional */
	return (k % 2) + 10 * IntToBinary(k / 2);
}


void ShowVersion()
{
	printf("*************************************\n");
	printf("ASCII App v%s | Created by %s\n", VERSION, CREATED_BY);
	printf("*************************************\n");
	printf("\n\n");
}


