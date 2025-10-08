void _ZN6uu_cut9cut_files17h785d6e985a8c4fa3E(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined local_f8 [16];
  undefined *local_e8;
  code *local_e0;
  undefined local_d0 [16];
  undefined local_c0 [16];
  undefined8 *local_b0;
  code *pcStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined **local_78;
  undefined local_70 [16];
  long local_60;
  ulong local_58;
  ulong *local_50;
  ulong local_48;
  ulong *local_40;
  ulong local_38;
  
  local_60 = param_1;
  local_40 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* try { // try from 00169a3b to 00169ab1 has its CatchHandler @ 0016a029 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hdd477e9923447a3cE
              (&local_b0,"-: \n: Is a directory\n",1);
    local_e8 = local_a0;
    local_f8._0_8_ = local_b0;
    local_f8._8_8_ = pcStack_a8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcc7a9ddcf3936731E(param_1,local_f8);
  }
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ffd58)();
  cVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17hb6e1a7b5002041a4E();
  if (cVar2 == '\0') {
    uVar4 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ffd58)();
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hd0517eb1fc4b80b9E
              (&local_b0,uVar4);
    local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4c49609b75c393d3E(&local_b0);
    local_78 = &
               PTR__ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h274f075bac851800E_001f93c8
    ;
  }
  else {
    uVar4 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001ffd58)();
    local_80 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hedff6b7066f3f2baE(uVar4);
    local_78 = (undefined **)&DAT_001f9418;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar6 = *(long *)(local_60 + 8) + *(long *)(param_1 + 0x10) * 0x18;
    local_38 = *local_40;
    local_48 = local_40[8];
    local_50 = local_40 + 1;
    local_58 = local_40[9];
    bVar8 = false;
    lVar7 = *(long *)(local_60 + 8);
    do {
      while( true ) {
        lVar5 = lVar7 + 0x18;
        uVar4 = *(undefined8 *)(lVar7 + 8);
        uVar1 = *(undefined8 *)(lVar7 + 0x10);
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4e666ffb317321e6E
                          (uVar4,uVar1,"-: \n: Is a directory\n",1);
        if (cVar2 == '\0') break;
        if (!bVar8) {
          if (local_38 < 2) {
                    /* try { // try from 00169c7f to 00169d36 has its CatchHandler @ 0016a025 */
            uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ffed8)();
            uVar4 = _ZN6uu_cut9cut_bytes17ha8c2c8670826156cE
                              (uVar4,&local_80,local_48,local_58,local_50);
            auVar10._8_8_ =
                 &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h331995778b4fc266E_001f9218
            ;
            auVar10._0_8_ = uVar4;
          }
          else {
            uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ffed8)();
            auVar10 = _ZN6uu_cut10cut_fields17hefd7750461942b3dE
                                (uVar4,&local_80,local_48,local_58,local_50);
          }
          local_70 = auVar10;
          if (auVar10._0_8_ == 0) {
            _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h3fc40c7c194632a2E
                      (local_70);
          }
          else {
                    /* try { // try from 00169d5a to 00169ddc has its CatchHandler @ 00169ff8 */
            local_d0 = auVar10;
            uVar3 = (**(code **)(auVar10._8_8_ + 0x58))(auVar10._0_8_);
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffed0)(uVar3);
            auVar10 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcc0)();
            local_f8._0_8_ = local_c0;
            local_f8._8_8_ =
                 _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd7fdd532799be56eE;
            local_e8 = local_d0;
            local_e0 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb683936e38a4ea07E
            ;
            local_b0 = (undefined8 *)&DAT_001f9340;
            pcStack_a8 = (code *)0x3;
            local_90 = 0;
            local_98 = 2;
            local_a0 = local_f8;
            local_c0 = auVar10;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ffcc8)(&local_b0);
                    /* try { // try from 00169ddd to 00169e13 has its CatchHandler @ 0016a025 */
            _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hb71a8d3b47f158bfE
                      (local_d0);
          }
          bVar8 = true;
          goto LAB_00169ec4;
        }
