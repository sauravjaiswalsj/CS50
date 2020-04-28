#include<stdio.h>
#include<math.h>
#pragma once
#define PI 3.14
#define PTRIANGLE(a,b,c) (a+b+c)
#define PCIRCLE(r) (PI*r*2)
#define PSQUARE(s) (4*s)
//#define SUM(a,b,c) ((a+b+c)/2)
#define TRIANGLE(a,b,c,SUM) (sqrt(SUM*(SUM-a)*(SUM-b)*(SUM-c)))
#define CIRCLE(r) (PI*r*r)
#define SQUARE(s) (s*s)
