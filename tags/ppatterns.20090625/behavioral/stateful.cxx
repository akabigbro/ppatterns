#include "stateful.h"

void Stateful::setState(int state)
{
    this->state = state;
}

Stateful::Stateful(int state)
    : state(state)
{
}

int Stateful::getState(void)
{
    return state;
}
