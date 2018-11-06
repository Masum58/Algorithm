#include <iostream>
#include <stdio.h>


using namespace std;

int main(){

int x;
x = 10;
//printf("%d\n",x); for value print er jonno 10
//printf("%d\n",&x); for konwing x er mamorey location
//printf("%d\n",*(&x)); // (&x) mane holo x er mamorey address (&x) er age jode * dai tahole sa bolbe x er modde jow and dako x er kono value store kora ase kena jode thake tahole take print koro mane pointer er moto jheto 10 store kora ase tai sa 10 print korbe

// now ammra pointer toire korbo

int* px;  // mane holo a pointer to a integer mane * ei ta integer dake point kore ase,tahole total jenes ta ke holo px tome amon akta pointer tome * dia amon akta memory address deke point kore aso j khane akta integer store ase
px = &x; // px ta x re mamory address ta print kore raklo
//printf("%d\n",px); // output asbe x er mamory addrss
//printf("%d\n",&x); // eita tew same  x er mamory addrss asbe
//printf("%d\n",*px); // mane holo * eita dewer karone px tome j mamory address deke jate bolse oi mamory address er dake jow valu ta print koro mane valu 10

return 0;


}
