#include <iostream>

using namespace std ;

typedef int (**ptrtoptrtofun)(int*, int);
typedef int (*arrofptrtofun[])(int*, int) ;

typedef int* (*callback_function)
(
    int **arr_2d,
    int number_of_row,
    int *column_size,
    ptrtoptrtofun ptr1
);

int sum_row(int *row, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += row[i];
    }
    return sum;
}

int product_row(int *row, int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= row[i];
    }
    return product;
}


int max_row(int *row, int size) {
    int maxnumber = row[0];

    for (int i = 0; i < size; i++) {
        if(maxnumber <row[i])
        {
           maxnumber = row[i];
        }
    }
    return maxnumber;
}


int* alloc_function(int **arr_2d, int arr_size, int *row_size, int (**fun)(int*, int)) {
    int* result = (int*)malloc(arr_size * sizeof(int));
    for (int i = 0; i < arr_size; i++) {
        result[i] = fun[i](arr_2d[i], row_size[i]);
    }
    return result;
}




int main (void)
{
    int row1[] = {1, 2, 3};
    int row2[] = {5, 6, 7,8};
    int row3[] = {9, 10, 11,12,13};
    int* arr_2d[] = {row1, row2, row3};
    int columnNumberOfRaw[] = {3, 4, 5};
    int numberOfRaw = 3;
    arrofptrtofun ptr_payload = {sum_row, product_row, max_row};

    callback_function ptr = alloc_function;

    int* result = ptr(arr_2d, numberOfRaw, columnNumberOfRaw, ptr_payload);

    for (int i = 0; i < numberOfRaw; i++) 
    {
        printf("Result of row %d: %d\n", i + 1, result[i]);
    }

    free(result);
}
