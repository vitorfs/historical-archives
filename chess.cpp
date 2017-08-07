#include <iostream>

using namespace std;

struct engine{
       char info;
       int chave; //0-livre 1-jogador1 2-jogador2
       };

struct historicoPecas{
       char info[16];
       int fim;
       };

struct historicoJogadas{
       int jogador, lo, co, ld, cd;
       };
              
struct engine cb[8][8];
struct historicoPecas histPeca[2];
struct historicoJogadas *histJogs;

char dark=177,tb=205,tb2=186,tb3=204,tb4=206; //ascii para renderização do grid
char spacer[6]="     ";

/*Distribui casas escuras e claras alternadamente
e força todas chaves para 0. Tabuleiro limpo
Logica do i+j%2:
linha par com coluna par, ou linha impar com coluna impar = casa clara
linha par com coluna impar ou linha impar com coluna par = casa escura
soma de dois numeros pares, ou dois numeros impares sempre gera um numero par
a soma de dois numeros de natureza diferente sempre gera um numero impar
*/
void zeraJogo(){
     for (int i=0;i<8;i++)
         for (int j=0;j<8;j++){
             (i+j)%2==0?cb[i][j].info=' ':cb[i][j].info=dark;
             cb[i][j].chave=0;
             }
     for (int i=0;i<16;i++){
         histPeca[0].info[i]=' ';
         histPeca[1].info[i]=' ';
         }
     histPeca[0].fim=-1;
     histPeca[1].fim=-1;
     }
/*------------------------------------*/
     
/*Insere peças nas posições iniciais e troca chave
de possibilidade das peças para 1 ou 2, mantendo as casas livres como 0
a = linha de peões
b = 0 ou 32 para efetuar soma de chars.. transformando em maiusculo ou minusculo
c = linha das demais peças
d = jogador, 1 ou 2*/
void inserePeca(int a, int b, int c, int d){
     for (int i=0;i<8;i++){
         cb[a][i].info=80+b;
         cb[a][i].chave=d;
         cb[c][i].chave=d;
         }
     cb[c][0].info='T'+b;
     cb[c][1].info='C'+b;
     cb[c][2].info='B'+b;
     cb[c][3].info='D'+b;
     cb[c][4].info='R'+b;
     cb[c][5].info='B'+b;
     cb[c][6].info='C'+b;
     cb[c][7].info='T'+b;
     }
/*------------------------------------*/

//===Testes desenvolvimento=========================//
//força inserçao
void insereTeste(){
     cb[3][1].info='C';
     cb[3][1].chave=1;
     
     cb[6][4].info='c';
     cb[6][4].chave=2;
     }

//mostra disponibilidade     
void chaveTeste(){
     for (int i=0;i<8;i++)
         for (int j=0;j<8;j++){
             cout<<cb[i][j].chave<<" ";
             if (j==7) endl (cout);
         }
     }
//====================================================//

/*Imprime base superior ou inferior do
tabuleiro, dependendo dos paramentros a b e c
valores tabela ascii para imprimir grid*/         
void printBase(char a, char b, char c){
     cout<<spacer;
     for (int i=0;i<33;i++){
         if (i==0) 
            cout<<a;
         else if (i==32) 
              cout<<b; 
         else if (i%4==0)
              cout<<c;
         else
             cout<<tb;
         }
     endl (cout);     
     }
/*------------------------------------*/

/*Função para exibicação do jogo*/
void displayTab(){
     system("cls");
     cout<<spacer<<"  a   b   c   d   e   f   g   h"<<endl;
     printBase(201,187,203);
     for (int i=0;i<8;i++){
         cout<<histPeca[1].info[i+8]<<" "<<histPeca[1].info[i]<<" "<<(i-8)*-1<<tb2;
         for (int j=0;j<8;j++){
             (i+j)%2==0?cout<<" "<<cb[i][j].info<<" ":cout<<dark<<cb[i][j].info<<dark;
             cout<<tb2;
             if (j==7){
                cout<<(i-8)*-1<<" "<<histPeca[0].info[i]<<" "<<histPeca[0].info[i+8];
                endl (cout);
                }
         }
         if (i<7) {
            cout<<spacer<<tb3;
            for (int k=1;k<32;k++)
                k%4==0?cout<<tb4:cout<<tb;
            cout<<tb2<<endl;
         }
     }          
     printBase(200,188,202);
     cout<<spacer<<"  a   b   c   d   e   f   g   h"<<endl;
     endl (cout);
     }
/*------------------------------------*/

/*Função jogada, inverte posição origem com
posição destino.
co = coluna de origem
lo = linha de origem
cd = coluna destino
ld = linha destino*/
void jogada(int co, int lo, int cd, int ld, int j){
     if (cb[ld][cd].chave==j%2+1)
        histPeca[j%2].info[++histPeca[j%2].fim]=cb[ld][cd].info;
     cb[ld][cd] = cb[lo][co];
     (lo+co)%2==0?cb[lo][co].info=' ':cb[lo][co].info=dark;
     cb[lo][co].chave = 0;
     }
/*------------------------------------*/

