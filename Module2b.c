
// Include the standard input-output library
#include<stdio.h>

// Main function
int main()
{
    // Declare variables
    int array[50], size, i, num, pos;

    // Prompt for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Prompt for array elements
    printf("Enter array elements: ");
    for(i = 0; i < size; i++)
        scanf("%d", &array[i]);

    // Prompt for the data to insert and its position
    printf("Enter the data you want to insert: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);

    // Shift elements to make space for the new data
    for(i = size - 1; i >= pos - 1; i--){
        array[i + 1] = array[i];
    }

    // Insert the new data at the specified position
    array[pos - 1] = num;

    // Increment the array size
    size++;

    // Print the updated array
    printf("Updated array: ");
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
