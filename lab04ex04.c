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
 * Class/Section: ENGG1110A <fill in yourself>
 * Date         : 2025.9.25<fill in yourself>
 */

// your work here]
#include <stdio.h>
int main (void)
{
    double v[3],w[3],dp;
    printf("Enter vector v ([0] [1] [2]): ");
    scanf("%lf%lf%lf",&v[0],&v[1],&v[2]);
    printf("Enter vector w ([0] [1] [2]): ");
    scanf("%lf%lf%lf",&w[0],&w[1],&w[2]);
    dp=v[0]*w[0]+v[1]*w[1]+v[2]*w[2];

    printf("Dot product v.w = %.2lf\n",dp);
    return 0;
}
   