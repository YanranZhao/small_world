//
// Created by yanra on 2018-02-12.
//

#include "Giants.h"
#include <iostream>
using namespace std;

Giants::Giants() {
    setTokens(6);
    setType("Giants");
    setSkill("Cost 1 less Giants token near mountain");
}

Giants::~Giants() {}

void Giants::raceSkill() {
    cout<<"Conquer any region adjacent to mountain and cost 1 less Giants token"<<endl;
}