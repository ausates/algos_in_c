#include <stdio.h>

int binary_search(int arr[], int low, int high, int myNum){
    int position;
    int prevent_inf = 0;
    while (high) {
        position = (high + low) / 2;
        int num = arr[position];
        printf("Guess: %i\n", num);
        printf("Actual: %i\n", myNum);
        if (num == myNum){
            return 0;
        } else if (num > myNum)
        {
            high = num;
        } else {
            low = num;
        }
        if (high < prevent_inf){
            break;
        }
        prevent_inf++;
    }
    return 1;
}


int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int lowest_position = 0;
    int highest_position = arr_len-1;

    int myNum;
    printf("get my num: \n");
    scanf("%d", &myNum);
    if ((myNum > arr[highest_position]) || (myNum < arr[lowest_position])){
        printf("You went out of bounds nerd...");
        myNum = 4;
    }
    binary_search(arr, lowest_position, highest_position, myNum);
    
}