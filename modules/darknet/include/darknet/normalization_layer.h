#ifndef NORMALIZATION_LAYER_H
#define NORMALIZATION_LAYER_H

#include "layer.h"
#include "network.h"

layer make_normalization_layer(int batch, int w, int h, int c, int size, float alpha, float beta, float kappa);
void resize_normalization_layer(layer *layer, int h, int w);
void forward_normalization_layer(const layer layer, network_state state);
void backward_normalization_layer(const layer layer, network_state state);
void visualize_normalization_layer(layer layer, char *window);

#ifdef WITH_CUDA
void forward_normalization_layer_gpu(const layer layer, network_state state);
void backward_normalization_layer_gpu(const layer layer, network_state state);
#endif

#endif
