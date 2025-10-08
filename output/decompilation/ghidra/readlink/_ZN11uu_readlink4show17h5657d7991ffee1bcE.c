void _ZN11uu_readlink4show17h5657d7991ffee1bcE(undefined8 param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  char local_69;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ee800)
            (&local_68,param_1,param_2);
  if ((int)local_68 != 1) {
    local_28 = (undefined4)local_60;
    uStack_24 = local_60._4_4_;
    uStack_20 = (undefined4)uStack_58;
    uStack_1c = uStack_58._4_4_;
    local_38 = (char *)&local_28;
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hae5a03900170492fE;
    local_68 = &DAT_00117ae0;
    local_60 = 1;
    local_48 = 0;
    local_50 = 1;
    uStack_58 = &local_38;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eea38)(&local_68);
    if (param_3 != '\v') {
      local_38 = &local_69;
      local_30 = (code *)
                 PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_001eea40
      ;
      local_68 = &DAT_00117ae0;
      local_60 = 1;
      local_48 = 0;
      local_50 = 1;
      local_69 = param_3;
      uStack_58 = &local_38;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eea38)(&local_68);
    }
    local_68 = (undefined *)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ee9d8)();
    (*(code *)
      PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_001ee9e0
    )(&local_68);
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ee988)(&PTR_DAT_001e7fd8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}