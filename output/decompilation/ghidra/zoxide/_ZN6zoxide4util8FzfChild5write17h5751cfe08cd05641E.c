void _ZN6zoxide4util8FzfChild5write17h5751cfe08cd05641E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(int *)(param_2 + 0x10) == -1) {
    uVar2 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0023b7b0)
                      (&PTR_s_src_util_rs_00234b58);
                    /* catch() { ... } // from try @ 00192a52 with catch @ 00192aea */
                    /* try { // try from 00192aed to 00192af6 has its CatchHandler @ 00192aff */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a90eb9fb31b0c2E(&local_80);
    _Unwind_Resume(uVar2);
    return;
  }
  local_38 = 1;
  local_20 = 9;
  local_48 = &local_38;
  local_40 = 
  _ZN66__LT_zoxide__db__dir__DirDisplay_u20_as_u20_core__fmt__Display_GT_3fmt17h4918ffab7531bc79E;
  local_78 = &DAT_002348e0;
  uStack_70 = 2;
  local_58 = 0;
  local_68 = &local_48;
  local_60 = 1;
  local_30 = param_4;
  local_28 = param_3;
  local_80 = _ZN3std2io5Write9write_fmt17hfcb550c4a28e0f86E(param_2 + 0x10,&local_78);
  if (local_80 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_80);
    if (cVar1 == '\v') {
                    /* try { // try from 00192a52 to 00192a5e has its CatchHandler @ 00192aea */
      _ZN6zoxide4util8FzfChild4wait17h58b549ee022416b6E(&local_78,param_2);
      param_1[2] = local_68;
      *(undefined4 *)param_1 = (undefined4)local_78;
      *(undefined4 *)((long)param_1 + 4) = local_78._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_70._4_4_;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc0a90eb9fb31b0c2E(&local_80);
    }
    else {
      local_78 = (undefined *)0x8000000000000001;
      uStack_70 = local_80;
      _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h0b576dad6fa188d6E
                (param_1,&local_78);
    }
  }
  return;
}