undefined  [16] _ZN5uu_ls4list17h6ddc1ea5566af8ccE(long param_1,long param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *******unaff_R12;
  undefined auVar13 [16];
  undefined8 local_458;
  undefined8 local_450;
  long local_448;
  undefined8 local_440;
  long local_438;
  long local_430;
  undefined local_428 [40];
  undefined8 ******local_400;
  code *local_3f8;
  undefined8 ******local_3f0;
  code *local_3e8;
  long local_3e0;
  undefined8 *****local_3d8;
  char local_3d0;
  undefined8 *****local_3c8;
  long local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined local_3a8 [16];
  undefined8 ******local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  long lStack_360;
  undefined8 *****local_358;
  char local_350;
  undefined local_348 [29];
  char local_32b;
  undefined8 ******local_328;
  undefined8 *****pppppuStack_320;
  undefined8 ******local_318;
  undefined8 *****pppppuStack_310;
  undefined8 ******local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 ******local_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 ******local_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 ******local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 *****local_c0;
  undefined local_b8 [136];
  
  local_458 = 0;
  local_450 = 8;
  local_448 = 0;
  local_440 = 0;
  local_438 = 8;
  local_430 = 0;
  local_3e0 = param_1;
                    /* try { // try from 00227165 to 0022717c has its CatchHandler @ 00227b11 */
  uVar8 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h869ec275f269e8baE
            (local_428,0x2000,uVar8);
  local_390 = 0;
  local_388 = 8;
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 8;
  local_368 = 0;
  lStack_360 = 0;
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    local_32b = '\x02';
  }
  else {
    _ZN4core3ops8function6FnOnce9call_once17hb012765dfd0482a2E(local_348,param_2 + 0x18);
  }
  uVar5 = *(ulong *)(local_3e0 + 0x10);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h58ac219310b2eb09E
            (&local_400);
  lVar9 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he27f369b65ee7c46E
                    (&local_400);
  if (lVar9 != 0) {
    cVar1 = *(char *)(param_2 + 0xe8);
    uVar2 = *(undefined *)(param_2 + 0xeb);
    uVar3 = *(undefined *)(param_2 + 0xf2);
    unaff_R12 = &local_1f8;
    do {
                    /* try { // try from 0022728a to 002272fe has its CatchHandler @ 00227b65 */
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_328,lVar9);
      local_398 = local_318;
      local_3a8._0_8_ = local_328;
      local_3a8._8_8_ = pppppuStack_320;
      local_328 = (undefined8 *******)0x0;
      local_3c0 = -0x8000000000000000;
      _ZN5uu_ls8PathData3new17ha3e1f49dfc1f89b1E
                (unaff_R12,local_3a8,&local_328,&local_3c0,uVar2,uVar3,1);
                    /* try { // try from 002272ff to 00227319 has its CatchHandler @ 00227b53 */
      lVar9 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(unaff_R12,local_428);
      if (lVar9 == 0) {
                    /* try { // try from 00227370 to 00227377 has its CatchHandler @ 00227b65 */
        _ZN4core3ptr36drop_in_place_LT_uu_ls__PathData_GT_17h882b87545de6c6bdE(unaff_R12);
      }
      else {
        puVar10 = (uint *)_ZN5uu_ls8PathData9file_type17h128ed7d98b354477E(unaff_R12,local_428);
        if (puVar10 == (uint *)0x0) {
                    /* try { // try from 00227250 to 0022725a has its CatchHandler @ 00227b53 */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
        }
        else if ((cVar1 == '\0') && ((*puVar10 & 0xf000) == 0x4000)) {
          (*(code *)PTR_memcpy_0031da60)(&local_328,unaff_R12,0x130);
                    /* try { // try from 00227353 to 0022735f has its CatchHandler @ 00227b51 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hda8522d54d2d0972E(&local_440,&local_328);
          goto LAB_00227279;
        }
        (*(code *)PTR_memcpy_0031da60)(&local_328,unaff_R12,0x130);
                    /* try { // try from 0022726c to 00227278 has its CatchHandler @ 00227b51 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hda8522d54d2d0972E(&local_458,&local_328);
      }
LAB_00227279:
      lVar9 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he27f369b65ee7c46E
                        (&local_400);
    } while (lVar9 != 0);
  }
                    /* try { // try from 0022737d to 002273fd has its CatchHandler @ 00227b4c */
  _ZN4core3ptr79drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__path__Path_GT__GT_17hcfe75888939086e5E
            (&local_400);
  _ZN5uu_ls12sort_entries17h9b56d1e19b40eaefE(local_450,local_448,param_2,local_428);
  _ZN5uu_ls12sort_entries17h9b56d1e19b40eaefE(local_438,local_430,param_2,local_428);
  if ((local_32b != '\x02') &&
     (lVar9 = _ZN5uu_ls6colors12StyleManager16get_normal_style17hc92a465b83f2ab18E(local_348),
     lVar9 != 0)) {
    _ZN5uu_ls6colors12StyleManager5reset17h8e7360f134edbed2E(&local_1f8,local_348,1);
    local_3f8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_328 = (undefined8 ******)&DAT_00123c10;
    pppppuStack_320 = (undefined8 ******)0x1;
    local_308 = (undefined8 *******)0x0;
    pppppuStack_310 = (undefined8 ******)0x1;
                    /* try { // try from 0022744d to 0022746c has its CatchHandler @ 00227aae */
    local_400 = &local_1f8;
    local_318 = &local_400;
    lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_428,&local_328);
    if (lVar9 != 0) {
      auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                          (lVar9);
                    /* try { // try from 0022746d to 002274b5 has its CatchHandler @ 00227b4c */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_1f8);
      goto LAB_002274c1;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_1f8);
  }
  auVar13 = _ZN5uu_ls13display_items17hbe9721d3f3017f49E
                      (local_450,local_448,param_2,local_428,&local_390,local_348);
  if (auVar13._0_8_ != 0) {
LAB_002274c1:
                    /* try { // try from 002274c1 to 002274cd has its CatchHandler @ 00227ad6 */
    _ZN4core3ptr46drop_in_place_LT_uu_ls__dired__DiredOutput_GT_17h57b2c8ef12c6840dE(&local_390);
                    /* try { // try from 002274d1 to 002274da has its CatchHandler @ 00227b11 */
    _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h15dbe50861716c12E
              (local_428);
                    /* try { // try from 002274db to 002274e4 has its CatchHandler @ 00227acb */
    _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
              (&local_440);
    _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
              (&local_458);
    return auVar13;
  }
  local_3b8 = local_430 * 0x130 + local_438;
  local_3c0 = local_438;
  local_3b0 = 0;
  auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc66774401883fce1E
                      (&local_3c0);
  if (auVar13._8_8_ == 0) {
    cVar1 = *(char *)(param_2 + 0xee);
  }
  else {
    cVar4 = *(char *)(param_2 + 0xe6);
    cVar1 = *(char *)(param_2 + 0xee);
    do {
      lVar12 = auVar13._8_8_;
      lVar9 = lVar12 + 0x18;
                    /* try { // try from 002275ac to 002275b6 has its CatchHandler @ 00227b07 */
      _ZN3std2fs8read_dir17h9d938750fa0d5aedE(&local_358,lVar9);
      pppppuVar6 = local_358;
      if (local_350 != '\x02') {
        local_3d8 = local_358;
        local_3d0 = local_350;
        if (cVar4 == '\0' && uVar5 < 2) {
LAB_00227882:
          _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h627ba5d5895a5d3cE
                    (&local_328);
          local_1d8 = local_308;
          uStack_1d0 = uStack_300;
          uStack_1cc = uStack_2fc;
          local_1e8 = local_318;
          pppppuStack_1e0 = pppppuStack_310;
          local_1f8 = local_328;
          pppppuStack_1f0 = pppppuStack_320;
                    /* try { // try from 002278cc to 002278d6 has its CatchHandler @ 00227b16 */
          _ZN6uucore8features2fs15FileInformation9from_path17h569773e274f836e3E
                    (&local_328,lVar9,*(undefined *)(lVar12 + 0x128));
          pppppuVar6 = pppppuStack_320;
          ppppppuVar7 = local_328;
          if ((undefined8 *******)local_328 == (undefined8 *******)0x0) {
            (*(code *)PTR_memcpy_0031da60)(local_b8,&local_318,0x88);
            local_c0 = pppppuVar6;
                    /* try { // try from 00227913 to 0022796a has its CatchHandler @ 00227b16 */
            _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h5dc8e28f7c38d974E
                      (&local_1f8,&local_c0);
            auVar13 = _ZN5uu_ls15enter_directory17h306ec720e186c34eE
                                (lVar12,local_3d8,local_3d0,param_2,local_428,&local_1f8,&local_390,
                                 local_348);
            if (auVar13._0_8_ == 0) {
                    /* try { // try from 00227977 to 00227986 has its CatchHandler @ 00227ac3 */
              _ZN4core3ptr102drop_in_place_LT_std__collections__hash__set__HashSet_LT_uucore__features__fs__FileInformation_GT__GT_17h2a00dd81781aac6dE
                        (&local_1f8);
              goto LAB_00227590;
            }
          }
          else {
                    /* try { // try from 00227a34 to 00227a3c has its CatchHandler @ 00227a93 */
            auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                (pppppuStack_320);
          }
                    /* try { // try from 00227a43 to 00227a4f has its CatchHandler @ 00227a9d */
          _ZN4core3ptr102drop_in_place_LT_std__collections__hash__set__HashSet_LT_uucore__features__fs__FileInformation_GT__GT_17h2a00dd81781aac6dE
                    (&local_1f8);
          if ((undefined8 *******)ppppppuVar7 == (undefined8 *******)0x0) goto LAB_002274c1;
        }
        else if (auVar13._0_8_ == 0 && local_448 == 0) {
          if (cVar1 != '\0') {
                    /* try { // try from 00227734 to 00227889 has its CatchHandler @ 00227b0c */
            auVar13 = _ZN5uu_ls5dired6indent17h541a64321517b8c5E(local_428);
            if (auVar13._0_8_ != 0) goto LAB_00227a7f;
          }
          _ZN5uu_ls13show_dir_name17h15f4c75d324b24c3E(lVar12,local_428,param_2);
          local_328 = (undefined8 ******)&PTR_DAT_003125b8;
          pppppuStack_320 = (undefined8 ******)0x1;
          local_318 = (undefined8 ******)&DAT_00000008;
          pppppuStack_310 = (undefined8 ******)0x0;
          local_308 = (undefined8 *******)0x0;
          lVar11 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_428,&local_328);
          if (lVar11 == 0) {
            if (cVar1 != '\0') {
              lVar11 = *(long *)(lVar12 + 0x10);
              _ZN5uu_ls5dired18calculate_subdired17h85725549554709aaE(&local_390,lVar11);
              lStack_360 = lStack_360 + lVar11 + 3;
            }
            goto LAB_00227882;
          }
          auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                              (lVar11);
        }
        else {
          local_328 = (undefined8 ******)&PTR_DAT_003125b8;
          pppppuStack_320 = (undefined8 ******)0x1;
          local_318 = (undefined8 ******)&DAT_00000008;
          pppppuStack_310 = (undefined8 ******)0x0;
          local_308 = (undefined8 *******)0x0;
          lVar11 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_428,&local_328);
          if (lVar11 == 0) {
            _ZN5uu_ls13show_dir_name17h15f4c75d324b24c3E(lVar12,local_428,param_2);
            local_328 = (undefined8 ******)&PTR_DAT_003125b8;
            pppppuStack_320 = (undefined8 ******)0x1;
            local_318 = (undefined8 ******)&DAT_00000008;
            pppppuStack_310 = (undefined8 ******)0x0;
            local_308 = (undefined8 *******)0x0;
            lVar11 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(local_428,&local_328);
            if (lVar11 == 0) goto LAB_00227882;
            auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                (lVar11);
          }
          else {
                    /* try { // try from 00227a5a to 00227a78 has its CatchHandler @ 00227a91 */
            auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                (lVar11);
          }
        }
LAB_00227a7f:
                    /* try { // try from 00227a7f to 00227a8b has its CatchHandler @ 00227b4c */
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h7af0794fa1946e9cE(&local_3d8);
        goto LAB_002274c1;
      }
      local_3c8 = local_358;
                    /* try { // try from 002275d7 to 002275e0 has its CatchHandler @ 00227af5 */
      lVar11 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h5d2671fc0ed75d53E
                         (local_428);
      if (lVar11 != 0) {
                    /* try { // try from 00227a13 to 00227a1b has its CatchHandler @ 00227a9b */
        auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                            (lVar11);
                    /* try { // try from 00227a1c to 00227a2e has its CatchHandler @ 00227b4c */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h8a1f0142156ca749E(&local_3c8);
        goto LAB_002274c1;
      }
      local_400 = (undefined8 ******)pppppuVar6;
                    /* try { // try from 002275ef to 002275fe has its CatchHandler @ 00227ade */
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
                (&local_1f8,lVar9);
      local_308 = local_1e8;
      local_318 = local_1f8;
      pppppuStack_310 = pppppuStack_1f0;
      pppppuStack_320 = pppppuVar6;
      local_328 = (undefined8 ******)CONCAT71(CONCAT61(local_328._2_6_,*(char *)(lVar12 + 0x129)),2)
      ;
                    /* try { // try from 00227648 to 002276e4 has its CatchHandler @ 00227b3a */
      _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E
                (2 - (uint)(*(char *)(lVar12 + 0x129) == '\0'));
      auVar13 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_400 = (undefined8 ******)local_3a8;
      local_3f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
      local_3e8 = _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE
      ;
      local_1f8 = (undefined8 ******)&DAT_00312588;
      pppppuStack_1f0 = (undefined8 ******)0x3;
      local_1d8 = (undefined8 *******)0x0;
      local_1e8 = &local_400;
      pppppuStack_1e0 = (undefined8 ******)0x2;
      local_3f0 = &local_328;
      local_3a8 = auVar13;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_1f8);
                    /* try { // try from 002276e5 to 002276ec has its CatchHandler @ 00227af0 */
      _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(&local_328);
