# !!!!!!

## Description

This program asks the user for 3 values corresponding to RGB color codes, then it asks the user for the name of their file and stores them in a file of that name. It also stores the color that is the opposite of it, and 4 more randomly generated colors.(these colors are not yet guaranted to be distinct from the previous 2 colors)

### v0.2 Updates

*After asking the user for the 3 RGB color codes it now converts it to hexadecimal and then stores it into a vector. The randomly generated colors are now chosen from a list of colors that are all distinct from one another, this is to prevent the randomly generated colors from being indistinguishable by chance. Also the list is made up up the HTML names on the odd lines followed by its corresponding hexadecimal number on the next even line. This should be useful in later on to give the user a better feel over what colors they got.*

### v1.0 Updates

*Most of the project has been overhauled. All colors are now in HTML names and instead of asking for 3 color values it now asks for what color you want, and then asks what shade of the color you would like to add to your list.I also added a function so the randomly generated colors will not pick colors that are bad match ups for your base color in terms of different kinds of color blindness. Such as not pairing red and green together and so on. It also now checks to make sure that every color on the list is unique.Then, at the end it reads the file contents to you.*



## Developer

Alex Kuntzler

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Please pick a number corresponding to your desired color. 
 1. Red 
 2. Pink 
 3. Orange 
 4. Yellow 
 5. Purple 
 6. Green 
 7. Blue 
 8. Brown 
 9. White 
 10. Gray 

1
Please pick a shade of Red from this list
1. IndianRed
2. LightCoral
3. Salmon
4. DarkSalmon
5. LightSalmon
6. Crimson
7. Red
8. FireBrick
9. DarkRed
7
Please enter the name of your file.
mycolors
Red
LightSalmon
Orange
DarkOrange
Cyan
Tomato

```

## C++ Guide

### Variables and Data Types

So far two different types of variables have been used. int and string. The int variables were used for incrementing and storing color values, where the string variable was mainly used just for the name of the file, but is also used to output the individual lines of the file to show that they were stored (temporary).

### Console Input and Output

Input and output were used to guide the user to enter in their desired color value and to make sure that they didn't input a value above or below the range of numbers they were asked to pick from. It was also used to ask them to choose a name for their file

### Decisions

Switch, if, else if, and else were all used in this program. The switch statement in the beginning was used to make sure that the user was asked for a different color value each time. The reason why I put it all in a switch statement instead of putting it in a few separate cout -> cin -> sequences was because the switch statement was imbedded in a while loop so that if the user made an incorrect input it would return to the switch statement again and have them input it correctly. I did this instead of making an individual while loop for each color value.

### Iteration

Iteration has been used in a while and a for loop. I briefly talked about the while loop in the decisions category. The for loop was used to store all of the different color values onto the file. It made sure that it iterated through enough times to generate the required amount of colors.

### File Input and Output

File input and output was used to store all of the data on the users file. After the user chose their color values they were stored onto the file and then 5 more colors were generated and also stored onto the file. Currently the program outputs all of the lines off of the file so that all of the color codes can be seen.This file can later be accessed to utilize these color codes.

### Arrays/Vectors

*I only used vectors and no arrays in this project. The vectors were used to store html color values that were chosen and generated. Another vector was used to store a list of randomly generated numbers that were then used to go through the color list file to retrieve color names.*

### Functions

*I made 3 different functions. The first is to turn the 3 user inputted RGB color values into hexadecimal a hexadecimal color value. The next function picks numbers from the colorlist to be used as the randomly generated colors. It does this by generating random numbers 1-141 then multiplies them by 2 making sure that an even number is selected as all of the hexadecimal numbers are on even lines in the colorlist textfile. The last function simply stores all of the color values aquired.*

### Classes

*I used a class to store the randomly generated colors and into its private variable and then from there store that onto a file *

