#include "creator.h"

Creator::Creator(int productType)
    : productType(productType)
{
}

Creator::~Creator(void)
{
}

int Creator::getProductType(void)
{
    return productType;
}
