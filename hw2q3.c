#include <stdio.h>
#include <stdlib.h>

void sumAndJump(int arr[], int len) // Replace this line with your function.
{
    int k,s = 0, cntJump = 0, i = 0;

    while (arr[i] != 0)
    {
        k = arr[i];

        for (int j = i; j < k+i; j++)
        {
            s = s + arr[j];
        }
        i = s;
        s = 0;

        cntJump++;
    }

    printf("%d\n", cntJump);
}










int main() {
    int len_array = 0;
    // First enter the size of the array
    scanf("%d", &len_array);
    // allocating the array - will be explained later in the course
    int* arr = malloc(sizeof(int) * len_array);
    if(arr) {
        // Enter the numbers that the array will hold
        for (int start_index = 0; start_index < len_array; start_index++) {
            scanf("%d", &(arr[start_index]));
        }
        sumAndJump(arr, len_array);
    }
    // Freeing the array - will be explained later in the course
    free(arr);
    return 0;
}
