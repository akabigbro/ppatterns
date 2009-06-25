#ifndef INVOKER_H
#define INVOKER_H

#include <cstdlib>
#include "command.h"

class Invoker
{
    private:
        Command * executor;
        Command * undoer;
    public:
        Invoker(Command * executor);
        Invoker(Command * executor, Command * undoer);

        void execute(void) throw(int&);
        void undo(void) throw(int&);
};

#endif//INVOKER_H