LAB_00227590:
      auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc66774401883fce1E
                          (&local_3c0);
    } while (auVar13._8_8_ != 0);
    unaff_R12 = (undefined8 *******)0x0;
  }
  if ((cVar1 != '\0') && (*(char *)(param_2 + 0xef) == '\0')) {
                    /* try { // try from 002279bd to 002279d1 has its CatchHandler @ 00227b4c */
    auVar13 = _ZN5uu_ls5dired18print_dired_output17h12a985547a0b3a50E(param_2,&local_390,local_428);
    if (auVar13._0_8_ != 0) goto LAB_002274c1;
  }
                    /* try { // try from 002279de to 002279ea has its CatchHandler @ 00227ad6 */
  _ZN4core3ptr46drop_in_place_LT_uu_ls__dired__DiredOutput_GT_17h57b2c8ef12c6840dE(&local_390);
                    /* try { // try from 002279ee to 002279f7 has its CatchHandler @ 00227b11 */
  _ZN4core3ptr90drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__Stdout_GT__GT_17h15dbe50861716c12E
            (local_428);
                    /* try { // try from 002279f8 to 00227a01 has its CatchHandler @ 00227acb */
  _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
            (&local_440);
  _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
            (&local_458);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R12;
  return auVar13 << 0x40;
}