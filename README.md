# Asincrona_1_is_palindrome
This is a program that validates if a sequence of numbers is palindrome or not. The program takes a file named **input** with numbers and returns a file **result** with a string with either **True** or **False** accordingly if the sequence of numbers is indeed a palindrome.

Example:

[4,5,6,7,6,5,4] 

Returns **True**

[4,3,6,3,5,3,5,3] 

Returns **False**

## Restrictions and Considerations
The input file must contain only numbers, and they must be separated with a break of line. It is also important that the last line of the file have a number and not an empty line for the program to work properly. The input file must be located on the same folder as the program and must be named **input.txt**. If the program is not able to open the **input.txt** file, you should change the **line 82** and the **line 99** and set them to only with the files' names.

## Implemantations
First the function `is_palindrome` in this function we open the input.txt file in readmode and we check if it opens correctly by checking if the file is equal to NULL if that is the case a console print will appear saying that de file couldn´t be opened correctly, then we fscanf the values in the file and we use a temporal variable named "node_value" and we send that variable to a a function named `list_append`, that will insert the values in to a struct that we made named list, when that is done we close the file with fclose, we then open a file that we named **result.txt** where we are going to insert TRUE or FALSE deppending on the validation that we make, our first validation is that if the count in the list is equal to 1 the result is TRUE, the second validation case is in which the count is higher than 1, in this case we declare 2 new variables, "first_element" and "last_element" assign to both the return in the function `delete_at`, if this two variables are different we put FALSE in result.txt, and if all the variables are the same throughout all the iterations we put TRUE in the results file. 
