#include "creator.h"
#include "factory.h"

Creator::Creator(int productType)
    : productType(productType)
{
    Factory::addCreator(this);
}

Creator::~Creator(void)
{
    Factory::remCreator(this);
}

int Creator::getProductType(void)
{
    return productType;
}