/*Conversão de posições a8,h7 etc para
valores inteiros e válidos na matriz (0,0) (5,6) etc*/
void converteJogada(int *a, int *b, char valor[]){
     char aux;
     aux = valor[0] - '1';
     *a = aux - '0';
     *b = valor[1] - '0';
     *b = (*b-8)*-1;
     }
/*------------------------------------*/

/*=============================================================================
VALIDAÇÕES DE PEÇAS E CAMINHAMENTOS
=============================================================================*/

//Movimentos especiais
bool enpassant(int co, int lo, int cd, int ld, int j){
     return false;
     }

bool castling(){
     return true;
     }

void promote(){
     return;
     }

//--------------------------

//Movimento genérico
//---RETO---------------
bool validaMovimentoReto(int co, int lo, int cd, int ld){
     if (lo!=ld && co!=cd) //verifica se é um movimento em linha reta (coluna fixa ou linha fixa)
        return false;
     else
         return true;
     }
//-----------------------

//---DIAGONAL---------------
bool validaMovimentoDiagonal(int co, int lo, int cd, int ld){
     int col,lin;
     
     col=cd-co;
     lin=ld-lo;
     
     if (col<0) col=col*-1;
     if (lin<0) lin=lin*-1;
     
     if (col!=lin) //o modulo da subtração (ou soma) é sempre igual. movimento deve ser proporcional coluna e linha
        return false;
     else
         return true;
     }     
//---------------------

     
//Peças
//-----TORRE-----------
bool validaTorre(int co, int lo, int cd, int ld){
     if (validaMovimentoReto(co,lo,cd,ld)){
        if (co==cd){
            if (lo<ld){ //se inicio menor que fim lo=2 ld=6
               for (int i=lo+1;i<=ld-1;i++)
                   if (cb[i][co].chave!=0) //verifica caminho livre na vertical
                      return false;
               return true;
               }
            else { //se inicio maior que fim lo=6 ld=2 _ 5 3
                 for (int i=lo-1;i>=ld+1;i--)
                     if (cb[i][co].chave!=0) //verifica caminho livre na vertical
                        return false;
                 return true;
                 }
            }
            
        else if (lo==ld){
                if (co<cd){
                   for (int i=co+1;i<=cd-1;i++)
                       if (cb[lo][i].chave!=0) //verifica caminho livre na horizontal
                          return false;
                   return true;
                   }
                else {
                     for (int i=co-1;i>=cd+1;i--)
                         if (cb[lo][i].chave!=0) //verifica caminho livre na horizontal
                            return false;
                     return true;
                     }
                }
        }
        
     else 
          return false;
     }
//-----------------------

//---CAVALO--------------     
bool validaCavalo(int co, int lo, int cd, int ld){
     int col,lin;
     
     col=cd-co;
     lin=ld-lo;
     
     if (col<0) col=col*-1;
     if (lin<0) lin=lin*-1;
     
     if ((lin==2&&col==1)||(lin==1&&col==2))
        return true;
     else
         return false;
     }
//-----------------------

//---BISPO---------------
bool validaBispo(int co, int lo, int cd, int ld){
     if (validaMovimentoDiagonal(co, lo, cd, ld)){
        if (cd-co==ld-lo){
           if (cd-co>0){
              for (int i=co+1,k=lo+1;i<=cd-1&&k<=ld-1;i++,k++)
                  if (cb[k][i].chave!=0)
                     return false;
              return true;
              }
           else{
                for (int i=co-1,k=lo-1;i>=cd+1&&k>=ld+1;i--,k--)
                    if (cb[k][i].chave!=0)
                       return false;
                return true;
                }
           }
        
        else{
             if (cd-co<0 && ld-lo>=0){
                for (int i=co-1,k=lo+1;i>=cd+1&&k<=ld-1;i--,k++)
                    if (cb[k][i].chave!=0)
                       return false;
                return true;
                }
             else {
                  for (int i=co+1,k=lo-1;i<=cd-1&&k>=ld+1;i++,k--)
                      if (cb[k][i].chave!=0)
                         return false;
                  return true;
                  }
             }
        }
        
     else
         return false;
     }
//-------------------------

//---REI-------------------
bool validaRei(int co, int lo, int cd, int ld){
     if ((cd-co<=1&&cd-co>=-1)&&(ld-lo<=1&&ld-lo>=-1)){
        if (validaTorre(co, lo, cd, ld) || validaBispo(co, lo, cd, ld))
           return true;
        else
            return false;
        }
     else
         return false;
     }
//-------------------------

//---DAMA------------------
bool validaDama(int co, int lo, int cd, int ld){
     if (validaTorre(co, lo, cd, ld) || validaBispo(co, lo, cd, ld))
        return true;
     else
         return false;
     }
//------------------------

