# Asincrona_1_is_palindrome
## Description
This is a program that validates if a sequence of numbers is palindrome or not. The program takes a file named **input** with numbers and returns a file **result** with a string with either **True** or **False** accordingly if the sequence of numbers is indeed a palindrome.

Example:

[4,5,6,7,6,5,4] 

Returns **True**

[4,3,6,3,5,3,5,3] 

Returns **False**

## Functional description
1. `node_new(int value_to_append)`: This function **creates a node** in a **list** and set its value to the number that was inserted by the programmer. It is commonly used, when the `list_append` function is invoked.
2. `new_list()`: This function initializes a struct **list** by allocating memory in the heap, and assigning its atributes **head** equal to **NULL** and and **count** equal to **0**. **head** is a variable where we are going to store the pointer to first node of the list, and **count** is used to acumulate the number of elements stored in the list which is going to be needed later on in our program. At the end the funcition returns the **new_list** pointer.
3. `list_append(List *list, int value_to_append)`: This function is used to add elements to the list. It takes as arguments a list pointer and the value that the user wants to add. If the **head** is **NULL** the function calls for the function `node_new()` with **value_to_append** as an argument, and1 assigns **head** equal to the pointer of the newly created node and **adds one** to **count**. If **head** is not **NULL** the function finds the last node on the list, creates and initializes a new node, and assigns the pointer of the new node to the **next** attibute of the last node.
4. `delete_at(List *list, int index)`: This function is used to delete elements in the list. It takes as as arguments a list pointer and the index of the element that the user wants to delete. If the **index** equals **0**, meaning the user wants to delete the first element of the list, the function creates a new node, and copies the first node. It then gets the value of the node, assigns it to a new int **value_to_return**, assigns the **head** of the list to the next node, frees the memory of the deleted node, subtracts one from the list **count**, and returns **value_to_return**. Similarly, when the **index** is not 0, it finds the node to delete, and repeats the sequence of actions to remove a node described before with the selected node.
4. `is_palindrome()`: This is the main function of the implementation, meaning its the one that solves the problem, and not to be counfused with the actual main.c function. This function begins opening the input.txt file in **read mode** and checks if it opens correctly by checking if the file is **not equal to NULL**. If the **FILE pointer** is equal to **NULL**, a console print will appear saying that the file couldn´t be opened correctly, then it uses `fscanf` to obtain the values in the file and uses a temporal variable named `node_value` to add the data to a list previously created by using a function named `list_append`. The function will insert the values into a list, when that is done we close the file with `fclose`. Then, it opens a file named **result.txt**, where it writes **TRUE** or **FALSE** deppending if the numbers are palindromes or not. The function declares 2 new variables, `first_element` and `last_element` asign the values that are returned by the `delete_at` function with the first and last indexes. If the two variables are different it writes **FALSE** in **result.txt**, and if all of the numbers are the same throughout all the iterations it writes **TRUE** in the **result.txt** file. Finally, it closes the **result.txt** file.

## Restrictions and Considerations
The input file must contain only numbers, and they must be separated with a break of line. It is also important that the last line of the file have a number and not an empty line for the program to work properly. The input file must be located on the same folder as the program and must be named **input.txt**. If the program is not able to open the **input.txt** file, you should change the **line 82** and the **line 99** and set them to only with the files' names.


