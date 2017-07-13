## testRcpp

This is an R package for testing
[Rcpp](https://github.com/rcppcore/rcpp).

Namely, I'm having trouble with my [R/qtl2](http://kbroman.org/qtl2)
packages with Rcpp 0.12.11, related to the routine registration
business.

It seems to come down the `name` argument in
`Rcpp::export()` for a C++ function, as in
[this line in `addone.cpp`](https://github.com/kbroman/testRcpp/blob/master/src/addone.cpp#L5).
When compiling, I get the following error:

```
RcppExports.cpp:23:37: error: use of undeclared identifier 'testRcpp_'
    {"testRcpp_.addone", (DL_FUNC) &testRcpp_.addone, 1},
```

In the
[`no_rename` branch](https://github.com/kbroman/testRcpp/blob/no_rename/),
this use of `Rcpp::export(name="blah")` was deleted, and there's no
longer a problem.
