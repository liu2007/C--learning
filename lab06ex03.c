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
 * Student ID   : 1155256702<fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.9 <fill in yourself>
 */

// your code here
#include <stdio.h>
int main (void){
    double a,b,c,d;
    int i;
    int x[11]={-6,-5,-4,-3,-2,-1,0,1,2,3,4};
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    for(i=0;i<11;i++)
    {
        printf("f(%d) = %.2lf\n",i-6,a*x[i]*x[i]*x[i]+b*x[i]*x[i]+c*x[i]+d);
    }


return 0;
}


