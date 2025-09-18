#include <stdio.h>
int main()
{
  int arr[10] = {1,2,5,7,8};
  int size = 5;
  int position = size;
  int n;
  printf ("Enter number to insert: ");
  scanf ("%d", &n);
  for (int i=0; i<size; i++)
  {
      if (n<arr[i])
        position = i;
      break;
  }
for (int i = size; i> position; i--)
{
    arr [i] = arr [i-1];
}
arr [position] = n;
size+= 1;
printf ("New array:- ");
for (int i=0; i<size; i++)
{
    printf ("%d", arr[i]);
}
return 0;
}