//---PEAO-----------------
bool validaPeao(int co, int lo, int cd, int ld, int j){
     int a,b,c;
     if (j==1){ //parametros para jogador 1
        a=1; //movimento default, avança 1 na matriz
        b=2; //movimento duplo, avança 2 na matriz
        c=1; //casa inicial
        }
     else{ //parametros para jogador 2
          a=-1; //movimento default, volta 1 na matriz
          b=-2; //movimento duplo, volta 2 na matriz
          c=6; //casa inicial
          }
     
     if (enpassant(co, lo, cd, ld, j))
        return true;
           
     if (ld==lo+a && cd==co){ //movimento default com obstaculo 
        if (!cb[ld][cd].chave==0)
           return false;
        else
            return true;
        }
        
     else if (ld==lo+b && cd==co){ //movimento duplo
          if (lo!=c) //verifica se é casa inicial para movimento duplo
             return false;
          else if (!(cb[ld][cd].chave==0&&cb[ld-a][cd].chave==0)) //movimento com obstaculo na frente
             return false;
          else
              return true;
          }
          
     else if (ld==lo+a && cd==co+a){ //testa jogada diagonal com peça do adversario
          if (cb[ld][cd].chave==j%2+1) //quando j=1, j%2+1=2 e vice versa
             return true;
          else
              return false;
          }
     else if (ld==lo+a && cd==co-a){ //testa jogada diagonal com peça do adversario
          if (cb[ld][cd].chave==j%2+1)
             return true;
          else
              return false;
          }
     else 
          return false;
     }
//---------------------

/*============================================================================*/

/*Chamadas de função separadas para cada peça*/
bool validaPeca(int co, int lo, int cd, int ld, int j){
     switch (toupper(cb[lo][co].info)){
            case 'T': return validaTorre(co, lo, cd, ld);break;
            case 'C': return validaCavalo(co, lo, cd, ld);break;
            case 'B': return validaBispo(co, lo, cd, ld);break;
            case 'R': return validaRei(co, lo, cd, ld);break;
            case 'D': return validaDama(co, lo, cd, ld);break;
            case 'P': return validaPeao(co, lo, cd, ld, j);break;
            }
     }
/*------------------------------------*/

/*Verifica se a posição escolhida para jogar é valida*/
bool jogadaValida(int co, int lo, int cd, int ld, int j, bool error=true){
     if ((cd>=0 && cd<=7) && (ld>=0 && ld<=7)){ //posicao valida na matriz?
        if (cb[ld][cd].chave!=j){ //posiçao destino é uma peça do jogador ou casa vazia?
           if (!validaPeca(co, lo, cd, ld, j)){ //movimento é válido?
              if (error){
                 cout<<"Jogada invalida. Movimento incorreto para peca selecionada."<<endl;
                 system("pause");
                 }
              return false;
              }
           else 
                return true;
           }
        else {
             if (error){
                cout<<"Jogada invalida. Casa ocupada."<<endl;
                system("pause");
                }
             return false;
             }
        }
     else {
          if (error){
             cout<<"Jogada invalida. Casa inexistente."<<endl;
             system("pause");
             }
          return false;
          }
     }
/*------------------------------------*/

bool validaDisponibilidade(int co, int lo, int j){
     bool disponivel=false;
     
     for (int i=0;i<=7;i++)
         for (int k=0;k<=7;k++)
             if (jogadaValida(co, lo, k, i, j, false))
                disponivel=true;
     
     if (!disponivel){
        cout<<"Jogada invalida. Impossivel mexer a peca selecionada."<<endl;
        system("pause");
        }
     
     return disponivel;
     }

/*Verifica se posicao escolhida é válida para jogar
col=coluna
lin=linha
j=jogador 1 ou 2*/
bool posicaoValida(int co, int lo, int j){
     if ((cb[lo][co].chave==j) && (co>=0 && co<=7) && (lo>=0 && lo<=7))
        return validaDisponibilidade(co, lo, j);
     else {
          cout<<"Posicao invalida."<<endl;
          system("pause");
          return false;
          }
     }

void iniciaPartida(){
     zeraJogo();
     inserePeca(1,0,0,1);
     inserePeca(6,32,7,2);
     //insereTeste();
     }
     
bool gameOver(){
        return true;
     }
/*------------------------------------*/

int main(){

    int lo,co,ld,cd;
    int i=0;
    char origem[3],destino[3];  
    
    for (iniciaPartida();gameOver();i++){
        do {
            displayTab();
            //chaveTeste();
            i%2==0?cout<<"Primeiro Jogador [TCBRDP]:"<<endl:cout<<"Segundo Jogador [tcbrdp]:"<<endl;
            cout<<"Escolha a peca."; 
            if (i==0) cout<<" Ex: a7.";
            endl (cout);
            cin>>origem;
            converteJogada(&co,&lo,origem);
            } while (!posicaoValida(co,lo,i%2+1));
        do {
            displayTab();
            cout<<"Peca selecionada: ["<<cb[lo][co].info<<"] ["<<origem<<"]."<<endl<<"Faca sua jogada."<<endl;
            cin>>destino;
            converteJogada(&cd,&ld,destino);
            } while (!jogadaValida(co,lo,cd,ld,i%2+1));
        jogada(co,lo,cd,ld,i%2+1);
    }
    
    #ifdef _WIN32
    system("pause");
    #endif
    return 0;
}
