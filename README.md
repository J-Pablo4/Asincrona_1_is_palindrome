# Asincrona_1_is_palindrome
## Description
This is a program that validates if a sequence of numbers is palindrome or not. The program takes a file named **input** with numbers and returns a file **result** with a string with either **True** or **False** accordingly if the sequence of numbers is indeed a palindrome.

Example:

[4,5,6,7,6,5,4] 

Returns **True**

[4,3,6,3,5,3,5,3] 

Returns **False**

## Functions
1. `node_new(int value_to_append)`: This function **creates a node** in a **list** and set its value to the number that was inserted by the programmer. It is commonly used, when the `list_append` function is invoked.
1. 

## Implemantations
In the function `is_palindrome`  we open the input.txt file in **read mode** and we check if it opens correctly by checking if the file is **not equal to NULL**. If the **FILE pointer** is equal to **NULL**, a console print will appear saying that the file couldn´t be opened correctly, then we use `fscanf` to obtain the values in the file and we use a temporal variable named `node_value` to add the data to a list we have previously created by using a function named `list_append`. The function will insert the values into a list, when that is done we close the file with `fclose`. Then, we open a file that we named **result.txt**, where we are going to write **TRUE** or **FALSE** deppending on the validation that we make. We declared 2 new variables, `first_element` and `last_element` where we are going to asign the values that are been returned by the `delete_at` function. With the `delete_at` function remove the **first** and the **last** element of the list. If the two variables are different we put **FALSE** in **result.txt**, and if all of the numbers are the same throughout all the iterations we put **TRUE** in the **result.txt** file. Finally, we close the **result.txt** file.

## Restrictions and Considerations
The input file must contain only numbers, and they must be separated with a break of line. It is also important that the last line of the file have a number and not an empty line for the program to work properly. The input file must be located on the same folder as the program and must be named **input.txt**. If the program is not able to open the **input.txt** file, you should change the **line 82** and the **line 99** and set them to only with the files' names.


