undefined  [16] _ZN6uu_env20apply_unset_env_vars17h38498305449b9d8fE(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  puVar3 = PTR__ZN6uu_env14native_int_str9NativeStr8contains17hb8fde7d27ed4d3f1E_002192d8;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28) << 4;
    do {
      uVar1 = *puVar8;
      local_70 = puVar8[1];
      local_80 = 0x8000000000000000;
      local_78 = uVar1;
      if (local_70 == 0) {
LAB_001753b3:
        local_60 = *puVar8;
        local_58 = puVar8[1];
        local_68 = 1;
        local_50 = 1;
        local_90 = &local_68;
        local_88 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
        ;
        local_c8 = &PTR_DAT_00210c38;
        uStack_c0 = 2;
        local_a8 = 0;
        local_b8 = &local_90;
        local_b0 = 1;
                    /* try { // try from 0017541a to 00175492 has its CatchHandler @ 00175497 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(local_48,&local_c8);
        local_b0 = CONCAT44(local_b0._4_4_,0x7d);
        local_b8 = (undefined8 **)local_38;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(&local_c8);
        _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17h6fa88c11416956acE
                  (0x8000000000000000,uVar1);
        goto LAB_00175464;
      }
                    /* try { // try from 0017535d to 00175396 has its CatchHandler @ 00175495 */
      bVar4 = (*(code *)puVar3)(&local_80,&DAT_0011c740);
      if (bVar4 == 2) {
        ppuVar7 = &PTR_DAT_00210c58;
LAB_0017548d:
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002194b0)(ppuVar7);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((bVar4 & 1) != 0) goto LAB_001753b3;
      bVar4 = (*(code *)puVar3)(&local_80,&DAT_0011c7fc);
      if (bVar4 == 2) {
        ppuVar7 = &PTR_DAT_00210c70;
        goto LAB_0017548d;
      }
      if ((bVar4 & 1) != 0) goto LAB_001753b3;
      _ZN3std3env10remove_var17h2faae5d651d19217E(puVar8);
      puVar8 = puVar8 + 2;
      _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17h6fa88c11416956acE
                (0x8000000000000000,uVar1);
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  uVar5 = 0;
LAB_00175464:
  auVar9._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
  ;
  auVar9._0_8_ = uVar5;
  return auVar9;
}