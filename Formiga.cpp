/* 
 * File:   Formiga.cpp
 * Authors: Alheirium & Pepe
 */

#include "Formiga.h"
#include "Ninho.h"
#include "Mundo.h"
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int Formiga::sequencia=1;



Formiga::~Formiga() {
}
string Formiga ::  getAsString()const{
    ostringstream oss;
    oss << "A Formiga "<<id<<" do tipo "<<tipo<<"\nEsta na posicao("<<x<<"/"<<y<<")e tem "<<energia<< " de energia"<<endl;
    return oss.str();
}

Formiga :: Formiga(const Formiga & orig){
}
void Formiga :: removeEnergia(int mv){
    energia=energia-(1+mv);
}
int Formiga :: regraPasseia(){
    int auxx=0,auxy=0,mv=0;
     int a=ninho->getDimMundo();
     
    do{
     auxx=rand()% (raio_movimento*2+1) - raio_movimento;
     auxy=rand()%(raio_movimento*2+1) -raio_movimento;
     mv=abs(x-auxx)+abs(y-auxy);
     
    }
   
    while(x+auxx<1 ||y+auxy<1 ||x+auxx>a ||y+auxy>a);    
    x+=auxx;
    y+=auxy;
    if(ninho->verificaMigalha(x,y)==true)
//        cout <<"yolo";
        regraComeMigalha();
    
    
    return mv;
}

void Formiga::Settipo(char c){
    tipo=c;
}
