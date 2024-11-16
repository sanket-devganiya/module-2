// Write a program to find out the max number from given array using function

#include <stdio.h>

int findMax(int arr[], int size)

 {
    int max = arr[0]; 

    
    for (int i = 1; i < size; i++) 
    
     {
        if (arr[i] > max) 
        
        {
            max = arr[i];
        }
    }
    return max;
}

int main()

 {
    int arr[] = {3, 5, 7, 2, 8, 1}; 


    int size = sizeof(arr) / sizeof(arr[0]); 
    

    int max = findMax(arr, size);
    

    printf("The maximum number is: %d\n", max);
    
    return 0;
}
