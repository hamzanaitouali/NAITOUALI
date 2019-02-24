//# NAITOUALI
//PROG
/*Each player in a tournament plays six games. There are no ties. The tournament director places the players in groups based on the results of games as follows:

if a player wins 5 or 6 games, they are placed in Group 1;
if a player wins 3 or 4 games, they are placed in Group 2;
if a player wins 1 or 2 games, they are placed in Group 3;
if a player does not win any games, they are eliminated from the tournament.
Write a program to determine which group a player is placed in.

Input Specification
The input consists of six lines, each with one of two possible letters: W (to indicate a win) or L (to indicate a loss).

Output Specification
The output will be either 1, 2, 3 (to indicate which Group the player should be placed in) or -1 (to indicate the player has been eliminated).
-------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
typedef struct v{
char ans[6];
}f;
int main(){
    f t[6];
    int i,c=0;
    for(i=0;i<6;i++){
       scanf("%s",t[i].ans);
       }
    for(i=0;i<6;i++){
       if((strcmp(t[i].ans,"W")==0))c++;
    }
    if(c==0) printf("-1");
    else if(c==1 || c==2) printf("3");
    else if(c==3 || c==4) printf("2");
    else printf("1");
       return 0;
}
