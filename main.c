/******************************************************************************************
  Copyright 2017-2018
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
******************************************************************************************/
// DEVELOPED by wil.tor


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ptrace.h>

#define BUFF_SIZE 20
int WIN_POINTS;

void        __cracking_challenge();
void        __steganographie_challenge();
void        __app_script_challenge();
void        __applicatives_challenge();
void        __cryptographie_challenge();
void        __cracking_challenge_validate();
void        __steganographie_challenge_validate();
void        __app_script_challenge_validate();
void        __applicatives_challenge_validate();
void        __cryptographie_challenge_validate();

void        __ptrace_me();
void        __log_session(int nb_points,int return_main);
void        __clear_screen();
void        __print_out_challenge();
void        __print_out_challenge_validate();
void        __informations();
void        __challenges_validate();
void        __challenges_list();
void        __welcome_message();
void        __welcome_message()
{
  puts("\n");
  system("figlet Hack-Path");
  puts("\n        Hack-Path Bord_Challenge : v1.0\n");
}

void        __ptrace_me()
{
  if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1)
  {
      printf("Arret de me debug toi !!\n");
      exit(1);
  }
}

void        __challenges_list()
{
  char *challenges_list_buffer = (char *) malloc(sizeof(BUFF_SIZE)*1);
  puts("\n[~] Vulnérabilités-applicatives");
  puts("\n[~] Cracking");
  puts("\n[~] Stéganographie");
  puts("\n[~] Vulnérabilités-shells");
  puts("\n[~] Cryptographie");
  puts("\nChoix de l'épreuve :  ");

  scanf("%s",challenges_list_buffer);
  switch(*challenges_list_buffer)
  {
    case '1':
    __clear_screen();
    __applicatives_challenge();
    break;
    case '2':
    __clear_screen();
    __cracking_challenge();
    break;
    case '3':
    __clear_screen();
    __steganographie_challenge();
    break;
    case '4':
    __clear_screen();
    __app_script_challenge();
    break;
    case '5':
    __clear_screen();
    __cryptographie_challenge();
    break;
  }
}

void        __challenges_validate()
{
  char *challenges_validate_buffer = (char *) malloc(sizeof(BUFF_SIZE)*1);
  puts("\n[~] Vulnérabilités-applicatives");
  puts("\n[~] Cracking");
  puts("\n[~] Stéganographie");
  puts("\n[~] Vulnérabilités-shells");
  puts("\n[~] Cryptographie");
  puts("\nChoix de l'épreuve :  ");

  scanf("%s",challenges_validate_buffer);
  switch(*challenges_validate_buffer)
  {
    case '1':
    __clear_screen();
    __applicatives_challenge_validate();
    break;
    case '2':
    __clear_screen();
    __cracking_challenge_validate();
    break;
    case '3':
    __clear_screen();
    __steganographie_challenge_validate();
    break;
    case '4':
    __clear_screen();
    break;
    case '5':
    __clear_screen();
    __cryptographie_challenge_validate();
    break;
    default:
    __clear_screen();
  }
}

void        __informations()
{
  system("clear");
  puts("\nCe programme a été entiérement développé par 'ghozt123' pour la communauté Hack-Path.\n");
  puts("\nDISCORD Hack-path :  ...\n");
  puts("\nSITE WEB de la communauté :  ...\n");
  puts("\nDISCORD du créateur :  wil.tor#2011\n");
  puts("\nGITHUB du créateur :  https://github.com/ghozt123\n");
  puts("\nSITE WEB du créateur :  https://razontex.wordpress.com/\n");
}

void      __clear_screen()
{
  system("clear");
  __welcome_message();
}

void      __print_out_challenge(char *titre, char *indice, char *level)
{
  printf("\n[~] Titre : %s | by 'ghozt123' ", titre);
  printf("\n[~] Indice : %s\n", indice);
  printf("\n[~] Niveau de difficulté : %s/6\n\n", level);
}

void      __print_out_challenge_validate(char *flag, char *title)
{
  char validate_buffer[BUFF_SIZE+1];

  puts("Entrer le flag :");
  scanf("%s", validate_buffer);
  if (strcmp(validate_buffer,flag) == 0)
  {
    printf("\nFélécitations, vous venez de valider le challenge : %s + 1pts !\n\n", title);
    WIN_POINTS++;
    __log_session(WIN_POINTS,0);
    exit(1);
  }
  else
  {
    puts("\nCe n'est pas le flag ! Réessayez !\n");
    exit(1);
  }
}

