/*
 * AHPA #7: The USF Students
 *
 * The university has decided that they need to do a better job of
 * keeping track of all of the information that they have about USF 
 * students.
 *
 * They want you to create a C program that will allow them to enter a 
 * student's name, age, U number, grade point average, if they live on 
 * campus (yes/no), and if they have paid for the current semester (yes/
 * no).
 *
 * You need to create a structure that will contain this information.
 * Once you have created it, enter data into a structure variable for one 
 * student.
 *
 * Then copy that student's data to another structure variable and switch 
 * the answers for where they live and if they have paid for the current 
 * semester.
 *
 * Print out the current data for both students.

 *
 * Student Name: 
 */



#include <stdio.h>
#include <string.h>

//declare structure
struct Student
{
  /* data */
  char name[50];
  int Age;
  char Unumber[10];
  float GPA;
  char LoC[4];
  char paid[4];
};



int main(void) {
  
  struct  Student student1, student2;

  //get inputs
  fgets(student1.name, sizeof(student1.name), stdin);
  student1.name[strcspn(student1.name, "\n")] = '\0'; 
  
  scanf("%d", &student1.Age);
  getchar();

  fgets(student1.Unumber, sizeof(student1.Unumber), stdin);
  student1.Unumber[strcspn(student1.Unumber, "\n")] = '\0';

  scanf("%f", &student1.GPA);
  getchar();

  scanf("%s", student1.LoC);
  
  scanf("%s", student1.paid);

  //Dupe inputs
  student2 = student1;
  
  //Set lowercase inputs properly

  //LOC FIX
  if(strcmp(student1.LoC, "yes")==0){
    strcpy(student1.LoC, "Yes");
  }
  else if (strcmp(student1.LoC, "no")==0){
    strcpy(student1.LoC, "No");
  }

  //PAID FIX
  if(strcmp(student1.paid, "yes")==0){
    strcpy(student1.paid, "Yes");
  }
  else if (strcmp(student1.paid, "no")==0){
    strcpy(student1.paid, "No");
  }
  
  //Switch LOC AND PAID

  //LOC SWITCH
  if(strcmp(student1.LoC, "Yes")==0){
    strcpy(student2.LoC, "No");
  }
  else if (strcmp(student1.LoC, "No")==0){
    strcpy(student2.LoC, "Yes");
  }
  
  //PAID SWITCH
  if(strcmp(student1.paid, "Yes")==0){
    strcpy(student2.paid, "No");
  }
  else if (strcmp(student1.paid, "No")==0){
    strcpy(student2.paid, "Yes");
  }
  

  //PRINT EVERYTHING

  printf("--- Student 1 Information --- \n");
  printf("Name: %s \n", student1.name);
  printf("Age: %d \n", student1.Age);
  printf("U Number: %s \n", student1.Unumber);
  printf("GPA: %.2f \n", student1.GPA);
  printf("Lives on Campus: %s \n", student1.LoC);
  printf("Has Paid: %s \n", student1.paid);
  printf("--- Student 2 Information (After Switching) --- \n");
  printf("Name: %s \n", student2.name);
  printf("Age: %d \n", student2.Age);
  printf("U Number: %s \n", student2.Unumber);
  printf("GPA: %.2f \n", student2.GPA);
  printf("Lives on Campus: %s \n", student2.LoC);
  printf("Has Paid: %s", student2.paid);

  return 0;
}