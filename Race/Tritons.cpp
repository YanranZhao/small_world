//
// Created by yanra on 2018-02-12.
//

#include "Tritons.h"
#include <iostream>
using namespace std;


Tritons::Tritons() {
    setTokens(6);
    setType("Tritons");
    //setSkill("");
}

Tritons::~Tritons() {}

void Tritons::raceSkill() {
    cout<<"Conquer all coastal regions and cost 1 less token"<<endl;
}