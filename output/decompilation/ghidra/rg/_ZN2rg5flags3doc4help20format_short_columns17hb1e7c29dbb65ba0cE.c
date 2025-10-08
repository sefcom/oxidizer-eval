void _ZN2rg5flags3doc4help20format_short_columns17hb1e7c29dbb65ba0cE
               (undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,long param_6
               )

{
  undefined uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_128;
  undefined8 uStack_120;
  undefined ****local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_f8;
  undefined *local_f0;
  undefined **local_e8;
  code *pcStack_e0;
  undefined ***local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined ***local_80;
  code *local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  
  local_f8 = param_6;
  local_b0 = param_3;
  local_a8 = param_5;
  if (param_3 == param_5) {
    local_d0 = 0;
    uStack_c8 = 1;
    local_c0 = 0;
    local_b8 = param_1;
    _ZN4core4iter6traits8iterator8Iterator3zip17h0d560c715792bf7dE
              (&local_70,param_2,param_2 + param_3 * 0x18,param_4,param_3 * 0x18 + param_4);
    local_38 = 0;
    _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdad994c612ce0c4aE
              (&local_a0,&local_70);
    if (local_98 != (undefined *)0x0) {
      local_f8 = local_f8 + 2;
      do {
        local_f0 = local_98;
        local_88 = local_90;
        if (local_a0 != 0) {
          local_128 = &PTR_s__004ea358;
          uStack_120 = 1;
          local_118 = (undefined ****)0x8;
          local_110 = 0;
          uStack_108 = 0;
                    /* try { // try from 00349d15 to 00349dda has its CatchHandler @ 00349f66 */
          uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                            (&local_d0,&local_128);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                    (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea390);
        }
        lVar3 = local_f8 - *(long *)(local_f0 + 0x10);
        local_128 = &PTR_s__004ea368;
        uStack_120 = 1;
        local_118 = (undefined ****)0x8;
        local_110 = 0;
        uStack_108 = 0;
        uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                          (&local_d0,&local_128);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                  (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea3a8);
        local_e8 = &local_f0;
        pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6c34d9aa7433ceE;
        local_128 = (undefined **)&DAT_00162330;
        uStack_120 = 1;
        uStack_108 = 0;
        local_110 = 1;
        local_118 = (undefined ****)&local_e8;
        uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                          (&local_d0,&local_128);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                  (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea3c0);
        _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h6004d655c3feac73E
                  (&local_128,&DAT_00169b32,lVar3);
        local_d8 = (undefined ***)local_118;
        local_e8 = local_128;
        pcStack_e0 = (code *)uStack_120;
        local_78 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_128 = (undefined **)&DAT_00162330;
        uStack_120 = 1;
        uStack_108 = 0;
        local_118 = &local_80;
        local_110 = 1;
        local_80 = &local_e8;
                    /* try { // try from 00349e31 to 00349e4a has its CatchHandler @ 00349f47 */
        uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                          (&local_d0,&local_128);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                  (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea3d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_e8);
        local_e8 = &local_88;
        pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6c34d9aa7433ceE;
        local_128 = (undefined **)&DAT_00162330;
        uStack_120 = 1;
        uStack_108 = 0;
        local_110 = 1;
        local_118 = (undefined ****)&local_e8;
                    /* try { // try from 00349e89 to 00349ea2 has its CatchHandler @ 00349f66 */
        uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                          (&local_d0,&local_128);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                  (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea3f0);
        _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdad994c612ce0c4aE
                  (&local_a0,&local_70);
      } while (local_98 != (undefined *)0x0);
    }
    local_b8[2] = local_c0;
    *local_b8 = local_d0;
    local_b8[1] = uStack_c8;
    return;
  }
  local_70 = &PTR_s_columns_must_have_equal_length_004ea348;
  local_68 = 1;
  local_60 = 8;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00526860)
                    (0,&local_b0,&local_a8,&local_70,&PTR_s_crates_core_flags_doc_help_rs_004ea378);
                    /* catch() { ... } // from try @ 00349e31 with catch @ 00349f47 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_e8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_d0);
  _Unwind_Resume(uVar2);
  return;
}