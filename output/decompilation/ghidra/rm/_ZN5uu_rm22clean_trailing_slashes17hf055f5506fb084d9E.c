undefined  [16] _ZN5uu_rm22clean_trailing_slashes17hf055f5506fb084d9E(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined auVar2 [16];
  ulong uVar3;
  undefined auVar4 [16];
  undefined8 local_40;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  undefined local_18;
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_2;
  if ((1 < param_2) && (auVar4 = auVar2, *(char *)(param_1 + -1 + param_2) == '/')) {
    uVar3 = param_2;
    do {
      local_20 = param_2 - 1;
      if (uVar3 < 2) break;
      local_20 = uVar3 - 1;
      pcVar1 = (char *)(param_1 + -2 + uVar3);
      uVar3 = local_20;
    } while (*pcVar1 == '/');
    local_28 = 0;
    local_18 = 0;
                    /* try { // try from 0015eeed to 0015eefc has its CatchHandler @ 0015ef1b */
    auVar4 = _ZN115__LT_core__ops__range__RangeInclusive_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9243e1a17a31bdc5E
                       (&local_28,param_1,param_2);
  }
  _ZN4core3ptr128drop_in_place_LT_core__result__Result_LT__RF__u5b_u8_u5d__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h161a4a1502d63dd1E
            (&local_40);
  return auVar4;
}