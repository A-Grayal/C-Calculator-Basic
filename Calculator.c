//Basic Includes
#include <stdio.h>
#include <string.h>

void printMenu();

//Variable List

//Main Code Function
int main(void)
{
    //Menu Code Function

    int choice1; //Addition
    int choice2; //Subtract
    int choice3; //Multiplication
    int choice4; //Divide
    int choice5; //Exit Program

    //Menu Options

    do {
        printMenu();
        scanf("%d", &choice5);
        switch (choice5)

        {
            case 1:
            printf("-----------------------------------------------------\n");
            printf("Addition Calculator\n");
            printf("-----------------------------------------------------\n");
            
            //Choice Code

                //Variables
                    int input1_1;
                    int input2_1;
                    int sum_1;

                //Program
                    printf("Please Enter a Number\n");
                    scanf("%d", &input1_1);
                    printf("Please Enter a Second Number\n");
                    scanf("%d", &input2_1);

                    sum_1 = input1_1 + input2_1;

                    printf("%d + %d = %d\n", input1_1, input2_1, sum_1);

            printf("-----------------------------------------------------\n");
            break;

            case 2:
            printf("-----------------------------------------------------\n");
            printf("Subtraction Calculator\n");
            printf("-----------------------------------------------------\n");
            
            //Choice Code

                //Variables
                    int input1_2;
                    int input2_2;
                    int sum_2;

                //Program
                    printf("Please Enter a Number\n");
                    scanf("%d", &input1_2);
                    printf("Please Enter a Second Number\n");
                    scanf("%d", &input2_2);

                    sum_2 = input1_2 - input2_2;

                    printf("%d - %d = %d\n", input1_2, input2_2, sum_2);


            printf("-----------------------------------------------------\n");
            break;

            case 3:
            printf("-----------------------------------------------------\n");
            printf("Multplication Calculator\n");
            printf("-----------------------------------------------------\n");
            
            //Choice Code

                 //Variables
                    int input1_3;
                    int input2_3;
                    int sum_3;

                //Program
                    printf("Please Enter a Number\n");
                    scanf("%d", &input1_3);
                    printf("Please Enter a Second Number\n");
                    scanf("%d", &input2_3);

                    sum_3 = input1_3 * input2_3;

                    printf("%d * %d = %d\n", input1_3, input2_3, sum_3);



            printf("-----------------------------------------------------\n");
            break;

            case 4:
            printf("-----------------------------------------------------\n");
            printf("Division Calculator\n");
            printf("-----------------------------------------------------\n");
            
            //Choice Code

                 //Variables
                    int input1_4;
                    int input2_4;
                    int sum_4;

                //Program
                    printf("Please Enter a Number\n");
                    scanf("%d", &input1_4);
                    printf("Please Enter a Second Number\n");
                    scanf("%d", &input2_4);

                    sum_4 = input1_4 / input2_4;

                    printf("%d / %d = %d\n", input1_4, input2_4, sum_4);


            printf("-----------------------------------------------------\n");
            break;

            case 5:
            printf("-----------------------------------------------------\n");
            printf("Exiting Program\n");
            printf("-----------------------------------------------------\n");
        }
    } while (choice5 != 5);
}

//User Defined Functions

//Menu Program Function
void printMenu()
    {
        printf("Option 1 - Addition Calculator\n");
        printf("Option 2 - Subtraction Calculator\n");
        printf("Option 3 - Multiplication Calculator\n");
        printf("Option 4 - Division Calculator\n");
        printf("Option 5 - Exit Program\n");
    }

//test