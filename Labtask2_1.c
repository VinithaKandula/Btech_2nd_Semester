Lab task – 2

Assignment – 2 

1.	Write a program in C to store elements in an array and print them.

#include <stdio.h>
void  main()
{
 
    int i,n;
       printf("\n\nEnter the size of the array\n");
       scanf("%d",&n);
   int arr[n];
    printf("Input elements in the array :\n");
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }
 
    printf("\nElements in array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

Output :

Enter the size of the array

3

Input elements in the array :

element 0:5

element 1:9

element 2:0

•	Elements in array are: 5 9 0



2. Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>
// Main function
int main()
{
   int i, n, a[100];
   // Display a message to the user about the program's purpose
   printf("\n\nRead n number of values in an array and display it in reverse order:\n");
   printf("------------------------------------------------------------------------\n");
   // Prompt the user to input the number of elements to store in the array
   printf("Input the number of elements to store in the array :");
   scanf("%d", &n);
   // Prompt the user to input n elements into the array
   printf("Input %d number of elements in the array :\n", n);
   for (i = 0; i < n; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &a[i]);  // Read the input and store it in the array
   }
   // Display the values stored in the array
   printf("\nThe values stored in the array are : \n");
   for (i = 0; i < n; i++)
   {
       printf("% 5d", a[i]);  // Print each element in the array
   }
   // Display the values stored in the array in reverse order
   printf("\n\nThe values stored in the array in reverse are :\n");
   for (i = n - 1; i >= 0; i--)
   {
       printf("% 5d", a[i]);  // Print each element in reverse order
   }
   printf("\n\n");
   return 0;
}

Output:

Rea n number of values in an array and display it in reverse order:

Input the number of elements to store in the array :2

Input 2 number of elements in the array :

element 0:9

element 1:5

The values stored in the array are:

9 
5
The values stored in the array in reverse are:

5

9
3. Write a program in C to find the sum of all elements of the array

#include <stdio.h>
// Main function
int main()
{
    int a[100];  // Declare an array of size 100 to store integer values
    int i, n, sum = 0;  // Declare variables to store array size, loop counter, and sum
    // Display a message to the user about the program's purpose
    printf("\n\nFind sum of all elements of array:\n");
    printf("--------------------------------------\n");	
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);  // Read the input and store it in the array
    }

    // Calculate the sum of all elements in the array using a for loop
    for (i = 0; i < n; i++)
    {
        sum += a[i];  // Add each element to the sum
    }
    // Display the sum of all elements stored in the array
    printf("Sum of all elements stored in the array is : %d\n\n", sum);
	return 0;
}

Output: 

Find sum of all elements of array:

Input the number of elements to be stored in the

array :4

Input 4 elements in the array:

element 0:0

element1:9

element 2:5

element 3:3

Sum of all elements stored in the array is: 17

4. Write a program in C to count the total number of duplicate elements in an array

#include <stdio.h>
// Main function
int main()
{
    int arr[100];  // Declare an array of size 100 to store integer values
    int n, mm = 1, ctr = 0;  // Declare variables to store array size, mm (unused), and duplicate counter
    int i, j;  // Declare loop counters
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);  // Read the input and store it in the array
    }
    // Check for duplicate elements in the array using nested loops
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;  // Increment the duplicate counter if a duplicate is found
                break;  // Exit the inner loop as soon as a duplicate is found
            }
        }
    }
    // Display the total number of duplicate elements found in the array
    printf("Total number of duplicate elements found in the array: %d\n", ctr);
    return 0;  // Return 0 to indicate successful execution
}

Output:

Input the number of elements to be stored in the array :7

Input 7 elements in the array:

element 0:7

element 1:6

element 2:7

element 3:1

element 4:0

element 5:0

element 6:1

Total number of duplicate elements found in the array: 3

5. Write a program in C to print all unique elements in an array.

#include <stdio.h>
// Main function
int main()
{
    int arr1[100], n, ctr = 0;  // Declare an array to store integer values, n for array size, and ctr for counting duplicates
    int i, j, k;  // Declare loop counters
    // Prompt the user to input the number of elements to be stored in the array
    printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the array
    }
    // Print unique elements in the array
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        ctr = 0;  // Reset the counter for each element
        for (j = 0, k = n; j < k + 1; j++)
        {
            /* Increment the counter when the search value is duplicate. */
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr1[i]);  // Print the unique element
        }
    }
    printf("\n\n");
    return 0;  // Return 0 to indicate successful execution
}

Output:

Print all unique elements of an array:

Input the number of elements to be stored in the

array: 10

Input 10 elements in the array:

element 0:7

element 1:9

element 2:1

element 3:3

element 4:5

element 5:0

element 6:2

element 7:4

element 8:6

element 9:8

The unique elements found in the array are: 7 9 1 3 5 2 4 6 8

6. Write a program in C to insert an element into an array at a specified Position

#include <stdio.h>
 

int main()
{

    int arr[100] = { 0 };

    int i, x, pos, n = 10;
 

    // initial array of size 10

    for (i = 0; i < 10; i++)

        arr[i] = i + 1;
 

    // print the original array

    for (i = 0; i < n; i++)

        printf("%d ", arr[i]);

    printf("\n");
 

    // element to be inserted

    x = 50;
 

    // position at which element

    // is to be inserted

    pos = 5;
 

    // increase the size by 1

    n++;
 

    // shift elements forward

    for (i = n - 1; i >= pos; i--)

        arr[i] = arr[i - 1];
 

    // insert x at pos

    arr[pos - 1] = x;
 

    // print the updated array

    for (i = 0; i < n; i++)

        printf("%d ", arr[i]);

    printf("\n");
 

    return 0;
}

Output: 

1 2 3 4 5 6 7 8 9 10

1 2 3 4 50 5 6 7 8 9 10

7. Write a program in C to delete the element at the given index 

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i, n, index, arr[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);
    if (index >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
            printf("The array after deleting the element is: ");
        for (i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
        return 0;
    }
} 

Output:

Enter the size of the array: 6
Enter the elements of the array: 
arr[0] = 1
arr[1] = 0
arr[2] = 8
arr[3] = 6
arr[4] = 4
arr[5] = 8
Enter the index of the element to be deleted: 8
Deletion is not possible in the array.
