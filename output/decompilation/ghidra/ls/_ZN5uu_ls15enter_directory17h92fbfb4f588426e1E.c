undefined  [16]
_ZN5uu_ls15enter_directory17h92fbfb4f588426e1E
          (long param_1,undefined8 ***param_2,char param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  char cVar8;
  char cVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long lVar12;
  undefined uVar13;
  byte bVar14;
  undefined auVar15 [16];
  ulong in_stack_fffffffffffffa98;
  uint uVar17;
  ulong uVar16;
  undefined local_540 [16];
  undefined8 ***local_530;
  undefined8 local_528;
  char local_520;
  undefined8 ***local_518;
  undefined8 ***pppuStack_510;
  undefined8 ***local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 ***local_4e8;
  undefined8 ***pppuStack_4e0;
  undefined8 ***local_4d8;
  undefined8 ***local_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined local_4b0 [16];
  undefined8 ***local_4a0;
  undefined *local_498;
  uint local_48c;
  undefined8 local_488;
  undefined8 ***local_480;
  long local_478;
  long local_470;
  undefined8 ***local_468;
  undefined8 ***local_460;
  undefined8 ***pppuStack_458;
  undefined8 ***pppuStack_450;
  undefined8 ***local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_330;
  char local_328;
  undefined8 ***local_320;
  undefined8 ***pppuStack_318;
  undefined8 ***pppuStack_310;
  undefined8 ***local_308;
  undefined8 local_300;
  byte local_2f8;
  undefined8 ***local_1f0;
  undefined local_1e8 [136];
  undefined local_160 [304];
  
  uVar17 = (uint)(in_stack_fffffffffffffa98 >> 0x20);
  cVar9 = *(char *)(param_4 + 0xf8);
  local_4b8 = param_6;
  local_470 = param_4;
  local_330 = param_2;
  local_328 = param_3;
  if (cVar9 == '\0') {
    local_530 = param_2;
    ppppuVar10 = (undefined8 ****)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x260,0);
    if (ppppuVar10 == (undefined8 ****)0x0) {
                    /* try { // try from 0029bb2a to 0029bb39 has its CatchHandler @ 0029bc7d */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0048f900)(8,0x260);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* try { // try from 0029af63 to 0029af6f has its CatchHandler @ 0029bbdd */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h523154303afc7abcE
              (&local_460,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    local_508 = pppuStack_450;
    local_460 = (undefined8 ****)0x0;
                    /* try { // try from 0029af96 to 0029afae has its CatchHandler @ 0029bbc1 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
              (&local_320,".",1);
    local_4d8 = pppuStack_310;
    pppuStack_4e0 = pppuStack_318;
    uVar13 = *(undefined *)(param_4 + 0xf3);
    bVar14 = *(byte *)(param_4 + 0xfa);
                    /* try { // try from 0029afdf to 0029b017 has its CatchHandler @ 0029bbbf */
    uVar16 = (ulong)uVar17 << 0x20;
    _ZN5uu_ls8PathData3new17h2697718e531487bcE
              (&local_320,&local_518,&local_460,&local_4e8,uVar13,bVar14,uVar16);
                    /* try { // try from 0029b020 to 0029b02c has its CatchHandler @ 0029bbad */
    _ZN3std4path4Path4join17hd69bb46a75189c9aE
              (local_4b0,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    local_4e8 = (undefined8 ****)0x0;
                    /* try { // try from 0029b039 to 0029b051 has its CatchHandler @ 0029bb8e */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
              (&local_460,"..",2);
    local_508 = pppuStack_450;
    local_518 = local_460;
    pppuStack_510 = pppuStack_458;
                    /* try { // try from 0029b06c to 0029b09a has its CatchHandler @ 0029bb8c */
    in_stack_fffffffffffffa98 = uVar16 & 0xffffffff00000000;
    _ZN5uu_ls8PathData3new17h2697718e531487bcE
              (&local_460,local_4b0,&local_4e8,&local_518,uVar13,bVar14,in_stack_fffffffffffffa98);
    puVar3 = PTR_memcpy_0048f8f8;
    (*(code *)PTR_memcpy_0048f8f8)(ppppuVar10,&local_320,0x130);
    (*(code *)puVar3)(ppppuVar10 + 0x26,&local_460,0x130);
    local_488 = 2;
    local_478 = 2;
    param_2 = local_530;
    local_480 = ppppuVar10;
  }
  else {
    local_488 = 0;
    local_480 = (undefined8 ***)&DAT_00000008;
    local_478 = 0;
    uVar13 = *(undefined *)(param_4 + 0xf3);
    bVar14 = *(byte *)(param_4 + 0xfa);
  }
  puVar3 = 
  PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_0048fe88
  ;
  local_530 = (undefined8 ****)0x8000000000000001;
  local_48c = (uint)bVar14;
  ppppuVar10 = &local_518;
  local_528 = param_2;
  local_520 = param_3;
  while( true ) {
    (*(code *)puVar3)(&local_4e8,&local_528);
    pppuVar5 = local_4d8;
    if ((int)local_4e8 != 1) break;
    if ((undefined8 ****)pppuStack_4e0 == (undefined8 ****)0x0) {
      local_468 = local_4d8;
                    /* try { // try from 0029b278 to 0029b281 has its CatchHandler @ 0029bc2c */
      lVar11 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h6ed1f3d156b2ad73E
                         (param_5);
      if (lVar11 != 0) {
                    /* try { // try from 0029b4ab to 0029b4b3 has its CatchHandler @ 0029bb75 */
        auVar15 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                  )(lVar11);
                    /* try { // try from 0029b4b4 to 0029b4c6 has its CatchHandler @ 0029bb70 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6fdf0f570893b293E(&local_468);
                    /* try { // try from 0029b4c7 to 0029b530 has its CatchHandler @ 0029bc25 */
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h014e861f3293567cE(&local_528);
        goto LAB_0029b53c;
      }
      pppuStack_318 = pppuVar5;
      local_320 = local_530;
                    /* try { // try from 0029b2a0 to 0029b346 has its CatchHandler @ 0029bc4f */
      (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0048fe50)(1);
      auVar15 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0048f920)();
      local_4b0._0_8_ = local_540;
      local_4b0._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
      local_4a0 = &local_320;
      local_498 = 
      PTR__ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17hdc9e99969c77feadE_0048fe58
      ;
      local_460 = (undefined8 ***)&DAT_00386b10;
      pppuStack_458 = (undefined8 ****)0x3;
      uStack_440 = 0;
      pppuStack_450 = (undefined8 ***)local_4b0;
      local_448 = (undefined8 ****)0x2;
      local_540 = auVar15;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048f928)(&local_460);
                    /* try { // try from 0029b347 to 0029b353 has its CatchHandler @ 0029bc2a */
      _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17h1c73d4e6f6d6872eE(&local_320);
    }
    else {
      local_4f8 = local_4c0;
      local_508 = local_4d0;
      uStack_500 = uStack_4c8;
      uStack_4fc = uStack_4c4;
      local_518 = pppuStack_4e0;
      pppuStack_510 = local_4d8;
                    /* try { // try from 0029b1a8 to 0029b1cc has its CatchHandler @ 0029bc40 */
      cVar8 = _ZN5uu_ls14should_display17h53cf61567fcfaec5E(ppppuVar10,local_470);
      if (cVar8 == '\0') {
                    /* try { // try from 0029b150 to 0029b164 has its CatchHandler @ 0029bc61 */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h09b446a57ee83981E(ppppuVar10);
      }
      else {
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_0048fe90)(local_4b0,ppppuVar10);
        local_438 = local_4f8;
        local_448 = local_508;
        uStack_440 = CONCAT44(uStack_4fc,uStack_500);
        pppuStack_458 = local_518;
        pppuStack_450 = pppuStack_510;
        local_460 = (undefined8 ***)&DAT_00000001;
        local_320 = (undefined8 ***)&DAT_8000000000000000;
                    /* try { // try from 0029b20d to 0029b261 has its CatchHandler @ 0029bc3e */
        in_stack_fffffffffffffa98 = in_stack_fffffffffffffa98 & 0xffffffff00000000;
        _ZN5uu_ls8PathData3new17h2697718e531487bcE
                  (local_160,local_4b0,&local_460,&local_320,uVar13,local_48c,
                   in_stack_fffffffffffffa98);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h65f370254cdcedb4E
                  (&local_488,local_160,&PTR_s_src_uu_ls_src_ls_rs_00386b98);
      }
    }
  }
                    /* try { // try from 0029b359 to 0029b3c8 has its CatchHandler @ 0029bc25 */
  _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h014e861f3293567cE(&local_528);
  lVar6 = local_470;
  lVar11 = local_478;
  pppuVar5 = local_480;
  _ZN5uu_ls12sort_entries17hf04183368c5c3444E(local_480,local_478,local_470,param_5);
  if ((*(char *)(lVar6 + 0x100) == '\x01') || (*(char *)(lVar6 + 0xf2) == '\x01')) {
    _ZN5uu_ls12return_total17hb9fec58e6a76a8a4E(&local_460,pppuVar5,lVar11,lVar6,param_5);
    pppuVar7 = pppuStack_450;
    auVar15._8_8_ = pppuStack_450;
    auVar15._0_8_ = pppuStack_458;
    if (local_460 == (undefined8 ***)&DAT_8000000000000000) goto LAB_0029b53c;
    local_320 = local_460;
    pppuStack_318 = pppuStack_458;
    pppuStack_310 = pppuStack_450;
    local_4e8 = pppuStack_458;
    pppuStack_4e0 = pppuStack_450;
    local_518 = &local_4e8;
    pppuStack_510 =
         (undefined8 ***)_ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
    local_460 = (undefined8 ***)&DAT_001cf290;
    pppuStack_458 = (undefined8 ***)&DAT_00000001;
    uStack_440 = 0;
    local_448 = (undefined8 ***)&DAT_00000001;
                    /* try { // try from 0029b473 to 0029b492 has its CatchHandler @ 0029bbf2 */
    pppuStack_450 = ppppuVar10;
    lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_5,&local_460);
    if (lVar12 != 0) {
      auVar15 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                )(lVar12);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_320);
      goto LAB_0029b53c;
    }
    if (*(char *)(lVar6 + 0xf6) != '\0') {
      lVar12 = *(long *)(param_7 + 0x30);
      if (lVar12 == 0) {
        if (*(long *)(param_7 + 0x10) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(param_7 + 8) + -8 + *(long *)(param_7 + 0x10) * 0x10) + 1;
        }
      }
      *(undefined **)(param_7 + 0x30) = (undefined *)((long)pppuVar7 + lVar12 + 2);
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_320);
  }
  auVar15 = _ZN5uu_ls13display_items17h730c32362a116b61E(pppuVar5,lVar11,lVar6,param_5,param_7);
  if (auVar15._0_8_ == 0) {
    if (*(char *)(lVar6 + 0xee) == '\x01') {
      pppuStack_510 = pppuVar5 + lVar11 * 0x26;
      local_508 = (undefined8 ***)(ulong)((uint)(cVar9 == '\0') * 2);
      local_518 = pppuVar5;
      lVar11 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h04cfa97d78282e6cE
                         (&local_518);
      if (lVar11 != 0) {
        local_530 = (undefined8 ***)CONCAT71(local_530._1_7_,*(undefined *)(lVar6 + 0xf6));
        do {
          ppppuVar10 = (undefined8 ****)(lVar11 + 0x18);
                    /* try { // try from 0029b5ea to 0029b5f6 has its CatchHandler @ 0029bbed */
          _ZN3std2fs8read_dir17h9952d4fb94ce2eb2E(&local_528,ppppuVar10);
          uVar4 = local_528;
          auVar15 = local_540;
          if (local_520 != '\x02') {
            local_540._0_8_ = local_528;
            local_540._9_7_ = auVar15._9_7_;
            local_540[8] = local_520;
                    /* try { // try from 0029b748 to 0029b757 has its CatchHandler @ 0029bc16 */
            _ZN6uucore8features2fs15FileInformation9from_path17he047f87eaabe1edcE
                      (&local_460,ppppuVar10,*(undefined *)(lVar11 + 0x128));
            pppuVar5 = pppuStack_458;
            if ((int)local_460 == 1) {
                    /* try { // try from 0029bacc to 0029bb00 has its CatchHandler @ 0029bb46 */
              auVar15 = (*(code *)
                          PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                        )(pppuStack_458);
            }
            else {
              (*(code *)PTR_memcpy_0048f8f8)(local_1e8,&pppuStack_450,0x88);
              local_1f0 = pppuVar5;
                    /* try { // try from 0029b791 to 0029b7d7 has its CatchHandler @ 0029bc16 */
              cVar9 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h8f2f6429b9115ef1E
                                (local_4b8,&local_1f0);
              if (cVar9 == '\0') {
                local_460 = (undefined8 ***)&PTR_s_OutOfRangeImpossibleNotEnoughInv_003866e0;
                pppuStack_458 = (undefined8 ***)&DAT_00000001;
                pppuStack_450 = (undefined8 ***)&DAT_00000008;
                local_448 = (undefined8 ****)0x0;
                uStack_440 = 0;
                    /* try { // try from 0029b904 to 0029b9fc has its CatchHandler @ 0029bc16 */
                lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_5,&local_460);
                if (lVar12 == 0) {
                  if (((ulong)local_530 & 1) != 0) {
                    *(undefined8 *)(param_7 + 0x30) = 2;
                    auVar15 = _ZN5uu_ls5dired6indent17h7abdb3264981e476E(param_5);
                    if (auVar15._0_8_ != 0) goto LAB_0029bb04;
                    (*(code *)
                      PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
                              (&local_460,*(undefined8 *)(lVar11 + 0x20),
                               *(undefined8 *)(lVar11 + 0x28));
                    pppuVar5 = pppuStack_450;
                    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
                              (&local_460);
                    _ZN5uu_ls5dired18calculate_subdired17h7fcfc93e038bf6d6E(param_7,pppuVar5);
                    *(undefined **)(param_7 + 0x30) =
                         (undefined *)((long)pppuVar5 + *(long *)(param_7 + 0x30) + 3);
                  }
                  lVar12 = _ZN5uu_ls13show_dir_name17hae576568cd75c94bE(lVar11,param_5,lVar6);
                  if (lVar12 == 0) {
                    local_460 = (undefined8 ***)&PTR_s_OutOfRangeImpossibleNotEnoughInv_003866e0;
                    pppuStack_458 = (undefined8 ***)&DAT_00000001;
                    pppuStack_450 = (undefined8 ***)&DAT_00000008;
                    local_448 = (undefined8 ****)0x0;
                    uStack_440 = 0;
                    lVar12 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_5,&local_460);
                    if (lVar12 == 0) {
                    /* try { // try from 0029ba10 to 0029ba58 has its CatchHandler @ 0029bb53 */
                      auVar15 = _ZN5uu_ls15enter_directory17h92fbfb4f588426e1E
                                          (lVar11,local_540._0_8_,local_540._8_8_ & 0xff,lVar6,
                                           param_5,local_4b8,param_7);
                      if (auVar15._0_8_ == 0) {
                        _ZN6uucore8features2fs15FileInformation9from_path17he047f87eaabe1edcE
                                  (&local_460,ppppuVar10,*(undefined *)(lVar11 + 0x128));
                        pppuVar5 = pppuStack_458;
                        if ((int)local_460 != 1) {
                          (*(code *)PTR_memcpy_0048f8f8)(&pppuStack_318,&pppuStack_450,0x88);
                          local_320 = pppuVar5;
                    /* try { // try from 0029ba8d to 0029baa1 has its CatchHandler @ 0029bb53 */
                          _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17hdeeaa4790b49ecbeE
                                    (local_4b8,&local_320);
                          goto LAB_0029b5d0;
                        }
                    /* try { // try from 0029bb16 to 0029bb1e has its CatchHandler @ 0029bb3c */
                        auVar15 = (*(code *)
                                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                                  )(pppuStack_458);
                      }
                      goto LAB_0029b53c;
                    }
                    auVar15 = (*(code *)
                                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                              )(lVar12);
                  }
                  else {
                    auVar15 = (*(code *)
                                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                              )(lVar12);
                  }
                }
                else {
                  auVar15 = (*(code *)
                              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                            )(lVar12);
                }
              }
              else {
                lVar12 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h6ed1f3d156b2ad73E
                                   (param_5);
                if (lVar12 == 0) {
                  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h523154303afc7abcE
                            (&local_460,*(undefined8 *)(lVar11 + 0x20),
                             *(undefined8 *)(lVar11 + 0x28));
                  local_308 = pppuStack_450;
                  pppuStack_318 = local_460;
                  pppuStack_310 = pppuStack_458;
                  local_320 = (undefined8 ****)0x8000000000000005;
                    /* try { // try from 0029b806 to 0029b8b5 has its CatchHandler @ 0029bb5b */
                  (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0048fe50)
                            (2);
                  auVar15 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0048f920)();
                  local_4e8 = (undefined8 ***)local_4b0;
                  pppuStack_4e0 =
                       (undefined8 ***)
                       _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
                  local_4d8 = &local_320;
                  local_4d0 = (undefined8 ***)
                              PTR__ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17hdc9e99969c77feadE_0048fe58
                  ;
                  local_460 = (undefined8 ***)&DAT_00386b10;
                  pppuStack_458 = (undefined8 ****)0x3;
                  uStack_440 = 0;
                  pppuStack_450 = &local_4e8;
                  local_448 = (undefined8 ****)0x2;
                  local_4b0 = auVar15;
                  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048f928)(&local_460);
                    /* try { // try from 0029b8b6 to 0029b8c2 has its CatchHandler @ 0029bc16 */
                  _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17h1c73d4e6f6d6872eE(&local_320);
                    /* try { // try from 0029b8c3 to 0029b8cc has its CatchHandler @ 0029bbed */
                  _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h014e861f3293567cE(local_540)
                  ;
                  goto LAB_0029b5d0;
                }
                auVar15 = (*(code *)
                            PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                          )(lVar12);
              }
            }
LAB_0029bb04:
                    /* try { // try from 0029bb07 to 0029bb10 has its CatchHandler @ 0029bc25 */
            _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h014e861f3293567cE(local_540);
            goto LAB_0029b53c;
          }
          local_540._0_8_ = local_528;
                    /* try { // try from 0029b611 to 0029b63a has its CatchHandler @ 0029bb7a */
          lVar12 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h6ed1f3d156b2ad73E
                             (param_5);
          if (lVar12 != 0) {
                    /* try { // try from 0029baae to 0029bab6 has its CatchHandler @ 0029bb44 */
            auVar15 = (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                      )(lVar12);
                    /* try { // try from 0029bab7 to 0029bac6 has its CatchHandler @ 0029bc25 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6fdf0f570893b293E(local_540);
            goto LAB_0029b53c;
          }
          _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h523154303afc7abcE
                    (&local_460,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
          local_308 = pppuStack_450;
          pppuStack_318 = local_460;
          pppuStack_310 = pppuStack_458;
          local_2f8 = *(byte *)(lVar11 + 0x129);
          local_300 = uVar4;
          local_320 = (undefined8 ****)0x8000000000000002;
                    /* try { // try from 0029b676 to 0029b720 has its CatchHandler @ 0029bc04 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_0048fe50)
                    (local_2f8 + 1);
          auVar15 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0048f920)();
          local_4e8 = (undefined8 ***)local_4b0;
          pppuStack_4e0 =
               (undefined8 ***)
               _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf27cb4f53db833cdE;
          local_4d8 = &local_320;
          local_4d0 = (undefined8 ***)
                      PTR__ZN53__LT_uu_ls__LsError_u20_as_u20_core__fmt__Display_GT_3fmt17hdc9e99969c77feadE_0048fe58
          ;
          local_460 = (undefined8 ***)&DAT_00386b10;
          pppuStack_458 = (undefined8 ****)0x3;
          uStack_440 = 0;
          pppuStack_450 = &local_4e8;
          local_448 = (undefined8 ****)0x2;
          local_4b0 = auVar15;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048f928)(&local_460);
                    /* try { // try from 0029b721 to 0029b72d has its CatchHandler @ 0029bb4b */
          _ZN4core3ptr35drop_in_place_LT_uu_ls__LsError_GT_17h1c73d4e6f6d6872eE(&local_320);
LAB_0029b5d0:
          lVar11 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h04cfa97d78282e6cE
                             (&local_518);
        } while (lVar11 != 0);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ppppuVar10;
    auVar15 = auVar2 << 0x40;
  }
LAB_0029b53c:
  _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_ls__PathData_GT__GT_17hb7b3de00095adc1cE
            (&local_488);
  return auVar15;
}