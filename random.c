#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int index = rand() % 26;
    char c = 'A' + index;
    return c;
}