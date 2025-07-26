#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include <iostream>
#include <string>

class Dog : public Pet
{
public:
    Dog();
    Dog(int,int,int,string,string);
    void fetch();
    void eatMeat();
    void sitAndBark();
    void draw();
};
Dog::Dog() : Pet() {}

Dog::Dog(int h,int t, int hap, string n, string pt) : Pet(h,t,hap,n,pt) {}

void Dog::fetch()
{
    cout <<"          Get it " << name << "!" << endl << endl;
    cout <<"                     .--~~,__                _________" << endl;
    cout <<"        :-....,-------`~~'._.'              /________/" << endl;
    cout <<"         `-,,,  ,_      ;'~U'" << endl;             
    cout <<"          _,-' ,'`-__; '--." << endl;
    cout <<"         (_/'~~      ''''(;" << endl << endl;
    happiness += 10;
    hunger += 10;
    tiredness += 10;
}
void Dog::eatMeat()
{
    cout <<"           Grr... MEAT!" << endl << endl;
    cout <<"            ,    /-." << endl;
    cout <<"           ((___/ __>" << endl;
    cout <<"            /      }" << endl;
    cout <<"            # .--.(    ___" << endl;
    cout <<"             ##   ##  #___#" << endl << endl;
    happiness += 5;
    hunger -= 10;
}
void Dog::sitAndBark()
{
    cout <<"            |#_/|" << endl << endl;                  
    cout <<"            | @ @   WOOF WOOF!" << endl; 
    cout <<"            |   <>              _" << endl;  
    cout <<"            |  _/#------____ ((| |))" << endl;
    cout <<"            |               `--' |" << endl;  
    cout <<"        ____|_       ___|   |___.'" << endl; 
    cout <<"        /_/_____/____/_______|" << endl << endl;
    happiness -= 10;
    hunger += 10;
    tiredness -= 5;
}
void Dog::draw()
{
    cout <<"          /^ ^#" << endl;
    cout <<"         / 0 0 #" << endl;
    cout <<"         V# Y /V" << endl;
    cout <<"          / - #" << endl;
    cout <<"          |    #" << endl;
    cout <<"          || (__V" << endl << endl;
}
#endif