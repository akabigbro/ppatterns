#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <vector>
#include "stateful.h"
#include "observer.h"

class Observable : public Stateful
{
    private:
        std::vector<Observer *> observers;
    public:
        void addObserver(Observer * observer);
        void remObserver(Observer * observer);
        void Notify(void);
};

#endif//OBSERVABLE_H
