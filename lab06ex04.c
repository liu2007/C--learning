/**
 * ENGG1110 Problem Solving by Programming 
 *
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
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.9<fill in yourself>
 */



#include <stdio.h>

int main(void)
{

  int factors[] = {2, 3, 5, 7, 11, 13, 17, 19, 23,
  29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
  int i,n,m;
  m=0;
  scanf("%d",&n);
  for (i=0;n>factors[i]&&i<26;i++)
  {    
    if
     (n%factors[i]==0)
     m++;
  }
  if (m==0)
    printf("%d is a prime",n);
    else
    printf("%d is a composite",n);

 
  // use the supplied factors above to check if an input number n (2 to 10000)
  // is a prime number!
    
  return 0;
}



