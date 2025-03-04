undefined  [16]
_ZN5uu_ls15enter_directory17h306ec720e186c34eE
          (long param_1,undefined ********param_2,char param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined *******pppppppuVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined uVar11;
  undefined ********ppppppppuVar12;
  undefined auVar13 [16];
  ulong in_stack_fffffffffffffa98;
  uint uVar15;
  ulong uVar14;
  undefined local_538 [16];
  undefined *******local_528;
  undefined8 local_520;
  undefined *******local_518;
  long local_510;
  undefined *******local_508;
  char local_500;
  undefined *******local_4f8;
  undefined *******pppppppuStack_4f0;
  undefined *******local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined *******local_4c8;
  undefined *******pppppppuStack_4c0;
  undefined *******local_4b8;
  undefined *******local_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined local_490 [16];
  undefined *******local_480;
  code *local_478;
  long local_470;
  undefined *******local_468;
  undefined *******local_460;
  undefined *******pppppppuStack_458;
  undefined *******pppppppuStack_450;
  undefined *******local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined *******local_330;
  char local_328;
  undefined *******local_320;
  undefined *******pppppppuStack_318;
  undefined *******local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined *******local_1f0;
  undefined local_1e8 [136];
  undefined local_160 [304];
  
  uVar15 = (uint)(in_stack_fffffffffffffa98 >> 0x20);
  cVar7 = *(char *)(param_4 + 0xf0);
  local_498 = param_6;
  local_470 = param_4;
  local_330 = (undefined *******)param_2;
  local_328 = param_3;
  if (cVar7 == '\0') {
    local_528 = (undefined *******)param_2;
    lVar8 = _ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x260);
    if (lVar8 == 0) {
                    /* try { // try from 00228b26 to 00228b35 has its CatchHandler @ 00228c0b */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x260);
    }
                    /* try { // try from 00227f8c to 00227f98 has its CatchHandler @ 00228be4 */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
              (&local_460,param_1 + 0x18);
    local_4e8 = pppppppuStack_450;
    local_460 = (undefined *******)0x0;
                    /* try { // try from 00227fc2 to 00227fdb has its CatchHandler @ 00228bc8 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_320,&DAT_00134771,1);
    local_4b8 = local_310;
    pppppppuStack_4c0 = pppppppuStack_318;
    bVar5 = *(byte *)(param_4 + 0xeb);
    uVar11 = *(undefined *)(param_4 + 0xf2);
                    /* try { // try from 0022800c to 00228044 has its CatchHandler @ 00228bc6 */
    uVar14 = (ulong)uVar15 << 0x20;
    _ZN5uu_ls8PathData3new17ha3e1f49dfc1f89b1E
              (&local_320,&local_4f8,&local_460,&local_4c8,bVar5,uVar11,uVar14);
                    /* try { // try from 0022804d to 00228066 has its CatchHandler @ 00228bb4 */
    _ZN3std4path4Path4join17hb2350fb5456ebb1bE
              (local_490,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               &DAT_00134772,2);
    local_4c8 = (undefined *******)0x0;
                    /* try { // try from 00228073 to 0022808c has its CatchHandler @ 00228b95 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_460,&DAT_00134772,2);
    local_4e8 = pppppppuStack_450;
    local_4f8 = local_460;
    pppppppuStack_4f0 = pppppppuStack_458;
                    /* try { // try from 002280aa to 002280d8 has its CatchHandler @ 00228b93 */
    in_stack_fffffffffffffa98 = uVar14 & 0xffffffff00000000;
    _ZN5uu_ls8PathData3new17ha3e1f49dfc1f89b1E
              (&local_460,local_490,&local_4c8,&local_4f8,bVar5,uVar11,in_stack_fffffffffffffa98);
    puVar3 = PTR_memcpy_0031da60;
    (*(code *)PTR_memcpy_0031da60)(lVar8,&local_320,0x130);
    (*(code *)puVar3)(lVar8 + 0x130,&local_460,0x130);
                    /* try { // try from 0022810b to 0022811c has its CatchHandler @ 00228c0b */
    _ZN5alloc5slice4hack8into_vec17hcef9121dd0ef8e55E(&local_520,lVar8,2);
    param_2 = (undefined ********)local_528;
  }
  else {
    local_520 = 0;
    local_518 = (undefined *******)&DAT_00000008;
    local_510 = 0;
    bVar5 = *(byte *)(param_4 + 0xeb);
    uVar11 = *(undefined *)(param_4 + 0xf2);
  }
  ppppppppuVar12 = &local_4b0;
  local_528 = (undefined *******)CONCAT44(local_528._4_4_,(uint)bVar5);
  local_508 = (undefined *******)param_2;
  local_500 = param_3;
  while( true ) {
    _ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153c1e0177592fe2E
              (&local_4c8,&local_508);
    pppppppuVar4 = local_4b8;
    if ((undefined ********)local_4c8 == (undefined ********)0x0) break;
    if ((undefined ********)pppppppuStack_4c0 == (undefined ********)0x0) {
      local_468 = local_4b8;
                    /* try { // try from 00228288 to 00228291 has its CatchHandler @ 00228c4a */
      lVar8 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h5d2671fc0ed75d53E
                        (param_5);
      if (lVar8 != 0) {
                    /* try { // try from 002284db to 002284e3 has its CatchHandler @ 00228b4a */
        auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                            (lVar8);
                    /* try { // try from 002284e4 to 002284f6 has its CatchHandler @ 00228b45 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h8a1f0142156ca749E(&local_468);
                    /* try { // try from 002284f7 to 00228500 has its CatchHandler @ 00228c43 */
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h7af0794fa1946e9cE(&local_508);
        goto LAB_00228501;
      }
      pppppppuStack_458 = pppppppuVar4;
      local_460 = (undefined *******)CONCAT71(local_460._1_7_,1);
                    /* try { // try from 002282ab to 00228351 has its CatchHandler @ 00228c6d */
      _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      auVar13 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_490._0_8_ = local_538;
      local_490._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
      local_480 = (undefined *******)&local_460;
      local_478 = _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE
      ;
      local_320 = (undefined *******)&DAT_00312588;
      pppppppuStack_318 = (undefined *******)0x3;
      local_300 = 0;
      local_310 = (undefined *******)local_490;
      local_308 = 2;
      local_538 = auVar13;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_320);
                    /* try { // try from 00228352 to 0022835e has its CatchHandler @ 00228c48 */
      _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(&local_460);
    }
    else {
      local_4d8 = local_4a0;
      local_4e8 = local_4b0;
      uStack_4e0 = uStack_4a8;
      uStack_4dc = uStack_4a4;
      local_4f8 = pppppppuStack_4c0;
      pppppppuStack_4f0 = local_4b8;
                    /* try { // try from 002281c8 to 002281ec has its CatchHandler @ 00228c5e */
      cVar6 = _ZN5uu_ls14should_display17h04a8ace30b4ea77eE(&local_4f8,local_470);
      if (cVar6 == '\0') {
                    /* try { // try from 00228170 to 00228184 has its CatchHandler @ 00228c7f */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h7ea99ec2005f12cbE(&local_4f8);
      }
      else {
        _ZN3std2fs8DirEntry4path17h5b1bdb0f1090af27E(local_490,&local_4f8);
        local_438 = local_4d8;
        local_448 = local_4e8;
        uStack_440 = (undefined ********)CONCAT44(uStack_4dc,uStack_4e0);
        pppppppuStack_458 = local_4f8;
        pppppppuStack_450 = pppppppuStack_4f0;
        local_460 = (undefined *******)&DAT_00000001;
        local_320 = (undefined *******)0x8000000000000000;
                    /* try { // try from 00228233 to 0022827a has its CatchHandler @ 00228c5c */
        in_stack_fffffffffffffa98 = in_stack_fffffffffffffa98 & 0xffffffff00000000;
        _ZN5uu_ls8PathData3new17ha3e1f49dfc1f89b1E
                  (local_160,local_490,&local_460,&local_320,(ulong)local_528 & 0xffffffff,uVar11,
                   in_stack_fffffffffffffa98);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hda8522d54d2d0972E(&local_520,local_160);
      }
    }
  }
                    /* try { // try from 00228364 to 002283fa has its CatchHandler @ 00228c43 */
  _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h7af0794fa1946e9cE(&local_508);
  lVar8 = local_470;
  _ZN5uu_ls12sort_entries17h9b56d1e19b40eaefE(local_518,local_510,local_470,param_5);
  if ((*(char *)(lVar8 + 0xf8) == '\x01') || (*(char *)(lVar8 + 0xea) != '\0')) {
    _ZN5uu_ls12return_total17h87a8c45b5866afa6E(&local_460,local_518,local_510,lVar8,param_5);
    ppppppppuVar12 = (undefined ********)pppppppuStack_450;
    auVar13._8_8_ = pppppppuStack_450;
    auVar13._0_8_ = pppppppuStack_458;
    if ((undefined ********)local_460 == (undefined ********)0x8000000000000000) goto LAB_00228501;
    local_320 = local_460;
    pppppppuStack_318 = pppppppuStack_458;
    local_310 = pppppppuStack_450;
    local_4c8 = pppppppuStack_458;
    pppppppuStack_4c0 = pppppppuStack_450;
    local_4f8 = (undefined *******)&local_4c8;
    pppppppuStack_4f0 =
         (undefined *******)
         _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
    local_460 = (undefined *******)&DAT_00123c10;
    pppppppuStack_458 = (undefined *******)&DAT_00000001;
    uStack_440 = (undefined ********)0x0;
    local_448 = (undefined *******)&DAT_00000001;
                    /* try { // try from 002284a2 to 002284c5 has its CatchHandler @ 00228b4f */
    pppppppuStack_450 = (undefined *******)&local_4f8;
    lVar9 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_5,&local_460);
    if (lVar9 != 0) {
      auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                          (lVar9);
                    /* try { // try from 002284c6 to 002284d8 has its CatchHandler @ 00228c43 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_320);
      goto LAB_00228501;
    }
    if (*(char *)(lVar8 + 0xee) != '\0') {
      _ZN5uu_ls5dired9add_total17hcf0e71387fbf703cE(param_7,local_310);
    }
                    /* try { // try from 00228aa3 to 00228aaf has its CatchHandler @ 00228c43 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_320);
  }
  auVar13 = _ZN5uu_ls13display_items17hbe9721d3f3017f49E
                      (local_518,local_510,lVar8,param_5,param_7,param_8);
  if (auVar13._0_8_ == 0) {
    if (*(char *)(lVar8 + 0xe6) != '\0') {
      pppppppuStack_4f0 = local_518 + local_510 * 0x26;
      local_4e8 = (undefined *******)(ulong)((uint)(cVar7 == '\0') * 2);
      local_4f8 = local_518;
      lVar9 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h2db1f8cc0d321202E
                        (&local_4f8);
      puVar3 = PTR_memcpy_0031da60;
      if (lVar9 != 0) {
        local_528 = (undefined *******)CONCAT71(local_528._1_7_,*(undefined *)(lVar8 + 0xee));
        do {
          lVar1 = lVar9 + 0x18;
                    /* try { // try from 002285ba to 002285c6 has its CatchHandler @ 00228c1d */
          _ZN3std2fs8read_dir17h9d938750fa0d5aedE(&local_508);
          pppppppuVar4 = local_508;
          auVar13 = local_538;
          if (local_500 != '\x02') {
            local_538._0_8_ = local_508;
            local_538._9_7_ = auVar13._9_7_;
            local_538[8] = local_500;
                    /* try { // try from 00228725 to 00228734 has its CatchHandler @ 00228c34 */
            _ZN6uucore8features2fs15FileInformation9from_path17h569773e274f836e3E
                      (&local_460,lVar1,*(undefined *)(lVar9 + 0x128));
            pppppppuVar4 = pppppppuStack_458;
            if ((undefined ********)local_460 == (undefined ********)0x0) {
              (*(code *)puVar3)(local_1e8,&pppppppuStack_450,0x88);
              local_1f0 = pppppppuVar4;
                    /* try { // try from 0022876c to 002287ab has its CatchHandler @ 00228c34 */
              cVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h5dc8e28f7c38d974E
                                (local_498,&local_1f0);
              if (cVar7 == '\0') {
                local_460 = (undefined *******)&PTR_DAT_003125b8;
                pppppppuStack_458 = (undefined *******)&DAT_00000001;
                pppppppuStack_450 = (undefined *******)&DAT_00000008;
                local_448 = (undefined *******)0x0;
                uStack_440 = (undefined ********)0x0;
                    /* try { // try from 002288d1 to 002289be has its CatchHandler @ 00228c34 */
                lVar10 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_5,&local_460);
                if (lVar10 == 0) {
                  if ((char)local_528 != '\0') {
                    *(undefined8 *)(param_7 + 0x30) = 2;
                    auVar13 = _ZN5uu_ls5dired6indent17h541a64321517b8c5E(param_5);
                    if (auVar13._0_8_ != 0) goto LAB_00228b00;
                    _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
                              (&local_460,*(undefined8 *)(lVar9 + 0x20),
                               *(undefined8 *)(lVar9 + 0x28));
                    pppppppuVar4 = pppppppuStack_450;
                    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h950c753f5d689b41E
                              (&local_460);
                    _ZN5uu_ls5dired18calculate_subdired17h85725549554709aaE(param_7,pppppppuVar4);
                    *(undefined **)(param_7 + 0x30) =
                         (undefined *)((long)pppppppuVar4 + *(long *)(param_7 + 0x30) + 3);
                  }
                  _ZN5uu_ls13show_dir_name17h15f4c75d324b24c3E(lVar9,param_5,lVar8);
                  local_460 = (undefined *******)&PTR_DAT_003125b8;
                  pppppppuStack_458 = (undefined *******)&DAT_00000001;
                  pppppppuStack_450 = (undefined *******)&DAT_00000008;
                  local_448 = (undefined *******)0x0;
                  uStack_440 = (undefined ********)0x0;
                  lVar10 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_5,&local_460);
                  if (lVar10 == 0) {
                    /* try { // try from 002289d2 to 00228a25 has its CatchHandler @ 00228bf1 */
                    auVar13 = _ZN5uu_ls15enter_directory17h306ec720e186c34eE
                                        (lVar9,local_538._0_8_,local_538._8_8_ & 0xff,lVar8,param_5,
                                         local_498,param_7,param_8);
                    if (auVar13._0_8_ == 0) {
                      _ZN6uucore8features2fs15FileInformation9from_path17h569773e274f836e3E
                                (&local_460,lVar1,*(undefined *)(lVar9 + 0x128));
                      pppppppuVar4 = pppppppuStack_458;
                      if ((undefined ********)local_460 == (undefined ********)0x0) {
                        (*(code *)puVar3)(&pppppppuStack_318,&pppppppuStack_450,0x88);
                        local_320 = pppppppuVar4;
                    /* try { // try from 00228a58 to 00228a6c has its CatchHandler @ 00228bf1 */
                        _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h810d94f18f4ab17cE
                                  (local_498,&local_320);
                        goto LAB_002285a0;
                      }
                    /* try { // try from 00228b12 to 00228b1a has its CatchHandler @ 00228b36 */
                      auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                          (pppppppuStack_458);
                    }
                    goto LAB_00228501;
                  }
                  auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                      (lVar10);
                }
                else {
                  auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                      (lVar10);
                }
              }
              else {
                lVar9 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h5d2671fc0ed75d53E
                                  (param_5);
                if (lVar9 == 0) {
                  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
                            (&local_320,lVar1);
                  local_448 = local_310;
                  pppppppuStack_458 = local_320;
                  pppppppuStack_450 = pppppppuStack_318;
                  local_460 = (undefined *******)CONCAT71(local_460._1_7_,5);
                    /* try { // try from 002287d3 to 00228882 has its CatchHandler @ 00228bf9 */
                  _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(2);
                  auVar13 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                  local_4c8 = (undefined *******)local_490;
                  pppppppuStack_4c0 =
                       (undefined *******)
                       _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
                  local_4b8 = (undefined *******)&local_460;
                  local_4b0 = (undefined *******)
                              _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE
                  ;
                  local_320 = (undefined *******)&DAT_00312588;
                  pppppppuStack_318 = (undefined *******)0x3;
                  local_300 = 0;
                  local_310 = (undefined *******)&local_4c8;
                  local_308 = 2;
                  local_490 = auVar13;
                  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_320);
                    /* try { // try from 00228883 to 0022888f has its CatchHandler @ 00228c34 */
                  _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(&local_460);
                    /* try { // try from 00228890 to 00228899 has its CatchHandler @ 00228c1d */
                  _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h7af0794fa1946e9cE(local_538)
                  ;
                  goto LAB_002285a0;
                }
                auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                    (lVar9);
              }
            }
            else {
                    /* try { // try from 00228ad3 to 00228afc has its CatchHandler @ 00228b40 */
              auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                  (pppppppuStack_458);
            }
