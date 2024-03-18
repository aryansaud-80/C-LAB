/*WAP that reads marks of five subjects and calculates total marks and
percentage. Also awards the division on the basis of following criteria.
Percentage Division
p>=75 Distinction
p>=60 and <75 First Division
p>=45 and <60 Second Division
p>35 and <45 Third Division
Otherwise Failed
[Hints: Pass marks and full marks for each subject are 40 and 100
respectively] */

#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, marks5, total_marks;
    float percentage;

    printf("Enter marks obtained in 5 subject: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40 && marks4 >= 40 && marks5 >= 40)
    {
        total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
        percentage = ((float)total_marks / 500) * 100;

        if (percentage >= 75)
        {
            printf("Distinction");
        }

        else if (percentage >= 60 && percentage < 75)
        {
            printf("First division");
        }

        else if (percentage >= 45 && percentage < 60)
        {
            printf("Second division");
        }

        else if (percentage > 35 && percentage < 45)
        {
            printf("Third division");
        }

        else
        {
            printf("failed");
        }

        printf("\nmarks=%d\n", total_marks);
        printf("percentage= %f%%", percentage);
    }
    else
    {
        printf("Failed");
    }
    return 0;
}