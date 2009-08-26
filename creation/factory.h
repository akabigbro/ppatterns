#ifndef FACTORY_H
#define FACTORY_H

#include <map>
#include "creator.h"

class Factory
{
    private:
        std::map<int, Creator *> creators;
    public:
        Factory(void);
        ~Factory(void);

        Product * newProduct(int productType);
        void addCreator(Creator * creator);
        void remCreator(Creator * creator);
};

#endif//FACTORY_H
