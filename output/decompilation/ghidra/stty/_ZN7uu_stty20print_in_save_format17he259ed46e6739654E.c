void _ZN7uu_stty20print_in_save_format17he259ed46e6739654E(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined extraout_DL;
  undefined uVar4;
  undefined extraout_DL_00;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined **local_b0;
  undefined *local_a8;
  undefined4 **local_a0;
  undefined *local_98;
  undefined4 *puStack_90;
  undefined *local_88;
  undefined4 **local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined *local_38;
  
  local_b8 = *(undefined4 *)(param_1 + 0xd);
  local_b4 = *(undefined4 *)((long)param_1 + 0x6c);
  local_bc = *(undefined4 *)(param_1 + 0xe);
  local_40 = (undefined4 *)CONCAT44(local_40._4_4_,*(undefined4 *)((long)param_1 + 0x74));
  local_b0 = (undefined **)&local_b8;
  local_a8 = 
  PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u32_GT_3fmt17ha24fdfb39cc71271E_001eaf58
  ;
  local_a0 = (undefined4 **)&local_b4;
  local_98 = 
  PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u32_GT_3fmt17ha24fdfb39cc71271E_001eaf58
  ;
  puStack_90 = &local_bc;
  local_88 = 
  PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u32_GT_3fmt17ha24fdfb39cc71271E_001eaf58
  ;
  local_78 = 
  PTR__ZN4core3fmt3num53__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u32_GT_3fmt17ha24fdfb39cc71271E_001eaf58
  ;
  local_70 = &DAT_001e2f68;
  local_68 = 4;
  local_50 = 0;
  local_60 = &local_b0;
  uStack_58 = 4;
  local_80 = &local_40;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_70);
  local_60 = (undefined ***)*param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[2];
  uStack_48 = *(undefined4 *)(param_1 + 3);
  uStack_44 = *(undefined4 *)((long)param_1 + 0x1c);
  local_70 = (undefined *)0x0;
  local_68 = 0x20;
  uVar3 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hc81e3e552d30d6ceE
                    (&local_70);
  puVar2 = 
  PTR__ZN4core3fmt3num52__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_i8_GT_3fmt17hb8ba8748e41ecb7bE_001eaf60
  ;
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30;
  if ((uVar3 & 1) != 0) {
    uVar4 = extraout_DL;
    do {
      local_bc = CONCAT31(local_bc._1_3_,uVar4);
      local_40 = &local_bc;
      local_38 = puVar2;
      local_b0 = &PTR_s___001e2fa8;
      local_a8 = (undefined *)0x1;
      puStack_90 = (undefined4 *)0x0;
      local_98 = (undefined *)0x1;
      local_a0 = &local_40;
      (*(code *)puVar1)(&local_b0);
      uVar3 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17hc81e3e552d30d6ceE
                        (&local_70);
      uVar4 = extraout_DL_00;
    } while ((uVar3 & 1) != 0);
  }
  local_b0 = &PTR_s__001e2ac0;
  local_a8 = (undefined *)0x1;
  local_a0 = (undefined4 **)0x8;
  local_98 = (undefined *)0x0;
  puStack_90 = (undefined4 *)0x0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_b0);
  return;
}