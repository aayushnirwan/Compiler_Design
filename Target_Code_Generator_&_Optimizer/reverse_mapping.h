#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANSI_COLOR_RED     "\x1b[1;31m"
#define ANSI_COLOR_GREEN   "\x1b[1;32m"
#define ANSI_COLOR_RESET   "\x1b[1;0m"
#define ANSI_COLOR_BLUE    "\x1b[1;34m"

int get_token_of_symbol(char s){
  char r[10];
  r[0]='\0';
  if(s=='a')
    strcpy(r,"type");
  if(s=='b')
    strcpy(r,"id");
  if(s=='c')
    strcpy(r,";");
  if(s=='d')
    strcpy(r,",");
  if(s=='e')
    strcpy(r,"ε");
  if(s=='f')
    strcpy(r,"(");
  if(s=='g')
    strcpy(r,")");
  if(s=='h')
    strcpy(r,"{");
  if(s=='i')
    strcpy(r,"}");
  if(s=='j')
    strcpy(r,"op");
  if(s=='k')
    strcpy(r,"cond_op");
    if(s=='l')
    strcpy(r,"lit");
  if(s=='m')
    strcpy(r,"for");
  if(s=='n')
    strcpy(r,"++");
  if(s=='o')
    strcpy(r,"--");
  if(s=='p')
    strcpy(r,"if");
  if(s=='q')
    strcpy(r,"else");
  if(s=='r')
    strcpy(r,"return");
  if(s=='A')
    strcpy(r,"MD");
  if(s=='B')
    strcpy(r,"Med");
  if(s=='C')
    strcpy(r,"Coma");
  if(s=='D')
    strcpy(r,"Brac");
  if(s=='E')
    strcpy(r,"Rep");
  if(s=='F')
    strcpy(r,"Stmts");
  if(s=='G')
    strcpy(r,"Job");
  if(s=='H')
    strcpy(r,"Expr");
  if(s=='I')
    strcpy(r,"C_E");
  if(s=='J')
    strcpy(r,"F_loop");
  if(s=='K')
    strcpy(r,"Low");
  if(s=='L')
    strcpy(r,"Inc");
  if(s=='M')
    strcpy(r,"Cond");
  if(s=='N')
    strcpy(r,"Out");
  if(s=='O')
    strcpy(r,"Cont");
  if(s=='P')
    strcpy(r,"C'");
  if(s=='Q')
    strcpy(r,"Ret");
  if(s=='$')
    strcpy(r,"$");
  if(s=='S')
    strcpy(r,"S");
  if(s=='R')
    strcpy(r,"R");
  if(s=='T')
  strcpy(r,"T");
  if(s=='U')
    strcpy(r,"U");
  printf(ANSI_COLOR_BLUE"%s"ANSI_COLOR_RESET,r);
}
