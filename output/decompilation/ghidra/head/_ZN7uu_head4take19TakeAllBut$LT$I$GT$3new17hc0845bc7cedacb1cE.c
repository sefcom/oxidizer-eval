undefined8 *
_ZN7uu_head4take19TakeAllBut_LT_I_GT_3new17hc0845bc7cedacb1cE
          (undefined8 *param_1,undefined8 param_2,undefined param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_88 = 0;
  local_80 = 8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = param_2;
  local_90 = param_3;
  local_68 = param_4;
  if (param_4 != 0) {
    uVar1 = 0;
    do {
      uVar1 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                        (uVar1);
                    /* try { // try from 001c452b to 001c4568 has its CatchHandler @ 001c45b3 */
      _ZN98__LT_uucore__features__lines__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he245392b5a345364E
                (&local_60,&local_98);
      if (CONCAT44(uStack_5c,local_60) == -0x7fffffffffffffff) break;
      local_38 = local_50;
      local_48 = local_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      _ZN6uucore8features10ringbuffer19RingBuffer_LT_T_GT_9push_back17hae07e5fa5289e66aE
                (&local_60,&local_88,&local_48);
      _ZN4core3ptr126drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_alloc__vec__Vec_LT_u8_GT__C_std__io__error__Error_GT__GT__GT_17h665ed2cb8fd55cebE
                (&local_60);
    } while (uVar1 < param_4);
  }
  param_1[4] = local_68;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
  *param_1 = local_88;
  param_1[1] = local_80;
  param_1[5] = local_98;
  *(undefined *)(param_1 + 6) = local_90;
  return param_1;
}