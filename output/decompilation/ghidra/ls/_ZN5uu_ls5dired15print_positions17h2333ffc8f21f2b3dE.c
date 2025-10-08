void _ZN5uu_ls5dired15print_positions17h2333ffc8f21f2b3dE
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_68 = (undefined *)&local_88;
  local_88 = &local_40;
  local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
  local_78 = (undefined **)&DAT_001cf290;
  local_70 = 1;
  uStack_58 = 0;
  local_60 = 1;
  local_40 = param_1;
  local_38 = param_2;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0048fd60)(&local_78);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0048fd60;
  if (param_4 != 0) {
    param_4 = param_4 << 4;
    do {
      local_88 = &local_48;
      local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7bd7b977de236f2aE;
      local_78 = &PTR_s__003866f0;
      local_70 = 1;
      uStack_58 = 0;
      local_60 = 1;
      local_68 = (undefined *)&local_88;
      local_48 = param_3;
      (*(code *)puVar1)(&local_78);
      param_4 = param_4 + -0x10;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  local_78 = &PTR_s_OutOfRangeImpossibleNotEnoughInv_003866e0;
  local_70 = 1;
  local_68 = (undefined *)0x8;
  local_60 = 0;
  uStack_58 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0048fd60)(&local_78);
  return;
}