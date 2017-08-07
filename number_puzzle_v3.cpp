#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

int puzzle[4][4];

void display_puzzle(){
     system("cls");
     cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n";
     cout<<"Organize as pecas de modo que fique com a seguinte disposicao:\n\n";
     for (int i=0;i<4;i++){
          for (int j=0;j<4;j++){
              cout<<"[ "<<setw(2)<<puzzle[i][j]<<" ]";
              if (j==3) cout<<"\n";
              }
              }
              }
              
void zerar_variavel(){
     for (int i=0;i<4;i++){
          for (int j=0;j<4;j++){
              puzzle[i][j]=-1;
              }
              }
              }

main()
{
      int valor=0,iniciar,vetor_aux[16];
      int x,k,jogadas=0;
      
      for (int i=0;i<4;i++){
          for (int j=0;j<4;j++){
              valor++;
              puzzle[i][j]=valor;
              if (i==3&&j==3) puzzle[i][j]=0;
              }
              }
              
      display_puzzle();
      zerar_variavel();
      cout<<"\nOpcoes:\n1. Iniciar\n0. Sair\n";
      while (cin>>iniciar, iniciar!=0&&iniciar!=1) cout<<"Opcao invalida.\n";
      
      while (iniciar!=0){//while
            
            srand (time(NULL));
            for (int i=0;i<4;i++){//for1
                for (int j=0;j<4;j++){//for2
                    k=rand()%16;
                    if ((k==puzzle[0][0])||(k==puzzle[0][1])||(k==puzzle[0][2])||(k==puzzle[0][3])||(k==puzzle[1][0])||(k==puzzle[1][1])||(k==puzzle[1][2])||(k==puzzle[1][3])||(k==puzzle[2][0])||(k==puzzle[2][1])||(k==puzzle[2][2])||(k==puzzle[2][3])||(k==puzzle[3][0])||(k==puzzle[3][1])||(k==puzzle[3][2])||(k==puzzle[3][3])){
                       j--;
                       }
                    else {
                         puzzle[i][j]=k;
                         }
                         }//for2
                         }//for1

            display_puzzle();
            
            for (int i=0; ;i++){
                jogadas++;
                while (cin>>x, x<1||x>15) cout<<"Jogada invalida, favor usar somente valores de 1 a 15\n";
                
                //if (x==
                
                }//for
                        }//while
      
      cout<<"\n";
      system("pause");
      
      }
