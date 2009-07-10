#include "observable.h"

Observable::Observable(int state)
    : Stateful(state)
{
}

Observable::~Observable(void)
{
    observers.clear();
}

void Observable::addObserver(Observer * observer)
{
    observers.push_back(observer);
}

void Observable::remObserver(Observer * observer)
{
    for (std::vector<Observer *>::iterator iter = observers.begin(); iter != observers.end(); iter++)
    {
        if (observer == *iter)
        {
            observers.erase(iter);
        }
    }
}

void Observable::Notify(void)
{
    for (int index = 0; index < observers.size(); index++)
    {
        observers[index]->update(this);
    }
}
