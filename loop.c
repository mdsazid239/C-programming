// #include<stdio.h>
// #include<math.h>
// int main()
// {
// {
//   int a=1;
//   for(;a<=5;a+1);
//   printf("welcome to c langauage");
// }
//    return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//    for (int a=1;a<=10;a++)
//    {
//     printf("hello world \n");
//    }
//    return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main ()
// {
//     for(int a=2;a<=5;a=a+1){
//     printf("welcome \n");
//     }
//     return 0; 
// }


// Ques  : Print hello world ‘n’ times. Take ‘n’ as input from user

#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    printf("enetr a number ");
    scanf("%d",&n);
    printf("enter a n times a print number:%d\n",n);

    for (int i=1;i<=n;i=i+1){
    printf("print a number n times\n");
    }
    return 0;
}