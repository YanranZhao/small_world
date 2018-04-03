//
// Created by yanra on 2018-03-27.
//

#ifndef SMALL_WORLD_SUBJECT_H
#define SMALL_WORLD_SUBJECT_H


#include "Observer.h"
#include "../Player.h"
#include <vector>
using namespace std;

class Subject {
public:
    virtual void Attach(Observer* o);
    virtual void Detach(Observer* o);
    virtual void Notify(const std::string &, Observer *);
    virtual void NotifyStatistics();
    virtual void NotifyBarGraph();

    virtual void notifyTurn(Observer *);
    Subject();
    ~Subject();

protected:
    vector<Observer*> *observersList;
};


#endif //SMALL_WORLD_SUBJECT_H
