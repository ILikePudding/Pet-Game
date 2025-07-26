#ifndef BIRD_H
#define BIRD_H

#include "Pet.h"
#include <iostream>
#include <string>

class Bird : public Pet
{
public:
    Bird();
    Bird(int,int,int,string,string);
    void fly();
    void eatFish();
    void nestle();
    void draw();
};
Bird::Bird() : Pet() {}

Bird::Bird(int h,int t, int hap, string n, string pt) : Pet(h,t,hap,n,pt) {}

void Bird::fly()
{
    cout <<"            Flying sure is fun!" << endl << endl;
    cout <<"                   _.-." << endl;
    cout <<"              .-.  `) |  .-." << endl; 
    cout <<"          _.'`. .~./  #.~. .`'._" << endl;
    cout <<"      .-'`.'-'.'.-:    ;-.'.'-'.`'-." << endl;
    cout <<"       `'`'`'`'`   #  /   `'`'`'`'`" << endl;
    cout <<"                   /||#" << endl;
    cout <<"                  / ^^ #" << endl;
    cout <<"                  `'``'`" << endl << endl;
    happiness += 10;
    hunger += 10;
    tiredness += 10;
}
void Bird::eatFish()
{
    cout <<"              Time to eat some fish." << endl << endl;
    cout <<"                   .`.   _ _" << endl;
    cout <<"                 __;_  # /,//`" << endl;
    cout <<"                 --, `._) (  __" << endl;
    cout <<"                  '//,,,  |_/(/" << endl;
    cout <<"                       )_7'q`|>" << endl;
    cout <<"                      /_|   >#" << endl << endl;
    happiness += 5;
    hunger -= 10;
}   
void Bird::nestle()
{
    cout <<"                                      Let's read a book while we rest" << endl << endl;
    cout <<"                                                 )" << endl;    
    cout <<"                                                 #   )" << endl;   
    cout <<"                                                 ()  #                           )" << endl;
    cout <<"                                                     ()                       )  #" << endl;
    cout <<"                                                           .-###-.            #  ()" << endl;
    cout <<"                                                  ____    /  __   `#     __   ()" << endl;
    cout <<"                                               .'`  __'. | o/__#o   |   / /|" << endl;
    cout <<"                                              /  o /__#o;#  #V#   /_  /# /" << endl;
    cout <<"                                     ._      _|    #V# |`-.__.-'|#  `;  /" << endl;
    cout <<"                                    /  #   .'  #-.____.'|   ||   |/    #/" << endl;
    cout <<"                                    `._ '-/             |   ||   '.___./" << endl;
    cout <<"                                    .  '-.#_.-'      __.'-._||_.-' _ /" << endl;
    cout <<"                                    .`''===(||).___.(||)(||)----'(||)===..._____" << endl;
    cout <<"                                     `'''`'''=====''''''''========''''====...___ `'''==._" << endl;
    cout <<"                                                                                `'=.     '''=." << endl;
    cout <<"                                                                                    `'=." << endl << endl;
    happiness -= 20;
    hunger += 10;
    tiredness -= 10;
}
void Bird::draw()
{
cout <<"                        _...._" << endl;
cout <<"                      /       #" << endl;
cout <<"                     /  o _ o" << endl;
cout <<"                     (    V  )" << endl;
cout <<"                    )          (" << endl;
cout <<"                  (    -  -  -  )" << endl;
cout <<"                  (             )" << endl;
cout <<"                   (            )" << endl;
cout <<"                    [          ]" << endl;
cout <<"                  ---/l#    /l#--------" << endl;
cout <<"                    ----------------" << endl;
cout <<"                       (  )" << endl;
cout <<"                      ( __ _)" << endl << endl;
}
#endif
