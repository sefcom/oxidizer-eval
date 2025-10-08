void _ZN11forc_crypto4args18checked_read_stdin17hc53103be1c9a90d0E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  undefined8 local_50;
  undefined local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined local_28 [16];
  
  local_50 = param_3;
  local_48 = param_4;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h09355c4e98f03c42E
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),"-",1);
  if (cVar1 == '\0') {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_40 = 0;
    uStack_38 = 1;
    local_30 = 0;
                    /* try { // try from 004f8eed to 004f8f42 has its CatchHandler @ 004f8f82 */
    local_28 = (*(code *)
                 PTR__ZN59__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__Read_GT_11read_to_end17h6849e76cba1f4991E_00786f00
               )(&local_50,&local_40);
    if (local_28._0_8_ == 0) {
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h464439431eabac81E
                (local_28);
      param_1[2] = local_30;
      *(undefined4 *)param_1 = (undefined4)local_40;
      *(undefined4 *)((long)param_1 + 4) = local_40._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_38;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_38._4_4_;
      param_3 = local_50;
      param_4 = local_48;
    }
    else {
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h464439431eabac81E
                (local_28);
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1ce0757ff70a3f4fE(&local_40);
      param_3 = local_50;
      param_4 = local_48;
    }
  }
  _ZN4core3ptr185drop_in_place_LT_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT_regex_automata__meta__regex__Cache_GT__GT__GT__GT__GT_17h0454c590a9fc4181E
            (param_3,param_4);
  return;
}