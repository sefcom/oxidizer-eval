void _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8_00,
               undefined4 param_8,undefined4 param_10_00,undefined4 param_9,undefined4 param_12,
               undefined4 param_10,undefined4 param_14,undefined4 param_11,undefined4 param_16)

{
  code *pcVar1;
  undefined uVar2;
  undefined **local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined2 local_e8;
  undefined local_e0 [16];
  undefined8 local_d0;
  undefined local_c8 [8];
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  code *local_88;
  undefined4 local_80 [2];
  undefined4 uStack_78;
  undefined4 local_70 [2];
  undefined4 uStack_68;
  undefined4 local_60 [2];
  undefined4 uStack_58;
  undefined4 local_50 [2];
  undefined4 uStack_48;
  undefined4 local_40 [2];
  undefined4 uStack_38;
  
  local_80[0] = param_7;
  uStack_78 = param_8_00;
  local_70[0] = param_8;
  uStack_68 = param_10_00;
  local_60[0] = param_9;
  uStack_58 = param_12;
  local_50[0] = param_10;
  uStack_48 = param_14;
  local_40[0] = param_11;
  uStack_38 = param_16;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_5;
  local_98 = param_6;
  local_e0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hd2c3980597d571d0E
                       (0x40,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_001fefd8);
  local_d0 = 0;
  local_100._8_8_ = _ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,8);
  if ((undefined4 *)local_100._8_8_ != (undefined4 *)0x0) {
    *(undefined4 *)local_100._8_8_ = 0x20;
    *(undefined4 *)(local_100._8_8_ + 4) = param_4;
    local_100._0_8_ = 2;
    local_f0 = 2;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9cfa5ba45bb02dbbE
              (&local_130,local_100);
                    /* try { // try from 00168e51 to 00168e5d has its CatchHandler @ 00169215 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h8e6e7805f5dc53bcE(local_c8,&local_130);
    local_100._0_8_ = &local_b0;
    local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
    local_130 = (undefined **)&DAT_00118a60;
    local_128 = 1;
    local_110 = &DAT_0011ab98;
    local_108 = 1;
    local_118 = 1;
                    /* try { // try from 00168eaf to 001691bd has its CatchHandler @ 001691f6 */
    local_120 = (undefined8 **)local_100;
    uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                      (local_e0,&local_130);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
              (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001feff0);
    if (*(char *)(param_1 + 0x1d) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf242f9bddfdf5341E
                (local_e0,local_c0,local_b8 + local_c0);
    }
    local_100._0_8_ = &local_a0;
    local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
    local_130 = &PTR_s__001ff008;
    local_128 = 1;
    local_110 = &DAT_0011abc8;
    local_108 = 1;
    local_118 = 1;
    local_120 = (undefined8 **)local_100;
    uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                      (local_e0,&local_130);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
              (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff018);
    local_100._0_8_ = local_80;
    local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
    local_f0 = 0;
    local_e8 = 10;
    local_130 = &PTR_s__001ff008;
    local_128 = 1;
    local_110 = &DAT_0011abf8;
    local_108 = 1;
    local_118 = 2;
    local_120 = (undefined8 **)local_100;
    uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                      (local_e0,&local_130);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
              (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff030);
    if (*(char *)(param_1 + 0x1a) == '\0') {
      if (*(char *)(param_1 + 0x1b) != '\0') {
        local_100._0_8_ = local_70;
        local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
        local_130 = &PTR_s__001ff008;
        local_128 = 1;
        local_110 = &DAT_0011ac28;
        local_108 = 1;
        local_118 = 1;
        local_120 = (undefined8 **)local_100;
        uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                          (local_e0,&local_130);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
                  (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff048);
      }
      local_100._0_8_ = local_60;
      local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
      local_130 = &PTR_s__001ff008;
      local_128 = 1;
      local_110 = &DAT_0011ac58;
      local_108 = 1;
      local_118 = 1;
      local_120 = (undefined8 **)local_100;
      uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                        (local_e0,&local_130);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
                (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff060);
    }
    local_100._0_8_ = local_50;
    local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
    local_130 = &PTR_s__001ff008;
    local_128 = 1;
    local_110 = &DAT_0011ab98;
    local_108 = 1;
    local_118 = 1;
    local_120 = (undefined8 **)local_100;
    uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                      (local_e0,&local_130);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
              (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff078);
    if (*(char *)(param_1 + 0x1e) != '\0') {
      local_100._0_8_ = local_40;
      local_100._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
      local_130 = &PTR_s__001ff008;
      local_128 = 1;
      local_110 = &DAT_0011abc8;
      local_108 = 1;
      local_118 = 1;
      local_120 = (undefined8 **)local_100;
      uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h131ce87c39c65b68E
                        (local_e0,&local_130);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4436c0d0a7afa284E
                (uVar2,&PTR_s_src_uu_who_src_platform_unix_rs_001ff090);
    }
    local_100 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc48b43e4f71ddf49E
                          (local_e0._8_8_,local_d0);
    local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h559836fb4f8d37c6E;
    local_130 = (undefined **)&DAT_001fef18;
    local_128 = 2;
    local_110 = (undefined *)0x0;
    local_120 = &local_90;
    local_118 = 1;
    local_90 = (undefined8 *)local_100;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00205fa0)(&local_130);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_c8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_e0);
    return;
  }
                    /* try { // try from 001691e4 to 001691f3 has its CatchHandler @ 00169215 */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00205f18)(4,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}