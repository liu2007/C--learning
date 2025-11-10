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
 * Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: ENGG1110 <fill in yourself>
 * Date         : 2025.9.18 <fill in yourself>
 */

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void)
{
  double a;
  int b;

  printf("");   
  scanf("%lf",&a);
  if(a<41.5)
  b=1;
  else if(41.5<=a&&a<62.5)
  b=3;
  else if(62.5<=a&&a<117.5)
  b=8;
  else 
  b=10;
  printf("Continuous Wind Speed of %.1f => Tropical Cyclone Warning\n",a);
  printf("Signal No %d\n",b);


  
  
  
  
  
  
  
  
  
  // Enter your code here to
  // 1. Obtain input of wind speed
  // 2. Classify the tropical cyclone warning signal type
  // 3. Print both the wind speed and signal

  /* last statement of this C program */
  return 0;
}


