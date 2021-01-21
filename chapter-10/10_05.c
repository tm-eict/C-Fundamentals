#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int insertIndex(int[], int, int);
void printArray(int[], int);
void read(int[], int);
void shiftArr(int[], int, int);

int main(void)
{
    // # Variables
    int arr[SIZE], last, err, iIndex;


    // # Input & Logic
    printf("Enter %d ints: ", SIZE);
    read(arr, SIZE);


    // # Ouput
    printArray(arr, SIZE);


    // # Exit
    return 0;
}

/*
* Return fisrt index where where b < a[i]
*/
int insertIndex(int a[], int b, int n)
{
    int ret = n;

    // Get the first index where b < a[i]
    for (int i = 0; i < n && ret == n; i++)
        if (b < a[i])
            ret = i;

    return ret;
}

void printArray(int a[], int n)
{
    printf("%d", a[0]);
    if (n > 1)
        for (int i = 1; i < n; i++)
            printf(", %d", a[i]);
}


void read(int a[], int n)
{
    int tmp, insertIdx;

    // First number can always go on index 0
    scanf("%d%*c", &a[0]);

    for (int i = 1; i < n; i++)
    {
        scanf("%d%*c", &tmp);

        // Get the index where 'tmp' needs to be placed
        insertIdx = insertIndex(a, tmp, i);

        // If it that index is already filled in
        if (insertIdx < i)
        {
            // Shift all values with and after index 'insertIdx' one to the right
            shiftArr(&a[insertIdx], 1, n - insertIdx);
        }

        // Place 'tmp' in the right place
        a[insertIdx] = tmp;
    }

}


/*
* Shift all values 'shift' to the right (or left when 'shift' < 0)
*/
void shiftArr(int a[], int shift, int len)
{
    // TODO: research if you can't use the '>>' operator (still needs to work for any array type)
    for (int i = len - 1; i >= 0; i--)
        a[i + shift] = a[i];
}