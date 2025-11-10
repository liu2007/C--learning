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
Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.19<fill in yourself>
 */
// your code here、


  // Please copy your solution from Lab-7 Ex2 and modify it!
  #include  <stdio.h>
  int main(void){
    int i,j,k,n;
    printf("Rows (2-20)? ");
    scanf("%d",&n);
    for(i=0;i<2;i++){

       for(j=1;j<=n;j++){

        for(k=0;k<n-j;k++){
          printf(".");}

        printf("*");
        for(k=1;k<j;k++)
          printf("@*");
        for(k=0;k<n-j;k++){
          printf(".");} 

        printf("\n");   
          
          
       }


    }
    return 0;

  }
