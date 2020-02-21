#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include <math.h>
#include "punto.h"
using namespace std;
class Rectangulo{
private:
Punto superiorIzquierdo;
Punto superiorDerecho;
Punto inferiorIzquierdo;
Punto inferiorDerecho;
public:

Rectangulo(){
cout << "Se ha creado un rectangulo" << endl;
}
void AsignarSupIzq(float x, float y){
superiorIzquierdo.asignarX( x);
superiorIzquierdo.asignarY( y);
}
void AsignarSupDer(float x, float y){
superiorDerecho.asignarX( x);
superiorDerecho.asignarY( y);
}
void AsignarInfIzq(float x, float y){
inferiorIzquierdo.asignarX( x);
inferiorIzquierdo.asignarY( y);
}
void AsignarInfDer(float x, float y){
inferiorDerecho.asignarX( x);
inferiorDerecho.asignarY( y);
}
float base = (inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura =(superiorDerecho.obtenerY() - inferiorDerecho.obtenerY());

float base2 = (superiorDerecho.obtenerX() - superiorIzquierdo.obtenerX());
float altura2 =(superiorIzquierdo.obtenerY() - inferiorIzquierdo.obtenerY());

void Comparacion(){
if(base=!base2){
    if(altura=!altura2){
        cout<<"No es un rectangulo :)"<<endl;
    }
}
else{
    cout<<"Si es un rectangulo"<<endl;
}
}
float Perimetro(){

float base = (inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura =(superiorDerecho.obtenerY() - inferiorDerecho.obtenerY());
return (base+base2) + (altura+altura2);
}
float Area(){
float base = (inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura =(superiorDerecho.obtenerY() - inferiorDerecho.obtenerY());
return (base*altura);
}

};
#endif
