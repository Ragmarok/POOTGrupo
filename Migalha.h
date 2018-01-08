/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Migalha.h
 * Author: marti
 *
 * Created on 8 de Janeiro de 2018, 22:44
 */

#ifndef MIGALHA_H
#define MIGALHA_H

class Migalha {
    int energia_incial;
    int energia;
    int posx;
    int posy;
public:
    Migalha(int e){
        energia=e;
        energia_incial=e;
    }
    Migalha(const Migalha& orig);
    void setPosx(int x);
    void setPosy(int y);
    int getPosX(){return posx;}
    int getPosY(){return posy;}
    bool verificaEnergia();
    bool removeEnergia(int x);
    virtual ~Migalha();


};

#endif /* MIGALHA_H */

