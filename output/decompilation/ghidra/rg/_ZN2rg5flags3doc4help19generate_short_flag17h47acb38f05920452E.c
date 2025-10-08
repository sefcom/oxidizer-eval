void _ZN2rg5flags3doc4help19generate_short_flag17h47acb38f05920452E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined uVar1;
  long lVar2;
  ulong uVar3;
  byte extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a0;
  code *local_98;
  undefined8 **local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0;
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
                    /* try { // try from 00349819 to 0034983a has its CatchHandler @ 00349ab7 */
  lVar2 = (**(code **)(param_3 + 0x48))(param_2);
  if (lVar2 == 0) {
    local_68 = (undefined **)0x8000000000000000;
  }
  else {
    _ZN2rg5flags3doc4help19generate_short_flag28__u7b__u7b_closure_u7d__u7d_17h653961bfeeb0d968E
              (&local_d0,lVar2);
    local_58 = local_c0;
    local_68 = local_d0;
    uStack_60 = (undefined4)uStack_c8;
    uStack_5c = uStack_c8._4_4_;
  }
                    /* try { // try from 0034985f to 00349a71 has its CatchHandler @ 00349abc */
  uVar3 = (**(code **)(param_3 + 0x28))(param_2);
  if ((uVar3 & 1) != 0) {
    local_a0 = (undefined8 **)CONCAT44(local_a0._4_4_,(uint)extraout_DL);
    local_90 = &local_a0;
    local_88 = (code *)
               PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00527048
    ;
    local_d0 = &PTR_DAT_004e5ef8;
    uStack_c8 = 1;
    uStack_b0 = 0;
    local_c0 = &local_90;
    local_b8 = 1;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                      (&local_80,&local_d0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
              (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea2d0);
    local_d0 = &PTR_s___004ea2b0;
    uStack_c8 = 1;
    local_c0 = (undefined8 **)0x8;
    local_b8 = 0;
    uStack_b0 = 0;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                      (&local_80,&local_d0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
              (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea2e8);
  }
  local_90 = (undefined8 **)(**(code **)(param_3 + 0x30))(param_2);
  local_88 = (code *)CONCAT71(extraout_var,extraout_DL_00);
  local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_d0 = &PTR_DAT_004e5ee8;
  uStack_c8 = 1;
  uStack_b0 = 0;
  local_c0 = &local_a0;
  local_b8 = 1;
  local_a0 = &local_90;
  uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                    (&local_80,&local_d0);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
            (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea300);
  if ((undefined8 **)local_68 != (undefined8 **)0x8000000000000000) {
    local_a0 = &local_68;
    local_90 = &local_a0;
    local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6c34d9aa7433ceE;
    local_d0 = &PTR_s___004ea2c0;
    uStack_c8 = 1;
    uStack_b0 = 0;
    local_b8 = 1;
    local_c0 = &local_90;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                      (&local_80,&local_d0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
              (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea318);
  }
  local_90 = (undefined8 **)(**(code **)(param_3 + 0x58))(param_2);
  local_88 = (code *)CONCAT71(extraout_var_00,extraout_DL_01);
  local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_d0 = (undefined **)&DAT_00162330;
  uStack_c8 = 1;
  uStack_b0 = 0;
  local_c0 = &local_a0;
  local_b8 = 1;
  local_a0 = &local_90;
  uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                    (&local_48,&local_d0);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
            (uVar1,&PTR_s_crates_core_flags_doc_help_rs_004ea330);
  param_1[2] = local_70;
  *param_1 = local_80;
  param_1[1] = uStack_78;
  *(undefined4 *)(param_1 + 3) = (undefined4)local_48;
  *(undefined4 *)((long)param_1 + 0x1c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_40;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_40._4_4_;
  param_1[5] = local_38;
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h21c1035d1def9f19E
            (&local_68);
  return;
}