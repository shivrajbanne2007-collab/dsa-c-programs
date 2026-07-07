// 3. Implement bubble sort to give O(n) time complexity in best case. (Use flag variable).
#include <stdio.h>

void Selection_Sort(int arr[])
{
    int i, k, itr;
    int cmp = 0, pass = 0;
    int flag;

    for (itr = 0; itr < 5; itr++)
    {
        flag = 0;
        pass++;

        for (i = 0; i < 4; i++)
        {
            cmp++;

            if (arr[i] > arr[i + 1])
            {
                k = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = k;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\n pass is %d", pass);
    printf("\n compare is %d", cmp);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Selection_Sort(arr);
    return 0;
}
