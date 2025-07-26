#include "Pet.h"
#include "Monkey.h"
#include "Bird.h"
#include "Dog.h"

#include <iostream>
#include <string>
using namespace std;


int mainMenu() //displays the main menu and its options
{   
    int option;
    cout << "  ___               ___" << endl; 
    cout << " (o o)             (o o)" << endl; 
    cout << "(  V  ) Pet Game  (  V  )" << endl;
    cout << "--m-m---------------m-m--" << endl;
    cout << "Press a number to choose an option" << endl;
    cout << "1. Create New Pet" << endl;
    cout << "2. Save Pet Data (Always remember to save after you are done playing)" << endl;
    cout << "3. Load Pet Data (Loads a saved data)" << endl;
    cout << "4. Exit" << endl << endl;
    cin >> option;
    while(option > 4 || option < 1)
    {
        cout << "Please choose an option from 1-4" << endl;
        cin >> option;
    }
    return option;
}
int petMenu() //displays the pet creation menu and its options
{
    int option;
    cout << "  ____________" << endl;
    cout << "((            ))" << endl;
    cout << " )) Pet Menu ((" << endl;
    cout << "((            ))" << endl;
    cout << "  ------------" << endl;     
    cout << "Choose a number that corresponds to the pet you wish to create" << endl;
    cout << "1. Monkey" << endl;
    cout << "2. Bird" << endl;
    cout << "3. Dog" << endl;    
    cout << "4. Go back to Main Menu" << endl << endl;          
    cin >> option;
    while(option > 4 || option < 1)
    {
        cout << "Please choose an option from 1-4" << endl;
        cin >> option;
    }
    return option;
}
int monkeyMenu(Monkey& m) //displays the actions menu for a monkey
{
    int option;
    cout << "What shall " << m.getName() << " do?" << endl << endl;
    cout << "(((_.-=-._.-=-.)))" << endl;
    cout << "))~~~~~~~~~~~~((" << endl;
    cout << "(( >What to Do< ))" << endl;
    cout << "))............((" << endl;
    cout << "(((`-._.-'`-._.)))" << endl << endl;
    cout << "1. Swing --> This adds 10 points to happiness, hunger, and tiredness." << endl;
    cout << "2. Eat Banana --> This adds 5 points to happiness and subtracts 10 points from hunger." << endl;
    cout << "3. Hang --> This adds 10 points to hunger and tiredness and subtracts 15 points from happiness." << endl;
    cout << "4. Play --> This adds 5 points to happiness, hunger, and tiredness." << endl;
    cout << "5. Eat --> This subtracts 5 points from hunger." << endl;
    cout << "6. Rest --> This subtracts 10 points from tiredness." << endl;
    cout << "7. Return to Pet Menu." << endl;
    cout << "8. Return to Main Menu." << endl << endl;
    cin >> option;
    while(option > 8 || option < 1)
    {
        cout << "Please choose an option from 1-8" << endl;
        cin >> option;
    }
    return option;
}
int monkeyActions(Monkey& m, int mo) //what a monkey object does based on the integer passed in the function
{
    while(true)
    {
        if(mo == 1)
        {
            m.swing();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 2)
        {
            m.eatBanana();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 3)
        {
            m.hang();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 4)
        {
            m.play();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 5)
        {
            m.eat();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 6)
        {   
            m.rest();
            cout << endl;
            m.hungerThresh();
            m.happyThresh();
            m.tiredThresh();
            cout << endl;
            m.displayStats();
            cout << endl;
        }
        else if(mo == 7 || mo == 8)
        {
            break;
        }
        mo = monkeyMenu(m);
    }
    return mo;
}
int birdMenu(Bird& b) //displays the actions menu for a bird
{
    int option;
    cout << "What shall " << b.getName() << " do?" << endl << endl;
    cout << "(((_.-=-._.-=-.)))" << endl;
    cout << "))~~~~~~~~~~~~((" << endl;
    cout << "(( >What to Do< ))" << endl;
    cout << "))............((" << endl;
    cout << "(((`-._.-'`-._.)))" << endl << endl;
    cout << "1. Fly --> This adds 10 points to happiness, hunger, and tiredness." << endl;
    cout << "2. Eat Fish --> This adds 5 points to happiness and subtracts 10 points from hunger." << endl;
    cout << "3. Nestle --> This adds 10 points to hunger, subtract 20 points from happiness, and subtracts 10 points from tiredness" << endl;
    cout << "4. Play --> This adds 5 points to happiness, hunger, and tiredness." << endl;
    cout << "5. Eat --> This subtracts 5 points from hunger." << endl;
    cout << "6. Rest --> This subtracts 10 points from tiredness." << endl;
    cout << "7. Return to Pet Menu." << endl;
    cout << "8. Return to Main Menu." << endl << endl;
    cin >> option;
    while(option > 8 || option < 1)
    {
        cout << "Please choose an option from 1-8" << endl;
        cin >> option;
    }
    return option;
}
int birdActions(Bird& b, int bo) //what a bird object does based on the integer passed in the function
{
    while(true)
    {
        if(bo == 1)
        {
            b.fly();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 2)
        {
            b.eatFish();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 3)
        {
            b.nestle();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 4)
        {
            b.play();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 5)
        {
            b.eat();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 6)
        {   
            b.rest();
            cout << endl;
            b.hungerThresh();
            b.happyThresh();
            b.tiredThresh();
            cout << endl;
            b.displayStats();
            cout << endl;
        }
        else if(bo == 7 || bo == 8)
        {
            break;
        }
        bo = birdMenu(b);
    }
    return bo;
}
int dogMenu(Dog& d) //displays the actions menu for a dog
{
    int option;
    cout << "What shall " << d.getName() << " do?" << endl << endl;
    cout << "(((_.-=-._.-=-.)))" << endl;
    cout << "))~~~~~~~~~~~~((" << endl;
    cout << "(( >What to Do< ))" << endl;
    cout << "))............((" << endl;
    cout << "(((`-._.-'`-._.)))" << endl << endl;
    cout << "1. Fetch --> This adds 10 points to happiness, hunger, and tiredness." << endl;
    cout << "2. Eat Meat --> This adds 5 points to happiness and subtracts 10 points from hunger." << endl;
    cout << "3. Sit and bark --> This adds 10 points to hunger, subtract 10 points from happiness, and subtracts 5 points from tiredness" << endl;
    cout << "4. Play --> This adds 5 points to happiness, hunger, and tiredness." << endl;
    cout << "5. Eat --> This subtracts 5 points from hunger." << endl;
    cout << "6. Rest --> This subtracts 10 points from tiredness." << endl;
    cout << "7. Return to Pet Menu." << endl;
    cout << "8. Return to Main Menu." << endl << endl;
    cin >> option;
    while(option > 8 || option < 1)
    {
        cout << "Please choose an option from 1-8" << endl;
        cin >> option;
    }
    return option;
}
int dogActions(Dog& d, int doo) //what a dog object does based on the integer passed in the function
{
    while(true)
    {
        if(doo == 1)
        {
            d.fetch();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 2)
        {
            d.eatMeat();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 3)
        {
            d.sitAndBark();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 4)
        {
            d.play();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 5)
        {
            d.eat();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 6)
        {   
            d.rest();
            cout << endl;
            d.hungerThresh();
            d.happyThresh();
            d.tiredThresh();
            cout << endl;
            d.displayStats();
            cout << endl;
        }
        else if(doo == 7 || doo == 8)
        {
            break;
        }
        doo = dogMenu(d);
    }
    return doo;
}
void petCreation(Monkey& m, Bird& b, Dog& d, int po) //This will create a pet and then displays a specific actions menu for a certain pet created.
{
    int monkeyOption;
    int birdOption;
    int dogOption;
    string n;
    while(po != 4)
    {
        if(po == 1)
        {
            cout << "You chose Monkey." << endl << endl;
            int option;
            cout << "You've created a monkey!" << endl << endl;
            cout << "What is the name of your monkey?" << endl;
            cin >> n;
            m.setName(n);
            m.setPetType("monkey");
            cout << "The name of your " << m.getPetType() << " is " << m.getName() << endl;
            m.draw();
            m.displayStats();
            cout << endl;
            monkeyOption = monkeyMenu(m);
            if(monkeyActions(m,monkeyOption) == 8)
            {
                break;
            }
        }
        else if(po == 2)
        {
            cout << "You chose Bird." << endl << endl;
            int option;
            cout << "You've created a bird!" << endl << endl;
            cout << "What is the name of your bird?" << endl;
            cin >> n;
            b.setName(n);
            b.setPetType("bird");
            cout << "The name of your " << b.getPetType() << " is " << b.getName() << endl;
            b.draw();
            b.displayStats();
            cout << endl;
            birdOption = birdMenu(b);
            if(birdActions(b,birdOption) == 8)
            {
                break;
            }
        }
        else
        {
            cout << "You chose Dog." << endl << endl;
            int option;
            cout << "You've created a dog!" << endl << endl;
            cout << "What is the name of your dog?" << endl;
            cin >> n;
            d.setName(n);
            d.setPetType("dog");
            cout << "The name of your " << d.getPetType() << " is " << d.getName() << endl;
            d.draw();
            d.displayStats();
            cout << endl;
            dogOption = dogMenu(d);
            if(dogActions(d,dogOption) == 8)
            {
                break;
            }
        }
        po = petMenu();
    }
}
void loadedPetUse(Monkey& m, Bird& b, Dog& d, int po, int ch) //This opens up the actions menu for a pet that has been loaded.
{
    while(po != 4)
    {
        if(po == 1)
        {
            if(monkeyActions(m,ch) == 8)
            {
                break;
            }
        }
        else if(po == 2)
        {
            if(birdActions(b,ch) == 8)
            {
                break;
            }
        }
        else
        {
            if(dogActions(d,ch) == 8)
            {
                break;
            }
        }
        po = petMenu();
        petCreation(m, b, d, po);
    }   
}
int main() { //The main menu of the game where the user has three options to choose from.
    int mainOption = mainMenu();
    int petOption;
    int loadedChoice;
    string type;
    string fileName;
    Monkey m;
    Bird b;
    Dog d;
    while(mainOption != 4)
    {
        if(mainOption == 1)
        {
            cout << "You chose option 1." << endl;
            petOption = petMenu();
            petCreation(m, b, d, petOption);
        }
        else if(mainOption == 2)
        {
            cout << "What type of pet do you have?" << endl;
            cin >> type;
            for(int i = 0; i < type.size(); i++)
            {
                type.at(i) = tolower(type.at(i));
            }
            if(type == "monkey")
            {
                cout << "Enter the filename you wish to save your " << type << " in." << endl << endl;
                cin >> fileName;
                cout << endl;
                m.saveData(fileName);
            }
            if(type == "bird")
            {
                cout << "Enter the filename you wish to save your " << type << " in." << endl << endl;
                cin >> fileName;
                cout << endl;
                b.saveData(fileName);
            }
            if(type == "dog")
            {
                cout << "Enter the filename you wish to save your " << type << " in." << endl << endl;
                cin >> fileName;
                cout << endl;
                d.saveData(fileName);
            }
        }
        else if(mainOption == 3)
        {
            cout << "What type of pet do you want to load?" << endl;
            cin >> type;
            for(int i = 0; i < type.size(); i++)
            {
                type.at(i) = tolower(type.at(i));
            }
            if(type == "monkey")
            {
                cout << "Enter the filename that corresponds to your " << type << endl << endl;;
                cin >> fileName;
                cout << endl;
                m.loadData(fileName);
                loadedChoice = monkeyMenu(m);
                loadedPetUse(m,b,d,1,loadedChoice);
            }
            if(type == "bird")
            {
                cout << "Enter the filename that corresponds to your " << type << endl << endl;;
                cin >> fileName;
                cout << endl;
                b.loadData(fileName);
                loadedChoice = birdMenu(b);
                loadedPetUse(m,b,d,1,loadedChoice);
            }
            if(type == "dog")
            {
                cout << "Enter the filename that corresponds to your " << type << endl << endl;;
                cin >> fileName;
                cout << endl;
                d.loadData(fileName);
                loadedChoice = dogMenu(d);
                loadedPetUse(m,b,d,1,loadedChoice);
            }
        }       
        mainOption = mainMenu();
    }
    cout << "\nThanks for playing!" << endl;
    return 0;
}