void _ZN5uu_od15multifilereader15MultifileReader9next_file17h88105f385025e3a3E(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_e8;
  byte local_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined local_d0 [16];
  undefined local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0020aa90;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h89a38a1f2036b4c0E(&local_60,param_1);
      if (local_60 != 0) {
        if ((int)local_60 != 1) {
          local_48 = local_58;
          uStack_44 = uStack_54;
          uStack_40 = uStack_50;
          uStack_3c = uStack_4c;
                    /* try { // try from 00168eef to 00168ef3 has its CatchHandler @ 00168f3e */
          _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4e787533bd43325dE
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_44,local_48);
          *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_3c,uStack_40);
          return;
        }
        (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_0020ac98)();
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6356c2b75d86a9fcE(0);
                    /* try { // try from 00168ed0 to 00168ed4 has its CatchHandler @ 00168f52 */
        _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4e787533bd43325dE
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
LAB_00168f1b:
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined ***)(param_1 + 0x20) =
             &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0071f75ba11171ffE_002024a0;
        return;
      }
      _ZN3std2fs4File4open17hdb0c190bcf23afb8E
                (local_e0,CONCAT44(uStack_54,local_58),CONCAT44(uStack_4c,uStack_50));
      if ((local_e0[0] & 1) == 0) {
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6356c2b75d86a9fcE(local_dc);
                    /* try { // try from 00168f16 to 00168f1a has its CatchHandler @ 00168f3c */
        _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4e787533bd43325dE
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        goto LAB_00168f1b;
      }
      local_e8 = local_d8;
                    /* try { // try from 00168db5 to 00168e83 has its CatchHandler @ 00168f7f */
      local_d0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0020aa88)();
      local_80 = (undefined8 *)local_d0;
      local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
      local_b0 = &DAT_00202438;
      local_a8 = 2;
      local_90 = 0;
      local_98 = 1;
      local_a0 = &local_80;
      (*(code *)puVar1)(&local_b0);
      local_d0._0_8_ = 0;
      local_b8 = 0;
      local_80 = (undefined8 *)local_d0;
      local_78 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0020ac90
      ;
      local_68 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0020aa98
      ;
      local_b0 = &DAT_00202458;
      local_a8 = 3;
      local_90 = 0;
      local_98 = 2;
      local_a0 = &local_80;
      local_70 = (undefined *)&local_e8;
      (*(code *)puVar1)(&local_b0);
      *(undefined *)(param_1 + 0x28) = 1;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h719d6e145fb1b245E(local_e8);
    } while (*(long *)(param_1 + 0x10) != 0);
  }
                    /* try { // try from 00168ea4 to 00168ea8 has its CatchHandler @ 00168f6c */
  _ZN4core3ptr95drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h4e787533bd43325dE
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}