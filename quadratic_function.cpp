#include <iostream>
#include <math.h>

using namespace std;

char qd=253,grau=248,dt=30,ne=212;
char cima=30,direita=16;
float a,b[2],c,y[2];
float delta,raiz,vertice[0];

void imprimir_equacao(){
     cout<<"\n\nEquacao: y = f(x) = ";
     
     if (a==1) cout<<"x"<<qd;
     if (a==-1) cout<<" - "<<"x"<<qd;
     if (a>0&&a!=1) cout<<a<<"x"<<qd;
     if (a<0&&a!=-1) cout<<" - "<<a*-1<<"x"<<qd;
     
     if (b[0]==1) cout<<" + x";
     if (b[0]==-1) cout<<" - x";     
     if (b[0]>0&&b[0]!=1) cout<<" + "<<b[0]<<"x";
     if (b[0]<0&&b[0]!=-1) cout<<" - "<<b[0]*-1<<"x";
     
     if (c>0) cout<<" + "<<c;
     if (c<0) cout<<" - "<<c*-1;
     
     cout<<"\n";
     }

void calcular_delta(){
       b[1]=pow(b[0],2);
       delta=b[1]-4*a*c;
       cout<<"\n"<<dt<<" = "<<delta<<endl;
       }
       
void calcular_bhaskara(){
     if (delta>=0){
        raiz=sqrt(delta);
        y[0]=((-b[0])+raiz)/(2*a);
        y[1]=((-b[0])-raiz)/(2*a);
        cout<<"x'  = "<<(-b[0])+raiz<<"/"<<2*a<<" = "<<y[0]<<endl;
        cout<<"x'' = "<<(-b[0])-raiz<<"/"<<2*a<<" = "<<y[1]<<"\n"<<endl;
        }
     else {
          cout<<"x' = "<<ne<<"\nx'' = "<<ne<<endl;
          cout<<"As raizes nao assumem valor real"<<endl;
          }
     }

void display_grafico(){
     cout<<"\nO grafico intercepta o eixo Y no ponto: (0,"<<c<<")"<<endl;
     cout<<"Esboco do posicionamento do grafico:"<<endl;
     if (a>0&&delta==0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t| \n\t| \n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|     \\       /";
        cout<<"\n -------|---------o---------"<<direita<<" X\n\t|\n\t|\n\t|";
        }
     
     if (a>0&&delta>0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t| \n\t|\n\t|\n\t|";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n -------|----o---------o----"<<direita<<" X";;
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|     \\_______/";
        cout<<"\n\t|";
        }
     
     if (a>0&&delta<0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|     \\_______/";
        cout<<"\n\t|\n\t| \n -------|-------------------"<<direita<<" X\n\t|\n\t|\n\t|";
        }
        
     if (a<0&&delta>0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t| \n\t|";
        cout<<"\n\t|      _______";
        cout<<"\n\t|     /       \\";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n -------|----o---------o----"<<direita<<" X";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";    
        cout<<"\n\t|\n\t|";
        }
        
     if (a<0&&delta==0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t| \n\t|";
        cout<<"\n\t|";
        cout<<"\n -------|---------o---------"<<direita<<" X";
        cout<<"\n\t|     /       \\";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";    
        cout<<"\n\t|\n\t|";
        }
        
     if (a<0&&delta<0){
        cout<<"\t"<<cima<<" Y";
        cout<<"\n\t| \n\t| \n\t|";
        cout<<"\n\t|";
        cout<<"\n -------|-------------------"<<direita<<" X";
        cout<<"\n\t|";
        cout<<"\n\t|      _______";
        cout<<"\n\t|     /       \\";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";
        cout<<"\n\t|    |         |";    
        cout<<"\n\t|\n\t|";
        }
    
     }

void calcular_vertice(){
     vertice[0]=(-b[0])/(2*a);
     vertice[1]=(-delta)/(4*a);
     if (a>0) cout<<"\n\nPonto de minimo: ";
     else cout<<"\n\nPonto de maximo: ";
     cout<<"("<<(-b[0])<<"/"<<2*a<<","<<(-delta)<<"/"<<4*a<<")";
     cout<<" = ("<<vertice[0]<<","<<vertice[1]<<")"<<endl;
     }     

int main()
{
    cout<<"Calculo para funcao do 2"<<grau<<" grau:"<<endl;
    cout<<"Modelo da equacao: y = f(x) = ax"<<qd<<" + bx + c\n"<<endl;
    
    cout<<"Informe os valores para:\n";
    cout<<"a: ";
    while (cin>>a,a==0) cout<<"Valor invalido.\na: ";
    cout<<"b: ";
    cin>>b[0];
    cout<<"c: ";
    cin>>c;
    
    imprimir_equacao();
    calcular_delta();
    calcular_bhaskara();
    display_grafico();
    calcular_vertice();
    
    cout<<"\n";
   
    system("pause");
    
    return(0);
    
}
    
