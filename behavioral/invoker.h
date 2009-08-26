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
        Invoker(void);
        Invoker(Command * executor);
        Invoker(Command * executor, Command * undoer);

        void execute(void) throw(int&);
        void undo(void) throw(int&);

        void setExecutor(Command * executor);
        void setUndoer(Command * undoer);
};

#endif//INVOKER_H
