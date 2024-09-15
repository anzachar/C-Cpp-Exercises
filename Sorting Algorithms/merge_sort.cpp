#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

void merge_sort(double *pin, int start, int finish);
void merge(double *pin, int start, int finish);
void swap(double *a, double *b);
double *rand_array_gen(double min, double max, int n);
void print_array(double *pin, int n);

main()
{	double min, max;
	int n;
	
	printf("Enter min: ");
	scanf("%lf", &min);
	printf("\nEnter max: ");
	scanf("%lf", &max);
	printf("\nEnter number of array elements you want to create: ");
	scanf("%d", &n);
	
	
	srand(time(NULL));
	double *rand_array=rand_array_gen(min, max, n); //creating random array
	//if (rand_array == NULL) 
	//{
        //printf("Memory allocation failed.\n");
        //return 1;
    //}
	printf("\nNow printing the unsorted array: ");
	print_array(rand_array, n);
	
	merge_sort(rand_array, 0, n-1);
	
	printf("\nNow printing the sorted array: ");
	print_array(rand_array, n);
}

void merge_sort(double *pin, int start, int finish) // merge sort function //
{
	
	int middle; // metavlhth gia to xwrismo tou pinaka se ypopinakes (sth "mesh")
	
	if(start==finish) //1 element remaining//
	{
		return;
	}
	
	else if(start==finish-1) // 2 elements remaining//
	{
		if (pin[start]>pin[finish])
		{
			swap(&pin[start], &pin[finish]);
		}
	}
	
	else // anadromikh klhsh//
	{
		middle=(start+finish)/2;
		merge_sort(pin, start, middle); // efarmogh merge sort ston aristero ypopinaka //
		merge_sort(pin, middle+1, finish); //efarmogh merge sort ston deksi ypopinaka //
		merge(pin, start, finish); // efarmogh merge stous dyo ypopinakes //
		
	}
	
}

void merge(double *pin, int start, int finish) // merge function //
{
	double C[SIZE];
	int k; //metrhths tou vohthitikou pinaka C//
	int i,j; //metrhtes twn dyo ypopinakwn//
	int n,m; //telh twn dyo ypopinakwn//
	int middle; // metavlhth gia xwrismo pinaka//
	
	middle=(start+finish)/2;
	// 1os ypopinakas//
	i=start;
	n=middle;
	//2os ypopinakas//
	j=middle+1;
	m=finish;
	//arxikopoihsh metrhth C//
	k=0;
	
	// Sygxwnefsh twn 2 ypopinakwn //
	while(i<=n && j<=m)
	{
		if(pin[i]<pin[j]) // Sygkrish 2 trexontwn stoixeiwn kai antigrafh mikroterou ston C//
		{
			C[k]=pin[i];
			k++;
			i++;
		}
		else
		{
			C[k]=pin[j];
			k++;
			j++;
		}
	}
	
	// Antigrafh tou pinaka pou perissevei sto telos tou sygxwnevmenou pinaka C//
	
	if(i==n+1) // Eksantlhsh aristerou ypopinaka//
	{
		while(j<=m)
		{
			C[k]=pin[j]; //antigrafh stoixeiwn tou deksiou ypopinaka sto telos tou C//
			k++;
			j++;
		}
	}
	else //eksantlhsh deksiou ypopinaka //
	{
		while(i<=n)
		{
			C[k]=pin[i]; //antigrafh aristerou ypopinaka sto telos tou C //
			k++;
			i++;
		}
	}
	for(i=start, k=0;i<=finish;i++,k++)
	{
		pin[i]=C[k];
	}
		
}

void swap(double *a, double *b) //swap function //
{
	double temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}

double *rand_array_gen(double min, double max, int n)
{
	
	double *array; //=(double*)malloc(n*sizeof(double));//
    //if (array == NULL) 
	//{
        //return NULL; 
	//}
	int i=0;
	for(i=0;i<n;i++)
	{
		array[i]=min +(double)(rand())/((double)(RAND_MAX)/(max-min));
	}
	
	
	return array;
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
