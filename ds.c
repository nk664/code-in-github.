#include <stdio.h>
struct details
{
    char name[30];
    int age;
    char branch[];
};
int main()
{
    int n;
    printf("\n enter the number of students : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("\nthe number of student is invailed\n");
    }
    else
    {
        struct details student[n];
        printf("\nenter the data of student\n");
        for (int i = 0; i < n; i++)
        {

            printf("\nname : ");
            scanf("%s", &student[i].name);
            printf("\nage : ");
            scanf("%d", &student[i].age);
            printf("\nbranch : ");
            scanf("%s", &student[i].branch);
        }
        printf("\n students details\n");
        for (int i = 0; i < n; i++)
        {
            printf("\nstudent %d\n", i + 1);
            printf("\n name : %s\n age : %d\n branch : %s\n \n", student[i].name, student[i].age, student[i].branch);
        }
    }

    return 0;
}