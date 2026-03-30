//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//
#include <iomanip>
#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string="bene", int=10,int=10); //constructors พร้อม set default
    ~monster(); //destructor
};

monster::~monster(){
    cout << "Bye bye (:P) " << setfill(' ') << setw(5) <<name << " hp: "<< hp << endl;
}

monster::monster(string n,int h,int p){
    name=n;
    h>100? hp=100:hp=p;
    p>20? potion=20:potion=p;

    cout << "Monster " << setfill(' ') << setw(5) << name <<" was created!" << endl;
}

#endif /* monster_h */
