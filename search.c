#include <stdio.h>
int main ()
{
    int arr [10] = {5,7,12,6,15,8,36,10,1};
    int tofind, flag=0;
    printf ("Enter the number to find:- ");
    scanf ("%d",&tofind);
    for (int i=0; i<10; i++)
    {
        if (arr[i] == tofind)
        {
            printf ("Number %d found at index %d", tofind, i+1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf ("Number not found ");
    }
    return 0;
}
