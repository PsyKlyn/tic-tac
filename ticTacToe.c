#include<stdio.h>

// define color codes for reuse
#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"

char mainTic[3][3];
int maintic(int player , char value , int player2 , char value2){ 
      int i , j ; 
      
     if ( value == 'X' ){
     for (i=0; i<3; i++){
         printf(BLUE"+----+----+----+\n" RESET);
         for (j=0; j<3; j++){
             if (player == 1 && value == 'X'){
                mainTic[0][0] = value;
                }
             else if (player == 2 && value == 'X'){
                mainTic[0][1] = value;
                }
             else if (player == 3 && value == 'X'){
                mainTic[0][2] = value;
                }
             else if (player == 4 && value == 'X'){
                mainTic[1][0] = value;
                }
            else if (player == 5 && value == 'X'){
                mainTic[1][1] = value;
                }
            else if (player == 6 && value == 'X'){
                mainTic[1][2] = value;
                }
             else if (player == 7 && value == 'X'){
                mainTic[2][0] = value;
                }
             else if (player == 8 && value == 'X'){
                mainTic[2][1] = value;
                }
             else if (player == 9 && value == 'X'){
                mainTic[2][2] = value;
                }
                //player2 conditions
             printf(RED"|  %c "RESET, mainTic[i][j]);
         }
         printf(BLUE"|\n" RESET);
     }
     }
     printf(BLUE"+----+----+----+\n" RESET);
     
     if (value2 =='O'){
     for (i=0; i<3; i++){
         printf(GREEN"+----+----+----+\n" RESET);
         for (j=0; j<3; j++){
                //player2 conditions
             if (player2 == 1 && value2 == 'O'){
                mainTic[0][0] = value2;
                }
             else if (player2 == 2 && value2 == 'O'){
                mainTic[0][1] = value2;
                }
             else if (player2 == 3 && value2 == 'O'){
                mainTic[0][2] = value2;
                }
             else if (player2 == 4 && value2 == 'O'){
                mainTic[1][0] = value2;
                }
            else if (player2 == 5 && value2 == 'O'){
                mainTic[1][1] = value2;
                }
            else if (player2 == 6 && value2 == 'O'){
                mainTic[1][2] = value2;
                }
             else if (player2 == 7 && value2 == 'O'){
                mainTic[2][0] = value2;
                }
             else if (player2 == 8 && value2 == 'O'){
                mainTic[2][1] = value2;
                }
             else if (player2 == 9 && value2 == 'O'){
                mainTic[2][2] = value2;
                }
             printf(YELLOW"|  %c " RESET, mainTic[i][j]);
         }
         printf(GREEN"|\n" RESET);
     }
     
     printf(GREEN"+----+----+----+\n" RESET);
    }
     return 0;
}

