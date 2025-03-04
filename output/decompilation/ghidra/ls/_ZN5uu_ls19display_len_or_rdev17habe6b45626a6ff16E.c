void _ZN5uu_ls19display_len_or_rdev17habe6b45626a6ff16E
               (undefined8 *param_1,long param_2,ulong param_3,undefined param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((*(uint *)(param_2 + 0x38) & 0xb000 | 0x4000) == 0x6000) {
    uVar3 = *(ulong *)(param_2 + 0x48);
    local_40 = (uint)(uVar3 >> 0x20) & 0xfffff000 | (uint)(uVar3 >> 8) & 0xfff;
    local_3c = (uint)(uVar3 >> 0xc) & 0xffffff00 | (uint)uVar3 & 0xff;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h7a7a803d5c9f4a1cE
              (&local_38,&local_40);
                    /* try { // try from 0022bf9f to 0022bfad has its CatchHandler @ 0022c02d */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h7a7a803d5c9f4a1cE
              (&local_20,&local_3c);
    param_1[2] = local_28;
    *param_1 = local_38;
    param_1[1] = uStack_30;
    param_1[3] = local_20;
    param_1[4] = uStack_18;
    param_1[5] = local_10;
  }
  else {
    if (param_3 == 0) {
      uVar2 = _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                        (&PTR_DAT_003129a0);
                    /* catch() { ... } // from try @ 0022bf9f with catch @ 0022c02d */
                    /* try { // try from 0022c030 to 0022c039 has its CatchHandler @ 0022c042 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_38);
      _Unwind_Resume(uVar2);
      return;
    }
    uVar3 = *(ulong *)(param_2 + 0x50);
    if ((uVar3 | param_3) >> 0x20 == 0) {
      uVar1 = (uVar3 & 0xffffffff) / (param_3 & 0xffffffff);
      uVar3 = (uVar3 & 0xffffffff) % (param_3 & 0xffffffff);
    }
    else {
      uVar1 = uVar3 / param_3;
      uVar3 = uVar3 % param_3;
    }
    _ZN5uu_ls12display_size17hba9b1cbdd7c6b199E(param_1,(uVar1 + 1) - (ulong)(uVar3 == 0),param_4);
    param_1[3] = 0x8000000000000000;
  }
  return;
}