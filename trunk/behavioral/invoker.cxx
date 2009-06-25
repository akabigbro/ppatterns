#include "invoker.h"

Invoker::Invoker(Command * executor)
    : executor(executor), undoer(NULL)
{
}

Invoker::Invoker(Command * executor, Command * undoer)
    : executor(executor), undoer(undoer)
{
}

void Invoker::execute(void) throw(int&)
{
    executor->execute();
}

void Invoker::undo(void) throw(int&)
{
    if (NULL != undoer)
    {
        undoer->execute();
    }
}

