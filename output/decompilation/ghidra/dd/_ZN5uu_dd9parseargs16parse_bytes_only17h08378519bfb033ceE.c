void _ZN5uu_dd9parseargs16parse_bytes_only17h08378519bfb033ceE
               (undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined uVar2;
  char local_28 [8];
  undefined8 local_20;
  
  if (param_4 != 0) {
    uVar2 = param_4 == param_3;
    if (param_3 <= param_4) goto LAB_001d4588;
    if (*(char *)(param_2 + param_4) < -0x40) {
      do {
        uVar2 = 1;
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE(param_2,param_3);
LAB_001d4588:
      } while (!(bool)uVar2);
    }
  }
  _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u64_GT_8from_str17h29411471c0770b67E
            (local_28,param_2,param_4);
  if (local_28[0] == '\0') {
    param_1[1] = local_20;
    uVar1 = 0xe;
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h778f954dace7b409E
              (param_1 + 1,param_2,param_3);
    uVar1 = 7;
  }
  *param_1 = uVar1;
  return;
}