#include <stdio.h>
int main ()
{
    int arr [10] = {3,8,2,4,5};
    int size = 5;
    int n, position = -1;
    printf ("original array: ");
    for (int i=0; i<size; i++)
    {
        printf ("%d", arr[i]);
    }
    printf ("Enter the number to delete: ");
    scanf ("%d", &n);
    for (int i=0; i<size; i++)
    {
        if (arr[i]==n)
        {
            position = i;
            break;
        }
    }
    if (position == -1)
    {
        printf ("Element not found");
    }
    else {
        for (int i= position; i<size-1; i++)
        {
            arr [i]= arr[i+1];
        }
        size = size-1;
        printf ("New array : ");
        for (int i=0; i<size; i++)
        {
            printf ("%d", arr[i]);
        }
            }
            return 0;
}
