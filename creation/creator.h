#ifndef CREATOR_H
#define CREATOR_H

#include "product.h"

class Creator
{
    private:
        int productType;
    public:
        Creator(int productType);
        virtual ~Creator(void);

        int getProductType(void);

        virtual Product * newInstance(void)=0;
};

#endif//CREATOR_H
