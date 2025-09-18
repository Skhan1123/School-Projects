/*
* AHPA #3: Ice Cream
*
* Bobs entered sales data. Only
* index your arrays using an enum variable (enum flavors index =
* vanilla; corner1Sales[index] = 11.5;)
*
* Sum the contents of the flavors in the arrays together.
*
* Print out the resulting flavors and their sum with Bob's total
sales.
*
* Student Name:Saajid Khan
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

enum flavors {vanilla, chocolate, mint, strawberry, rockyroad};


int main(void) {

    float corner1Sales[5]; 
    corner1Sales[vanilla] = 11.5;
    corner1Sales[chocolate] = 12;
    corner1Sales[mint] = 13.4;
    corner1Sales[strawberry] = 11;
    corner1Sales[rockyroad] = 3.6;

    float total_sales = 0.0;

    for (int i =0; i<5; i++)
    {total_sales += corner1Sales[i];}

    printf("Flavor Sales \n");

    printf("vanilla = %.2f \n", corner1Sales[vanilla]);
    printf("chocolate = %.2f \n", corner1Sales[chocolate]);
    printf("mint = %.2f \n", corner1Sales[mint]);
    printf("strawberry = %.2f \n", corner1Sales[strawberry]);
    printf("rocky road = %.2f \n", corner1Sales[rockyroad]);
    printf("----------------------------------------\n");

    printf("Total Sales = %.2f", total_sales);



return 0;
}
