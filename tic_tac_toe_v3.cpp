#include <iostream>
#include <time.h>

using namespace std;

char p[10],v[2]={219,220};
int k=0;
int placar[3]={0,0,0};
string nome[2];
void display_velha(){
      system("cls");
      cout<<"#JOGO DA VELHA#"<<endl;
      cout<<"Partida: "<<k<<"\n";
      cout<<nome[0]<<" ["<<placar[0]<<"] x "<<nome[1]<<" ["<<placar[1]<<"] x Velha ["<<placar[2]<<"]\n\n";
      cout<<"   "<<p[1]<<" "<<v[0]<<" "<<p[2]<<" "<<v[0]<<" "<<p[3]<<"\n";
      cout<<"   "<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<"\n";
      cout<<"   "<<p[4]<<" "<<v[0]<<" "<<p[5]<<" "<<v[0]<<" "<<p[6]<<"\n";
      cout<<"   "<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<v[1]<<v[0]<<v[1]<<v[1]<<"\n";
      cout<<"   "<<p[7]<<" "<<v[0]<<" "<<p[8]<<" "<<v[0]<<" "<<p[9]<<"\n\n";
      }
      
int menu;
void display_menu(){
     system("cls");
     cout<<"#JOGO DA VELHA#\n"<<endl;
     cout<<"Menu:\n1. 1P vs 2P\n2. 1P vs CPU\n3. Creditos\n4. Sair\n\n";
     while (cin>>menu,menu<=0||menu>4) cout<<"Opcao invalida.\n";
     }

int c[9];     
void zerar_controle(){
     for (int g=0;g<10;g++){
         c[g]=0;
         }
         }

void definir_posicao(){
     for (int h=1;h<10;h++){
         p[h]=48+h;
         }
         }

main()
{
      char j;
      int posicao,resto,nopcao,sorteio[2];
            
      display_menu();
            
      while (menu!=4){
/*=====MENU=1=================================INICIO*/
      srand (time(NULL));
      if (menu==1){
      k++;
      if (k==1){
      for (int i=0;i<=2;i++){
          system("cls");
          cout<<"#JOGO DA VELHA#\n\n";
          if (i<2){
             cout<<"Nome do "<<i+1<<"o jogador: ";
             cin>>nome[i];
             }
          else{
               cout<<"INSTRUCOES:\nUtilize os numeros de 1 a 9 para marcar a posicao desejada.\n\n"<<nome[0]<<": O\n"<<nome[1]<<": X\n\n";
               cout<<nome[0]<<", digite 0 ou 1 para sortear quem inicia a partida.\n";
               while (cin>>sorteio[0],sorteio[0]<0||sorteio[0]>1) cout<<"Valor invalido. Sorteio somente entre 0 e 1.\n";
               sorteio[1]=rand()%2;
               sorteio[0]==sorteio[1]?cout<<"Valor sorteado: "<<sorteio[1]<<"\n"<<nome[0]<<" inicia o jogo.\n\n":cout<<"Valor sorteado: "<<sorteio[1]<<"\n"<<nome[1]<<" inicia o jogo.\n\n";
               system("pause");
               }
          }
          }
          
      zerar_controle();
      definir_posicao();
      display_velha();
      
      for (int i=1;i<10;i++,sorteio[1]++){
          resto=sorteio[1]%2;
          resto==0?j=88:j=79;
          resto==0?cout<<"Turno do jogador "<<nome[1]<<" [X]: ":cout<<"Turno do jogador "<<nome[0]<<" [O]: ";
          while (cin>>posicao,posicao<=0||posicao>9) cout<<"Jogada invalida, favor usar somente valores de 1 a 9\n";
          c[posicao]++;
          if (c[posicao]<2){
             p[posicao]=j;
             display_velha();
             }
          else {
               i--;
               sorteio[1]--;
               cout<<"Jogada invalida.\n";
               }
               
          if ((p[1]==79&&p[2]==79&&p[3]==79)||(p[4]==79&&p[5]==79&&p[6]==79)||(p[7]==79&&p[8]==79&&p[9]==79)||(p[1]==79&&p[4]==79&&p[7]==79)||(p[2]==79&&p[5]==79&&p[8]==79)||(p[3]==79&&p[6]==79&&p[9]==79)||(p[1]==79&&p[5]==79&&p[9]==79)||(p[3]==79&&p[5]==79&&p[7]==79))
          break;
                                      
          if ((p[1]==88&&p[2]==88&&p[3]==88)||(p[4]==88&&p[5]==88&&p[6]==88)||(p[7]==88&&p[8]==88&&p[9]==88)||(p[1]==88&&p[4]==88&&p[7]==88)||(p[2]==88&&p[5]==88&&p[8]==88)||(p[3]==88&&p[6]==88&&p[9]==88)||(p[1]==88&&p[5]==88&&p[9]==88)||(p[3]==88&&p[5]==88&&p[7]==88))
          break;
        
          }
      
      if ((p[1]==79&&p[2]==79&&p[3]==79)||(p[4]==79&&p[5]==79&&p[6]==79)||(p[7]==79&&p[8]==79&&p[9]==79)||(p[1]==79&&p[4]==79&&p[7]==79)||(p[2]==79&&p[5]==79&&p[8]==79)||(p[3]==79&&p[6]==79&&p[9]==79)||(p[1]==79&&p[5]==79&&p[9]==79)||(p[3]==79&&p[5]==79&&p[7]==79)){
      cout<<nome[0]<<" venceu a partida!\n\n";
      placar[0]++;
      }
      else if ((p[1]==88&&p[2]==88&&p[3]==88)||(p[4]==88&&p[5]==88&&p[6]==88)||(p[7]==88&&p[8]==88&&p[9]==88)||(p[1]==88&&p[4]==88&&p[7]==88)||(p[2]==88&&p[5]==88&&p[8]==88)||(p[3]==88&&p[6]==88&&p[9]==88)||(p[1]==88&&p[5]==88&&p[9]==88)||(p[3]==88&&p[5]==88&&p[7]==88)){
      cout<<nome[1]<<" venceu a partida!\n\n";
      placar[1]++;
      }
      else{
      cout<<"Velha!\n\n";
      placar[2]++;
      }
      cout<<"Opcoes:\n1 para jogar uma nova partida,\n2 para retornar ao menu inicial ou\n3 para finalizar.\n";
      while (cin>>nopcao,nopcao<1||nopcao>3) cout<<"Opcao invalida.\n";
      if (nopcao==1) menu=1;
      if (nopcao==2){
         k=0;
         placar[0]=0,placar[1]=0,placar[2]=0;
         display_menu();
         }
      if (nopcao==3) menu=4;
      }
/*=====MENU=1=================================INICIO*/

/*=====MENU=2=================================FIM*/
      if (menu==2){
         system("cls");
         cout<<"#JOGO DA VELHA#\n"<<endl;
         cout<<"Em desenvolvimento.\n\n";
         system("pause");
         display_menu();
         }                  
/*=====MENU=2=================================FIM*/

/*=====MENU=3=================================INICIO*/
      if (menu==3){
         system("cls");
         cout<<"#JOGO DA VELHA#\n"<<endl;
         cout<<"Versao 3.0.\n";
         cout<<"Desenvolvido por Vitor Freitas e Souza.\n\n";
         system("pause");
         display_menu();
         }
/*=====MENU=3=================================FIM*/
      
      } //fim while
      system("cls");
      cout<<"\n\nObrigado por jogar!\n\n";
      system("pause");
      } //fim main
      
      
