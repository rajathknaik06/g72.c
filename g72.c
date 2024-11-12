
/*Mountain View Middle School is all set to organize its elaborate talent show event of the year, Stars Onstage. It is a fun-filled event for the students to showcase and build their confidence.



Of the total audience who had come for the show, 1/3 were boys, 3/6 were girls, and the rest were adults. If there were 'x' more girls than adults, how many people were there in total? 

Input format :
The input is an integer x, which corresponds to the number of girls more than adults.

Output format :
The output prints the total number of people who visited the show.*/

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d people were there in total",3*x);
    return 0;
}
