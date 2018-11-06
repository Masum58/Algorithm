#include <iostream>
#include <stdio.h>

using namespace std;

void change(int x){
x = 20;
printf("%d\n",x); // change funcation ta x er value change koira debe

}

int main()
{
    int x = 10;
    change(x); // funcation tak call korlam and value 10 koira deve 20 er jaigai

    return 0;
}
