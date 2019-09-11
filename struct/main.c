//
//  main.c
//  struct
//
//  Created by Hayes, Michael on 9/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//

// standard libraries
#include <stdio.h>

// external includes from team headers
#include "structQuestion.h"

// protoype for internal functions
void prepareConsole(void);

int main() {
    // start with fresh console
    prepareConsole();
    
    structQuestion();
    return 0;
}

// put logic to prepare console in here
void prepareConsole(void)
{
    printf("\033"); // clear console
}

// Mr M was here
// Nakul is the best coder