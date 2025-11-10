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
 * Class/Section: ENGG1110<fill in yourself>
 * Date         : 2025.9.18 <fill in yourself>
 */

#include <stdio.h> 



int main(void) {
  int x;
  printf("");
  scanf("%d", &x);

  if (x<0&&x%2==0)
    printf("Negative even number");
  else if (x<0&&x%2!=0)
    printf("Negative odd number");
  else if (x>0&&x % 2 == 0)
    printf("Positive even number");
  else if(x>0&&x%2!=0)
    printf("Positive odd number");
  else
    printf("Zero");
  return 0;
}
  // Please copy Peter's program here and DEBUG it!
  

 




