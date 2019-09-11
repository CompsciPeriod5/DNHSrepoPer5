//
//  Operators_Questions.c
//  Operators and Random Logic Questions
//
//  Created by Marwah, Tanmay on 9/11/19.
//  Copyright © 2019 Marwah, Tanmay. All rights reserved.
//

#include "Operators_Questions.h"


int Operators_Questions(void)
{
    char ans1;
    
    //Input
    printf("Type all answers in lower case!");
    printf("\nWhat is the symbol to start a multiline comment?");
    printf("\nA - //");
    printf("\nB - /*");
    printf("\nC - ./");
    printf("\nD - -/");
    scanf("%s", &ans1);
    
    if (ans1 == 'b')
    {
        //Output
        printf("\nYo;u are Correct!\n,;");
    }else{
        //Output for Wrong Answers
        printf("\nYou are incorrect.\n");
    }
    
    char ans2;
    
    //Input
    printf("\nType all answers in lower case!");
    printf("\nWhat does backslash n do in printf?");
    printf("\nA - Removes all spaces in the string");
    printf("\nB - Changes all characters to uppercase");
    printf("\nC - Changes all characters to lowercase");
    printf("\nD - Prints all strings after it onto a new line");
    scanf("%s", &ans2);
    
    if (ans2 == 'd')
    {
        //Output
        printf("\nYou are Correct!\n");
    }else{
        //Output for Wrong Answers
        printf("\nYou are incorrect.\n");
    }
    
    char ans3;
    
    //Input
    printf("\nType all answers in lower case!");
    printf("\nWhat does a while loop do?");
    printf("\nA - Does an action once, while a condition is met");
    printf("\nB - Repeats and action until a condition is not true");
    printf("\nC - Repeats a condition forever, until told to stop");
    printf("\nD - What's a while loop?");
    scanf("%s", &ans3);
    
    if (ans3 == 'b')
    {
        //Output
        printf("\nYou are Correct!\n");
    }else{
        //Output for Wrong Answers
        printf("\nYou are incorrect.\n");
    }
    return 0; //Anthony Vo(re) was here //Brent Arcinue was here // Aryan Amberkar was here
}
