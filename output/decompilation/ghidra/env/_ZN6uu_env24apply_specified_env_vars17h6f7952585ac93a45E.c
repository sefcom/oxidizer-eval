void _ZN6uu_env24apply_specified_env_vars17h6f7952585ac93a45E(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *local_90;
  code *local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x38) + 0x18;
    lVar3 = *(long *)(param_1 + 0x40) * 0x30;
    do {
      while (*(long *)(lVar2 + -8) == 0) {
        local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002191d8)();
        local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
        local_80 = (undefined **)&DAT_00210ca8;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_90 = (undefined8 *)local_50;
        local_70 = &local_90;
        (*(code *)puVar1)(&local_80);
        local_50._8_8_ = *(undefined8 *)(lVar2 + 8);
        local_40 = *(undefined8 *)(lVar2 + 0x10);
        local_50._0_8_ = 1;
        local_38 = 1;
        local_88 = (code *)
                   PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
        ;
        local_80 = &PTR_DAT_00210cc8;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_90 = (undefined8 *)local_50;
        local_70 = &local_90;
        (*(code *)puVar1)(&local_80);
        lVar2 = lVar2 + 0x30;
        lVar3 = lVar3 + -0x30;
        if (lVar3 == 0) {
          return;
        }
      }
      _ZN3std3env7set_var17ha04e04b7519b1e81E(lVar2 + -0x18,lVar2);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}