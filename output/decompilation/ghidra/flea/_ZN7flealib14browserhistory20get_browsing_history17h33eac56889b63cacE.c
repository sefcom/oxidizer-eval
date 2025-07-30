long * _ZN7flealib14browserhistory20get_browsing_history17h33eac56889b63cacE(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  _ZN3std3env3var17haf60432b5fae2ca4E(&local_c8,&DAT_00151920,4);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6ab6e095afbca5e2E
            (local_e0,&local_c8,&PTR_s_flealib_src_browserhistory_rs_0080acf8);
                    /* try { // try from 0049a6ef to 0049a702 has its CatchHandler @ 0049a8bf */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (local_e0,"/.config/google-chrome/Default/History",0x26);
  local_f8 = 0;
  uStack_f0 = 8;
  local_e8 = 0;
                    /* try { // try from 0049a728 to 0049a775 has its CatchHandler @ 0049a8c4 */
  _ZN3std2fs8metadata17h198ddbb2419bae71E(&local_c8,local_d8,local_d0);
  lVar3 = local_c8;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h99319c8eae35268bE
            (&local_c8);
  if ((int)lVar3 == 2) {
LAB_0049a7d5:
    (*(code *)PTR__ZN7flealib14browserhistory19get_firefox_history17h0d89d55dfd8a3596E_008287c8)
              (&local_c8);
    local_118 = local_c0;
    uVar1 = local_118;
    uStack_110 = uStack_b8;
    uVar2 = uStack_110;
    local_108 = local_b0;
    if (local_c8 == -0x7fffffffffffffee) {
      local_118._0_4_ = (undefined4)local_c0;
      local_118._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      uStack_110._0_4_ = (undefined4)uStack_b8;
      uStack_110._4_4_ = (undefined4)((ulong)uStack_b8 >> 0x20);
      local_138 = (undefined4)local_118;
      uStack_134 = local_118._4_4_;
      uStack_130 = (undefined4)uStack_110;
      uStack_12c = uStack_110._4_4_;
      local_128 = local_b0;
                    /* try { // try from 0049a819 to 0049a829 has its CatchHandler @ 0049a8b2 */
      local_118 = uVar1;
      uStack_110 = uVar2;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h6bc4c1a166039f3bE
                (&local_f8,uStack_b8,local_b0,&PTR_s_flealib_src_browserhistory_rs_0080ad40);
      local_128 = 0;
      param_1[3] = local_e8;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_f8;
      *(undefined4 *)((long)param_1 + 0xc) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_f0._4_4_;
      *param_1 = -0x7fffffffffffffee;
                    /* try { // try from 0049a848 to 0049a84f has its CatchHandler @ 0049a8b0 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h361f2a090008fd41E
                (&local_138);
      goto LAB_0049a889;
    }
  }
  else {
    _ZN7flealib14browserhistory11get_history17h3123b478e6fedbbeE
              (&local_c8,local_d8,local_d0,
               "SELECT url, title, visit_count, last_visit_time FROM urls ORDER BY last_visit_time DESC"
               ,0x57);
    local_118 = local_c0;
    uVar1 = local_118;
    uStack_110 = uStack_b8;
    uVar2 = uStack_110;
    local_108 = local_b0;
    if (local_c8 == -0x7fffffffffffffee) {
      local_118._0_4_ = (undefined4)local_c0;
      local_118._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      uStack_110._0_4_ = (undefined4)uStack_b8;
      uStack_110._4_4_ = (undefined4)((ulong)uStack_b8 >> 0x20);
      local_138 = (undefined4)local_118;
      uStack_134 = local_118._4_4_;
      uStack_130 = (undefined4)uStack_110;
      uStack_12c = uStack_110._4_4_;
      local_128 = local_b0;
                    /* try { // try from 0049a7b3 to 0049a7c3 has its CatchHandler @ 0049a8a3 */
      local_118 = uVar1;
      uStack_110 = uVar2;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h6bc4c1a166039f3bE
                (&local_f8,uStack_b8,local_b0,&PTR_s_flealib_src_browserhistory_rs_0080ad28);
      local_128 = 0;
                    /* try { // try from 0049a7cd to 0049a7df has its CatchHandler @ 0049a8c4 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h361f2a090008fd41E
                (&local_138);
      goto LAB_0049a7d5;
    }
  }
  *(undefined4 *)(param_1 + 6) = local_98;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_94;
  *(undefined4 *)(param_1 + 7) = uStack_90;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_8c;
  param_1[4] = local_a8;
  param_1[5] = lStack_a0;
  param_1[3] = local_108;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_118;
  *(undefined4 *)((long)param_1 + 0xc) = local_118._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_110;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_110._4_4_;
  *param_1 = local_c8;
                    /* try { // try from 0049a87f to 0049a888 has its CatchHandler @ 0049a8bf */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h361f2a090008fd41E
            (&local_f8);
LAB_0049a889:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_e0);
  return param_1;
}