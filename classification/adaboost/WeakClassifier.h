/**
 * Copyright(c) 2012 - 2013 minglin. All rights reserved.
 */

#ifndef _WEAK_CLASSIFIER_H_
#define _WEAK_CLASSIFIER_H_

#include "Samples.h"

class WeakClassifier {
public:
	static float classify(const float* samples, const int feature, const float threshold);
};

#endif
