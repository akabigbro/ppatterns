#ifndef REQUEST_H
#define REQUEST_H

class Request
{
    private:
        int requestType;
    public:
        Request(int requestType);

        int getRequestType(void);
};

#endif//REQUEST_H
