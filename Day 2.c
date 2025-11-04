// Problem 1:- take name from user
// #include<stdio.h>
// int main(){
//     char a [100];//collection of character is a sting , we made a string here
//     printf("Enter name");
//     scanf("%s", &a); //take inpur from user, s= used for strings 
//     printf("the number user printed is %s" , a);
//     return 0;
// }

// Problem 2:- Even odd, take number from user
// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter number");
//     scanf("%d", &i); //d= used for integers
//     if(i%2==0){
//         printf("Number is even");
//     }
//     else{
//             printf("Number is odd");
//     };  
//}


// Problem 3:- largest of 3
// #include<stdio.h>
// int main(){
//     int i,j,k;
//     printf("Enter three number");
//     scanf("%d %d %d", &i, &j, &k ); // 3 nubers thats why we wrote"%d" 3 times
//     if( i==j|| j==k||i==k){ 
//         printf("two numbers are equal\n");
//     }
//     if( i==j==k){
//         printf("all numbers are equal\n");
//     }

//     if (i>j && i>k){
//         printf("%d is greatest" , i);
//     } 

//     else if(j<i && j<k){
//         printf("%d is the greatest" , j);
//     }
//     else{
//         printf("%d is the greatest", k);
//     }

// }

//Problem 4:- Calculation
// #include<stdio.h> 
// int main (){
//     int i, j ;
//     char x;
//     printf("enter 2 numbers");
//     scanf("%d %d", &i,&j);
//     printf("enter opration ( +, -, /, x):");
//     scanf(" %c" , &x);
//     switch (x){
//         case '+':
//             printf (" the sum is %d" ,i+j) ;
//             break;

//         case '-':
//             printf ( " the difference is %d"  , i-j); 
//             break;

//         case '/':
//             if(j==0){
//                 printf (" not possible");
//             }
//             else{
//                 printf ( " the divition is %d" , i/j);
    
//             }
//             break;

//         case 'x':
//             printf ( " the multiplication is %d" , i*j); 
//             break;
//     }
//     return 0;
// }


//Problem 5:- the number is a prim number
#include<stdio.h>
 int main(){
     int i , k=1;
     printf("Enter number");
     scanf("%d", &i);
     for( int j=2; j<i/2; j++){
        if (i%j ==0){
                k=0;
                break;
        }
    
        }
        if (k==1){
            printf("a prime number");
        }
        else{
            printf ("not a prime number");


        }
        return 0;
     }


