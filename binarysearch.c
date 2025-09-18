#include <stdio.h>
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int key, mid, ub = 4, lb = 0;
    int found = 0;
    printf ("Enter the element to search: ");
    scanf ("%d ", &key);
    while (lb<=ub)
    {
        mid = (ub + lb)/2;
        if (arr[mid] == key)
        {
            printf ("Element found at index %d", mid);
            break;
        }
        else if (arr[mid]>key)
        {
            ub = mid -1;
        }
        else
        {
            lb = mid +1;
        }
    }
    if (!found)
        printf ("Element not found ");
    return 0;
}
