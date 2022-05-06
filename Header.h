#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>

using namespace std;

//   #1
double* create(int size);
void newData(double* ar, int size);
void print(double* ar, int size);
void clear(double* ar);

//   #2

void sortirovka(int* ar, int size);

//   #3

void createDouble(int** ar, int lines, int columns);
void printDouble(int** ar, int lines, int columns);

#endif Header

