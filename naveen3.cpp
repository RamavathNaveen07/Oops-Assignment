#include<iostream>
// int main (){
//     int num;
//     printf("Enter a number :");
//     scanf("%d",&num);

//     if(num % 2 == 0){
//         printf("%dis even number\n",num);

//     }
//     else {
//         printf(" %d is  odd number\n",num);
//     }

//     return 0;
   
// }

// int main (){
//    int a ;
//    printf("Enter the number of a :");
//    scanf("%d",&a);
//    int b;
//    printf("Enter the number  of b :");
//    scanf("%d",&b);

//    if(a>b){
//     printf("%d is greater than %d\n",a ,b);
//    }
//    else{
//     printf("%d is less than %d\n",a ,b);
//    }

//    return 0;
// }

int main (){
    int n;
    int i;
    printf("Enter the number :");
    scanf("%d",&n);


    for(int i=0; i<=n; i++){
        printf("%d ",i);
    }
    return 0;
}