LAB_00228b00:
                    /* try { // try from 00228b03 to 00228b0c has its CatchHandler @ 00228c43 */
            _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h7af0794fa1946e9cE(local_538);
            goto LAB_00228501;
          }
          local_538._0_8_ = local_508;
                    /* try { // try from 002285de to 002285e7 has its CatchHandler @ 00228b81 */
          lVar10 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h5d2671fc0ed75d53E
                             (param_5);
          if (lVar10 != 0) {
                    /* try { // try from 00228ab5 to 00228abd has its CatchHandler @ 00228b3e */
            auVar13 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                                (lVar10);
                    /* try { // try from 00228abe to 00228acd has its CatchHandler @ 00228c43 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h8a1f0142156ca749E(local_538);
            goto LAB_00228501;
          }
          local_4c8 = pppppppuVar4;
                    /* try { // try from 002285f9 to 00228608 has its CatchHandler @ 00228b6c */
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4e545ed874bc91f1E
                    (&local_320,lVar1);
          uStack_440 = (undefined ********)local_310;
          pppppppuStack_450 = local_320;
          local_448 = pppppppuStack_318;
          pppppppuStack_458 = pppppppuVar4;
          local_460 = (undefined *******)
                      CONCAT71(CONCAT61(local_460._2_6_,*(char *)(lVar9 + 0x129)),2);
                    /* try { // try from 0022864b to 002286f5 has its CatchHandler @ 00228c22 */
          _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E
                    (2 - (uint)(*(char *)(lVar9 + 0x129) == '\0'));
          auVar13 = _ZN6uucore9util_name17h60d842bf27b05e82E();
          local_4c8 = (undefined *******)local_490;
          pppppppuStack_4c0 =
               (undefined *******)
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2a9d35fa3fd2b5f3E;
          local_4b8 = (undefined *******)&local_460;
          local_4b0 = (undefined *******)
                      _ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d2fdcae43ce792dE
          ;
          local_320 = (undefined *******)&DAT_00312588;
          pppppppuStack_318 = (undefined *******)0x3;
          local_300 = 0;
          local_310 = (undefined *******)&local_4c8;
          local_308 = 2;
          local_490 = auVar13;
          _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_320);
                    /* try { // try from 002286f6 to 00228702 has its CatchHandler @ 00228b64 */
          _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17he771fbcc7e9ba207E(&local_460);
LAB_002285a0:
          lVar9 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h2db1f8cc0d321202E
                            (&local_4f8);
          ppppppppuVar12 = (undefined ********)puVar3;
        } while (lVar9 != 0);
      }
    }
    _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
              (&local_520);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ppppppppuVar12;
    return auVar2 << 0x40;
  }
LAB_00228501:
  _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17h40cc1e9309e62c08E
            (&local_520);
  return auVar13;
}