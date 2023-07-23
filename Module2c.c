// Include the standard input-output library
#include <stdio.h>

// Main function
int main()
{
    // Declare variables
    int array[50], size, position, i;

    // Prompt for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Prompt for array elements
    printf("Enter array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    // Prompt for the position of the data to delete
    printf("Enter the position of the data to delete: ");
    scanf("%d", &position);

    // Delete the data at the specified position by shifting elements
    for (i = position - 1; i < size; i++) {
        array[i] = array[i + 1];
    }

    // Decrement the array size after deletion
    size--;

    // Print the updated array
    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

