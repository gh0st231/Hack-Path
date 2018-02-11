#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void      __print_error();
void      __print_sucess();
void      __welcome_message();
void      __welcome_message()
{
  system("clear");
  puts("\n");
  system("figlet Hack-Path");
  puts("\n        Hack-Path Bord_Challenge : v1.0\n\n");
}

void      __print_sucess()
{
  puts("C'est le bon pass ! Vous pouvez validé l'épreuve !\n\n");
}

void      __print_error()
{
  puts("Désolé ce n'est pas le bon pass ! Réessayez :( !\n\n");
}

int main(int argc, char **argv)
{
  __welcome_message();

  if (argc != 2)
  {
    puts("format : ./reverse + pass\n\n");
    exit(1);
  }

  if (strcmp(argv[1], "beaucouptropfacile") == 0)
  {
    __print_sucess();
  } else
  {
    __print_error();
  }

  return 0;
}
