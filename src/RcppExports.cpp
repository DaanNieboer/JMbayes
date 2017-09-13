// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dmvnorm2
arma::vec dmvnorm2(const arma::mat& x, const arma::rowvec& mean, const arma::mat& sigma, bool logd);
RcppExport SEXP _JMbayes_dmvnorm2(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm2(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// lap_rwm_C
List lap_rwm_C(List initials, List Data, List priors, List scales, List Covs, List control, bool interval_cens);
RcppExport SEXP _JMbayes_lap_rwm_C(SEXP initialsSEXP, SEXP DataSEXP, SEXP priorsSEXP, SEXP scalesSEXP, SEXP CovsSEXP, SEXP controlSEXP, SEXP interval_censSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type initials(initialsSEXP);
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< List >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< List >::type Covs(CovsSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< bool >::type interval_cens(interval_censSEXP);
    rcpp_result_gen = Rcpp::wrap(lap_rwm_C(initials, Data, priors, scales, Covs, control, interval_cens));
    return rcpp_result_gen;
END_RCPP
}
// lap_rwm_C_woRE
List lap_rwm_C_woRE(List initials, List Data, List priors, List scales, List Covs, List control);
RcppExport SEXP _JMbayes_lap_rwm_C_woRE(SEXP initialsSEXP, SEXP DataSEXP, SEXP priorsSEXP, SEXP scalesSEXP, SEXP CovsSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type initials(initialsSEXP);
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< List >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< List >::type Covs(CovsSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(lap_rwm_C_woRE(initials, Data, priors, scales, Covs, control));
    return rcpp_result_gen;
END_RCPP
}
// lap_rwm_C_woRE_nogammas
List lap_rwm_C_woRE_nogammas(List initials, List Data, List priors, List scales, List Covs, List control);
RcppExport SEXP _JMbayes_lap_rwm_C_woRE_nogammas(SEXP initialsSEXP, SEXP DataSEXP, SEXP priorsSEXP, SEXP scalesSEXP, SEXP CovsSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type initials(initialsSEXP);
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type priors(priorsSEXP);
    Rcpp::traits::input_parameter< List >::type scales(scalesSEXP);
    Rcpp::traits::input_parameter< List >::type Covs(CovsSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(lap_rwm_C_woRE_nogammas(initials, Data, priors, scales, Covs, control));
    return rcpp_result_gen;
END_RCPP
}
// logPosterior
double logPosterior(double temp, arma::vec event, arma::uvec idGK_fast, arma::mat W1, arma::mat W1s, arma::vec Bs_gammas, arma::mat W2, arma::mat W2s, arma::vec gammas, arma::mat Wlong, arma::mat Wlongs, arma::vec alphas, arma::vec Pw, arma::vec mean_Bs_gammas, arma::mat Tau_Bs_gammas, arma::vec mean_gammas, arma::mat Tau_gammas, arma::vec mean_alphas, arma::mat Tau_alphas, double tauBs, double A_tauBs, double B_tauBs);
RcppExport SEXP _JMbayes_logPosterior(SEXP tempSEXP, SEXP eventSEXP, SEXP idGK_fastSEXP, SEXP W1SEXP, SEXP W1sSEXP, SEXP Bs_gammasSEXP, SEXP W2SEXP, SEXP W2sSEXP, SEXP gammasSEXP, SEXP WlongSEXP, SEXP WlongsSEXP, SEXP alphasSEXP, SEXP PwSEXP, SEXP mean_Bs_gammasSEXP, SEXP Tau_Bs_gammasSEXP, SEXP mean_gammasSEXP, SEXP Tau_gammasSEXP, SEXP mean_alphasSEXP, SEXP Tau_alphasSEXP, SEXP tauBsSEXP, SEXP A_tauBsSEXP, SEXP B_tauBsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event(eventSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type idGK_fast(idGK_fastSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1s(W1sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Bs_gammas(Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W2(W2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W2s(W2sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gammas(gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlong(WlongSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlongs(WlongsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pw(PwSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_Bs_gammas(mean_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_Bs_gammas(Tau_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_gammas(mean_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_gammas(Tau_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_alphas(mean_alphasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_alphas(Tau_alphasSEXP);
    Rcpp::traits::input_parameter< double >::type tauBs(tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type A_tauBs(A_tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type B_tauBs(B_tauBsSEXP);
    rcpp_result_gen = Rcpp::wrap(logPosterior(temp, event, idGK_fast, W1, W1s, Bs_gammas, W2, W2s, gammas, Wlong, Wlongs, alphas, Pw, mean_Bs_gammas, Tau_Bs_gammas, mean_gammas, Tau_gammas, mean_alphas, Tau_alphas, tauBs, A_tauBs, B_tauBs));
    return rcpp_result_gen;
END_RCPP
}
// logPosterior_nogammas
double logPosterior_nogammas(double temp, arma::vec event, arma::uvec idGK_fast, arma::mat W1, arma::mat W1s, arma::vec Bs_gammas, arma::mat Wlong, arma::mat Wlongs, arma::vec alphas, arma::vec Pw, arma::vec mean_Bs_gammas, arma::mat Tau_Bs_gammas, arma::vec mean_alphas, arma::mat Tau_alphas, double tauBs, double A_tauBs, double B_tauBs);
RcppExport SEXP _JMbayes_logPosterior_nogammas(SEXP tempSEXP, SEXP eventSEXP, SEXP idGK_fastSEXP, SEXP W1SEXP, SEXP W1sSEXP, SEXP Bs_gammasSEXP, SEXP WlongSEXP, SEXP WlongsSEXP, SEXP alphasSEXP, SEXP PwSEXP, SEXP mean_Bs_gammasSEXP, SEXP Tau_Bs_gammasSEXP, SEXP mean_alphasSEXP, SEXP Tau_alphasSEXP, SEXP tauBsSEXP, SEXP A_tauBsSEXP, SEXP B_tauBsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event(eventSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type idGK_fast(idGK_fastSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1s(W1sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Bs_gammas(Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlong(WlongSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlongs(WlongsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pw(PwSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_Bs_gammas(mean_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_Bs_gammas(Tau_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_alphas(mean_alphasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_alphas(Tau_alphasSEXP);
    Rcpp::traits::input_parameter< double >::type tauBs(tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type A_tauBs(A_tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type B_tauBs(B_tauBsSEXP);
    rcpp_result_gen = Rcpp::wrap(logPosterior_nogammas(temp, event, idGK_fast, W1, W1s, Bs_gammas, Wlong, Wlongs, alphas, Pw, mean_Bs_gammas, Tau_Bs_gammas, mean_alphas, Tau_alphas, tauBs, A_tauBs, B_tauBs));
    return rcpp_result_gen;
END_RCPP
}
// gradient_logPosterior
arma::vec gradient_logPosterior(double temp, arma::vec event, arma::uvec idGK_fast, arma::vec event_colSumsW1, arma::mat W1s, arma::vec Bs_gammas, arma::vec event_colSumsW2, arma::mat W2s, arma::vec gammas, arma::vec event_colSumsWlong, arma::mat Wlongs, arma::vec alphas, arma::vec Pw, arma::vec mean_Bs_gammas, arma::mat Tau_Bs_gammas, arma::vec mean_gammas, arma::mat Tau_gammas, arma::vec mean_alphas, arma::mat Tau_alphas, double tauBs, double A_tauBs, double B_tauBs);
RcppExport SEXP _JMbayes_gradient_logPosterior(SEXP tempSEXP, SEXP eventSEXP, SEXP idGK_fastSEXP, SEXP event_colSumsW1SEXP, SEXP W1sSEXP, SEXP Bs_gammasSEXP, SEXP event_colSumsW2SEXP, SEXP W2sSEXP, SEXP gammasSEXP, SEXP event_colSumsWlongSEXP, SEXP WlongsSEXP, SEXP alphasSEXP, SEXP PwSEXP, SEXP mean_Bs_gammasSEXP, SEXP Tau_Bs_gammasSEXP, SEXP mean_gammasSEXP, SEXP Tau_gammasSEXP, SEXP mean_alphasSEXP, SEXP Tau_alphasSEXP, SEXP tauBsSEXP, SEXP A_tauBsSEXP, SEXP B_tauBsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event(eventSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type idGK_fast(idGK_fastSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event_colSumsW1(event_colSumsW1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1s(W1sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Bs_gammas(Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event_colSumsW2(event_colSumsW2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W2s(W2sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gammas(gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event_colSumsWlong(event_colSumsWlongSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlongs(WlongsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pw(PwSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_Bs_gammas(mean_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_Bs_gammas(Tau_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_gammas(mean_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_gammas(Tau_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_alphas(mean_alphasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_alphas(Tau_alphasSEXP);
    Rcpp::traits::input_parameter< double >::type tauBs(tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type A_tauBs(A_tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type B_tauBs(B_tauBsSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_logPosterior(temp, event, idGK_fast, event_colSumsW1, W1s, Bs_gammas, event_colSumsW2, W2s, gammas, event_colSumsWlong, Wlongs, alphas, Pw, mean_Bs_gammas, Tau_Bs_gammas, mean_gammas, Tau_gammas, mean_alphas, Tau_alphas, tauBs, A_tauBs, B_tauBs));
    return rcpp_result_gen;
END_RCPP
}
// gradient_logPosterior_nogammas
arma::vec gradient_logPosterior_nogammas(double temp, arma::vec event, arma::uvec idGK_fast, arma::vec event_colSumsW1, arma::mat W1s, arma::vec Bs_gammas, arma::vec event_colSumsWlong, arma::mat Wlongs, arma::vec alphas, arma::vec Pw, arma::vec mean_Bs_gammas, arma::mat Tau_Bs_gammas, arma::vec mean_alphas, arma::mat Tau_alphas, double tauBs, double A_tauBs, double B_tauBs);
RcppExport SEXP _JMbayes_gradient_logPosterior_nogammas(SEXP tempSEXP, SEXP eventSEXP, SEXP idGK_fastSEXP, SEXP event_colSumsW1SEXP, SEXP W1sSEXP, SEXP Bs_gammasSEXP, SEXP event_colSumsWlongSEXP, SEXP WlongsSEXP, SEXP alphasSEXP, SEXP PwSEXP, SEXP mean_Bs_gammasSEXP, SEXP Tau_Bs_gammasSEXP, SEXP mean_alphasSEXP, SEXP Tau_alphasSEXP, SEXP tauBsSEXP, SEXP A_tauBsSEXP, SEXP B_tauBsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event(eventSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type idGK_fast(idGK_fastSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event_colSumsW1(event_colSumsW1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W1s(W1sSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Bs_gammas(Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type event_colSumsWlong(event_colSumsWlongSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Wlongs(WlongsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Pw(PwSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_Bs_gammas(mean_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_Bs_gammas(Tau_Bs_gammasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean_alphas(mean_alphasSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau_alphas(Tau_alphasSEXP);
    Rcpp::traits::input_parameter< double >::type tauBs(tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type A_tauBs(A_tauBsSEXP);
    Rcpp::traits::input_parameter< double >::type B_tauBs(B_tauBsSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_logPosterior_nogammas(temp, event, idGK_fast, event_colSumsW1, W1s, Bs_gammas, event_colSumsWlong, Wlongs, alphas, Pw, mean_Bs_gammas, Tau_Bs_gammas, mean_alphas, Tau_alphas, tauBs, A_tauBs, B_tauBs));
    return rcpp_result_gen;
END_RCPP
}
// log_post_RE_svft
arma::vec log_post_RE_svft(arma::vec b, List Data);
RcppExport SEXP _JMbayes_log_post_RE_svft(SEXP bSEXP, SEXP DataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    rcpp_result_gen = Rcpp::wrap(log_post_RE_svft(b, Data));
    return rcpp_result_gen;
END_RCPP
}
// survPred_svft_2
arma::vec survPred_svft_2(arma::vec b, List Data);
RcppExport SEXP _JMbayes_survPred_svft_2(SEXP bSEXP, SEXP DataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    rcpp_result_gen = Rcpp::wrap(survPred_svft_2(b, Data));
    return rcpp_result_gen;
END_RCPP
}
