void _ZN5uu_dd14bufferedoutput14BufferedOutput12write_blocks17h5d07776a954ba78dE
               (ulong *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [2];
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x28) + 0x78);
  if (uVar1 != 0) {
    uVar3 = *(long *)(param_2 + 0x10) + param_4;
    if ((uVar3 | uVar1) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      uVar3 = uVar3 % uVar1;
    }
    lVar4 = 0;
    if (uVar3 <= param_4) {
      lVar4 = param_4 - uVar3;
    }
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h7e728461df3b0667E
              (&local_78,param_3,param_4,lVar4);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1c2f192315d36a70E
              (param_2,local_78,local_70 + local_78);
    _ZN5uu_dd6Output12write_blocks17hd1d1fad151688f0bE
              (local_58,param_2 + 0x18,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10))
    ;
    if (local_58[0] != 1) {
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_34;
      *(undefined4 *)(param_1 + 5) = uStack_30;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
      *(undefined4 *)(param_1 + 2) = local_48;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 3) = uStack_40;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_3c;
      *(undefined8 *)(param_2 + 0x10) = 0;
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1c2f192315d36a70E
                (param_2,local_68,local_60 + local_68);
    }
    else {
      param_1[1] = local_50;
    }
    *param_1 = (ulong)(local_58[0] == 1);
    return;
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_00246c10)
            (&PTR_s_src_uu_dd_src_bufferedoutput_rs_0023d788);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}