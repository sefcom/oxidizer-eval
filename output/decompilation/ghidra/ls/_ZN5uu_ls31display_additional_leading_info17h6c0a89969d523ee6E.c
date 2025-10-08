void _ZN5uu_ls31display_additional_leading_info17h6c0a89969d523ee6E
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
  if (*(char *)(param_5 + 0xf1) != '\0') {
                    /* try { // try from 0029c18e to 0029c1c4 has its CatchHandler @ 0029c444 */
    lVar2 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_6);
    if (lVar2 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
                (&local_a8,&DAT_001d4206,1);
      local_b8 = local_98;
      local_c8._0_4_ = (undefined4)local_a8;
      local_c8._4_4_ = local_a8._4_4_;
      uStack_c0 = (undefined4)uStack_a0;
      uStack_bc = uStack_a0._4_4_;
    }
    else {
      _ZN5uu_ls9get_inode17hac559b2c8c4109afE(&local_c8,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* try { // try from 0029c1e2 to 0029c1f1 has its CatchHandler @ 0029c416 */
    _ZN5uu_ls8pad_left17h9cc9c358e56c676aE(&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,param_3)
    ;
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_a8 = &DAT_00386678;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 0029c234 to 0029c251 has its CatchHandler @ 0029c41d */
    local_60 = (undefined **)&local_50;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17he85952e7563119aeE
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd1412c45ded2be83E
              (uVar1,&PTR_s_src_uu_ls_src_ls_rs_00386c18);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_50);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
  }
  if (*(char *)(param_5 + 0xf2) == '\0') goto LAB_0029c3f1;
                    /* try { // try from 0029c272 to 0029c2af has its CatchHandler @ 0029c444 */
  lVar2 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_6);
  if (lVar2 == 0) {
                    /* try { // try from 0029c329 to 0029c33e has its CatchHandler @ 0029c444 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
              (&local_a8,&DAT_001d4206,1);
    local_b8 = local_98;
    local_c8._0_4_ = (undefined4)local_a8;
    local_c8._4_4_ = local_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    if (*(char *)(param_5 + 0x100) != '\x04') goto LAB_0029c360;
LAB_0029c2be:
    local_48 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_a8 = &DAT_00386678;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_50;
    local_90 = 1;
                    /* try { // try from 0029c306 to 0029c323 has its CatchHandler @ 0029c418 */
    local_50 = &local_c8;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17he85952e7563119aeE
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd1412c45ded2be83E
              (uVar1,&PTR_s_src_uu_ls_src_ls_rs_00386c30);
  }
  else {
    uVar1 = *(undefined *)(param_5 + 0xf9);
    uVar3 = _ZN5uu_ls14get_block_size17hab622dcab93c70dfE
                      (*(undefined4 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x60),
                       *(undefined8 *)(param_5 + 0xd8),uVar1);
    _ZN5uu_ls12display_size17hb2e480a0d8619531E(&local_c8,uVar3,uVar1);
    if (*(char *)(param_5 + 0x100) == '\x04') goto LAB_0029c2be;
LAB_0029c360:
                    /* try { // try from 0029c36a to 0029c37e has its CatchHandler @ 0029c418 */
    _ZN5uu_ls8pad_left17h9cc9c358e56c676aE
              (&local_50,CONCAT44(uStack_bc,uStack_c0),local_b8,local_38);
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_a8 = &DAT_00386678;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = &local_60;
    local_90 = 1;
                    /* try { // try from 0029c3c1 to 0029c3de has its CatchHandler @ 0029c414 */
    local_60 = (undefined **)&local_50;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17he85952e7563119aeE
                      (&local_78,&local_a8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd1412c45ded2be83E
              (uVar1,&PTR_s_src_uu_ls_src_ls_rs_00386c48);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_50);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
LAB_0029c3f1:
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  return;
}