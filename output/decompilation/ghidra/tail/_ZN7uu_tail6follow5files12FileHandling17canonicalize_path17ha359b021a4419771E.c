void _ZN7uu_tail6follow5files12FileHandling17canonicalize_path17ha359b021a4419771E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long local_30;
  long lStack_28;
  long local_20;
  
  cVar1 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E(param_2,param_3);
  if ((cVar1 == '\0') &&
     (cVar1 = _ZN63__LT_std__path__Path_u20_as_u20_uu_tail__paths__PathExtTail_GT_8is_stdin17h7b78c224abf6fd98E
                        (param_2,param_3), cVar1 == '\0')) {
    _ZN3std2fs12canonicalize17hd214f5c614fa2ecbE(&local_30,param_2,param_3);
    if (local_30 != -0x8000000000000000) {
      param_1[2] = local_20;
      *param_1 = local_30;
      param_1[1] = lStack_28;
      return;
    }
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h2718b16a2e13a805E
              (&local_30);
  }
  _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(param_1,param_2,param_3);
  return;
}