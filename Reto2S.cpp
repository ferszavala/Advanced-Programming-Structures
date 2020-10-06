/*Reto 2. Defina una estructura que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado n etapas calcule el tiempo total empleado en 
correr todas las etapas.*/
#include <iostream>
#include <string.h>
using namespace std;


struct Tiempo
{
int hr;
int min;
int seg;

}ciclista[100];


void sumarTiempo(int a)
{
int h=0,m=0,s=0,aux;
for (int i=0;i<a;i++)
{
h += ciclista[i].hr;
m += ciclista[i].min;
s += ciclista[i].seg;
}

if (s>=60)
{
aux=s/60;
m += aux;
s=s%60;
}

if (m>=60)
{
aux=m/60;
h=h+aux;
m=m%60;
}
cout<<"Horas: "<<h<<endl;
cout<<"Minutos: "<<m<<endl;
cout<<"Segundos: "<<s<<endl;
}

int main()
{
int n;
cout<<"Ingrese el numero de etapas: "<<endl; cin>>n;
for (int i =0;i<n;i++)
{
cout<< "Horas de la etapa: "<<i<<endl;
cin>>ciclista[i].hr;
cout<< "Minutos de la etapa: "<<i<<endl;
cin>>ciclista[i].min;
cout<< "Segundos de la etapa: "<<i<<endl;
cin>>ciclista[i].seg;
}
sumarTiempo(n);

return 0;
}