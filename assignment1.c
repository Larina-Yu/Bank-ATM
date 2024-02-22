/*
Author: Larina Yu (C22328351)
Date: 1/11/2022
Program Description: To develop a C Program that enables bank customers to manage their 
PIN number on an ATM machine. It will be able to verify and chnge the PIN Number and also 
inform you of how many times your PIN Number has been entered correctly or incorrectly*/

#include <stdio.h>

int main()
{
    //Variables//
    int pin1 = 1234;
    int pin2;
    int pin3;
    int num = 0;
    int correct = 0;
    int incorrect = 0;

    //start of do while loop//
    //Using a do while loop so the program runs atleast once//
    do
    {
        //The Menu of the ATM//
        //prinf used to display the text//
        printf("\n1. Enter PIN and Verify Correct\n");
        printf("2. Change PIN\n");
        printf("3. Display the number of times the PIN was entered (i) Correctly (ii)Incorrectly\n");
        printf("4. Exit Program\n");
        
        //used for inputting standard input//
        scanf("%d", &num);
            
            // getchar used to enter and display character data into a character variable//
            while(getchar()!='\n');
            
        //start of switch statement//
        //produces more efficient code, due to running less if statements//
        switch(num)

        //each case, corresponds to the numbered instructions is the above menu//
        {
            case 1:
        
                printf("\nPlease enter your existing PIN Number\n");

                //inputting standard input//
                scanf("%d", &pin1);

                    //used to display character data into a character variable//
                    while (getchar() !='\n');
            
                if(pin1 == 1234)
                
                {   
                    printf("\nCorrect PIN Number entered");
                    
                    //incrementing correct if PIN number is correct//
                    correct++;
                }
                //end of if statement//
                
                else
                
                {
                    printf("\nYour PIN Number is Incorrect");
                    
                    //incrementing incorrect if PIN number is incorrect//
                    incorrect++;
                }
                //end of else statement//
                    
                break;

            case 2:
            
                printf("Please verify you current PIN Number\n");
                
                //used to input standard input//
                scanf("%d", &pin1);

                    //for displaying character data in a character variable//
                    while (getchar()!='\n');
            
                    //if pin = 1234 correct PIN number will show//
                    if(pin1 == 1234)
                    
                    {
                        printf("\nCorrect PIN Number entered\n");
                        
                        //increments correct if PIN number is correct//
                        correct++;
                    }
                    //end of if statement//

                    //if the PIN is incorrect, the  enu will ask the user to re-enter the Pin//
                    else
                
                    {
                        printf("\nYour PIN Number is Incorrect\n");
                        
                        //increments incorrect if PIN number is incorrect//
                        incorrect++;
                    }
                    //end of else statement//

                //if pin does not = 1234, pin is incorrect and user will be asked to re-enter PIN Number//
                if(pin1 != 1234)

                {
                    printf("\nPlease enter your current PIN Number\n");

                    //used for inputting a standard input//
                    scanf("%d", &pin1);

                        //used when displaying a data charcter in a data variable//
                        while(getchar()!='\n');
                }
                //end of if statement//
                        
                printf("\nPlease enter a new PIN Number\n");
               
                //inputs standard input//
                scanf("%d", &pin2);
                
                    //used to display character data in a character variable//
                    while (getchar()!='\n');
                    
                printf("\nPlease confirm your PIN Number\n");
                
                //used to input standard input//
                scanf("%d", &pin3);

                    //used for displaying character data in a character variable//
                    while (getchar()!='\n');

                //if pin is correct, the pin will be changed//
                if(pin2 == pin3)

                {
                    printf("\nYou have sucessfully changed your PIN Number");
                }
                //end of if statement//

                //if pin2 = pin3, the PIN was entered correctly//
                if(pin2 == pin3)
            
                {   
                    //incrementing correct if PIN Number was entered corrrectly//
                    printf("\nYour PIN number is Correct");
                    correct++;
                }
                //end of if statement//

                //if pin2 does not equal = pin3, then the PIN is incorrect// 
                else

                {   
                    //incrementing incorrect if PIN Number is entered incorrectly//
                    printf("\nYour PIN Number is Incorrect\n");
                    incorrect++;
                }
                //end of else statement//

                break;
            //end of case 2//

            case 3:

                //incrementing correct if PIN was entered correctly//
                printf("\nYou entered your PIN Number correctly:%d\n", correct);
                correct++;

                //incrementing incorrect if PIN Nimber was entered incorrectly//
                printf("\nYou have entered your PIN Number incorrectly:%d\n", incorrect);
                incorrect++;

                break;
            //end of case 3//

            case 4:

                printf("\nExiting the Program");

                break;
            //end of case 4//

            default:
            {
                printf("Error\n");
            }
            //end default//
        }
        // end switch statement//
        
    } while(num!=4);
    //if num = 4, the program will end//
    //end of do while loop//


    return 0;

}//end main()//