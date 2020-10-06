/*Reto 3. Defina una estructura que sirva para representar a una persona. La estructura 
debe contener dos campos: el nombre de la persona y un valor de tipo lógico que indica
si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/
#include<iostream>
#include<string.h>
#include<string>

using namespace std;

struct Persona
{
    string nombre;
    bool discapacidad;
}personas[100];
int main()
{
    int n=0;
    string arr1[100];
    string arr2[100];
    cout<<"Ingrese la cantidad de personas: "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nombre: "; cin>>personas[i].nombre;
        personas[i].discapacidad = (rand()%2);
        if(personas[i].discapacidad==true)
        {
            arr1[i] = personas[i].nombre;
        }
        else
        {
            arr2[i] = personas[i].nombre;
        }
    }
    cout<<"Las personas con discapacidad son: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"Las personas sin discapacidad son: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<endl;
    }
    return 0;
}