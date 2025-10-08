undefined  [16]
_ZN6uu_env22apply_change_directory17h373f6259ae5e3a21E
          (long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined *local_60;
  long *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined local_30;
  undefined local_28 [16];
  undefined8 local_18;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0 && *(long *)(param_1 + 0x58) == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
              (&local_98,&DAT_0011ed30,0x26);
    local_80 = CONCAT44(local_80._4_4_,0x7d);
    auVar4._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(&local_98);
    auVar4._8_8_ = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002107e8
    ;
    return auVar4;
  }
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    auVar4 = _ZN3std3env15set_current_dir17ha8bb603cfe1cfdeeE(lVar1,uVar2);
    param_3 = auVar4._8_8_;
    local_a0 = auVar4._0_8_;
    if (local_a0 != 0) {
      local_48 = 1;
      local_30 = 1;
      local_68 = &local_48;
      local_60 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
      ;
      local_58 = &local_a0;
      local_50 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00219290
      ;
      local_98 = &PTR_DAT_00210c88;
      uStack_90 = 2;
      local_78 = 0;
      local_88 = &local_68;
      local_80 = 2;
                    /* try { // try from 00175572 to 001755af has its CatchHandler @ 0017561a */
      local_40 = lVar1;
      local_38 = uVar2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(local_28,&local_98);
      local_80 = CONCAT44(local_80._4_4_,0x7d);
      local_88 = (undefined8 **)local_18;
      auVar5._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(&local_98);
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h4de596a2959b6a4fE(&local_a0);
      auVar5._8_8_ = &
                     PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
      ;
      return auVar5;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3 << 0x40;
}