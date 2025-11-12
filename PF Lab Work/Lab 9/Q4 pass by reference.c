#include <stdio.h>

void cubeByReference(int *nPtr) 
{
   *nPtr = *nPtr * *nPtr * *nPtr;
}
int main( void ) //execution starts here
{
  int number = 5; //initialize number
  printf( "The original value of number is %d \n", number );
 
  cubeByReference(&number);//pass address of the number to cubeByReference
  printf( "The new value of number is %d", number );
} 

