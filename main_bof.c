// DEVELOPED by ghozt123 
// SSP : [X]
// ASLR : [X]
// HNX : [X]
// SNX : [X]

#include <stdlib.h>
#include <stdio.h>

int main()
{

  int var;
  int check = 0x041414141;
  char buf[40];

  fgets(buf,45,stdin);

  printf("\n[buf]: %s\n", buf);
  printf("[check] %p\n", check);

  if ((check != 0x041414141) && (check != 0xcafecafe))
    printf ("\nVous etes sur la bonne voie !\n");

  if (check == 0xcafecafe)
   {
     printf("Vous avez gagné !\nOuverture du shell ...\n");
     system("/bin/dash");
     printf("Fermeture du shell! Bye.\n");
   }
   return 0;
}
