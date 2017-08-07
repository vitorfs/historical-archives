#include <iostream>

using namespace std;

char p1=49, p2=50, p3=51, p4=52, p5=53, p6=54, p7=55, p8=56, p9=57;
char ch1=219, ch2=220;
      
void display_velha(){
      cout<<"#JOGO DA VELHA#\n\n";
      cout<<"Instrucoes:\nPara marcar a posicao desejada digite de 1 a 9 conforme a tabela\n\n";
      cout<<"   "<<p1<<" "<<ch1<<" "<<p2<<" "<<ch1<<" "<<p3<<"\n";
      cout<<"   "<<ch2<<ch2<<ch1<<ch2<<ch2<<ch2<<ch1<<ch2<<ch2<<"\n";
      cout<<"   "<<p4<<" "<<ch1<<" "<<p5<<" "<<ch1<<" "<<p6<<"\n";
      cout<<"   "<<ch2<<ch2<<ch1<<ch2<<ch2<<ch2<<ch1<<ch2<<ch2<<"\n";
      cout<<"   "<<p7<<" "<<ch1<<" "<<p8<<" "<<ch1<<" "<<p9<<"\n\n";
      }
     
main()
{
      char j; //88=X 79=O
      int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
      int posicao, resto, i;
      
      display_velha();
          
      for (i=1;i<10;i++){
          resto=i%2;
          resto==0?j=88:j=79;
          cin>>posicao;
         
          while (posicao<0||posicao>9){
                cout<<"Jogada invalida, favor usar somente valores de 1 a 9\n";
                cin>>posicao;
                }
          
          if (posicao==1){
                          c1++;
                          if (c1<2){
                          p1=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                          }
          if (posicao==2){
                          c2++;
                          if (c2<2){
                          p2=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==3){
                          c3++;
                          if (c3<2){
                          p3=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==4){
                          c4++;
                          if (c4<2){
                          p4=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==5){
                          c5++;
                          if (c5<2){
                          p5=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==6){
                          c6++;
                          if (c6<2){
                          p6=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==7){
                          c7++;
                          if (c7<2){
                          p7=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==8){
                          c8++;
                          if (c8<2){
                          p8=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
          if (posicao==9){
                          c9++;
                          if (c9<2){
                          p9=j;
                          system("cls");
                          display_velha();
                          }
                          else {
                               i--;
                               cout<<"Jogada invalida\n";
                               }
                               }
                        
          if ((p1==79&&p2==79&&p3==79)||(p4==79&&p5==79&&p6==79)||(p7==79&&p8==79&&p9==79)||(p1==79&&p4==79&&p7==79)||(p2==79&&p5==79&&p8==79)||(p3==79&&p6==79&&p9==79)||(p1==79&&p5==79&&p9==79)||(p3==79&&p5==79&&p7==79)){
                                      break;
                                      }
                                      
          if ((p1==88&&p2==88&&p3==88)||(p4==88&&p5==88&&p6==88)||(p7==88&&p8==88&&p9==88)||(p1==88&&p4==88&&p7==88)||(p2==88&&p5==88&&p8==88)||(p3==88&&p6==88&&p9==88)||(p1==88&&p5==88&&p9==88)||(p3==88&&p5==88&&p7==88)){
                                      break;
                                      }
                                      
                                      }
                                      
      if ((p1==79&&p2==79&&p3==79)||(p4==79&&p5==79&&p6==79)||(p7==79&&p8==79&&p9==79)||(p1==79&&p4==79&&p7==79)||(p2==79&&p5==79&&p8==79)||(p3==79&&p6==79&&p9==79)||(p1==79&&p5==79&&p9==79)||(p3==79&&p5==79&&p7==79))
                                      cout<<"Vitoria do primeiro jogador!\n\n";
      else if ((p1==88&&p2==88&&p3==88)||(p4==88&&p5==88&&p6==88)||(p7==88&&p8==88&&p9==88)||(p1==88&&p4==88&&p7==88)||(p2==88&&p5==88&&p8==88)||(p3==88&&p6==88&&p9==88)||(p1==88&&p5==88&&p9==88)||(p3==88&&p5==88&&p7==88))
                                      cout<<"Vitoria do segundo jogador!\n\n";
      else 
           cout<<"Velha!\n\n";
      
      system("pause");

      }
