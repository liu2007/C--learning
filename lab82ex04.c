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
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * * Student Name : liuzeyu<fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.10<fill in yourself>
 */
/* include header file */

/* include header file */
#include <stdio.h>
#include <math.h>

/* starting point of this C program */

int main(void)
{
int a,b,c;
double d;
printf("Input A, B and C: ");
scanf("%d %d %d",&a,&b,&c);

d=(b*b)-(4*a*c);
printf("D = %.0f\n",d);
if(d<0)
printf("No real roots");
else if(d==0)
printf("The double root is %.2f",(double)-b/(2*a));
else
printf("The two roots are %.2f and %.2f",(double)(-b+sqrt(d))/(2*a),(double)(-b-sqrt(d))/(2*a));  




    // Enter your code here.
 

    /* last statement of this C program */
    return 0;
}
