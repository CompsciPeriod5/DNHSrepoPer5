//
//  questionPO.c
//  questionPO
//
//  Created by Vo, Anthony on 9/9/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int questionPO(void) {
    //initializes answer
    char answer[10];
    
    printf("Which control operator loops?\n"); //asks question
    printf("[A]if/then\n[B]switch\n[C]for\n[D]struct\n"); //Anthony Vo
    scanf("%s", answer);
    
    //determines if answer is correct
    if (strcmp(answer, "C") == 0) {
        printf("Correct\n");
    } else {
        printf("Incorrect\n");
    }
    return 0;
}
