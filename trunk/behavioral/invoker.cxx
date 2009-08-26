#include "invoker.h"

Invoker::Invoker(void)
    : executor(NULL), undoer(NULL)
{
}

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
    if (NULL != executor)
    {
        executor->execute();
    }
}

void Invoker::undo(void) throw(int&)
{
    if (NULL != undoer)
    {
        undoer->execute();
    }
}

void Invoker::setExecutor(Command * executor)
{
    this->executor = executor;
}

void Invoker::setUndoer(Command * undoer)
{
    this->undoer = undoer;
}
