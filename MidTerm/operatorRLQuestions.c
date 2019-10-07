//
//  operatorRLQuestions.c
//  MidTermP5
//
//  Created by Marwah, Tanmay on 10/7/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

#include "operatorRLQuestions.h"
int opQuestions(void){
    char ans1,ans2,ans3;
    printf("Please answer all questions in lowercase!\n");
    printf("The Expression is 3+=5\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 3 B) 6 C) -2 D) 8");
    scanf("%c",&ans1);
    if(ans1 == 'd'){
        printf("Correct! Loading Next question...");
    } else{
        printf("Incorrect. The correct answer is D");
    }
    
    printf("Please answer all questions in lowercase!\n");
    printf("The Expression is 7+=5\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 2 B) 3 C) 12 D) 5");
    scanf("%c",&ans2);
    if(ans2 == 'c'){
        printf("Correct! Loading Next question...");
    } else{
        printf("Incorrect. The correct answer is C");
    }
    
    printf("Please answer all questions in lowercase!\n");
    printf("The Expression is 12/=2\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 9 B) 6 C) 24 D) 10");
    scanf("%c",&ans3);
    if(ans3 == 'b'){
        printf("Correct! Loading Next question...");
    } else{
        printf("Incorrect. The correct answer is D");
    }
    return 0;
}
