#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{



  const char jours [7][10] ={
   "lund",
   "mardi",
   "mercredi",
   "jeudi",
   "vendredi",
   "samedi",
   "dimanche",

 };
   srand(time(0));
   int indix = rand() % 7;
   printf("le jour choisi est: %s\n" , jours[indix]);

}
