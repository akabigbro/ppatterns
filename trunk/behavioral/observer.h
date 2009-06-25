#ifndef OBSERVER_H
#define OBSERVER_H

#include "stateful.h"

class Observer
{
    public:
        virtual void update(Stateful * stateful)=0;
};

#endif//OBSERVER_H
