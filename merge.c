#include <stdio.h>
int main()
{
    int arr1[5] = {1,3,5,7,9};
    int arr2[5] = {2,4,6,8};
    int merged [10];
    int size1 = 5, size2 = 4, size3 = 0;
    int i = 0, j = 0, k = 0;
    while ( i<size1 && j<size2)
    {
      if (arr1[i] < arr2[j])
      {
          merged [k++] = arr1[i++];
      }
      else {
        merged [k++] = arr2 [j++];
      }
    }
    while (i<size1)
    {
        merged [k++] = arr1[i++];
    }
    while (j<size2)
    {
        merged [k++]= arr2[j++];
    }
    size3 = size1 + size2;
    printf ("Merger array: ");
    for (int i=0; i<size3; i++)
    {
        printf ("%d ", merged[i]);
    }
    return 0;
}
