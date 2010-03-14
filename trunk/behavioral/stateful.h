#ifndef STATEFUL_H
#define STATEFUL_H

class Stateful
{
    private:
        int state;
    protected:
        virtual void Notify(void)=0;
    public:
        Stateful(int state);

        int getState(void);
        void setState(int state);
};

#endif//STATEFUL_H
