/**
 * ENGG1110 Problem Solving by Programming
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 * http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : 刘泽宇 <fill in yourself>
 * Student ID   : 1155256602 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.23<fill in yourself>
**/
// You shall start typing C program from scratch on your own...
#include <stdio.h>
int the_numer_of_ones(int n)
{ 
    int count =0;
    while(n>0)
   {count+=n%2;
    n=n/2;
   }
   return count;
}
int main(void)
{
    int a,b,i;
    scanf("%d %d", &a, &b);
    for ( i=b;i>=a;i--)
    {
        if (the_numer_of_ones(i)%2==0)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}