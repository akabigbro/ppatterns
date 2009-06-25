#include "factory.h"

Factory * Factory::instance(new Factory());

Factory::Factory(void)
{
}

Factory::~Factory(void)
{
    delete instance;
}

Product * Factory::newProduct(int productType)
{
    Product * product = NULL;

    if (instance->creators.find(productType) != instance->creators.end())
    {
        product = instance->creators[productType]->newInstance();
    }

    return product;
}

void Factory::addCreator(Creator * creator)
{
    instance->creators[creator->getProductType()] = creator;
}

void Factory::remCreator(Creator * creator)
{
    std::map<int, Creator *>::iterator iter = instance->creators.find(creator->getProductType());

    if (iter != instance->creators.end())
    {
        instance->creators.erase(iter);
    }
}

