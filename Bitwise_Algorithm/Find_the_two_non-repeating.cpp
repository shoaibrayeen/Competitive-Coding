#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
/* This finction sets the values of *x and *y to nonr-epeating
 elements in an array arr[] of size n*/
void get2NonRepeatingNos(int arr[], int n, int *x, int *y)
{
  int xorN = arr[0]; /* Will hold xorN of all elements */
  int set_bit_no;  /* Will have only single set bit of xorN */
  int i;
  *x = 0;
  *y = 0;

  /* Get the xorN of all elements */
  for(i = 1; i < n; i++)
   xorN ^= arr[i];

  /* Get the rightmost set bit in set_bit_no */
  set_bit_no = xorN & ~(xorN-1);

  /* Now divide elements in two sets by comparing rightmost set
   bit of xorN with bit at same position in each element. */
  for(i = 0; i < n; i++)
  {
    if(arr[i] & set_bit_no)
     *x = *x ^ arr[i]; /*xorN of first set */
    else
     *y = *y ^ arr[i]; /*xorN of second set*/
  }
}

/* Driver program to test above function */
int main()
{
  int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
  int *x = (int *)malloc(sizeof(int));
  int *y = (int *)malloc(sizeof(int));
  get2NonRepeatingNos(arr, 8, x, y);
  printf("The non-repeating elements are %d and %d", *x, *y);
  getchar();
}
