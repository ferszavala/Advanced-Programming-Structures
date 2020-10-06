/*Reto 1. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N 
alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.*/

//Las estructuras fueron el primer intento por hacer POO, tratando de dar un orden a la programación
#include<iostream>
#include<string.h>
#include<string>

using namespace std;
struct Promedio//declarar una estructura
{
    float nota1;
    float nota2;
    float nota3;
};//tambien termina con ;

struct Alumno//declrar otra estructura
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumnos[100];//vamos a usar un arreglo que sea de la estrcutura Alumno


int main()
{
    int pos=0,alum=0;
    float promedio_alumno[3], mayor = 0;
    //Pedir datos
    cout<<"Ingrese la cantidad de alumnos: "; cin>>alum;
    for(int i=0;i<alum;i++)
    {
        fflush(stdin);//limpia el buffer
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<"Sexo: "; cin.getline(alumnos[i].sexo, 10, '\n');
        cout<<"Edad: "; cin>>alumnos[i].edad;

        cout<<"Notas de examen: "<<endl;
        cout<<"Nota 1: "; cin>>alumnos[i].prom.nota1;
        cout<<"Nota 2: "; cin>>alumnos[i].prom.nota2;
        cout<<"Nota 3: "; cin>>alumnos[i].prom.nota3;

        promedio_alumno[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3)/3;

        if(promedio_alumno[i]>mayor)
        {
            mayor = promedio_alumno[i];
            pos = i;
        }
    }

    cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<promedio_alumno[pos]<<endl;
    return 0; 
}