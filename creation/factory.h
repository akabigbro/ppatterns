#ifndef FACTORY_H
#define FACTORY_H

#include <map>
#include "creator.h"

class Factory
{
    private:
        std::map<int, Creator *> creators;

        static Factory * instance;

        Factory(void);
        ~Factory(void);
    public:
        static Product * newProduct(int productType);
        static void addCreator(Creator * creator);
        static void remCreator(Creator * creator);
};

#endif//FACTORY_H
