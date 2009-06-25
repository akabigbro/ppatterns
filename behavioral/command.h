#ifndef COMMAND_H
#define COMMAND_H

class Command
{
    public:
        virtual void execute(void) throw(int&)=0;
};

#endif//COMMAND_H
