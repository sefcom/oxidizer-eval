void _ZN3bat6assets12build_assets14asset_to_cache17h5a185e70a879210fE
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  code *local_60;
  undefined *local_58;
  code *local_50;
  undefined local_48 [24];
  
  local_90 = &DAT_00291b78;
  local_88 = 10;
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
            (local_48,param_3,param_4);
  local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
  local_50 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5fba9a975e51dcf1E;
  local_e0 = &PTR_DAT_007ce118;
  local_d8 = 3;
  uStack_c0 = 0;
  uStack_d0 = &local_68;
  local_c8 = 2;
                    /* try { // try from 005348a0 to 005348aa has its CatchHandler @ 005349d8 */
  local_68 = &local_90;
  local_58 = local_48;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_e0);
  _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
            (local_48);
  _ZN3bat6assets12build_assets17asset_to_contents17h188d9b0cd47c3257E
            (&local_e0,param_2,local_90,local_88);
  pppuVar3 = uStack_d0;
  uVar2 = local_d8;
  if ((char)local_e0 == '\r') {
                    /* try { // try from 005348e7 to 005349a1 has its CatchHandler @ 005349c2 */
    lVar4 = _ZN3std2fs5write17hf735e059cac3a8ebE(param_3,param_4,uStack_d0,local_c8);
    local_80 = param_3;
    local_78 = param_4;
    local_70 = &local_90;
    if (lVar4 == 0) {
      local_e0 = &PTR_DAT_007ce0f8;
      local_d8 = 1;
      uStack_d0 = (undefined ***)&DAT_00000008;
      local_c8 = 0;
      uStack_c0 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_e0);
      *param_1 = '\r';
    }
    else {
      _ZN3bat6assets12build_assets14asset_to_cache28__u7b__u7b_closure_u7d__u7d_17h0a5908bf5a41a864E
                (&local_e0,&local_80,lVar4);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_d8;
      *(undefined4 *)(param_1 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_d0;
      *(undefined4 *)(param_1 + 0x1c) = uStack_d0._4_4_;
      *param_1 = '\v';
      *(undefined ***)(param_1 + 8) = local_e0;
    }
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E(uVar2,pppuVar3)
    ;
  }
  else {
    uVar1 = local_e0._1_4_;
    *(undefined4 *)(param_1 + 4) = local_e0._4_4_;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uStack_c0;
    *(undefined8 *)(param_1 + 0x28) = uStack_b8;
    *(undefined8 *)(param_1 + 0x30) = local_b0;
    *(undefined8 *)(param_1 + 0x38) = uStack_a8;
    *(undefined8 *)(param_1 + 0x40) = local_a0;
    *(undefined8 *)(param_1 + 0x48) = uStack_98;
    *param_1 = (char)local_e0;
    *(undefined8 *)(param_1 + 8) = local_d8;
    *(undefined ****)(param_1 + 0x10) = uStack_d0;
    *(undefined8 *)(param_1 + 0x18) = local_c8;
  }
  return;
}