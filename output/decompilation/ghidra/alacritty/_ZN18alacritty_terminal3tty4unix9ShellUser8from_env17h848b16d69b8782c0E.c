void _ZN18alacritty_terminal3tty4unix9ShellUser8from_env17h848b16d69b8782c0E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  long local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined local_430 [1024];
  
  (*(code *)PTR_memset_009de510)(local_430,0,0x400);
  _ZN18alacritty_terminal3tty4unix12get_pw_entry17hc3ba737ab115be5aE(&local_460,local_430);
                    /* try { // try from 006bedf9 to 006bee0e has its CatchHandler @ 006bf0cf */
  _ZN3std3env3var17hc40ca77fbae151c0E(&local_4a8,&DAT_001ed61c,4);
  uVar2 = local_490;
  uVar3 = local_4a0;
  uVar4 = local_498;
  if (local_4a8 == 1) {
    if (local_460 == 0) {
      param_1[1] = local_458;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                (&local_4a8);
      return;
    }
                    /* try { // try from 006bee2d to 006bee36 has its CatchHandler @ 006bf082 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
              (&local_478,local_460,local_458);
    uVar2 = local_468;
    uVar4 = local_470;
    uVar3 = local_478;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
              (&local_4a8);
  }
                    /* try { // try from 006bee61 to 006bee76 has its CatchHandler @ 006bf0b3 */
  _ZN3std3env3var17hc40ca77fbae151c0E(&local_4a8,"HOME",4);
  if (local_4a8 == 1) {
    if (local_460 != 0) {
                    /* try { // try from 006bee98 to 006beea1 has its CatchHandler @ 006bf065 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                (&local_478,local_450,local_448);
      uVar1 = local_468;
      local_488 = local_478;
      local_480 = local_470;
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                (&local_4a8);
      goto LAB_006beee0;
    }
    param_1[1] = local_458;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
              (&local_4a8);
LAB_006bf034:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E(uVar3,uVar4);
  }
  else {
    local_488 = local_4a0;
    local_480 = local_498;
    uVar1 = local_490;
LAB_006beee0:
                    /* try { // try from 006beee0 to 006beef5 has its CatchHandler @ 006bf096 */
    _ZN3std3env3var17hc40ca77fbae151c0E(&local_4a8,"SHELL",5);
    if (local_4a8 == 1) {
      if (local_460 == 0) {
        param_1[1] = local_458;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                  (&local_4a8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
                  (local_488,local_480);
        goto LAB_006bf034;
      }
                    /* try { // try from 006bef29 to 006bef32 has its CatchHandler @ 006bf051 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
                (&local_478,local_440,local_438);
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h19b25d647e78b692E
                (&local_4a8);
      bVar5 = false;
    }
    else {
      bVar5 = local_460 == 0;
      local_470 = local_498;
      local_468 = local_490;
      local_478 = local_4a0;
    }
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    param_1[3] = local_488;
    param_1[4] = local_480;
    param_1[5] = uVar1;
    param_1[6] = local_478;
    param_1[7] = local_470;
    param_1[8] = local_468;
    if (bVar5) {
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h86469fc896c1a0d5E(local_458);
    }
  }
  return;
}