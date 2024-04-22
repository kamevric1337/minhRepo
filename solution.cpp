#include<stdio.h>

void negative_sort(int* array, int* negative_array, int n, int& negative_index)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] < 0)
        {
            negative_array [negative_index] = array[i];
            negative_index++;
        }
    }
}

void positive_sort(int* array, int* positive_array, int n, int& positive_index)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] > 0)
        {
            positive_array [positive_index] = array[i];
            positive_index++;
        }
    }
}

void printArray(int* array, int n)
{
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

void getArray(int* array, int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

int main()
{
    // const int n = 10;
    
    // int array[10] = {1, -1, 2, -2, 3, -3, 4, -4, 5, -5};
    // int positive_array[10], negative_array[10];

    int n = 0;

    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", &n);

    int* array = new int[n];
    printf("\nNhap mang: ");
    getArray(array, n);

    int* negative_array = new int[n];
    int* positive_array = new int[n];
    int positive_index = 0, negative_index = 0;

    // xep cac phan tu vao cac mang
    negative_sort(array, negative_array, n, negative_index);
    positive_sort(array,positive_array, n, positive_index);

    // in ket qua
    printf("\nMang cac so duong: ");
    printArray(positive_array, positive_index);
    printf("\nMang cac so am: ");
    printArray(negative_array, negative_index);

}