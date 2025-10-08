long _ZN10uu_hashsum6uu_app17hd115e3ccac06eb0bE(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                    (param_2,param_3,"md5sum",6);
  if ((((cVar1 == '\0') &&
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                          (param_2,param_3,"sha1sum",7), cVar1 == '\0')) &&
      (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                         (param_2,param_3,"sha224sum",9), cVar1 == '\0')) &&
     (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                          (param_2,param_3,"sha256sum",9), cVar1 == '\0' &&
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                          (param_2,param_3,"sha384sum",9), cVar1 == '\0')) &&
      (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                         (param_2,param_3,"sha512sum",9), cVar1 == '\0')))) {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                      (param_2,param_3,"b2sum",5);
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN10uu_hashsum13uu_app_length17h30e6017986078ce7E_0025af28)(param_1);
      goto LAB_0018369d;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                      (param_2,param_3,"sha3-224sum",0xb);
    if (((cVar1 == '\0') &&
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                           (param_2,param_3,"sha3-256sum",0xb), cVar1 == '\0')) &&
       ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                           (param_2,param_3,"sha3-384sum",0xb), cVar1 == '\0' &&
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                           (param_2,param_3,"sha3-512sum",0xb), cVar1 == '\0')))) {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                        (param_2,param_3,"sha3sum",7);
      if (((cVar1 == '\0') &&
          (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                             (param_2,param_3,"shake128sum",0xb), cVar1 == '\0')) &&
         (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                            (param_2,param_3,"shake256sum",0xb), cVar1 == '\0')) {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1a4f6e56f6132b9bE
                          (param_2,param_3,"b3sum",5);
        if (cVar1 == '\0') {
          (*(code *)PTR__ZN10uu_hashsum13uu_app_custom17h3a63177c817a427eE_0025af40)(param_1);
          *(undefined *)(param_1 + 0x2c8) = 1;
          return param_1;
        }
        (*(code *)PTR__ZN10uu_hashsum12uu_app_b3sum17hff277f31cb1bc261E_0025af30)();
      }
      else {
        (*(code *)PTR__ZN10uu_hashsum11uu_app_bits17h94948ede73a9a318E_0025af38)(param_1);
      }
      goto LAB_0018369d;
    }
  }
  (*(code *)PTR__ZN10uu_hashsum13uu_app_common17he3603fb037840435E_0025af18)(param_1);
LAB_0018369d:
  *(undefined *)(param_1 + 0x2c8) = 0;
  return param_1;
}