void _ZN2rg5flags3doc7version20runtime_cpu_features17hcc737a43f582dc3eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar2;
  undefined **local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_c0 = 0;
  uStack_b8 = 8;
  local_b0 = 0;
  local_d0 = &DAT_0018749f;
  local_c8 = 1;
  local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a8 = &DAT_004eac00;
  local_a0 = 2;
  local_88 = 0;
  local_90 = 1;
                    /* try { // try from 0034ca5b to 0034cb8d has its CatchHandler @ 0034cbb1 */
  local_e0 = &local_d0;
  local_98 = &local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E(local_78,0,param_3,&local_a8);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_c0,local_78,&PTR_s_crates_core_flags_doc_version_rs_004eac60);
  cVar1 = _ZN10std_detect6detect5cache4test17h42d452cfc9d2956fE(9);
  puVar2 = &DAT_00169ba0;
  local_d0 = &DAT_00169ba0;
  if (cVar1 != '\0') {
    local_d0 = &DAT_0018749f;
  }
  local_c8 = 1;
  local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a8 = &DAT_004eac20;
  local_a0 = 2;
  local_88 = 0;
  local_90 = 1;
  local_e0 = &local_d0;
  local_98 = &local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (local_60,0,extraout_RDX,&local_a8);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_c0,local_60,&PTR_s_crates_core_flags_doc_version_rs_004eac78);
  cVar1 = _ZN10std_detect6detect5cache4test17h42d452cfc9d2956fE(0xf);
  if (cVar1 != '\0') {
    puVar2 = &DAT_0018749f;
  }
  local_c8 = 1;
  local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
  local_a8 = &DAT_004eac40;
  local_a0 = 2;
  local_88 = 0;
  local_90 = 1;
  local_e0 = &local_d0;
  local_d0 = puVar2;
  local_98 = &local_e0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
            (local_48,0,extraout_RDX_00,&local_a8);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
            (&local_c0,local_48,&PTR_s_crates_core_flags_doc_version_rs_004eac90);
  param_1[2] = local_b0;
  *param_1 = local_c0;
  param_1[1] = uStack_b8;
  return;
}