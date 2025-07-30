long * _ZN7flealib14browserhistory19get_firefox_history17h0d89d55dfd8a3596E(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined auVar7 [16];
  int local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  
  _ZN3std3env3var17haf60432b5fae2ca4E(&local_1a8,&DAT_00151920,4);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6ab6e095afbca5e2E
            (&local_208,&local_1a8,&PTR_s_flealib_src_browserhistory_rs_0080ad58);
                    /* try { // try from 0049a92e to 0049a93b has its CatchHandler @ 0049aca2 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h7ef9d321b3428b60E_008267b8
  )(&local_1c0,&local_208);
                    /* try { // try from 0049a93f to 0049a991 has its CatchHandler @ 0049acd7 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_208,"/.mozilla/firefox/",0x12);
  _ZN3std2fs8metadata17h198ddbb2419bae71E(&local_1a8,CONCAT44(uStack_1fc,uStack_200),local_1f8);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h99319c8eae35268bE
            (&local_1a8);
  bVar6 = (int)local_1a8 != 2;
  if (bVar6) {
    local_198 = local_1f8;
    local_1a8._0_4_ = local_208;
    local_1a8._4_4_ = uStack_204;
    uStack_1a0._0_4_ = uStack_200;
    uStack_1a0._4_4_ = uStack_1fc;
  }
  else {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
              (&local_1c0,"/snap/firefox/common/.mozilla/firefox/",0x26);
    local_198 = local_1b0;
    local_1a8._0_4_ = local_1c0;
    local_1a8._4_4_ = uStack_1bc;
    uStack_1a0._0_4_ = uStack_1b8;
    uStack_1a0._4_4_ = uStack_1b4;
                    /* try { // try from 0049a9a6 to 0049a9ad has its CatchHandler @ 0049ac88 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_208);
  }
  local_1f8 = local_198;
  local_208 = (int)local_1a8;
  uStack_204 = local_1a8._4_4_;
  uStack_200 = (undefined4)uStack_1a0;
  uStack_1fc = uStack_1a0._4_4_;
                    /* try { // try from 0049a9db to 0049a9e8 has its CatchHandler @ 0049acd7 */
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h7ef9d321b3428b60E_008267b8
  )(&local_1f0,&local_208);
                    /* try { // try from 0049a9e9 to 0049aa21 has its CatchHandler @ 0049acb6 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1f0,"profiles.ini",0xc);
  _ZN3std2fs8metadata17h198ddbb2419bae71E(&local_1a8,CONCAT44(uStack_1e4,uStack_1e8),local_1e0);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h99319c8eae35268bE
            (&local_1a8);
  if ((int)local_1a8 == 2) {
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = 0;
    *param_1 = -0x7fffffffffffffee;
                    /* try { // try from 0049aa4d to 0049aa56 has its CatchHandler @ 0049acd7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_1f0);
    if (bVar6) {
                    /* try { // try from 0049aa60 to 0049aa69 has its CatchHandler @ 0049aca2 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_1c0);
    }
LAB_0049ac3d:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_208);
    return param_1;
  }
  local_c8 = local_1e0;
  local_d8 = local_1f0;
  uStack_d4 = uStack_1ec;
  uStack_d0 = uStack_1e8;
  uStack_cc = uStack_1e4;
                    /* try { // try from 0049aa89 to 0049aaac has its CatchHandler @ 0049aca0 */
  _ZN3ini3Ini18load_from_file_opt17h0684c48f4250db4bE(&local_1a8,&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hed2684d01178f9a4E(&local_d8,&local_1a8);
                    /* try { // try from 0049aaad to 0049ab1e has its CatchHandler @ 0049acc5 */
  lVar3 = _ZN3ini3Ini7section17h81259b356610dd3cE(&local_d8);
  if (lVar3 == 0) {
    ppuVar5 = &PTR_s_flealib_src_browserhistory_rs_0080ad88;
  }
  else {
    lVar3 = _ZN3ini10Properties3get17hb7439501bae792daE(lVar3);
    if (lVar3 != 0) {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E(&local_208,lVar3);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_208,"/places.sqlite",0xe);
      _ZN3std3env3var17haf60432b5fae2ca4E(&local_1a8,&DAT_00151920,4);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6ab6e095afbca5e2E
                (&local_1d8,&local_1a8,&PTR_s_flealib_src_browserhistory_rs_0080adb8);
                    /* try { // try from 0049ab1f to 0049ab74 has its CatchHandler @ 0049aca7 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_1d8,"/flea-tmp/",10);
      uVar4 = _ZN3std2fs14create_dir_all17hc095692fb0f17176E(&local_1d8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar4);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_1d8,"firefox_history",0xf);
      auVar7 = _ZN3std2fs4copy17h49f59a1b002e5b31E(&local_208,&local_1d8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h2602cd856c32aa80E(auVar7._0_8_,auVar7._8_8_);
      local_198 = local_1c8;
      local_1a8 = CONCAT44(uStack_1d4,local_1d8);
      uStack_1a0 = CONCAT44(uStack_1cc,uStack_1d0);
                    /* try { // try from 0049ab89 to 0049ab90 has its CatchHandler @ 0049ac70 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_208);
      local_1f8 = local_198;
      local_208 = (int)local_1a8;
      uStack_204 = local_1a8._4_4_;
      uStack_200 = (undefined4)uStack_1a0;
      uStack_1fc = uStack_1a0._4_4_;
                    /* try { // try from 0049aba9 to 0049abbf has its CatchHandler @ 0049ac6e */
      _ZN7flealib14browserhistory11get_history17h3123b478e6fedbbeE
                (&local_1a8,uStack_1a0,local_198,
                 "SELECT url, IFNULL(title, \'\'), visit_count, IFNULL(last_visit_date, 0) FROM moz_places ORDER BY last_visit_date DESC"
                 ,0x74);
      local_f8 = uStack_1a0;
      uVar4 = local_f8;
      uStack_f0 = local_198;
      uVar2 = uStack_f0;
      local_e8 = local_190;
      if (local_1a8 != -0x7fffffffffffffee) {
        param_1[6] = local_178;
        param_1[7] = lStack_170;
        param_1[4] = local_188;
        param_1[5] = lStack_180;
      }
      param_1[3] = local_190;
      local_f8._0_4_ = (undefined4)uStack_1a0;
      local_f8._4_4_ = (undefined4)((ulong)uStack_1a0 >> 0x20);
      uStack_f0._0_4_ = (undefined4)local_198;
      uStack_f0._4_4_ = (undefined4)((ulong)local_198 >> 0x20);
      *(undefined4 *)(param_1 + 1) = (undefined4)local_f8;
      *(undefined4 *)((long)param_1 + 0xc) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_f0._4_4_;
      *param_1 = local_1a8;
                    /* try { // try from 0049ac21 to 0049ac2d has its CatchHandler @ 0049aca0 */
      local_f8 = uVar4;
      uStack_f0 = uVar2;
      _ZN4core3ptr29drop_in_place_LT_ini__Ini_GT_17hd01073a116da051eE(&local_d8);
      if (bVar6) {
                    /* try { // try from 0049ac33 to 0049ac3c has its CatchHandler @ 0049aca2 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_1c0);
      }
      goto LAB_0049ac3d;
    }
    ppuVar5 = &PTR_s_flealib_src_browserhistory_rs_0080ada0;
  }
                    /* try { // try from 0049ac66 to 0049ac6b has its CatchHandler @ 0049acc5 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)(ppuVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}