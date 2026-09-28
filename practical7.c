#include <stdio.h>

void quicksort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = a[high];
        i = low;

        for (j = low; j < high; j++)
        {
            if (a[j] < pivot)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
            }
        }

        temp = a[i];
        a[i] = a[high];
        a[high] = temp;

        quicksort(a, low, i - 1);
        quicksort(a, i + 1, high);
    }
}

int main()
{
    int a[] = {5, 2, 8, 1, 3};
    int n = 5, i;

    quicksort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
} 