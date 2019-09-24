//
//  datatypesQuestions.c
//  MidTermP5
//
//  Created by Prathipati, Akshit on 9/24/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#include "datatypesQuestions.h"


int datatypesQuestions(void)
{
    char answer1;
    
    //Asks the questions and collects answer
    printf("Remember to type answers with uppercase letters\n");
    printf("What does int stand for and do in code?\n");
    printf("\n[A] Convicts a man of murder\n");
    printf("\n[B] Blatantly worng answer\n");
    printf("\n[C] Stands for an integer and assigns a variable to data\n");
    printf("\n[D] Stores 7 bytes\n\n");
    printf("\nAnswer: ");
    scanf("%s", &answer1);
    
    if (answer1 == 'C')
    {
        //Outputs the results if correct
        printf("\nCorrect! :)\n");
    }else{
        //Output result for wrong answer
        printf("\nIncorrect :(\n");
    }
    
    char answer2;
    
    //Input
    printf("Remember to type answers with uppercase letters\n");
    printf("How many bytes of data does a float take up?\n");
    printf("\n[A] 4 bytes\n");
    printf("\n[B] 20 bytes\n");
    printf("\n[C] 8 bytes\n");
    printf("\n[D] Blatantly worng answer\n\n");
    printf("\nAnswer: ");
    scanf("%s", &answer2);
    
    if (answer2 == 'A')
    {
        //Outputs the result if correct
        printf("\nCorrect! :)\n");
    }else{
        //Output result for wrong answer
        printf("\nIncorrect :(\n");
    }
    
    return 0;
}

