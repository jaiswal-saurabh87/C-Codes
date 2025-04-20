#include <stdio.h>
#include <stdlib.h>
#include <String.h>
union stud
{
    int rollno, DOB;
    char Name[10], branch[5];
};
int main ()
{
    union stud s1;
    printf("Enter the Name of the Student : ");
    scanf("%s", &s1.Name);
    printf("Enter the Branch : ");
    scanf("%s", s1.branch);
    printf("Enter roll no : ");
    scanf("%d", &s1.rollno);
    printf("Enter Date of Birth [dd/mm/yyyy] : ");
    scanf("%d", &s1.DOB);
    //
    printf("\n\nStudent Details : \n");
    printf("Name of Student : %s \n", s1.Name);
    printf("Branch of Student : %s \n", s1.branch);
    printf("Roll Number of Student : %d \n", s1.rollno);
    printf("Date of Birth of Student : %d \n", s1.DOB);
    //
    return 0;
}