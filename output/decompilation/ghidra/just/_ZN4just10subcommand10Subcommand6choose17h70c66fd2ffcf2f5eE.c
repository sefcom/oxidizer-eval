void _ZN4just10subcommand10Subcommand6choose17h70c66fd2ffcf2f5eE
               (undefined *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               long param_6,undefined8 param_7)

{
  undefined uVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_288;
  long *local_280;
  long local_278;
  int local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 **local_258;
  long local_250;
  long local_248;
  long local_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 local_210;
  long *local_208;
  long local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 **local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined2 local_120;
  ulong local_78 [3];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_210 = 0;
  local_208 = (long *)&DAT_00000008;
  local_200 = 0;
  local_240 = param_4;
  local_160 = param_5;
  plVar6 = (long *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 0038d8b5 to 0038d8c4 has its CatchHandler @ 0038da80 */
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(8,8);
LAB_0038d8d7:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *plVar6 = param_3;
  local_288 = 1;
  local_278 = 1;
  uVar1 = *(undefined *)(param_2 + 0x1a3);
  local_280 = plVar6;
  local_250 = param_3;
  local_248 = param_2;
  do {
    lVar9 = local_280[local_278 + -1];
                    /* try { // try from 0038d203 to 0038d215 has its CatchHandler @ 0038da06 */
    local_278 = local_278 + -1;
    _ZN4just8justfile8Justfile14public_recipes17h73a7b1046fbbce7bE(&local_158,lVar9,uVar1);
    lVar7 = uStack_150;
                    /* try { // try from 0038d22a to 0038d234 has its CatchHandler @ 0038d9f1 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h93278e255ad3d258E
              (&local_210,uStack_150,uStack_150 + (long)local_148 * 8);
    _ZN4core3ptr106drop_in_place_LT_alloc__vec__Vec_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17hfc639b08ed3124bbE
              (local_158,lVar7);
    local_78[2] = *(long *)(lVar9 + 0x2a0);
    if (local_78[2] == 0) {
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
    }
    else {
      local_40 = *(undefined4 *)(lVar9 + 0x2a8);
      uStack_3c = *(undefined4 *)(lVar9 + 0x2ac);
      uStack_38 = *(undefined4 *)(lVar9 + 0x2b0);
      uStack_34 = *(undefined4 *)(lVar9 + 0x2b4);
    }
    local_78[0] = (ulong)(local_78[2] != 0);
    local_78[1] = 0;
    local_60 = CONCAT44(uStack_3c,local_40);
    local_50 = 0;
    local_58 = local_78[0];
    local_48 = local_78[2];
                    /* try { // try from 0038d2ad to 0038d2b7 has its CatchHandler @ 0038da06 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h75c19498e857f9f5E(&local_288,local_78);
  } while (local_278 != 0);
  if (local_200 == 0) {
    *param_1 = 0x23;
  }
  else {
    if (param_6 == 0) {
      local_158 = (undefined *)0x0;
      uStack_150 = 1;
      local_148 = (undefined8 **)0x0;
                    /* try { // try from 0038d32d to 0038d37a has its CatchHandler @ 0038d998 */
      _ZN3std3ffi6os_str8OsString4push17h940d7017541ba73cE(&local_158,&DAT_0019523b,0x42);
      lVar7 = local_248;
      lVar9 = local_250;
      _ZN3std3ffi6os_str8OsString4push17h990ba6e64567b155E(&local_158,local_240);
      _ZN3std3ffi6os_str8OsString4push17h940d7017541ba73cE(&local_158,&DAT_0019527d,0xc);
    }
    else {
                    /* try { // try from 0038d2db to 0038d2ef has its CatchHandler @ 0038d970 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_158,param_6,param_7);
      lVar7 = local_248;
      lVar9 = local_250;
    }
    local_258 = local_148;
    local_268 = (undefined4)local_158;
    uStack_264 = local_158._4_4_;
    uStack_260 = (undefined4)uStack_150;
    uStack_25c = uStack_150._4_4_;
                    /* try { // try from 0038d39c to 0038d3ae has its CatchHandler @ 0038d993 */
    _ZN4just8settings8Settings13shell_command17h194009976e056ef8E(&local_158,lVar9 + 0xa8,lVar7);
                    /* try { // try from 0038d3af to 0038d410 has its CatchHandler @ 0038d9aa */
    _ZN3std7process7Command3arg17hdfbbb0c642d6ac00E(&local_158,&local_268);
    _ZN3std7process7Command11current_dir17hfb203bdc96bba19bE(&local_158,local_240 + 0x18);
    _ZN3std7process7Command5stdin17hf565ff9df9f78a2aE(&local_158,2);
    _ZN3std7process7Command6stdout17h735b5e124ef77713E(&local_158,2);
    (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_00566cb8)(&local_180,&local_158)
    ;
                    /* try { // try from 0038d411 to 0038d41d has its CatchHandler @ 0038d975 */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h68c11017a1ebd395E(&local_158);
    if (local_180 != 1) {
      local_26c = local_180;
      iStack_198 = iStack_16c;
      uStack_194 = uStack_168;
      uStack_190 = uStack_164;
      local_1a8 = local_17c;
      uStack_1a4 = uStack_178;
      uStack_1a0 = uStack_174;
      local_19c = uStack_170;
      if (iStack_16c == -1) {
                    /* try { // try from 0038d8ca to 0038d8d6 has its CatchHandler @ 0038da1a */
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                  (&PTR_DAT_00531140);
        goto LAB_0038d8d7;
      }
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h02155a0166dab906E
                (&local_1f8,&local_210);
      lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h03155b1db9f47e52E
                        (&local_1f8);
      lVar9 = local_250;
      if (lVar7 != 0) {
        do {
                    /* try { // try from 0038d5f9 to 0038d603 has its CatchHandler @ 0038d9c5 */
          _ZN4just6recipe6Recipe15spaced_namepath17h63fb739d97f7fb8fE(&local_238,lVar7);
          local_1b8 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_158 = &DAT_0052dbd8;
          uStack_150 = 2;
          local_138 = 0;
          uStack_140 = 1;
          local_1c0 = &local_238;
          local_148 = &local_1c0;
                    /* try { // try from 0038d656 to 0038d68c has its CatchHandler @ 0038d9ca */
          puVar8 = (undefined *)
                   _ZN3std2io5Write9write_fmt17h5aacf0fea719cf49E(&iStack_198,&local_158);
          if (puVar8 != (undefined *)0x0) {
            local_158 = puVar8;
            cVar5 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(puVar8);
            if (cVar5 != '\v') {
              *(undefined8 ***)(param_1 + 0x20) = local_258;
              *(undefined4 *)(param_1 + 0x10) = local_268;
              *(undefined4 *)(param_1 + 0x14) = uStack_264;
              *(undefined4 *)(param_1 + 0x18) = uStack_260;
              *(undefined4 *)(param_1 + 0x1c) = uStack_25c;
              *param_1 = 7;
              *(undefined **)(param_1 + 8) = puVar8;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE
                        (&local_238);
                    /* try { // try from 0038d7a9 to 0038d7b5 has its CatchHandler @ 0038da1a */
              _ZN4core3ptr122drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17ha7630a2791a77f7aE
                        (&local_1f8);
              _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h297edfa0c5bf1f96E(&local_1a8)
              ;
              plVar6 = local_280;
              uVar10 = local_288;
              goto LAB_0038d89e;
            }
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6f129e5e75731b85E(&local_158)
            ;
            lVar9 = local_250;
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_238);
          lVar7 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h03155b1db9f47e52E
                            (&local_1f8);
        } while (lVar7 != 0);
      }
                    /* try { // try from 0038d69a to 0038d6a6 has its CatchHandler @ 0038da1a */
      _ZN4core3ptr122drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17ha7630a2791a77f7aE
                (&local_1f8);
      iStack_228 = iStack_198;
      uStack_224 = uStack_194;
      uStack_220 = uStack_190;
      local_238 = CONCAT44(uStack_1a4,local_1a8);
      uStack_230 = uStack_1a0;
      uStack_22c = local_19c;
                    /* try { // try from 0038d6c1 to 0038d6d3 has its CatchHandler @ 0038d90c */
      (*(code *)PTR__ZN3std7process5Child16wait_with_output17h38fea98de738bb30E_00566528)
                (&local_158,&local_238);
      local_1c8 = local_128;
      local_1d8 = (undefined4)local_138;
      uStack_1d4 = local_138._4_4_;
      uStack_1d0 = uStack_130;
      uStack_1cc = uStack_12c;
      local_1e8 = local_148;
      uStack_1e0 = (undefined4)uStack_140;
      uStack_1dc = uStack_140._4_4_;
      local_1f8 = (undefined4)local_158;
      uStack_1f4 = local_158._4_4_;
      uStack_1f0 = (undefined4)uStack_150;
      uStack_1ec = uStack_150._4_4_;
      if ((int)local_128 == 0) {
                    /* try { // try from 0038d7d8 to 0038d7e5 has its CatchHandler @ 0038d8fa */
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_00566108)
                  (&local_1c0,uStack_150,local_148);
        _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h46590bb9cc81fd74E
                  (&local_148,local_1b8,local_1b0);
        local_158 = (undefined *)0x0;
        uStack_150 = local_1b0;
        local_120 = 1;
                    /* try { // try from 0038d824 to 0038d835 has its CatchHandler @ 0038d8e8 */
        _ZN4core4iter6traits8iterator8Iterator7collect17h8adcad548a0c510cE(&local_238,&local_158);
                    /* try { // try from 0038d843 to 0038d865 has its CatchHandler @ 0038d8d9 */
        _ZN4just8justfile8Justfile3run17h44a153d0be889dd4E
                  (param_1,lVar9,local_248,local_240,local_160,CONCAT44(uStack_22c,uStack_230),
                   CONCAT44(uStack_224,iStack_228));
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
                  (&local_238);
        _ZN4core3ptr43drop_in_place_LT_just__request__Request_GT_17h16e954a6b6741939E(&local_1c0);
        _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h8303f69cbb083d43E(&local_1f8);
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_268);
        plVar6 = local_280;
        uVar10 = local_288;
      }
      else {
        *(undefined8 ***)(param_1 + 0x18) = local_258;
        *(undefined4 *)(param_1 + 8) = local_268;
        *(undefined4 *)(param_1 + 0xc) = uStack_264;
        *(undefined4 *)(param_1 + 0x10) = uStack_260;
        *(undefined4 *)(param_1 + 0x14) = uStack_25c;
        *param_1 = 6;
        *(int *)(param_1 + 4) = (int)local_128;
        _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h8303f69cbb083d43E(&local_1f8);
        plVar6 = local_280;
        uVar10 = local_288;
      }
      goto LAB_0038d89e;
    }
                    /* try { // try from 0038d43b to 0038d44d has its CatchHandler @ 0038d943 */
    local_238 = CONCAT44(uStack_174,uStack_178);
    _ZN4just8settings8Settings5shell17hd5c075b0126ed5e7E(&local_158,lVar9 + 0xa8,lVar7);
    uVar4 = local_138;
    uVar10 = uStack_140;
    ppuVar3 = local_148;
                    /* try { // try from 0038d476 to 0038d482 has its CatchHandler @ 0038d933 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_158,local_158,uStack_150);
    local_1e8 = local_148;
    local_1f8 = (undefined4)local_158;
    uStack_1f4 = local_158._4_4_;
    uStack_1f0 = (undefined4)uStack_150;
    uStack_1ec = uStack_150._4_4_;
                    /* try { // try from 0038d4a3 to 0038d4c2 has its CatchHandler @ 0038d921 */
    _ZN5alloc3str17join_generic_copy17h1d897c8c94fa609aE(&local_158,uVar10,uVar4,&DAT_0016e4f0,1);
    *(undefined8 ***)(param_1 + 0x38) = local_148;
    *(undefined **)(param_1 + 0x28) = local_158;
    *(long *)(param_1 + 0x30) = uStack_150;
    *(undefined8 ***)(param_1 + 0x50) = local_258;
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_264,local_268);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_25c,uStack_260);
    *(undefined4 *)(param_1 + 0x10) = local_1f8;
    *(undefined4 *)(param_1 + 0x14) = uStack_1f4;
    *(undefined4 *)(param_1 + 0x18) = uStack_1f0;
    *(undefined4 *)(param_1 + 0x1c) = uStack_1ec;
    *(undefined8 ***)(param_1 + 0x20) = local_1e8;
    *param_1 = 4;
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_174,uStack_178);
    _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
              (ppuVar3,uVar10);
  }
  _ZN4core3ptr106drop_in_place_LT_alloc__vec__Vec_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17hfc639b08ed3124bbE
            (local_288,local_280);
  plVar6 = local_208;
  uVar10 = local_210;
LAB_0038d89e:
  _ZN4core3ptr106drop_in_place_LT_alloc__vec__Vec_LT__RF_just__binding__Binding_LT_just__expression__Expression_GT__GT__GT_17hfc639b08ed3124bbE
            (uVar10,plVar6);
  return;
}