/*******************************************************************
 CHALLENGES A REALISER (REALISATION) DEBUT
******************************************************************/

void        __applicatives_challenge()
{
	__print_out_challenge("ELF-x86 easy Buffer-Overflow 1","aucun","1");
  puts("\n\nAccés-ssh identifiant : 'ssh gh0st@192.168.1.32'\n");
  puts("Accés-ssh pass : 'challenge or wow'\n\n");
}
void        __cracking_challenge()
{
	__print_out_challenge("ELF_x86 O-protection","simple","1");
  puts("\n\nAccés-ssh identifiant : 'ssh gh0st@192.168.1.32'\n");
  puts("Accés-ssh pass : 'challenge or wow'\n\n");
}
void        __steganographie_challenge()
{
	__print_out_challenge("Yaourt_1","Sur l'image elle-même !","1");
	puts("\n[+] Stéganographie/yaourt.jpeg\n");
}
void        __app_script_challenge()
{
  __print_out_challenge("Basic Bash-1","aucun","1");
  puts("\n\nAccés-ssh identifiant : 'ssh gh0st@192.168.1.32'\n");
  puts("Accés-ssh pass : 'challenge or wow'\n\n");
}
void        __cryptographie_challenge()
{
	__print_out_challenge("Basic SHA256","aucun","1");
	puts("\n[+] Bonne chance ! : 7d14e416a8106145116a57943c90e203d7309d477865a7b615eb381d3eb23925\n");
}

/*******************************************************************
 CHALLENGES A REALISER (REALISATION) FIN
******************************************************************/

/*******************************************************************
 CHALLENGES A VALIDER (VALIDATION) DEBUT
******************************************************************/

void        __applicatives_challenge_validate()
{
  __print_out_challenge_validate("easywin","ELF-x86 easy Buffer-Overflow 1");
}
void        __cracking_challenge_validate()
{
  __print_out_challenge_validate("beaucouptropfacile","ELF_x86 O-protection");
}
void        ____app_script_challenge_validate()
{
  __print_out_challenge_validate("soeasyman","Basic Bash-1");
}
void        __cryptographie_challenge_validate()
{
	__print_out_challenge_validate("cRYpt0_I5_cO05","Basic SHA-256");
}
void        __steganographie_challenge_validate()
{
  __print_out_challenge_validate("cfacile","Yaourt_1");
}
/*******************************************************************
 CHALLENGES A VALIDER (VALIDATION) FIN
******************************************************************/

void        __log_session(int nb_points,int return_main)
{

  char *username = (char *) malloc(sizeof(BUFF_SIZE)*1);
  char *password  = (char *) malloc(sizeof(BUFF_SIZE)*1);
  char *user_1 = "ghozt123";
  char *pass_1 = "wow";
  FILE *file = NULL;
  file = fopen("save.rip","r+");

  if(return_main == 0)
  {
    fprintf(file,"user_1 : %d points",nb_points);
    fscanf(file,"%d",nb_points);
    exit(1);
  }
  __clear_screen();
  if(return_main == 1)
  {
    fprintf(file,"user_1 : %d",nb_points);
    fscanf(file,"%d",nb_points);
  puts("\n-------------------------LOG-PANEL------------------------------\n");
  puts("\nIdentifiant :  ");
  scanf("%s",username);
  puts("\nPassword :  ");
  scanf("%s",password);

  puts("\nRecherche en cours ...\n\n");
  if(strcmp(username,user_1) == 0 && strcmp(password,pass_1) == 0)
  {
    printf("Vous êtes connecté '%s' !\n", user_1);
    printf("Et vous avez toujours '%d' points !\n\n",nb_points);
  }
  else
  {
    printf("Aucun '%s' dans notre base de donnée ! Désolée ...\n", username);
    exit(1);
  }
  __clear_screen();
  }
}

int main()
{
  __log_session(WIN_POINTS,1);

  char main_buffer[BUFF_SIZE+1];

     puts("\n[-] Liste des challenges\n");
     puts("\n[-] Valider un challenge\n");
     puts("\n[-] Informations\n");
     puts("Choix (1,2 ou 3) :  ");
     scanf("%s",main_buffer);

     switch(*main_buffer)
     {
       case '1':
       __clear_screen();
       __challenges_list();
       break;
       case'2':
       __clear_screen();
       __challenges_validate();
       break;
       case'3':
       __clear_screen();
       __informations();
       break;
     }
  return 0;
}
