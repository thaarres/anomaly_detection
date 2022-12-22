//Numpy array shape [57, 32]
//Min -1.500000000000
//Max 1.500000000000
//Number of zeros 902

#ifndef W2_H_
#define W2_H_

#ifndef __SYNTHESIS__
weight2_t w2[1824];
#else
weight2_t w2[1824] = {0.125, 0.125, -0.125, -0.125, 0.000, -0.125, 0.375, 0.000, 0.250, 0.250, -0.375, 0.125, -0.125, 0.125, 0.125, -0.250, 0.000, 0.250, 0.125, 0.125, -0.250, -0.125, 0.000, 0.125, -0.250, 0.000, 0.125, 0.000, -0.250, 0.000, -0.500, 0.125, 0.000, 0.125, 0.125, -0.125, 0.000, 0.000, -0.250, 0.000, 0.125, 0.000, 0.000, 0.500, 0.125, -0.375, 0.000, -0.375, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, 0.125, 0.000, -0.125, -0.125, 0.250, -0.375, 0.375, 0.125, 0.000, 0.125, 0.125, 0.000, 0.125, 0.000, 0.125, 0.000, -0.125, 0.250, 0.250, 0.250, 0.000, 0.000, 0.000, 0.000, -0.125, -0.125, 0.125, 0.250, 0.000, 0.000, 0.125, 0.125, -0.125, 0.250, 0.000, 0.125, 0.125, -0.125, 0.250, 0.125, -0.250, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.000, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, -0.125, 0.125, 0.000, 0.125, -0.250, 0.000, 0.000, 0.000, 0.625, 0.000, 0.250, -0.375, 0.250, 0.125, -0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.250, -0.625, -0.250, 0.000, 0.750, 0.000, 0.000, -0.500, 0.000, 0.375, 0.000, 0.750, -0.125, 0.000, -0.125, 0.375, 0.000, 0.000, -0.375, -0.125, 0.000, 0.250, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, -0.250, -0.250, 0.000, 0.125, -0.500, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, -0.625, 0.000, 0.625, -0.125, -0.625, -0.250, 0.000, 0.000, 0.250, 0.000, 0.125, 0.125, 0.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.250, 0.125, 0.250, -0.125, 0.000, -0.125, -0.500, 0.000, 0.000, -0.125, 0.000, 0.125, 0.000, 0.125, -0.125, 0.375, 0.500, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.000, 0.125, 0.000, 0.000, -0.125, 0.000, -0.125, -0.125, 0.250, 0.000, -0.250, 0.250, 0.000, 0.375, 0.000, 0.000, 0.000, -0.125, 0.000, 0.125, -0.125, 0.000, -0.250, -0.125, -0.125, -0.125, 0.000, 0.125, 0.000, -0.125, 0.375, 0.000, 0.000, 0.125, -0.125, 0.000, -0.125, 0.000, -0.125, 0.500, 0.250, 0.000, -0.375, 0.375, 0.000, -0.500, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, -0.125, 0.125, -0.125, -0.375, 0.125, 0.000, 0.250, 0.000, 0.000, -0.125, -0.375, 0.000, 0.000, 0.125, 0.125, 0.000, -0.125, 0.000, -0.250, 0.000, 0.000, -0.250, 0.250, 0.125, 0.000, -0.250, 0.000, 0.000, 0.000, 0.000, 0.125, -0.125, 0.125, -0.250, 0.000, -0.125, -0.250, -0.125, -0.125, 0.125, 0.125, -0.125, 0.250, 0.000, 0.125, -0.125, 0.375, -0.125, 0.000, 0.125, 0.000, 0.125, 0.000, 0.125, -0.250, -0.125, 0.000, 0.250, 0.125, 0.000, 0.000, 0.125, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, -0.500, -0.125, -0.125, 0.000, 0.375, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -0.125, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.125, -0.125, -0.250, -0.125, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, -0.125, 0.000, -0.125, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.250, 0.125, -0.250, -0.125, 0.000, 0.250, 0.500, -0.750, 0.125, 0.125, -0.250, 0.000, 0.000, 0.000, 0.250, 0.000, -0.125, -0.125, 0.250, 0.000, 0.000, -0.500, -0.250, -0.250, 0.125, 0.625, -0.250, 0.000, -0.250, 0.125, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, 0.000, 0.125, -0.750, 0.750, 0.125, 0.000, -0.250, 0.000, 0.125, 0.125, 0.375, 0.000, 0.000, -0.125, 0.125, 0.000, 0.500, -0.125, -0.500, -0.125, -0.500, 0.125, -0.125, 0.000, 0.500, -0.125, 0.000, -0.125, 0.250, -0.125, -0.250, 0.125, 0.000, 0.000, 0.250, -0.250, 0.125, 0.000, 0.250, -0.125, 0.000, 0.000, -0.500, 0.000, 0.000, 0.250, -0.125, 0.000, 0.750, 0.125, -0.750, 0.125, 0.250, -0.125, 0.375, 0.000, 0.000, -0.250, 0.000, 0.375, 0.500, 0.125, -0.625, 0.000, 0.000, 0.000, -0.125, 0.125, -0.250, 0.000, 0.375, 0.125, 0.125, 0.000, -0.500, 0.000, 0.000, 0.000, 0.000, 0.125, -0.125, -0.375, 0.000, -0.125, 0.000, 0.625, -0.500, 0.000, 0.125, 0.250, -0.125, -0.250, 0.250, 0.000, -0.125, 0.125, 0.375, 0.000, 0.000, 0.000, -0.625, 0.000, -0.375, 0.375, 0.000, 0.000, 0.375, 0.000, -0.250, 0.000, -0.125, 0.125, 0.000, -0.125, 0.000, -0.250, -0.250, 0.250, 0.375, -0.125, 0.000, -0.250, 0.375, 0.125, 0.125, -1.500, -0.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, -0.250, 0.875, 0.000, -0.500, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, -0.250, 0.000, 0.000, -0.125, 0.250, -0.250, 0.125, 0.000, -0.125, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, -0.125, 0.000, 0.125, -0.875, -0.125, 0.000, 0.000, 0.250, 0.000, 0.125, -0.125, 0.125, 0.125, 0.000, -0.125, 0.125, 0.000, 0.250, 0.750, 0.125, -0.125, -0.125, 0.250, 0.000, 0.000, 0.000, -0.250, 0.250, 0.375, 0.000, 0.000, 0.625, 0.000, -0.125, -0.625, -0.375, 0.125, 0.125, 0.000, -0.250, -0.125, 0.000, 0.250, 0.000, 0.000, 0.000, -0.250, -0.125, 0.000, -0.375, 0.375, -0.125, 0.000, 0.125, 0.125, -0.125, 0.000, 0.250, 0.000, -0.125, -0.125, 0.250, -0.250, 0.000, 0.625, 0.000, 0.000, -0.250, 0.375, 0.000, 0.000, 0.000, 0.000, -0.625, 0.000, 0.000, 0.000, -0.375, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.125, -0.250, 0.000, 0.250, 0.000, -0.125, 0.000, -0.125, 0.000, 0.000, -0.500, 0.125, 0.000, 0.000, 0.250, 0.000, 0.000, -0.250, 0.000, 0.375, 0.000, 0.125, -0.125, -0.250, 0.125, 0.125, 0.250, -0.125, 0.000, 0.125, 0.125, 0.250, -0.125, 0.250, 0.125, -0.375, 0.000, -0.250, 0.000, -0.125, 0.000, -0.250, 0.250, 0.125, 0.125, 0.125, 0.000, -0.125, 0.000, -0.500, -0.125, -0.125, 0.250, 0.000, 0.000, 0.000, 0.000, 0.125, -0.250, 0.125, 0.000, 0.000, 0.000, 0.375, -0.125, 0.125, 0.125, -0.125, 0.000, 0.000, 0.250, 0.125, -0.125, -0.125, -0.125, -0.250, 0.000, 0.000, 0.125, 0.125, -0.375, 0.125, 0.000, 0.125, 0.000, -0.250, 0.125, -0.125, 0.000, 0.000, -0.250, 0.125, 0.000, 0.000, 0.500, -0.125, 0.000, 0.000, -0.125, 0.125, -0.125, 0.125, -0.125, -0.125, -0.375, -0.125, 0.125, 0.125, 0.125, -0.125, -0.125, 0.000, 0.000, 0.000, -0.125, 0.250, 0.000, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, -0.250, 0.125, 0.000, -0.375, -0.125, 0.000, 0.000, 0.250, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.125, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.375, -0.125, 0.000, 0.000, -0.125, 0.000, 0.125, 0.125, -0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, -0.625, 0.375, 0.125, 0.625, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, -0.125, -0.250, 0.000, 0.000, -0.875, 0.000, 0.000, 0.125, 0.250, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, -0.375, -0.250, 0.125, 0.125, 0.000, 0.000, 0.125, 0.125, 0.000, -0.125, -0.125, 0.125, 0.000, 0.000, -0.375, 1.250, -0.750, 0.000, 0.250, 0.000, 0.375, -0.250, 0.000, 0.125, 0.000, -0.125, -1.000, 0.000, -0.125, 0.000, 0.250, -0.125, 0.000, 0.000, 0.125, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.375, -0.500, 0.000, 0.125, 0.375, 0.000, -0.125, -0.125, 0.000, 0.125, -0.125, 0.125, -0.125, 0.000, 0.125, -0.125, 0.000, -0.125, 0.000, -0.125, 0.000, 0.125, 0.000, 0.000, -0.125, 0.125, -0.125, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, -0.250, -0.125, 0.000, 0.000, 0.125, 0.000, 0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.250, 1.000, -0.125, -0.250, -0.375, 0.125, 0.000, 0.000, 0.000, 0.000, -0.625, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, 0.125, -0.250, 0.000, 0.000, -0.375, 0.375, 0.250, 0.250, 0.500, 0.125, -0.125, 0.000, 0.000, 0.000, -0.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.625, 0.000, -0.250, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, 0.125, 0.125, 0.000, 0.000, -0.125, 0.125, 0.125, 0.125, 0.000, 0.000, 0.000, -0.125, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, -0.250, -0.125, 0.000, 0.000, -0.375, -0.125, 0.000, 0.375, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, -0.250, -0.125, 0.000, 0.000, 0.000, 0.250, -0.125, 0.000, 0.250, 0.000, 0.000, 0.375, 0.000, 0.000, -0.125, 0.125, 0.125, 0.000, -0.125, 0.125, -0.125, 0.000, 0.125, 0.125, 0.125, -0.250, 0.125, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, -0.125, 0.000, 0.125, 0.000, -0.625, 0.625, 0.000, 0.000, -0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 1.500, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, -1.375, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.125, 0.250, -0.625, 0.125, 0.000, 0.000, 0.000, 0.000, 1.375, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -1.250, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.000, 1.375, -1.250, 0.125, 0.000, 0.000, 0.000, 0.000, -0.250, -0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.000, 0.000, 0.000, 0.000, 0.000, -1.000, 0.000, 0.000, 0.125, -0.250, -0.125, 0.500, 1.250, 0.000, -0.250, 0.000, 0.000, -0.250, 0.000, -0.125, 0.125, 0.000, 0.000, 0.375, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, -1.125, 0.125, 0.000, 0.000, 0.375, -0.250, 0.000, 0.000, 0.000, -0.125, 0.125, -0.125, 0.000, 0.125, 0.125, 0.500, -0.125, -0.625, -0.375, -0.125, 0.000, 0.125, 0.125, -0.125, -0.625, 0.000, -0.125, 0.250, 0.250, 0.000, 0.125, -0.125, 0.125, -0.500, 0.375, 0.000, -0.250, -0.250, 0.000, -0.375, 0.125, 0.125, -0.125, -0.250, 0.125, 0.250, -0.125, -0.250, 0.250, -0.375, -0.125, -0.125, -0.125, -0.750, 0.000, 0.000, -0.250, 1.000, 0.000, 0.125, 0.125, 0.125, 0.125, 0.000, -0.125, -0.375, -0.375, 0.000, 0.375, 0.125, -0.125, -0.125, 0.125, 0.000, 0.125, 0.000, 0.000, 0.125, -0.750, -0.500, 0.125, 0.000, -0.125, 0.125, 0.125, 0.250, 0.000, 0.125, -0.125, -0.250, 0.500, 0.000, 0.125, 0.000, 0.000, 1.125, -0.625, 0.000, 0.375, 0.125, 0.375, 0.000, 0.000, -0.125, -0.625, 0.000, 0.000, 0.000, 0.500, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, -0.125, 0.000, -1.375, -0.625, -0.125, 1.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, -0.125, 1.000, 0.125, 0.250, -1.500, -0.375, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.250, -0.125, 0.000, 0.000, 0.125, 0.125, -0.750, 1.125, 0.000, -0.625, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, -0.250, 0.000, 0.000, 0.000, 0.625, 0.750, 0.000, 0.000, -0.125, 0.125, -0.125, 0.000, -0.875, 0.125, 0.375, 0.000, 0.750, -0.250, 0.000, -0.375, -0.625, 0.125, 0.125, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.375, 0.000, 0.250, -0.500, 0.000, 0.125, -0.125, 0.000, -0.125, -0.500, 0.000, 0.625, 0.125, -0.750, -0.625, 0.000, 0.000, -0.125, 0.000, 0.125, 0.250, -0.125, 0.000, -0.125, -0.125, 0.000, 0.000, -0.125, -0.125, 0.000, 0.125, -0.125, 0.625, 0.125, -0.250, 0.125, 0.000, -0.125, 0.625, 0.000, -0.500, -0.625, -0.125, 0.625, 0.125, 0.250, -0.375, 0.000, 0.000, -0.125, 0.125, 0.000, -0.125, 0.000, 0.000, 0.125, 0.250, -0.125, 0.000, 0.000, -0.125, 0.000, 0.000, 0.000, 0.125, -0.125, 0.000, 0.750, 0.000, 0.125, -1.000, 0.000, 0.000, -0.250, 0.000, 0.375, -0.125, 0.000, 0.500, 0.000, 0.000, 0.750, -0.125, -0.500, -0.875, 0.125, 0.000, 0.500, -0.125, 0.000, 0.000, 0.250, 0.000, 0.000, 0.500, 0.125, 0.125, 0.000, -0.875, 0.000, -0.250, 0.000, 0.125, 0.000, -0.125, -0.125, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, 0.000, -0.500, -1.500, 0.250, 0.375, 0.375, -0.125, -0.125, 0.000, 0.000, 0.000, 1.500, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.125, -0.500, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, -0.375, 0.500, 0.125, 0.250, 1.375, 0.000, -0.125, 0.000, 0.000, 0.000, -0.500, 0.000, 0.000, 0.000, 0.000, 0.125, 0.000, 0.000, 0.000, -1.375, 0.000, -0.125, 0.000, -0.500, 0.375, 0.000, -0.625, -0.125, 0.000, 0.125, -0.375, 0.125, -0.750, 0.125, 0.000, 0.875, -0.125, -0.375, 0.125, -0.125, 0.125, 0.125, -0.125, 0.000, 0.000, 0.375, 0.125, -0.125, 0.000, -0.375, 1.125, 0.125, 0.000, 0.125, 0.000};
#endif

#endif