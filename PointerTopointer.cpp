#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   // float x = 200;


    int x =100;
    int* px = &x;
  // float* px = &x;
    //or
   // int* px;
    //px = &x;
    //printf("%d\n",*px); out asbe 100
    *px = 500; // mane holo px tome j mamory address er deke point kore aso oi manory address er deke jow and oi khane value take tome 20 kore aso mane x=100 selo ta now 20 hobe

   // printf("%d\n",*px); // mane output hobe 20;
   // printf("%d\n",x); // now x er valu asbe holo 20 karn 100 er jaigi 20 boira dese
   int** pxx;
   pxx = &px;          // mane holo 2nd * mane holo amon akta pointer int* eito mane holo jata kena r akta pointer er deke pointer deke point kore ase mane holo pointer to an intger pointer
    //printf("%f\n",x);
    printf("%d\n",**pxx);
    return 0;

}