//WIN CHECK
int winCheck(){
  // Rows Check for player 1 
          if (mainTic[0][0] == 'X' && mainTic[0][1] == 'X' && mainTic[0][2] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
        else if (mainTic[1][0] == 'X' && mainTic[1][1] == 'X' && mainTic[1][2] == 'X'){
                 printf(CYAN"Player 1 wins \n"RESET);
                 }
        else if (mainTic[2][0] == 'X' && mainTic[2][1] == 'X' && mainTic[2][2] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
  //Column check player 1
        else if (mainTic[0][0] == 'X' && mainTic[1][0] == 'X' && mainTic[2][0] == 'X'){
                 printf(CYAN"Player 1 wins \n"RESET);
                 }
        else if (mainTic[0][1] == 'X' && mainTic[1][1] == 'X' && mainTic[2][1] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
        else if (mainTic[0][2] == 'X' && mainTic[1][2] == 'X' && mainTic[2][2] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
   //Diagonal check for player 1 
        else if (mainTic[0][0] == 'X' && mainTic[1][1] == 'X' && mainTic[2][2] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
        else if (mainTic[0][2] == 'X' && mainTic[1][1] == 'X' && mainTic[2][0] == 'X'){
                 printf(CYAN"Player 1 wins \n" RESET);
                 }
        


  // Rows Check for player 2
          if (mainTic[0][0] == 'O' && mainTic[0][1] == 'O' && mainTic[0][2] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
        else if (mainTic[1][0] == 'O' && mainTic[1][1] == 'O' && mainTic[1][2] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
        else if (mainTic[2][0] == 'O' && mainTic[2][1] == 'O' && mainTic[2][2] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
  //Column check player 2
        else if (mainTic[0][0] == 'O' && mainTic[1][0] == 'O' && mainTic[2][0] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
        else if (mainTic[0][1] == 'O' && mainTic[1][1] == 'O' && mainTic[2][1] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
        else if (mainTic[0][2] == 'O' && mainTic[1][2] == 'O' && mainTic[2][2] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
   //Diagonal check for player 2 
        else if (mainTic[0][0] == 'O' && mainTic[1][1] == 'O' && mainTic[2][2] == 'O'){
                 printf(YELLOW"Player 2 wins \n"RESET);
                 }
        else if (mainTic[0][2] == 'O' && mainTic[1][1] == 'O' && mainTic[2][0] == 'O'){
                 printf(YELLOW"Player 2 wins \n" RESET);
                 }
                 
                 
                return 0;
      
} 

// Draw Check 
int drawCheck(){
    if ( winCheck() == 0){
       printf(YELLOW" DRAW MATCH \n");
       }
       return 0;
} 

           
//Main frame Board
void drawBoard(){

  char tic[3][3]= {{'X','O','O'},{'O','X','O'},{'O','O','X'}};
  int i,j;
  for (i=0; i<3; i++){
      printf(BLUE"+----+----+----+\n" RESET);  
      for (j=0; j<3; j++){
          printf(GREEN"| %c  " RESET, tic[i][j]);
       }
       printf(BLUE"|\n"RESET);
   }
   printf(BLUE"+----+----+----+\n" RESET);
}
//Player 1
int playerInput(){    
     printf(RED"       ============================== \n"RESET);
     printf("\n");
     int i, j, player1, player2;
     char x,o;
// First turn
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     int *ptr = &player1;
     maintic(player1, x , player2 , o);
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c", &player2 , &o);
     int *ptr2 = &player2;
     maintic(player1 , x ,player2 , o);
// Second turn
    printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck();
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c", &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
// THIRD
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck();
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c", &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
//FOURTH
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck(
     );
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c" , &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
//FIFTH     
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck();
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c" , &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
//SIXTH     
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck();
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c" , &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
//SEVENTH
     printf(RED"Player 1 turn : " RESET);
     scanf("%d %c", &player1 , &x);
     maintic(player1, x , player2 , o);
     winCheck();
     
     printf(GREEN"Player 2 turn : " RESET);
     scanf("%d %c" , &player2 , &o);
     maintic(player1 , x ,player2 , o);
     winCheck();
     
     return 0 ;
}

     
//Single player
int multiPlayer(){
     int i,j;
     printf(CYAN"=============== Multi-Player Mode ==================\n" RESET);
     printf("\n");
     char tic[3][3];

     for (i=0; i<3; i++){
         printf(BLUE"+----+----+----+\n"RESET);
         for (j=0; j<3; j++){
             printf(GREEN"| %d%d "RESET, i, j);
         }
         printf(BLUE"|\n"RESET);
     }
     printf(BLUE"+----+----+----+\n"RESET);
     printf("\n");

     printf(CYAN"[*]Rules and regulation\n"RESET);
     printf(CYAN"[0] How to input  ?\n"RESET);
     printf(CYAN"[1] All input are stored in row wise\n" RESET);
     printf(CYAN"[2] Input for the value must be CAPITAL LETTER\n"RESET);
     printf(CYAN"[3] If you want to input in the top-right corner,\n    Usage : [row numbers] [X or O]\n"RESET);
     printf(CYAN"       Example : 3 X or 3X\n" RESET);
     printf("\n");
     playerInput();
      
      return 0;
}


//Multi-Player
int  singlePlayer(){
     printf("XCCCC");
     return 0;
}

//Computer
int compuTer(){
     printf(" Will take 10 years to complete....");
     return 0;
}

//help
int help(){
printf(" All the users are requested to have patients about the game .\n");
printf(" It's a terinal-based game \n");
return 0;
}



//Main function
int main(){
  int choice;
  int repeat = 1;
  
  printf("\n");

  while(repeat==1){
  printf(GREEN"=================Tic-Tac-Toe=================\n" RESET);
  printf("\n");
  printf(YELLOW"Choose which mode you want to play :\n" RESET);
  printf(YELLOW"[01] Multi-Player\n" RESET);
  printf(YELLOW"[02] Single player\n" RESET);
  printf(YELLOW"[03] Computer\n" RESET);
  printf(YELLOW"[04] Help\n" RESET);
  printf(RED"[00] Exit\n" RESET);

  printf(GREEN "Enter your Choices homies : " RESET);
  scanf("%d", &choice);
  printf("\n");

  switch(choice){
        case 01:
        multiPlayer();
        break;
        case 02:
        singlePlayer();
        break;
        case 03:
        compuTer();
        break;
        case 04:
        help();
        break;
        case 00:
        printf(RED"Exiting....." RESET);
        return 0;
        break;
        default:
        printf(BLUE"Invalid choice \n" RESET);
        break;
    }
  }
}
