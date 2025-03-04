long _ZN5uu_dd11BlockWriter8truncate17haed78b6dd922a309E(long *param_1)

{
  long local_8;
  
  if (*param_1 == -0x8000000000000000) {
    local_8 = _ZN5uu_dd6Output8truncate17h03e8e893bfb9669aE(param_1 + 1);
  }
  else {
    local_8 = _ZN5uu_dd14bufferedoutput14BufferedOutput8truncate17h2d9d362dd2e62035E();
  }
  if (local_8 != 0) {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hdf0c997779a17efcE
              (&local_8);
  }
  return local_8;
}