#include <iostream>
#include <conio.h>

using namespace std;

char p[10],v[2]={219,220};

void display_velha(){
      system("cls");
      cout<<"#JOGO DA VELHA#\n\n";
      cout<<"   "<<p[1]<<" "<<v[0]<<" "<<p[2]<<" "<<v[0]<<" "<<p[3]<<"\n";
      cout<<"   "<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<"\n";
      cout<<"   "<<p[4]<<" "<<v[0]<<" "<<p[5]<<" "<<v[0]<<" "<<p[6]<<"\n";
      cout<<"   "<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<"\n";
      cout<<"   "<<p[7]<<" "<<v[0]<<" "<<p[8]<<" "<<v[0]<<" "<<p[9]<<"\n\n";
      }

int c[9];
         
main()
{
      char j,jogada;
      int posicao,resto;
      bool win=false;
      
     for (int h=1;h<10;h++)
         p[h]=48+h;
         
      display_velha();
      
      for (int i=1;i<10;i++){
          resto=i%2;
          resto==0?j=88:j=79;

          while (jogada=getche(),jogada<=48||jogada>57) cout<<"\nJogada invalida, favor usar somente valores de 1 a 9\n";
          posicao=atoi(&jogada);
          c[posicao]++;
          if (c[posicao]<2){
             p[posicao]=j;
             display_velha();
             }
          else {
               i--;
               cout<<"\nJogada invalida.\n";
               }
               
          if ((p[1]==79&&p[2]==79&&p[3]==79)||(p[4]==79&&p[5]==79&&p[6]==79)||(p[7]==79&&p[8]==79&&p[9]==79)||(p[1]==79&&p[4]==79&&p[7]==79)||(p[2]==79&&p[5]==79&&p[8]==79)||(p[3]==79&&p[6]==79&&p[9]==79)||(p[1]==79&&p[5]==79&&p[9]==79)||(p[3]==79&&p[5]==79&&p[7]==79)){
          win=true;
          cout<<"O jogador 1 venceu a partida!\n\n";
          break;
          }
                                      
          if ((p[1]==88&&p[2]==88&&p[3]==88)||(p[4]==88&&p[5]==88&&p[6]==88)||(p[7]==88&&p[8]==88&&p[9]==88)||(p[1]==88&&p[4]==88&&p[7]==88)||(p[2]==88&&p[5]==88&&p[8]==88)||(p[3]==88&&p[6]==88&&p[9]==88)||(p[1]==88&&p[5]==88&&p[9]==88)||(p[3]==88&&p[5]==88&&p[7]==88)){
          win=true;
          cout<<"O jogador 2 venceu a partida!\n\n";
          break;
          }
          }

      if (win==false) cout<<"Velha!\n\n";

      system("pause");
      }
