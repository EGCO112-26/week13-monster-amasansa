//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
#include <iomanip>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) 
{
    monster *p;
    monster m1("asna",10,1);
    monster m2("asma",20,5);
    monster x[5]={{"asda",50,7},{"amna",700,8}};
    p=new monster("Lulu",10,50); // if array : p=new monster[3]={{"Lulu",10,50}};
    delete p; //Destructor p
    return 0;
}
