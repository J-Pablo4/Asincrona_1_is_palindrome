# Asincrona_1_is_palindrome
This is a program that validates if a sequence of numbers is palindrome or not. The program takes a file named **input** with numbers and returns a file **result** with a string with either **True** or **False** accordingly if the sequence of numbers is indeed a palindrome.

Example:

[4,5,6,7,6,5,4] 

Returns **True**

[4,3,6,3,5,3,5,3] 

Returns **False**

## Restrictions and Considerations
The input file must contain only numbers, and they must be separated with a break of line. It is also important that the last line of the file have a number and not an empty line for the program to work properly. The input file must be located on the same folder as the program and must be named **input.txt**. If the program is not able to open the **input.txt** file, you should change the **line 82** and the **line 99** and set them to only with the files' names.