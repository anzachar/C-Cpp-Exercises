//Exam, exercise 2: Lightbulbs//

#include <stdio.h>
#define SIZE 1000

int solution(int A[], int N); //function that takes as arguements an array and its size//


int main() //testing scenarios given in exercise plus one more//
{
	printf("\n---TEST1--- ");
    int A1[] = {2, 1, 3, 5, 4};
    int N1 = 5;
    printf("\nNumber of moments when all the bulbs that were on shined: %d\n", solution(A1, N1)); 

	printf("\n---TEST2--- ");
    int A2[] = {2, 3, 4, 1, 5};
    int N2 = 5;
    printf("\nNumber of moments when all the bulbs that were on shined: %d\n", solution(A2, N2)); 
	
	printf("\n---TEST3--- ");
    int A3[] = {1, 3, 4, 2, 5};
    int N3 = 5;
    printf("\nNumber of moments when all the bulbs that were on shined: %d\n", solution(A3, N3)); 
    
    printf("\n---TEST4---");
    int A4[]={2,3,1,5,4,6};
    int N4=6;
    printf("\nNumber of moments when all the bulbs that were on shined: %d\n", solution(A4, N4));
    
    printf("\n---TEST5---"); //Prompting user to choose numer of bulbs and which to turn on each time//
    int i,j;
    int N5;
    int A5[SIZE];
    printf("\nEnter number of bublbs: ");
    scanf("%d", &N5);
    for(i=0;i<N5;i++)
    {
    	printf("\nEnter the number of the bulb you want to turn on: ");
    	scanf("%d", &j);
    	A5[i]=j;
	}
    
    printf("\nNumber of moments when all the bulbs that were on shined: %d\n", solution(A5, N5));
    

    return 0;
}

int solution(int A[], int N) //function that takes as arguements an array and its size: finds number of instances at which all on bulbs shined
{
    int current_max = 0; //max number we encounter while going through the array. initialization at 0//
    int all_shine = 0; //number of moments (instances) where ALL bulbs that are on shine. initialization at 0//

    for (int i = 0; i < N; i++) //going through the given array//
	{
        if (A[i] > current_max) // checking if current element is larger than our current max and if so, changing max//
		{
            current_max = A[i];
        }

        if (current_max == i + 1) // condition for a bulb to shine (bulb is on and all previous bubls are also on)//
		{
            all_shine++;
            printf("\nAt moment %d, all bulbs that are on shine!", i);
        }
    }

    return all_shine;
}
