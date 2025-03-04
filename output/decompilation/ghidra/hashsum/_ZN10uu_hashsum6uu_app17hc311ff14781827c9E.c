long _ZN10uu_hashsum6uu_app17hc311ff14781827c9E(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                    (param_2,param_3,"md5sum",6);
  if ((((cVar1 == '\0') &&
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                          (param_2,param_3,"sha1sum",7), cVar1 == '\0')) &&
      (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                         (param_2,param_3,"sha224sum",9), cVar1 == '\0')) &&
     (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                          (param_2,param_3,"sha256sum",9), cVar1 == '\0' &&
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                          (param_2,param_3,"sha384sum",9), cVar1 == '\0')) &&
      (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                         (param_2,param_3,"sha512sum",9), cVar1 == '\0')))) {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                      (param_2,param_3,"b2sum",5);
    if (cVar1 != '\0') {
      _ZN10uu_hashsum13uu_app_length17hb583261ee85cbb7dE(param_1);
      goto LAB_002db8ec;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                      (param_2,param_3,"sha3-224sum",0xb);
    if (((cVar1 == '\0') &&
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                           (param_2,param_3,"sha3-256sum",0xb), cVar1 == '\0')) &&
       ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                           (param_2,param_3,"sha3-384sum",0xb), cVar1 == '\0' &&
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                           (param_2,param_3,"sha3-512sum",0xb), cVar1 == '\0')))) {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                        (param_2,param_3,"sha3sum",7);
      if (((cVar1 == '\0') &&
          (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                             (param_2,param_3,"shake128sum",0xb), cVar1 == '\0')) &&
         (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                            (param_2,param_3,"shake256sum",0xb), cVar1 == '\0')) {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h375640a597df572fE
                          (param_2,param_3,"b3sum",5);
        if (cVar1 == '\0') {
          _ZN10uu_hashsum13uu_app_custom17h877f20130ce52e37E(param_1);
          *(undefined *)(param_1 + 0x2c8) = 1;
          return param_1;
        }
        _ZN10uu_hashsum12uu_app_b3sum17hcc6efb9f0c7b8147E();
      }
      else {
        _ZN10uu_hashsum11uu_app_bits17h22b67f9230d9f8ccE(param_1);
      }
      goto LAB_002db8ec;
    }
  }
  _ZN10uu_hashsum13uu_app_common17haf156add4ae409e5E(param_1);
LAB_002db8ec:
  *(undefined *)(param_1 + 0x2c8) = 0;
  return param_1;
}