void _ZN5uu_ls19display_len_or_rdev17h54f0966b5b04a08aE
               (undefined8 *param_1,long param_2,ulong param_3,undefined param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined local_22 [10];
  
  puVar1 = PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_0048fec0;
  if ((*(uint *)(param_2 + 0x38) & 0xb000 | 0x4000) == 0x6000) {
    uVar4 = *(ulong *)(param_2 + 0x48);
    uVar2 = (*(code *)
              PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_0048fec0)
                      ((uint)(uVar4 >> 0x20) & 0xfffff000 | (uint)(uVar4 >> 8) & 0xfff,&local_40,10)
    ;
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
              (&local_58,uVar2);
                    /* try { // try from 0029e403 to 0029e41f has its CatchHandler @ 0029e4a2 */
    uVar2 = (*(code *)puVar1)((uint)(uVar4 >> 0xc) & 0xffffff00 | (uint)uVar4 & 0xff,local_22,10);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
              (&local_40,uVar2);
    param_1[5] = local_30;
    param_1[3] = local_40;
    param_1[4] = uStack_38;
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = uStack_50;
  }
  else {
    if (param_3 == 0) {
      uVar2 = (*(code *)
                PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_0048fd38
              )(&PTR_s_src_uu_ls_src_ls_rs_00386d28);
                    /* catch() { ... } // from try @ 0029e403 with catch @ 0029e4a2 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_58);
      _Unwind_Resume(uVar2);
      return;
    }
    uVar4 = *(ulong *)(param_2 + 0x50);
    if ((uVar4 | param_3) >> 0x20 == 0) {
      uVar3 = (uVar4 & 0xffffffff) / (param_3 & 0xffffffff);
      uVar4 = (uVar4 & 0xffffffff) % (param_3 & 0xffffffff);
    }
    else {
      uVar3 = uVar4 / param_3;
      uVar4 = uVar4 % param_3;
    }
    _ZN5uu_ls12display_size17hb2e480a0d8619531E
              (param_1 + 1,(uVar3 + 1) - (ulong)(uVar4 == 0),param_4);
    *param_1 = 0x8000000000000000;
  }
  return;
}