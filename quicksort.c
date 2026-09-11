#include <stdio.h>

void quickSort(int arr[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = arr[low];
        i = low + 1;
        j = high;

        while (i <= j)
        {
            while (i <= high && arr[i] <= pivot)
                i++;

            while (arr[j] > pivot)
                j--;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quickSort(arr, low, j - 1);
        quickSort(arr, j + 1, high);
    }
}

int main()
{
    int marks[] = {75, 42, 90, 65, 30, 85};
    int n = 6;
    int i;

    printf("Student marks before sorting:\n");

    for (i = 0; i < n; i++)
        printf("%d ", marks[i]);

    quickSort(marks, 0, n - 1);

    printf("\n\nStudent marks after Quick Sort:\n");

    for (i = 0; i < n; i++)
        printf("%d ", marks[i]);

    return 0;
}
