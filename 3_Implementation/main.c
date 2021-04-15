  
#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ch;

    printf("1 --> Add \n2 --> Subtaction \n3 --> Multiply  \n4 --> Divide  \n5 --> Power \n6  --> Intrest  \n7  -->  Percentage \n8  -->  Distance  \n9  -->  Speed  \n10 --> Sqrt  \n11 --> Log \n12 --> Sin \n13 --> Cos \n14 --> Tan\n");
    
    printf("Enter the operation to be performed\n");
    scanf("%d",&ch);

    if(ch>0 && ch<10){
        xi structure_input1;
        long long int first=0,second=0;
	    printf("Enter the first number\n");
        scanf("%lld",&first);
	    printf("Enter the second number\n");
        scanf("%lld",&second);
        structure_input1.a1=first;
        structure_input1.a2=second;
        switch(ch){
            case 1:
                add(&structure_input1);
            
                printf("Sum  -->  %lld",structure_input1.o1);
                break;
            case 2:
                subtract(&structure_input1);
                printf("Subtraction  -->  %lld",structure_input1.o1);
                break;

            case 3:
                multiply(&structure_input1);
                printf("Multiply   -->  %lld",structure_input1.o1);
                break;
            case 4:
                division(&structure_input1);
                printf("Divide   -->   %lld",structure_input1.o1);
                break;
            case 5:
                power(&structure_input1);
                printf("Power   -->   %lld",structure_input1.o1);
                break;
            case 6:
                intrest(&structure_input1);
                printf("Power   -->   %lld",structure_input1.o1);
                break;
            case 7:
                percentage(&structure_input1);
                printf("Power   -->   %lld",structure_input1.o1);
                break;
            case 8:
                distance(&structure_input1);
                printf("Power   -->   %lld",structure_input1.o1);
                break;
            case 9:
                speed(&structure_input1);
                printf("Power   -->   %lld",structure_input1.o1);
                break;            

        }
        
    }
    else if(ch>9 && ch<12){
            yi structure_input2;
            float science_input=0.0;
	        printf("Enter the number\n");
            scanf("%f",&science_input);
            structure_input2.a3=science_input;
            switch(ch){
                case 10:
                    square_root(&structure_input2);
                    printf("Sqrt   -->   %.3f:",structure_input2.o2);
                    break;
                case 11:
                    logarithm(&structure_input2);
                    printf("Log   -->   %.3f",structure_input2.o2);
                    break;
                    
            }

        }
        else{
            zi structure_input3;
            float trignometric_input=0.0;
	        printf("Enter the number\n");
            scanf("%f",&trignometric_input);
            structure_input3.a4=trignometric_input;
            switch(ch){
                case 12:
                    sine(&structure_input3);
                    printf("Sin Value   -->    %.3f",structure_input3.o3);
                    break;
                case 13:
                    cosine(&structure_input3);
                    printf("Cos Value    -->    %.3f",structure_input3.o3);
                    break;
                case 14:
                    tangent(&structure_input3);
                    printf("Tan Value    -->   %.3f",structure_input3.o3);
                    break;
                
                default:
                    break;
            }
        }
    return 0;
}    

    