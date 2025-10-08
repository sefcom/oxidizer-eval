void _ZN7uu_head5parse17process_num_block17hda0983907d92f9a0E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
               undefined8 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  bool bVar4;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  ulong **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_88;
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  ulong local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  param_4 = param_4 & 0xffffffff;
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_b8);
  if ((char)local_b8 == '\x01') {
    uStack_b0 = 0xffffffffffffffff;
    if (local_b8._1_1_ != '\x02') {
      *param_1 = 0x8000000000000000;
      return;
    }
  }
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar6 = false;
  local_80 = uStack_b0;
  local_78 = param_1;
  local_70 = uStack_b0;
LAB_001655ac:
  switch((int)param_4) {
  case 0x62:
    bVar5 = true;
    local_88 = 0x200;
    break;
  case 99:
    bVar5 = true;
    local_88 = 1;
    break;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x77:
  case 0x78:
  case 0x79:
switchD_001655bd_caseD_64:
    *local_78 = 0x8000000000000000;
    return;
  case 0x6b:
    bVar5 = true;
    local_88 = 0x400;
    break;
  case 0x6d:
    bVar5 = true;
    local_88 = 0x100000;
    break;
  case 0x71:
    _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
              (param_5);
    param_4 = extraout_RDX_00 & 0xffffffff;
    bVar6 = true;
    bVar3 = false;
    if ((int)extraout_RDX_00 == 0x110000) {
      bVar3 = false;
      goto LAB_001656cd;
    }
    goto LAB_001655ac;
  case 0x76:
    goto switchD_001655bd_caseD_76;
  case 0x7a:
    bVar4 = true;
    break;
  default:
    if ((int)param_4 != 0) goto switchD_001655bd_caseD_64;
  }
  _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
            (param_5);
  param_4 = extraout_RDX_01 & 0xffffffff;
  if ((int)extraout_RDX_01 == 0x110000) {
    local_d0 = 0;
    uStack_c8 = 8;
    local_c0 = 0;
    uVar7 = local_80;
    if (bVar6) {
LAB_001656cd:
      uVar7 = local_80;
      local_c0 = 0;
      uStack_c8 = 8;
      local_d0 = 0;
                    /* try { // try from 001656d2 to 00165928 has its CatchHandler @ 00165960 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
                (&local_b8,"-q",2);
      local_d8 = local_a8;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,&local_e8,&PTR_s_src_uu_head_src_parse_rs_001f7a40);
    }
    if (bVar3) goto LAB_00165717;
    goto LAB_00165757;
  }
  goto LAB_001655ac;
switchD_001655bd_caseD_76:
  _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
            (param_5);
  param_4 = extraout_RDX & 0xffffffff;
  bVar3 = true;
  bVar6 = false;
  if ((int)extraout_RDX == 0x110000) {
    local_d0 = 0;
    uStack_c8 = 8;
    local_c0 = 0;
    uVar7 = local_80;
LAB_00165717:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
              (&local_b8,"-v",2);
    local_d8 = local_a8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
              (&local_d0,&local_e8,&PTR_s_src_uu_head_src_parse_rs_001f7a58);
LAB_00165757:
    if (bVar4) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
                (&local_b8,"-z",2);
      local_d8 = local_a8;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,&local_e8,&PTR_s_src_uu_head_src_parse_rs_001f7a70);
    }
    if (bVar5) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
                (&local_b8,"-c",2);
      local_d8 = local_a8;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,&local_e8,&PTR_s_src_uu_head_src_parse_rs_001f7a88);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_88;
      local_68 = SUB168(auVar1 * auVar2,0);
      if (SUB168(auVar1 * auVar2,8) != 0) {
        local_68 = 0xffffffffffffffff;
      }
      local_e8 = &local_68;
      puStack_e0 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001fe8a8
      ;
      local_b8 = &DAT_00118a90;
      uStack_b0 = 1;
      local_98 = 0;
      local_a0 = 1;
      local_a8 = &local_e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4698243df58dc779E(local_60,&local_b8);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,local_60,&PTR_s_src_uu_head_src_parse_rs_001f7aa0);
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc3a09e7815fd3a4cE
                (&local_b8,"-n",2);
      local_d8 = local_a8;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,&local_e8,&PTR_s_src_uu_head_src_parse_rs_001f7ab8);
      local_e8 = &local_70;
      puStack_e0 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001fe8a8
      ;
      local_b8 = &DAT_00118a90;
      uStack_b0 = 1;
      local_98 = 0;
      local_a0 = 1;
      local_a8 = &local_e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4698243df58dc779E(local_48,&local_b8);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdf457eff9a80b64cE
                (&local_d0,local_48,&PTR_s_src_uu_head_src_parse_rs_001f7ad0);
    }
    local_78[2] = local_c0;
    *local_78 = local_d0;
    local_78[1] = uStack_c8;
    return;
  }
  goto LAB_001655ac;
}