#include "addone.h"
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export(name=".addone")]]
NumericVector addone(const NumericVector &x)
{
    const int n = x.size();
    NumericVector result(n);

    for(int i=0; i<n; i++) result[i] = x[i] + 1.0;

    return result;
}
