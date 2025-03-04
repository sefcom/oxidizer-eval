void _ZN6uu_env24apply_specified_env_vars17ha326473558d292daE(long param_1)

{
  long lVar1;
  undefined8 *local_a0;
  code *local_98;
  long local_90;
  long local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  local_90 = *(long *)(param_1 + 0x38);
  local_88 = *(long *)(param_1 + 0x40) * 0x30 + local_90;
  lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5a91fe410bc96a89E
                    (&local_90);
  if (lVar1 != 0) {
    do {
      if (*(long *)(lVar1 + 0x10) == 0) {
        local_50 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
        local_80 = (undefined **)&DAT_00248c18;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_a0 = (undefined8 *)local_50;
        local_70 = &local_a0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_80);
        local_50._8_8_ = *(undefined8 *)(lVar1 + 0x20);
        uStack_40 = *(undefined4 *)(lVar1 + 0x28);
        uStack_3c = *(undefined4 *)(lVar1 + 0x2c);
        local_50._0_8_ = 1;
        local_38 = 1;
        local_98 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_80 = &PTR_DAT_00248c38;
        local_78 = 2;
        local_60 = 0;
        local_68 = 1;
        local_a0 = (undefined8 *)local_50;
        local_70 = &local_a0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_80);
      }
      else {
        _ZN3std3env7set_var17h6a4f0c86b7bc3f19E(lVar1,lVar1 + 0x18);
      }
      lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5a91fe410bc96a89E
                        (&local_90);
    } while (lVar1 != 0);
  }
  return;
}