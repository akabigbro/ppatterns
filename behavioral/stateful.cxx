#include "stateful.h"

Stateful::Stateful(int state)
    : state(state)
{
}

int Stateful::getState(void)
{
    return state;
}

void Stateful::setState(int state)
{
    this->state = state;
    Notify();
}
