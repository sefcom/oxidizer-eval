void _ZN5uu_ls31display_additional_leading_info17hdfeacb5163c0e10bE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  undefined uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 local_38;
  
  local_78 = 0;
  uStack_70 = 1;
  local_68 = 0;
  local_38 = param_4;
  if (*(char *)(param_5 + 0xe9) != '\0') {
                    /* try { // try from 0022924e to 00229284 has its CatchHandler @ 0022950c */
    lVar2 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_2,param_6);
    if (lVar2 == 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
                (&local_a8,&DAT_0013623a,1);
      local_b8 = local_98;
      local_c8._0_4_ = (undefined4)local_a8;
      local_c8._4_4_ = local_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
    }
    else {
      _ZN5uu_ls9get_inode17h2901925630e3969fE(&local_c8,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* try { // try from 002292a2 to 002292b1 has its CatchHandler @ 002294f0 */
    _ZN5uu_ls8pad_left17h1d7ef6cb0cce13f7E(&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,param_3)
    ;
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 002292f4 to 00229311 has its CatchHandler @ 002294f5 */
    local_60 = (undefined **)&local_50;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h47065a1d1059e603E
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8d3e4b8c01ce74b9E(uVar1,&PTR_DAT_00312608);
                    /* try { // try from 00229312 to 0022931b has its CatchHandler @ 002294f0 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_50);
                    /* try { // try from 0022931c to 0022936f has its CatchHandler @ 0022950c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_c8);
  }
  if (*(char *)(param_5 + 0xea) == '\0') goto LAB_002294b1;
  lVar2 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_2,param_6);
  if (lVar2 == 0) {
                    /* try { // try from 002293e9 to 002293fe has its CatchHandler @ 0022950c */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
              (&local_a8,&DAT_0013623a,1);
    local_b8 = local_98;
    local_c8._0_4_ = (undefined4)local_a8;
    local_c8._4_4_ = local_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    if (*(char *)(param_5 + 0xf8) != '\x04') goto LAB_00229420;
LAB_0022937e:
    local_48 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_50;
    local_90 = 1;
                    /* try { // try from 002293c6 to 002293e3 has its CatchHandler @ 002294e3 */
    local_50 = &local_c8;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h47065a1d1059e603E
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8d3e4b8c01ce74b9E(uVar1,&PTR_DAT_00312620);
  }
  else {
    uVar1 = *(undefined *)(param_5 + 0xf1);
    uVar3 = _ZN5uu_ls14get_block_size17h2a7c975a8304f17eE
                      (*(undefined4 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x60),
                       *(undefined8 *)(param_5 + 0xd8),uVar1);
    _ZN5uu_ls12display_size17hba9b1cbdd7c6b199E(&local_c8,uVar3,uVar1);
    if (*(char *)(param_5 + 0xf8) == '\x04') goto LAB_0022937e;
LAB_00229420:
                    /* try { // try from 0022942a to 0022943e has its CatchHandler @ 002294e3 */
    _ZN5uu_ls8pad_left17h1d7ef6cb0cce13f7E
              (&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,local_38);
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_a8 = &DAT_003125e8;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 00229481 to 0022949e has its CatchHandler @ 002294d4 */
    local_60 = (undefined **)&local_50;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h47065a1d1059e603E
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8d3e4b8c01ce74b9E(uVar1,&PTR_DAT_00312638);
                    /* try { // try from 0022949f to 002294a8 has its CatchHandler @ 002294e3 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_50);
  }
                    /* try { // try from 002294a9 to 002294b0 has its CatchHandler @ 0022950c */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_c8);
LAB_002294b1:
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  return;
}