//BEGIN
//float data[N]
//float maximum = -1e30 // Initialise to a large negative number
//int maxIndex
//FOR i = 0 to N-1 // C array indexing from 0 to N-1
//IF data[i] > maximum
//maximum = data[i]
//maxIndex = i
//ENDIF
//ENDFOR
//PRINT ("The maximum value was %f, found at index %d", maximum, maxIndex)
//END
//You may use this (very incomplete) template:
//#include <stdio.h>
//int main() {
//const int N = 5; // const means "constant"
//float data[5] = {1.2, 8.4, 10.8, -0.4, -8.234, 3.1};
//// Declare other variables
//// Implement search
//// Print result
//}

#include <stdio.h>
 
int main()
{
  int array[100], maximum, size, c, location = 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 
  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}