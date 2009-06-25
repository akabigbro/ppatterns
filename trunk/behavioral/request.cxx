#include "request.h"

Request::Request(int requestType)
    : requestType(requestType)
{
}

int Request::getRequestType(void)
{
    return requestType;
}

