/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r=1,p=2,s=3,i,choice;
    srand(time(0)); // Use current time as seed for random generator 
    printf("Rock=1, Paper=2, Scissors=3\n\n");
    int computerscore =0; //intialising computer's score
    int yourscore =0;  //intialising your's score
    
    for(i=0;i<5;i++){  //total 5 games
        printf("Please choose a number:");
        scanf("%d",&choice);
        int computer=rand()%3+1; //the reminder will be always 0,1,2 so when we add 1 we get 1,2,3
        
        
        printf("Player choice:");
        
        
        
        if(choice==1){
            printf("Rock\n");
                if(computer==1){
                    printf("Computerchoose:Rock\n");
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computerchoose:Paper\n");
                    printf("Computer Wins!\n");
                    computerscore= computerscore + 1;
                }
                if(computer==3){
                    printf("Computerchoose:Scissors\n");
                    printf("Player Wins\n");
                    yourscore = yourscore + 1;
                }
            }
        else  if(choice==2){
            printf("Paper\n");
                if(computer==2){
                    printf("Computerchoose:Paper\n");
                    printf("Draw\n");
                }
                if(computer==3){
                    printf("Computerchoose:Scissors\n");
                    printf("Player Wins!\n");
                    yourscore = yourscore + 1;
                }
                if(computer==1){
                    printf("Computerchoose:Rock\n");
                    printf("Computer Wins!\n");
                    computerscore= computerscore + 1;
                }
            }
        else if(choice==3){
            printf("Scissors\n");
                if(computer==3){
                    printf("Computerchoose:Scissors\n");
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computerchoose:Paper\n");
                    printf("Computer Wins!\n");
                    computerscore= computerscore + 1;
                }
                if(computer==1){
                    printf("Computerchoose:Rock\n");
                    printf("Player Wins!\n");
                    yourscore = yourscore + 1;

                }
            }
        else{
            printf("Please choose a appropriate option\n");
        }
    
            }
            if(computerscore > yourscore ){
                printf("Computer wins! %d to %d\n",computerscore,yourscore);
            }
            else if(computerscore < yourscore ){
                printf("Player wins! %d to %d\n",yourscore,computerscore);
            }
            else if(computerscore == yourscore ){
                printf("No winner it is a draw!\n");
            }
    

    return 0;
}
