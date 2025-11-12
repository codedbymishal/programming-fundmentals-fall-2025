#include<stdio.h>
int main()
{
	int arr[3];
 
    int *ptr;// declare pointer variable

    int i; // declare loop iterator variable

    ptr = arr; // ptr = &arr[0]

    for (i = 0; i < 3; ++i) // enter values in array elements using pointer notation
    {
 	   *(ptr+i) = i+1;
    }

 printf("\nDisplaying value using pointers:\n"); //print values of all array elements using pointer notation
    for (i = 0; i < 3; i++)
   {
       printf("%d\n", *(ptr+i));
   }

 printf("\nDisplaying address using pointers:\n"); //print addresses of all array elements using pointer notation
    for (i = 0; i < 3; i++)
    {
       printf("%p\n", ptr+i);
    }
 return 0;
} 
