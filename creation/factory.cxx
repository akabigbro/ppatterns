#include "factory.h"

Factory::Factory(void)
{
}

Factory::~Factory(void)
{
    creators.clear();
}

Product * Factory::newProduct(int productType)
{
    Product * product = NULL;

    if (creators.find(productType) != creators.end())
    {
        product = creators[productType]->newInstance();
    }

    return product;
}

void Factory::addCreator(Creator * creator)
{
    creators[creator->getProductType()] = creator;
}

void Factory::remCreator(Creator * creator)
{
    std::map<int, Creator *>::iterator iter = creators.find(creator->getProductType());

    if (iter != creators.end())
    {
        creators.erase(iter);
    }
}

