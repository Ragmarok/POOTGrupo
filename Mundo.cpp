/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mundo.cpp
 * Author: marti
 * 
 * Created on 8 de Dezembro de 2017, 0:00
 */

#include "Mundo.h"


#include <iostream>
Mundo::Mundo(int dim) {
    x=dim;
    
}

Mundo::Mundo(const Mundo& orig) {
}
void Mundo::MostraMundo(){
int matriz[x][x]={1};
for (int i=0;i<x;i++)
   cout<<matriz[i][0];
for(int j=0;j<x;j++){
    cout<<matriz [0][j];
}
}
Mundo::~Mundo() {
}
