#ifndef MONKEY_H
#define MONKEY_H

#include "Pet.h"
#include <iostream>
#include <string>

class Monkey : public Pet
{
public:
    Monkey();
    Monkey(int,int,int,string,string);
    void swing();
    void eatBanana();
    void hang();
    void draw();
};
Monkey::Monkey() : Pet() {}

Monkey::Monkey(int h,int t, int hap, string n, string pt) : Pet(h,t,hap,n,pt) {}

void Monkey::swing()
{
    cout <<"                    IM SWINGING" << endl << endl;
    cout <<"                       ||" << endl;
    cout <<"                       ||" << endl;
    cout <<"                      _;|" << endl;
    cout <<"                     /__|" << endl;
    cout <<"                    / /||" << endl;
    cout <<"                   / / // .--." << endl;
    cout <<"                   # #// / (OO)" << endl;
    cout <<"                    #//  |( _ )" << endl;
    cout <<"                    // #__/`-'#__" << endl;
    cout <<"                   // #__      _ #" << endl;
    cout <<"               _.-'/    | ._._.|# #" << endl;
    cout <<"              (_.-'     |      # # #" << endl;
    cout <<"                 .-._   /    o ) / /" << endl;
    cout <<"                /_ # # /   #__/ / /" << endl;
    cout <<"                  # #_/   / /  /_/" << endl;
    cout <<"                   #     / /" << endl;
    cout <<"                    `-._/-'"  << endl << endl;
    happiness += 10;
    hunger += 10;
    tiredness += 10;
}
void Monkey::eatBanana()
{
    cout <<"                       MMMH TASTY BANANAS" << endl << endl;
    cout <<"             '" << endl;
    cout <<"         ''---.  .-.   .--,;._" << endl;
    cout <<"           '   `-#  #-' ./|## `'-." << endl;
    cout <<"           .-----,| |--'/ | ##    #" << endl;
    cout <<"          /     | | |  /  |  ##   /" << endl;
    cout <<"                | | | /   |   #`'`" << endl;
    cout <<"                ) | | |  /#   /                   ,," << endl;
    cout <<"               / ;| | `-'  `'`                     #`-." << endl;
    cout <<"              / / | |                   ,'          |   #" << endl;
    cout <<"          #_.' /  ; |            .-'-.,','           |  '." << endl;
    cout <<"           ,_.' ,-'  ;               ) )/|            |   |" << endl;
    cout <<"                 ,'      #         __ ,''  ''`.         _|   |--,." << endl;
    cout <<"                /         `.     ,',./ .-.-.   #.--.  / _) _,'--. )" << endl;
    cout <<"               |       ---..`.._| |   /__|__#   ,-. # |`/ ( `--. _)" << endl;
    cout <<"               #            `.  '#_;  ((o|o))    ,' | #<_, `'-, )" << endl;
    cout <<"                `.            #   ,-''.--'--.''-. _,'  #    __. '." << endl;
    cout <<"                  `.          |  /    #     /    #     /  ,'   `._)" << endl;
    cout <<"                    #        ,' | .'   `-.-'   '. |   /  /" << endl;
    cout <<"                    /      _,   | |      |      | |../  ,'" << endl;
    cout <<"                  .'  /'--'._,,_ # #     |     / .'    /" << endl;
    cout <<"                 (_._ '''-._    `.# `.   |   ,' ,' ___/" << endl;
    cout <<"                     `-.    #      '. `'-'-'` ,'-'`" << endl;
    cout <<"                        # `. #      |`'-...-'`" << endl;
    cout <<"                        | ; # |    /  /" << endl;
    cout <<"                        | | | /  ,' .'     ____" << endl;
    cout <<"                        (_/.'-'  (   `.   ,'    `'._" << endl;
    cout <<"                                   `.  `-'     --.. )"<< endl;
    cout <<"                                     `.       .--. `#" << endl;
    cout <<"                                       `.__.-# #  `#_)" << endl;
    cout <<"                                             ( /" << endl;
    cout <<"                                              `" << endl << endl;
    happiness += 5;
    hunger -= 10;
}
void Monkey::hang()
{
    cout <<"                Just hanging" << endl << endl;
    cout <<"                || __   ||" << endl;
    cout <<"                ||=#_`#=||" << endl;
    cout <<"                || (__/ ||" << endl;
    cout <<"                ||  | | :-###-." << endl;
    cout <<"                ||==| #/-=-.   #" << endl;
    cout <<"                ||  |(_|o o/   |_" << endl;
    cout <<"                ||   #/ #  #   ,_)" << endl;
    cout <<"                ||====# ^  /__/" << endl;
    cout <<"                ||     ;--'  `-." << endl;
    cout <<"                ||    /      .  #" << endl;
    cout <<"                ||===;        #  #" << endl;
    cout <<"                ||   |         | |" << endl;
    cout <<"                || .-# '     _/_/" << endl;
    cout <<"                |:'  _;.    (_  #" << endl;
    cout <<"                /  .'  `;#   ##_/" << endl;
    cout <<"               |_ /     |||  |##" << endl;
    cout <<"              /  _)=====|||  | ||" << endl;
    cout <<"             /  /|      ||/  / //" << endl;
    cout <<"             #_/||      ( `-/ ||" << endl;
    cout <<"                ||======/  /  ## .-." << endl;
    cout <<"                ||      #_/    #'-'/" << endl;
    cout <<"                ||      ||      `#`" << endl;
    cout <<"                ||======||" << endl;
    cout <<"                ||      ||" << endl << endl;
    happiness -= 15;
    hunger += 10;
    tiredness += 10;
}
void Monkey::draw()
{
    cout <<"                                                   __,__" << endl;
    cout <<"                                          .--.  .-#     #-.  .--." << endl;
    cout <<"                                         / .. #/  .-. .-.  #/ .. #" << endl;
    cout <<"                                        | |  '|  /   Y   #  |'  | |" << endl;
    cout <<"                                        | #   #  # 0 | 0 /  /   / |" << endl;
    cout <<"                                         # '- ,#.-  # # -./, -' /" << endl;
    cout <<"                                          `'-' /_   ^ ^   _# '-'`" << endl;
    cout <<"                                          .--'|  #._   _./  |'--." << endl;
    cout <<"                                        /`    #   # `~` /   /    `#" << endl;
    cout <<"                                       /       '._ '---' _.'       #" << endl;
    cout <<"                                      /           '~---~'   |      #" << endl;
    cout <<"                                     /        _.             #       #" << endl;
    cout <<"                                    /   .'-./`/        .'~'-.|#       #" << endl;
    cout <<"                                   /   /    `#:       /      `#'.      #" << endl;
    cout <<"                                  /   |       ;      |         '.`;    /" << endl;
    cout <<"                                  #   #       ;      #           #/   /" << endl;
    cout <<"                                   '.  #      ;       #       #   `  /" << endl;
    cout <<"                                     '._'.     #       '.      |   ;/_" << endl;
    cout <<"                                       /__>     '.       #_ _ _/   ,  '--." << endl;
    cout <<"                                    .'   '.   .-~~~~~-. /     |--'`~~-.  #" << endl;
    cout <<"                                   // / .---'/  .-~~-._/ / / /---..__.'  /" << endl;
    cout <<"                                  ((_(_/    /  /      (_(_(_(---.__    .'" << endl;
    cout <<"                                            | |     _              `~~`" << endl;
    cout <<"                                            | |     #'." << endl;
    cout <<"                                             # '....' |" << endl;
    cout <<"                                              '.,___.'" << endl << endl;
}
#endif