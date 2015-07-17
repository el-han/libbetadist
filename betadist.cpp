#include <string>
#include <cmath>
#include <boost/math/distributions/beta.hpp>
#include "betadist.h"

int beta(double P, double K)
{
	return ceil(boost::math::beta_distribution<>::find_beta(1, 1.0/K, P));
}

extern "C" int cbeta(double P, double K)
{
	return beta(P, K);
}

