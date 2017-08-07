#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

main()
{
      int p[16],x,i,k,z,iniciar;
      int y1,y2,y3,y4;
      int jogadas=0;
      
      for (z=1;z<=16;z++){
          p[z]=-1;
          }
     
      /* DEFINIÇÃO DE VARIÁVEL PARA TESTE
      p[1]=1;
      p[2]=2;
      p[3]=3;
      p[4]=4;
      p[5]=5;
      p[6]=6;
      p[7]=7;
      p[8]=8;
      p[9]=9;
      p[10]=10;
      p[11]=11;
      p[12]=12;
      p[13]=13;
      p[14]=14;
      p[15]=0;
      p[16]=15;      
      */
      
      cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
      cout<<"[  1 ][  2 ][  3 ][  4 ]\n";
      cout<<"[  5 ][  6 ][  7 ][  8 ]\n";
      cout<<"[  9 ][ 10 ][ 11 ][ 12 ]\n";
      cout<<"[ 13 ][ 14 ][ 15 ][  0 ]\n\n";
      
      cout<<"Digite 1 para embaralhar o Puzzle e iniciar o jogo.\n";
      cin>>iniciar;
      
      if (iniciar==1){
                      
      srand (time(NULL));
      for (i=1;i<=16;i++){
          k=rand()%16;
          if ((k==p[1])||(k==p[2])||(k==p[3])||(k==p[4])||(k==p[5])||(k==p[6])||(k==p[7])||(k==p[8])||(k==p[9])||(k==p[10])||(k==p[11])||(k==p[12])||(k==p[13])||(k==p[14])||(k==p[15])||(k==p[16])){
              i--;
              }
          else{
               p[i]=k;
               }
               }
      
      system("cls");
      cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
      cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
      cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
      cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
      cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
      
      for (i=0; ;i++){
          jogadas++;
          cin>>x;
          
          while (x<1||x>15){
                cout<<"Jogada invalida, favor usar somente valores de 1 a 15\n";
                cin>>x;
                }
                
          if (x==p[1]){
                       y1=p[1]+p[2];
                       y2=p[1]+p[5];
                       if((y1==p[1])||(y2==p[1])){
                                                  if (y1==p[1]){
                                                                p[2]=p[1];
                                                                p[1]=0;
                                                                system("cls");
                                                                cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                }
                                                  if (y2==p[1]){
                                                                p[5]=p[1];
                                                                p[1]=0;
                                                                system("cls");
                                                                cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                }
                                                                }
                       else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                }
          
          else if (x==p[2]){
               y1=p[2]+p[1];
               y2=p[2]+p[3];
               y3=p[2]+p[6];
               if((y1==p[2])||(y2==p[2])||(y3==p[2])){
                                                      if (y1==p[2]){
                                                                    p[1]=p[2];
                                                                    p[2]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[2]){
                                                                    p[3]=p[2];
                                                                    p[2]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[2]){
                                                                    p[6]=p[2];
                                                                    p[2]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[3]){
               y1=p[3]+p[2];
               y2=p[3]+p[4];
               y3=p[3]+p[7];
               if((y1==p[3])||(y2==p[3])||(y3==p[3])){
                                                      if (y1==p[3]){
                                                                    p[2]=p[3];
                                                                    p[3]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[3]){
                                                                    p[4]=p[3];
                                                                    p[3]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[3]){
                                                                    p[7]=p[3];
                                                                    p[3]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[4]){
               y1=p[4]+p[3];
               y2=p[4]+p[8];
               if((y1==p[4])||(y2==p[4])){
                                                      if (y1==p[4]){
                                                                    p[3]=p[4];
                                                                    p[4]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[4]){
                                                                    p[8]=p[4];
                                                                    p[4]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[5]){
               y1=p[5]+p[1];
               y2=p[5]+p[6];
               y3=p[5]+p[9];
               if((y1==p[5])||(y2==p[5])||(y3==p[5])){
                                                      if (y1==p[5]){
                                                                    p[1]=p[5];
                                                                    p[5]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[5]){
                                                                    p[6]=p[5];
                                                                    p[5]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[5]){
                                                                    p[9]=p[5];
                                                                    p[5]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[6]){
               y1=p[6]+p[2];
               y2=p[6]+p[5];
               y3=p[6]+p[7];
               y4=p[6]+p[10];               
               if((y1==p[6])||(y2==p[6])||(y3==p[6])||(y4==p[6])){
                                                      if (y1==p[6]){
                                                                    p[2]=p[6];
                                                                    p[6]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[6]){
                                                                    p[5]=p[6];
                                                                    p[6]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[6]){
                                                                    p[7]=p[6];
                                                                    p[6]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y4==p[6]){
                                                                    p[10]=p[6];
                                                                    p[6]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                                                                                    
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[7]){
               y1=p[7]+p[3];
               y2=p[7]+p[6];
               y3=p[7]+p[8];
               y4=p[7]+p[11];               
               if((y1==p[7])||(y2==p[7])||(y3==p[7])||(y4==p[7])){
                                                      if (y1==p[7]){
                                                                    p[3]=p[7];
                                                                    p[7]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[7]){
                                                                    p[6]=p[7];
                                                                    p[7]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[7]){
                                                                    p[8]=p[7];
                                                                    p[7]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y4==p[7]){
                                                                    p[11]=p[7];
                                                                    p[7]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                                                                                    
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[8]){
               y1=p[8]+p[4];
               y2=p[8]+p[7];
               y3=p[8]+p[12];
               if((y1==p[8])||(y2==p[8])||(y3==p[8])){
                                                      if (y1==p[8]){
                                                                    p[4]=p[8];
                                                                    p[8]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[8]){
                                                                    p[7]=p[8];
                                                                    p[8]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[8]){
                                                                    p[12]=p[8];
                                                                    p[8]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[9]){
               y1=p[9]+p[5];
               y2=p[9]+p[10];
               y3=p[9]+p[13];
               if((y1==p[9])||(y2==p[9])||(y3==p[9])){
                                                      if (y1==p[9]){
                                                                    p[5]=p[9];
                                                                    p[9]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[9]){
                                                                    p[10]=p[9];
                                                                    p[9]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[9]){
                                                                    p[13]=p[9];
                                                                    p[9]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[10]){
               y1=p[10]+p[6];
               y2=p[10]+p[9];
               y3=p[10]+p[11];
               y4=p[10]+p[14];               
               if((y1==p[10])||(y2==p[10])||(y3==p[10])||(y4==p[10])){
                                                      if (y1==p[10]){
                                                                    p[6]=p[10];
                                                                    p[10]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[10]){
                                                                    p[9]=p[10];
                                                                    p[10]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[10]){
                                                                    p[11]=p[10];
                                                                    p[10]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y4==p[10]){
                                                                    p[14]=p[10];
                                                                    p[10]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                                                                                    
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[11]){
               y1=p[11]+p[7];
               y2=p[11]+p[10];
               y3=p[11]+p[12];
               y4=p[11]+p[15];               
               if((y1==p[11])||(y2==p[11])||(y3==p[11])||(y4==p[11])){
                                                      if (y1==p[11]){
                                                                    p[7]=p[11];
                                                                    p[11]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[11]){
                                                                    p[10]=p[11];
                                                                    p[11]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[11]){
                                                                    p[12]=p[11];
                                                                    p[11]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y4==p[11]){
                                                                    p[15]=p[11];
                                                                    p[11]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                                                                                    
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[12]){
               y1=p[12]+p[8];
               y2=p[12]+p[11];
               y3=p[12]+p[16];
               if((y1==p[12])||(y2==p[12])||(y3==p[12])){
                                                      if (y1==p[12]){
                                                                    p[8]=p[12];
                                                                    p[12]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[12]){
                                                                    p[11]=p[12];
                                                                    p[12]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[12]){
                                                                    p[16]=p[12];
                                                                    p[12]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[13]){
               y1=p[13]+p[9];
               y2=p[13]+p[14];
               if((y1==p[13])||(y2==p[13])){
                                                      if (y1==p[13]){
                                                                    p[9]=p[13];
                                                                    p[13]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[13]){
                                                                    p[14]=p[13];
                                                                    p[13]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[14]){
               y1=p[14]+p[10];
               y2=p[14]+p[13];
               y3=p[14]+p[15];
               if((y1==p[14])||(y2==p[14])||(y3==p[14])){
                                                      if (y1==p[14]){
                                                                    p[10]=p[14];
                                                                    p[14]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[14]){
                                                                    p[13]=p[14];
                                                                    p[14]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[14]){
                                                                    p[15]=p[14];
                                                                    p[14]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[15]){
               y1=p[15]+p[11];
               y2=p[15]+p[14];
               y3=p[15]+p[16];
               if((y1==p[15])||(y2==p[15])||(y3==p[15])){
                                                      if (y1==p[15]){
                                                                    p[11]=p[15];
                                                                    p[15]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[15]){
                                                                    p[14]=p[15];
                                                                    p[15]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y3==p[15]){
                                                                    p[16]=p[15];
                                                                    p[15]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }                                                                
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                    
          else if (x==p[16]){
               y1=p[16]+p[12];
               y2=p[16]+p[15];
               if((y1==p[16])||(y2==p[16])){
                                                      if (y1==p[16]){
                                                                    p[12]=p[16];
                                                                    p[16]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                      if (y2==p[16]){
                                                                    p[15]=p[16];
                                                                    p[16]=0;
                                                                    system("cls");
                                                                    cout<<"Digite de 1 a 15 para mover a peca desejada.\nA peca so pode ser movida na horizontal ou vertical\nem direcao ao espaco vazio marcado pelo numero 0.\n\n";
                                                                    cout<<"[ "<<setw(2)<<p[1]<<" ]"<<"[ "<<setw(2)<<p[2]<<" ]"<<"[ "<<setw(2)<<p[3]<<" ]"<<"[ "<<setw(2)<<p[4]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[5]<<" ]"<<"[ "<<setw(2)<<p[6]<<" ]"<<"[ "<<setw(2)<<p[7]<<" ]"<<"[ "<<setw(2)<<p[8]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[9]<<" ]"<<"[ "<<setw(2)<<p[10]<<" ]"<<"[ "<<setw(2)<<p[11]<<" ]"<<"[ "<<setw(2)<<p[12]<<" ]\n";
                                                                    cout<<"[ "<<setw(2)<<p[13]<<" ]"<<"[ "<<setw(2)<<p[14]<<" ]"<<"[ "<<setw(2)<<p[15]<<" ]"<<"[ "<<setw(2)<<p[16]<<" ]\n\n";
                                                                    }
                                                                    }
               else cout<<"Jogada invalida, impossivel mover a peca "<<x<<".\n";
                                                                    }
                                                                              
          if (p[1]==1&&p[2]==2&&p[3]==3&&p[4]==4&&p[5]==5&&p[6]==6&&p[7]==7&&p[8]==8&&p[9]==9&&p[10]==10&&p[11]==11&&p[12]==12&&p[13]==13&&p[14]==14&&p[15]==15&&p[16]==0){
                                                                                                                                                                           if (jogadas==1){
                                                                                                                                                                                           cout<<"Parabens! Foi necessario "<<jogadas<<" jogada para terminar o Puzzle.\n";
                                                                                                                                                                                           break;
                                                                                                                                                                                           }
                                                                                                                                                                           else{
                                                                                                                                                                                cout<<"Parabens! Foram necessarias "<<jogadas<<" jogadas para terminar o Puzzle.\n";
                                                                                                                                                                                break;
                                                                                                                                                                                }
                                                                                                                                                                           }
                     }
                     }
      
      system("pause");

      }
