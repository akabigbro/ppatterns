#ifndef STATEFUL_H
#define STATEFUL_H

class Stateful
{
    private:
        int state;
    protected:
        void setState(int state);
    public:
        Stateful(int state);

        int getState(void);
};

#endif//STATEFUL_H
