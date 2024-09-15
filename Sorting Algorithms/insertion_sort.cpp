#include <stdio.h>
#define SIZE 1000
#include <stdlib.h>
#include <time.h>

void insertion_sort(double *pin, int n);
void swap(double *a, double *b);
double rand_num_gen(double min, double max);
void print_array(double *pin, int n);



main()
{	double min, max;
	int n;
	double rand_array[SIZE];
	printf("Enter min: ");
	scanf("%lf", &min);
	printf("\nEnter max: ");
	scanf("%lf", &max);
	printf("\nEnter number of array elements you want to create: ");
	scanf("%d", &n);
	
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		rand_array[i]=rand_num_gen(min, max);
	}
	printf("\nNow printing the unsorted array: ");
	print_array(rand_array, n);
	
	insertion_sort(rand_array, n);
	
	printf("\nNow printing the sorted array: ");
	print_array(rand_array, n);
}	


void insertion_sort(double *pin, int n)
{
	int i;
	int j;
	
	for(i=1;i<n;i++)
	{
		for(j=i;j>=1;j--)
		{
			if (pin[j]<pin[j-1])
			{
				swap(&pin[j],&pin[j-1]);
			}
			else
			{
				break;
			}
		}
	}
}

void swap(double *a, double *b) //swap function //
{
	double temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}

double rand_num_gen(double min, double max)
{
	
	double element;
	
	element=min +(double)(rand())/((double)(RAND_MAX)/(max-min));
	
	return element;
}

void print_array(double *pin, int n)
{
	int i;
	printf("\nArray: [");
	
	for(i=0;i<n-1;i++)
	{
		printf("%lf, ", pin[i]);
	}
	printf("%lf]", pin[n-1]);
}
