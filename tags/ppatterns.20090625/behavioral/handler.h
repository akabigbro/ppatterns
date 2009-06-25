#ifndef HANDLER_H
#define HANDLER_H

#include "request.h"

class Handler : public Request
{
    public:
        Handler(int requestType);
        virtual ~Handler(void);

        virtual void handle(Request * request)=0;
};

#endif//HANDLER_H
