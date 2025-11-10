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
 * Student Name : liuzeyu<fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.10<fill in yourself>
 */

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void)
{
  int num[4]={0},i;
  int max,min;
  scanf("%d",&num[0]);
  max=num[0];
  min=num[0];
 
  for(i=1;i<4;i++){
    scanf("%d",&num[i]);
    if (num[i]>max)
      max=num[i];
    if (num[i]<min)
      min=num[i];


  }
printf("The minimum value is %d whereas the maximum value is %d.",min,max);
  // Enter your code here to 
  // 1. Obtain input of the integers
  // 2. Find out the min and max values
  // 3. Print the min and max values
  
  
  /* last statement of this C program */
  return 0;
}
