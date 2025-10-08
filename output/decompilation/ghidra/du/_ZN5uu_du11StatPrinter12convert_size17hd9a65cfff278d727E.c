undefined8 *
_ZN5uu_du11StatPrinter12convert_size17hd9a65cfff278d727E
          (undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined auVar7 [16];
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined local_1c [20];
  
  if (*(long *)(param_2 + 0x20) == 0) {
    cVar6 = '\x02';
  }
  else {
    if ((int)*(long *)(param_2 + 0x20) != 1) {
      if (*(char *)(param_2 + 0x49) == '\0') {
        uVar1 = *(ulong *)(param_2 + 0x28);
        if (uVar1 == 0) {
          uStack_40 = 0x197ffd;
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0024ebd0
          )(&PTR_s_src_uu_du_src_du_rs_00245e48);
          pcVar2 = (code *)swi(3);
          puVar5 = (undefined8 *)(*pcVar2)();
          return puVar5;
        }
        if ((param_3 | uVar1) >> 0x20 == 0) {
          uVar3 = (param_3 & 0xffffffff) / (uVar1 & 0xffffffff);
          param_3 = (param_3 & 0xffffffff) % (uVar1 & 0xffffffff);
        }
        else {
          uVar3 = param_3 / uVar1;
          param_3 = param_3 % uVar1;
        }
        param_3 = (uVar3 + 1) - (ulong)(param_3 == 0);
      }
      uStack_40 = 0x197fcf;
      uVar4 = (*(code *)
                PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_0024ebc8)
                        (param_3,local_1c,0x14);
      uStack_40 = 0x197fda;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hac1b67b8d5e5f2cfE
                (&local_38,uVar4);
      param_1[2] = local_28;
      *param_1 = local_38;
      param_1[1] = uStack_30;
      return local_28;
    }
    cVar6 = '\x01';
  }
  if (cVar6 == '\0') {
    uVar4 = (*(code *)
              PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_0024ebc8)
                      (param_3,(long)&local_28 + 4,0x14);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hb2580dcf78e37554E
              (&uStack_40,uVar4);
    param_1[2] = uStack_30;
    *param_1 = uStack_40;
    param_1[1] = local_38;
  }
  else {
    auVar7._8_4_ = (int)(param_3 >> 0x20);
    auVar7._0_8_ = param_3;
    auVar7._12_4_ = DAT_0011d610._4_4_;
    if (cVar6 == '\x01') {
      uVar4 = 0xf0e0d0c0b0a0908;
    }
    else {
      uVar4 = 0x706050403020100;
    }
    _ZN13number_prefix21NumberPrefix_LT_F_GT_13format_number17h9734e2c122cba20dE
              (SUB84((auVar7._8_8_ - _UNK_0011d5b8) +
                     ((double)CONCAT44((undefined4)DAT_0011d610,(int)param_3) - _DAT_0011d5b0),0),
               &uStack_40,uVar4);
    _ZN6uucore8features6format5human15format_prefixed17hf3ca2952ac04d743E(param_1,&uStack_40);
  }
  return param_1;
}