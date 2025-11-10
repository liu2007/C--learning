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
 *http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : 刘泽宇 <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A
 * Date         :2025.10.3
 */

#include <stdio.h>

int main(void) {
  int x;
  // define integer x
printf("");
scanf("%d",&x);
  // obtain integer x from user>=
int fac;
fac=1;
  // define integer factorial = 1
while (x>=1)
{fac=fac*x;
x=x-1;}


  // while x >= 1
     // factorial = factorial * x
     // x = x - 1
  // end of loop
printf("%d",fac);
  // print factorial
return 0;
}