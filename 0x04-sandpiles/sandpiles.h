#ifndef _SANDPILE_H
#define _SANDPILE_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
bool verification(int a[3][3]);
void sum(int a[3][3], int b[3][3]);
void stable(int a[3][3], int tmp[3][3]);

#endif
