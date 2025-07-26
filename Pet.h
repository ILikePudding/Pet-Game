#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Pet
{
public: 
    Pet();
    Pet(int,int,int,string,string);
    void play();
    void eat();
    void rest();
    void setName(string);
    void setPetType(string);
    string getName();
    string getPetType();
    void hungerThresh();
    void tiredThresh();
    void happyThresh();
    void displayStats();
    void saveData(string);
    void loadData(string);
    virtual void draw() = 0;
protected:
    int hunger;
    int tiredness;
    int happiness;
    string name;
    string petType;
    ifstream fin;
    ofstream fout;
};

Pet::Pet()
{
    hunger = 50;
    tiredness = 50;
    happiness = 50;
    name = "";
    petType = "";
}
Pet::Pet(int h, int t, int hap, string n, string pt)
{
    hunger = h;
    tiredness = t;
    happiness = hap;
    name = n;
    petType = pt;
}
void Pet::setName(string n)
{
    name = n;
}
string Pet::getName()
{
    return name;
}
void Pet::setPetType(string t)
{
    petType = t;
}
string Pet::getPetType()
{
    return petType;
}
void Pet::play()
{
    hunger += 5;
    tiredness += 5;
    happiness += 5;
    cout << name << " played with some gadgets." << endl;
}
void Pet::eat()
{
    hunger -= 5;
    cout << name << " ate some snacks." << endl;
}
void Pet::rest()
{
    tiredness -= 10;
    cout << name << " is sleeping." << endl;
}
void Pet::hungerThresh()
{
    if(hunger >= 60 && hunger < 100)
    {
        cout << name << " is hungry. Get the poor " << petType << " some food." << endl;
    }
    if(hunger >= 100)
    {
        hunger = 100;
        cout << name << " is very hungry!" << endl;
    }
    if(hunger <= 0)
    {
        hunger = 0;
        cout << name << " isn't feeling hungry yet." << endl;
    }

}
void Pet::happyThresh()
{
    if(happiness > 0 && happiness <= 40)
    {
        cout << name << " is sad and bored. Get the " << petType << " to play something." << endl;
    }
    if (happiness >= 100)
    {
        happiness = 100;
        cout << name << " is very happy." << endl;
    }
    if(happiness <= 0)
    {
        happiness = 0;
        cout << name << " is bored to death!" << endl;
    }
}
void Pet::tiredThresh()
{
    if(tiredness >= 70 && tiredness < 100)
    {
        cout << name << " is tired. Get the " << petType << " some rest." << endl;
    }
    if(tiredness >= 100)
    {
        tiredness = 100;
        cout << name << " is very tired and really needs sleep." << endl;
    }
    if(tiredness <= 0)
    {
        tiredness = 0;
        cout << name << " is feeling very energetic!" << endl;
    }
}
void Pet::displayStats()
{
    cout << "Pet: " << petType << endl;
    cout << "Name: " << name << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Happiness: " << happiness << endl;
    cout << "Tiredness: " << tiredness << endl;
}
void Pet::saveData(string filename)
{
    cout << "Pet: " << petType << "\nName: " << name << "\nHunger: " << hunger << "\nHappiness: " << happiness << "\nTiredness: " << tiredness << endl;
    fout.open(filename);
    cout << "Saved data of " << name << " to " << filename << endl;
    fout << petType << " " << name << " " << hunger << " " << happiness << " " << tiredness;
    fout.close();
}
void Pet::loadData(string filename)
{
    fin.open(filename);
    cout << "Retrieving data from " << filename << endl;
    fin >> petType >> name >> hunger >> happiness >> tiredness;
    cout << "Pet: " << petType << "\nName: " << name << "\nHunger: " << hunger << "\nHappiness: " << happiness << "\nTiredness: " << tiredness << endl;
    fin.close();
}
#endif