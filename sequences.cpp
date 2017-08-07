#include <iostream>
#define max 10

using namespace std;

int s=0; //sequencia 0=f 1=v

void pAritmetica(double n[max]){
     double r[4]; //constante
     for (int i=0;i<5;i++)
         r[i]=n[i+1]-n[i];
     if ((r[0]==r[1])&&(r[0]==r[2])&&(r[0]==r[3])){
        for (int i=4;i<max;i++)
            n[i]=n[i-1]+r[0];
        s=1;
        }
     }

void pGeometrica(double n[max]){
     double q[4]; //constante
     for (int i=0;i<5;i++)
         q[i]=n[i+1]/n[i];
     if ((q[0]==q[1])&&(q[0]==q[2])&&(q[0]==q[3])){
        for (int i=4;i<max;i++)
            n[i]=n[i-1]*q[0];
        s=1;
        }
     }
     
void fibonacci(double n[max]){
     if ((n[0]+n[1]==n[2])&&(n[1]+n[2]==n[3])&&(n[2]+n[3]==n[4])){
        for (int i=4;i<max;i++) 
            n[i]=n[i-1]+n[i-2];
        s=1;
        }
     }
     
void analiseVetor(double n[max]){
     if (s!=1) pAritmetica(n);
     if (s!=1) pGeometrica(n);
     if (s!=1) fibonacci(n);
     }
     
main()
{
      double n[max];
      
      cout<<"Informe uma sequencia de 5 numeros:"<<endl;
      for (int i=0;i<5;i++) cin>>n[i];
      analiseVetor(n);
      
      endl (cout);
      
      if (s==1)
         for (int i=0;i<max;i++) 
             cout<<n[i]<<" ";
             
      else
          cout<<"Sequencia invalida.";
          
      endl (cout);
      
      system("pause");
      
      }
