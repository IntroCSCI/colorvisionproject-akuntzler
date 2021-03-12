# !!!Replace with your unique project name!!!

## Description

!!!This program asks the user for 3 values corresponding to RGB color codes, then it asks the user for the name of their file and stores them in a file of that name. It also stores the color that is the opposite of it, and 4 more randomly generated colors.(these colors are not yet guaranted to be distinct from the previous 2 colors)!!!

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

!!!Alex Kuntzler!!!

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!Please enter your desired color value for red (0-255)
    2
    Please enter your desired color value for green (0-255)
    256
    Your color value needs to be between 0 and 255
    3
    Please enter your desired color value for blue (0-255)
    4
    Please enter the name of your file.
    coolcolors
!!!
```

## C++ Guide

### Variables and Data Types

!!!So far two different types of variables have been used. int and string. The int variables were used for incrementing and storing color values, where the string variable was mainly used just for the name of the file, but is also used to output the individual lines of the file to show that they were stored (temporary).!!!

### Console Input and Output

!!!Innput and output were used to guide the user to enter in their desired color value and to make sure that they didn't input a value above or below the range of numbers they were asked to pick from. It was also used to ask them to choose a name for their file!!!

### Decisions

!!!Switch, if, else if, and else were all used in this program. The switch statement in the beginning was used to make sure that the user was asked for a different color value each time. The reason why I put it all in a switch statement instead of putting it in a few separate cout -> cin -> sequences was because the switch statement was imbedded in a while loop so that if the user made an incorrect input it would return to the switch statement again and have them input it correctly. I did this instead of making an individual while loop for each color value.!!!

### Iteration

!!!iteration has been used in a while and a for loop. I briefly talked about the while loop in the decisions category. The for loop was used to store all of the different color values onto the file. It made sure that it iterated through enough times to generate the required amount of colors.!!!

### File Input and Output

!!!File input and output was used to store all of the data on the users file. After the user chose their color values they were stored onto the file and then 5 more colors were generated and also stored onto the file. currently the program outputs all of the lines off of the file so that all of the color codes can be seen.This file can later be accessed to utilize these color codes.!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*

