/*
* AHPA #2: The Classroom Problem
*
* Dr. Anderson is teaching a COP 3515 class that has 9 students in it.
* Each student has a seating location, a name (just a single letter), and a
current score in the class.
*
* The information looks like this:
* 1, B, 79.54, 2, M, 82.13, 3, T, 74.61, 4, J, 91.12, 5, P, 78.83,
* 6, E, 97.17, 7, H, 85.65, 8, R, 65.42, 9, X, 70.26
*
* Create a C program that will store the number of students in the class in a
constant called numStudents.
* Store the student seating locations, names, and current scores into individual
variables.
* Print out the number of students in the class using numStudents.
* Print out the class information on three lines in the following format:
* xxx xxx xxx
* where "xxx" is "seating location, name, current score in class".
*
* Note that the current score should be printed with just one decimal place.
*
* Student Name: Saajid Khan
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

const int numStudents = 9;

int main(void) {
    int seat1 = 1;
    char name1 = 'B';
    float score1 = 79.54;

    int seat2 = 2;
    char name2 = 'M';
    float score2 = 82.13;

    int seat3 = 3;
    char name3 = 'T';
    float score3 = 74.61;

    int seat4 = 4;
    char name4 = 'J';
    float score4 = 91.12;

    int seat5 = 5;
    char name5 = 'P';
    float score5 = 78.83;

    int seat6 = 6;
    char name6 = 'E';
    float score6 = 97.17;

    int seat7 = 7;
    char name7 = 'H';
    float score7 = 85.65;

    int seat8 = 8;
    char name8 = 'R';
    float score8 = 65.42;

    int seat9 = 9;
    char name9 = 'X';
    float score9 = 70.26;


    printf("%d, %c, %.1f, ", seat1, name1, score1);
    printf("%d, %c, %.1f, ", seat2, name2, score2);
    printf("%d, %c, %.1f\n", seat3, name3, score3);
    printf("%d, %c, %.1f, ", seat4, name4, score4);
    printf("%d, %c, %.1f, ", seat5, name5, score5);
    printf("%d, %c, %.1f\n", seat6, name6, score6);
    printf("%d, %c, %.1f, ", seat7, name7, score7);
    printf("%d, %c, %.1f, ", seat8, name8, score8);
    printf("%d, %c, %.1f\n", seat9, name9, score9);
     




return 0;
}