LAB_00169b3a:
        lVar7 = lVar5;
        if (lVar5 == lVar6) goto LAB_00169ee7;
      }
                    /* try { // try from 00169b71 to 00169c5d has its CatchHandler @ 0016a041 */
      cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001ffec8)(uVar4,uVar1);
      if (cVar2 != '\0') {
        local_f8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcc0)();
        local_c0._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd7fdd532799be56eE;
        local_b0 = (undefined8 *)&DAT_001f9370;
        pcStack_a8 = (code *)0x2;
        local_90 = 0;
        local_a0 = local_c0;
        local_98 = 1;
        local_c0._0_8_ = local_f8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ffcc8)(&local_b0);
        local_f8._8_8_ = *(ulong *)(lVar7 + 8);
        local_e8 = *(undefined **)(lVar7 + 0x10);
        local_f8._0_8_ = (undefined8 *)0x0;
        local_e0 = (code *)((ulong)local_e0 & 0xffffffffffffff00);
        local_c0._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001ffe18
        ;
        local_b0 = (undefined8 *)&DAT_001f9390;
        pcStack_a8 = (code *)0x2;
        local_90 = 0;
        local_a0 = local_c0;
        local_98 = 1;
        local_c0._0_8_ = local_f8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ffcc8)(&local_b0);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffed0)(1);
        goto LAB_00169b3a;
      }
      _ZN3std2fs4File4open17h02248eeaa12fef75E(&local_b0,uVar4,uVar1);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17haa675c517272d758E
                (local_f8,&local_b0,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
      auVar9._8_8_ = local_f8._8_8_;
      auVar9._0_8_ = local_f8._0_8_;
      if ((undefined8 *)local_f8._0_8_ == (undefined8 *)0x0) {
        auVar9 = _ZN6uu_cut9cut_files28__u7b__u7b_closure_u7d__u7d_17hbeb4f85585c96a83E
                           (local_40,&local_80,local_f8._8_8_ & 0xffffffff);
        if (auVar9._0_8_ == 0) {
          local_70 = auVar9;
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h3fc40c7c194632a2E
                    (local_70);
          goto LAB_00169ec4;
        }
      }
                    /* try { // try from 00169e37 to 00169eb9 has its CatchHandler @ 0016a007 */
      local_70 = auVar9;
      local_d0 = auVar9;
      uVar3 = (**(code **)(auVar9._8_8_ + 0x58))(auVar9._0_8_);
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffed0)(uVar3);
      auVar10 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcc0)();
      local_f8._0_8_ = local_c0;
      local_f8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd7fdd532799be56eE;
      local_e8 = local_d0;
      local_e0 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb683936e38a4ea07E
      ;
      local_b0 = (undefined8 *)&DAT_001f9340;
      pcStack_a8 = (code *)0x3;
      local_90 = 0;
      local_98 = 2;
      local_a0 = local_f8;
      local_c0 = auVar10;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ffcc8)(&local_b0);
                    /* try { // try from 00169eba to 00169ee4 has its CatchHandler @ 0016a025 */
      _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hb71a8d3b47f158bfE
                (local_d0);
LAB_00169ec4:
      lVar7 = lVar5;
    } while (lVar5 != lVar6);
  }
LAB_00169ee7:
                    /* try { // try from 00169ef4 to 00169efe has its CatchHandler @ 0016a027 */
  uVar4 = (*(code *)local_78[6])(local_80);
  lVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hbe3cf09d9c63ca8bE
                    (uVar4);
  local_70._8_8_ =
       &
       PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h1deda6d633d33414E_001f8e20
  ;
  local_70._0_8_ = lVar6;
  if (lVar6 == 0) {
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h3fc40c7c194632a2E
              (local_70);
  }
  else {
    local_d0._8_8_ =
         &
         PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h1deda6d633d33414E_001f8e20
    ;
    local_d0._0_8_ = lVar6;
    uVar3 = _ZN6uucore4mods5error6UError4code17h78f5cc5f7ae48784E();
                    /* try { // try from 00169f2e to 00169faa has its CatchHandler @ 0016a016 */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001ffed0)(uVar3);
    auVar10 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcc0)();
    local_f8._0_8_ = local_c0;
    local_f8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hd7fdd532799be56eE;
    local_e8 = local_d0;
    local_e0 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb683936e38a4ea07E
    ;
    local_b0 = (undefined8 *)&DAT_001f9340;
    pcStack_a8 = (code *)0x3;
    local_90 = 0;
    local_98 = 2;
    local_a0 = local_f8;
    local_c0 = auVar10;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ffcc8)(&local_b0);
                    /* try { // try from 00169fab to 00169fc3 has its CatchHandler @ 0016a027 */
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hb71a8d3b47f158bfE
              (local_d0);
  }
  lVar6 = local_60;
                    /* try { // try from 00169fd1 to 00169fdd has its CatchHandler @ 0016a029 */
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8c282cad91f072b7E
            (local_80,local_78);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hc22d9a1ba8213ee0E
            (lVar6);
  return;
}