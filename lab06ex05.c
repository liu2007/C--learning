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
 * Class/Section: A<fill in yourself>
 * Date         : 2025.10.9 <fill in yourself>
 */

// Please write down the formula for T_i on paper before
// you start writing the program
#include <stdio.h>
#include <math.h>
int main(void)

{
int n,i;
double sum[101]={0,3},T[101]={0};

printf("n? ");
scanf("%d",&n);

if (n>=2){
    printf("3.000000\n");
for(i=2;i<=n;i++)
{
T[i]=pow(-1,i)*4.0/(2*i*(2*i-1)*(2*i-2));
    sum[i]=sum[i-1]+T[i];
    

}
printf("%.6lf\n",sum[2]);
if(n>4)
printf("...\n");

printf("%.6lf\n",sum[n-1]);
printf("%.6lf\n",sum[n]);

}
else
printf("3.000000\n");

    return 0;
}




