void _ZN5uu_wc5Input8to_title17hf944d4f2d9388afeE(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_48;
  long local_40;
  long local_38;
  
  if (*param_2 != -0x7fffffffffffffff) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
              (&local_48,lVar1,lVar2);
    lVar6 = local_38;
    lVar5 = local_40;
    if ((local_48 != 0) ||
       (cVar3 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                          (local_40,local_38), lVar4 = -0x8000000000000000, cVar3 != '\0')) {
      _ZN6uucore8features13quoting_style11escape_name17ha9b5831150e16363E
                (&local_48,lVar1,lVar2,
                 &anon_7c7385208ddd1e4e4d864dc74576bdf1_19_llvm_3329604763963259673);
      lVar4 = local_48;
      lVar5 = local_40;
      lVar6 = local_38;
    }
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar6;
    return;
  }
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = -0x7fffffffffffffff;
    return;
  }
  *param_1 = -0x8000000000000000;
  param_1[1] = (long)&DAT_0011e2e7;
  param_1[2] = 1;
  return;
}