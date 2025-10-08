void _ZN2rg5flags3doc7version20compile_cpu_features17h073ebd31727dfbbcE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined **local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_70 [24];
  undefined local_58 [24];
  undefined local_40 [24];
  
  local_90 = (undefined *)&local_d8;
  local_b8 = 0;
  uStack_b0 = 8;
  local_a8 = 0;
  local_c8 = &DAT_0018749f;
  local_c0 = 1;
  local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a0 = &DAT_004eac00;
  local_98 = 2;
  local_80 = 0;
  local_88 = 1;
                    /* try { // try from 0034cc57 to 0034cd64 has its CatchHandler @ 0034cd87 */
  local_d8 = &local_c8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E(local_70,0,param_3,&local_a0);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_b8,local_70,&PTR_s_crates_core_flags_doc_version_rs_004eaca8);
  local_c8 = &DAT_00169ba0;
  local_c0 = 1;
  local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a0 = &DAT_004eac20;
  local_98 = 2;
  local_80 = 0;
  local_88 = 1;
  local_d8 = &local_c8;
  local_90 = (undefined *)&local_d8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (local_58,0,extraout_RDX,&local_a0);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_b8,local_58,&PTR_s_crates_core_flags_doc_version_rs_004eacc0);
  local_c8 = &DAT_00169ba0;
  local_c0 = 1;
  local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a0 = &DAT_004eac40;
  local_98 = 2;
  local_80 = 0;
  local_88 = 1;
  local_d8 = &local_c8;
  local_90 = (undefined *)&local_d8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (local_40,0,extraout_RDX_00,&local_a0);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_b8,local_40,&PTR_s_crates_core_flags_doc_version_rs_004eacd8);
  param_1[2] = local_a8;
  *param_1 = local_b8;
  param_1[1] = uStack_b0;
  return;
}