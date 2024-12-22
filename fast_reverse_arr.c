#include <stdio.h>
#include <stdlib.h>


void reverse_arr(int arr[], size_t arr_size){
    int new_arr[arr_size];
    int top, bottom, iter;
    arr_size--;
    if (arr_size < 2){
        exit(1);
    }
    iter=0;
    do
    {
        top = arr[arr_size - iter];
        bottom = arr[iter];
        arr[iter] = top;
        arr[arr_size - iter] = bottom;
        iter++;
    } while ((arr_size / iter) > 2);
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);
    reverse_arr(arr, arr_size);
    for (int i=0; i < arr_size; i++){
        printf("%i\n", arr[i]);
    }
    return 0;
}