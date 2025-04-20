#include <stdio.h>
#include <stdlib.h>
#include <String.h>
struct DOB
{
    int day, month, year;
};
struct stud
{
    int rollno;
    char Name[10];
    struct DOB d1;
};
int main ()
{
    struct stud s1;
    printf("Enter the Name of the Student : ");
    scanf("%s", &s1.Name);
    printf("Enter roll no : ");
    scanf("%d", &s1.rollno);
    printf("Enter Date of Birth [dd/mm/yyyy] : ");
    scanf("%2d %2d %4d", s1.d1.day, s1.d1.month, s1.d1.year);
    //
    printf("\n\nStudent Details : \n");
    printf("Name of Student : %s \n", s1.Name);
    printf("Roll Number of Student : %d \n", s1.rollno);
    printf("Date of Birth of Student : %d/%d/%d", s1.d1.day, s1.d1.month, s1.d1.year);
    //
    return 0;
}