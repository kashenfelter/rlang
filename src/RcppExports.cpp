// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// make_lazy
List make_lazy(Symbol name, Environment env);
RcppExport SEXP lazy_make_lazy(SEXP nameSEXP, SEXP envSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP );
        Rcpp::traits::input_parameter< Environment >::type env(envSEXP );
        List __result = make_lazy(name, env);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
