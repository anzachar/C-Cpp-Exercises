#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

float random_num_gen(float min, float max);
void bubble_sorting(float *pinakas, int n);
void swap(float *a, float *b);
void print_array(float *pinakas, int n);


main()
{
	float min, max;
	int n;
	float array[SIZE];
	int i;
	
	// prompting user for input //
	printf("\nEnter minimum: ");
	scanf("%f", &min);
	printf("\nEnter maximum: ");
	scanf("%f", &max);
	printf("\nEnter number of elements: ");
	scanf("%d", &n);
	
	srand(time(NULL));
	// creating the original array by calling function //
	for(i=0;i<n;i++)
	{
		array[i]=random_num_gen(min, max);
	}
	
	// printing original array //
	printf("\nNow printing original array:\n");
	print_array(array, n);
	
	// Sorting array//
	
	// printing sorted array //
	printf("\nNow printing sorted array:\n");
	print_array(array, n);
	
	
}

float random_num_gen(float min, float max)
{
	
	float element= min +(float)(rand())/((float)(RAND_MAX)/(max-min));
	return element;
	
}

void print_array(float *pinakas, int n)
{
	int i;
	
	printf("\nArray: [");
	for (i=0;i<n-1;i++)
	{
		printf("%f, ", pinakas[i]);
	}
	printf("%f]\n", pinakas[n-1]);
}



void bubble_sorting(float *pinakas, int n)
{
	int i,j;
	int incount=0;
	int outcount=0;
	
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
		
			if (pinakas[j]<pinakas[j-1])
			{
				swap(&pinakas[j], &pinakas[j-1]);
			}
			incount++;
		
		}
		outcount++;
		
	}
	printf("\nincount=%d", incount);
	printf("\noutcount=%d\n", outcount);
}
void swap(float *a, float *b)
{
	float temp;
	temp=*a;
	*a=*b;
	*b=temp;
}