long _ZN8uu_shred9do_remove17he7f6ef1c114a8897E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5,char param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [16];
  undefined8 local_58;
  undefined local_50;
  undefined local_48 [24];
  
  local_a0 = param_4;
  if (param_5 != 0) {
    local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90;
    local_b0 = (undefined8 *)local_68;
    local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
    local_98 = &DAT_001f9f98;
    local_90 = 2;
    local_78 = 0;
    local_88 = &local_b0;
    local_80 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_98);
    local_68._0_8_ = 0;
    local_58 = local_a0;
    local_50 = 0;
    local_b0 = (undefined8 *)local_68;
    local_a8 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
    ;
    local_98 = &DAT_001fa2f0;
    local_90 = 2;
    local_78 = 0;
    local_88 = &local_b0;
    local_80 = 1;
    local_68._8_8_ = param_3;
    (*(code *)puVar1)(&local_98);
  }
  if (param_6 == '\x01') {
    _ZN3std4path4Path14with_file_name17h407d2447819234adE(local_48,param_1,param_2,param_3,local_a0)
    ;
  }
  else {
    _ZN8uu_shred9wipe_name17he9016127f4be3579E(local_48,param_1,param_2,param_5 & 0xff,param_6);
  }
  lVar2 = _ZN3std2fs11remove_file17h74e1b329d739e10bE(local_48);
  if ((lVar2 == 0 & (byte)param_5) != 0) {
    local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90;
    local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
    local_98 = &DAT_001f9f98;
    local_90 = 2;
    local_78 = 0;
    local_80 = 1;
    local_b0 = (undefined8 *)local_68;
    local_88 = &local_b0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_98);
    local_68._0_8_ = 0;
    local_58 = local_a0;
    local_50 = 0;
    local_a8 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
    ;
    local_98 = &DAT_001fa310;
    local_90 = 2;
    local_78 = 0;
    local_80 = 1;
    local_b0 = (undefined8 *)local_68;
    local_88 = &local_b0;
    local_68._8_8_ = param_3;
    (*(code *)puVar1)(&local_98);
    lVar2 = 0;
  }
  return lVar2;
}