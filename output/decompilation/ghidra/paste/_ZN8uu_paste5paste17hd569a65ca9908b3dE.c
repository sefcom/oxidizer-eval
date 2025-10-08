undefined  [16]
_ZN8uu_paste5paste17hd569a65ca9908b3dE
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined local_135;
  uint local_134;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  ulong local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  ulong local_e0;
  undefined local_d0 [16];
  ulong local_c0;
  undefined **local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_40;
  ulong local_38;
  ulong uVar8;
  
                    /* try { // try from 00156659 to 0015666b has its CatchHandler @ 00156c87 */
  _ZN8uu_paste16parse_delimiters17h5f1c6018d1fadef2E(&local_88,param_3,param_4);
  local_108 = lStack_80;
  if ((int)local_88 == 1) {
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h47955211e39b0d44E
              (param_1);
    auVar13._8_8_ = local_78;
    auVar13._0_8_ = local_108;
    return auVar13;
  }
  local_110 = CONCAT44(local_110._4_4_,param_2);
  local_f8 = local_78;
  local_118 = 0;
  local_134 = param_5;
  local_b0 = param_1;
                    /* try { // try from 001566bf to 001566dc has its CatchHandler @ 00156c77 */
  local_d0 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h1fa32acdd47f5e6eE
                       (*(undefined8 *)(param_1 + 0x10),8,0x30,
                        &PTR_s_src_uu_paste_src_paste_rs_001dec18);
  local_c0 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb9d9948c54a837f5E
            (&local_f0,param_1);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdc1515f9b0e405fdE
            (&local_130,&local_f0);
  do {
    uVar5 = local_120;
    uVar4 = local_128;
    lVar7 = local_130;
    cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc259b01c47836931E
                      (local_128,local_120);
    if (cVar6 == '\0') {
      _ZN3std2fs4File4open17h0c7fcf95ad963e94E(&local_88,uVar4,uVar5);
      if ((int)local_88 == 1) {
                    /* try { // try from 00156b4b to 00156b50 has its CatchHandler @ 00156c70 */
        auVar12 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
                  )(lStack_80);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcbdda9fa4e628fd3E(lVar7,uVar4);
                    /* try { // try from 00156b62 to 00156b98 has its CatchHandler @ 00156ca9 */
        _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hf4cbd51fdc55d6c9E
                  (&local_f0);
        goto LAB_00156c02;
      }
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h822f1ebbe5adf6ceE
                (&local_88,local_88._4_4_);
      local_98 = CONCAT44(uStack_64,local_68);
      uStack_90 = CONCAT44(uStack_5c,uStack_60);
      local_a8 = local_78;
      lStack_a0 = lStack_70;
    }
    else {
                    /* try { // try from 00156759 to 001567f9 has its CatchHandler @ 00156cb5 */
      _ZN4core4cell4once17OnceCell_LT_T_GT_15get_or_try_init17h5ce5b77ec4535ef8E(&local_118);
      _ZN5alloc2rc10RcInnerPtr10inc_strong17hb344d9d86ac80a28E(local_118);
      local_88 = 0;
      lStack_80 = local_118;
    }
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = (undefined4)uStack_90;
    uStack_5c = uStack_90._4_4_;
    local_78 = local_a8;
    lStack_70 = lStack_a0;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hcfac60b1ab7def8bE(local_d0,&local_88);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcbdda9fa4e628fd3E(lVar7,uVar4);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdc1515f9b0e405fdE
              (&local_130,&local_f0);
  } while (local_130 != -0x8000000000000000);
                    /* try { // try from 0015682a to 0015684f has its CatchHandler @ 00156ca9 */
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hf4cbd51fdc55d6c9E
            (&local_f0);
  local_88 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001e52e0)();
  local_100 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001e53f8)(&local_88);
  uVar11 = local_c0;
  uVar9 = local_134;
  local_135 = (undefined)local_134;
  _ZN8uu_paste14DelimiterState3new17h7196cb5a72bb3f8fE(&local_88,local_108,local_f8);
  local_130 = 0;
  local_128 = 1;
  local_120 = 0;
  if ((char)local_110 == '\0') {
    _ZN62__LT_T_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h6c63ae9419db974dE
              (&local_f0,uVar11);
    local_b8 = &PTR_s_src_uu_paste_src_paste_rs_001dec48;
    local_134 = uVar9 & 0xff;
    local_110 = uVar11;
    do {
      local_120 = 0;
      lStack_a0 = uVar11 * 0x30 + local_d0._8_8_;
      local_a8 = local_d0._8_8_;
      local_98 = 0;
      uVar10 = 0;
      while( true ) {
        auVar13 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hab88b0f4a020608fE
                            (&local_a8);
        uVar8 = auVar13._0_8_;
        if (auVar13._8_8_ == 0) break;
        if (local_e0 <= uVar8) {
LAB_00156c5d:
                    /* try { // try from 00156c5d to 00156c6d has its CatchHandler @ 00156cb3 */
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001e51b0)
                    (uVar8,local_e0,local_b8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(char *)(local_e8 + uVar8) == '\0') {
          _ZN8uu_paste11InputSource10read_until17hee62e15140cd6647E
                    (&local_40,auVar13._8_8_,local_134,&local_130);
          uVar11 = local_38;
          auVar12._8_8_ = local_38;
          auVar12._0_8_ = local_40;
          if (local_40 != 0) goto LAB_00156bda;
          if (local_38 == 0) {
            if (local_e0 <= uVar8) {
              local_b8 = &PTR_s_src_uu_paste_src_paste_rs_001dec60;
              goto LAB_00156c5d;
            }
            *(undefined *)(local_e8 + uVar8) = 1;
            goto LAB_00156a20;
          }
          _ZN8uu_paste32remove_trailing_line_ending_byte17hc8c21b920eceaeb3E(local_134,&local_130);
        }
        else {
LAB_00156a20:
          uVar10 = uVar10 + 1;
        }
                    /* try { // try from 00156a23 to 00156a72 has its CatchHandler @ 00156ccf */
        _ZN8uu_paste14DelimiterState15write_delimiter17h2a9eb5f6e5ad5b62E(&local_88,&local_130);
      }
      if (uVar10 == local_110) {
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7026db00be8292baE
                  (local_f0,local_e8);
        goto LAB_00156b80;
      }
                    /* try { // try from 00156aeb to 00156b27 has its CatchHandler @ 00156ca7 */
      _ZN8uu_paste14DelimiterState25remove_trailing_delimiter17h00dfcc6c7a63cba7E
                (local_88,local_78,&local_130);
      puVar3 = 
      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001e5400
      ;
      lVar7 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001e5400
              )(&local_100,local_128,local_120);
      if (lVar7 != 0) {
                    /* try { // try from 00156bc0 to 00156bd3 has its CatchHandler @ 00156cb3 */
        auVar12 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
                  )(lVar7);
        goto LAB_00156bda;
      }
      lVar7 = (*(code *)puVar3)(&local_100,&local_135,1);
      if (lVar7 != 0) goto LAB_00156bcb;
      _ZN8uu_paste14DelimiterState24reset_to_first_delimiter17h68b38c960fbec6e1E(&local_88);
      uVar11 = local_c0;
    } while( true );
  }
  uVar11 = uVar11 * 0x30 + local_d0._8_8_;
  uVar9 = uVar9 & 0xff;
  uVar10 = local_d0._8_8_;
  local_110 = uVar11;
  do {
    if (uVar10 == uVar11) {
LAB_00156b80:
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7026db00be8292baE
                (local_130,local_128);
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h3a2097f9ea964eb3E(local_100);
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_paste__InputSource_GT__GT_17h3f66a46064943b9dE
                (local_d0);
      _ZN4core3ptr124drop_in_place_LT_core__cell__once__OnceCell_LT_alloc__rc__Rc_LT_core__cell__RefCell_LT_std__io__stdio__Stdin_GT__GT__GT__GT_17hdf72225a02b0e473E
                (&local_118);
      _ZN4core3ptr93drop_in_place_LT_alloc__boxed__Box_LT__u5b_alloc__boxed__Box_LT__u5b_u8_u5d__GT__u5d__GT__GT_17h472f2e64428019f0E
                (local_108,local_f8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      return auVar2 << 0x40;
    }
    local_120 = 0;
    while( true ) {
                    /* try { // try from 001568e0 to 0015692e has its CatchHandler @ 00156cae */
      _ZN8uu_paste11InputSource10read_until17hee62e15140cd6647E(&local_a8,uVar10,uVar9,&local_130);
      auVar12._8_8_ = lStack_a0;
      auVar12._0_8_ = local_a8;
      if (local_a8 != 0) goto LAB_00156be9;
      if (lStack_a0 == 0) break;
      _ZN8uu_paste32remove_trailing_line_ending_byte17hc8c21b920eceaeb3E(uVar9,&local_130);
      _ZN8uu_paste14DelimiterState15write_delimiter17h2a9eb5f6e5ad5b62E(&local_88,&local_130);
    }
                    /* try { // try from 00156941 to 00156981 has its CatchHandler @ 00156c82 */
    _ZN8uu_paste14DelimiterState25remove_trailing_delimiter17h00dfcc6c7a63cba7E
              (local_88,local_78,&local_130);
    uVar11 = local_110;
    lVar7 = (*(code *)
              PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001e5400
            )(&local_100,local_128,local_120);
    if (lVar7 != 0) {
                    /* try { // try from 00156c3d to 00156c45 has its CatchHandler @ 00156c72 */
      auVar12 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
                )(lVar7);
      goto LAB_00156be9;
    }
    lVar7 = (*(code *)
              PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001e5400
            )(&local_100,&local_135,1);
    uVar10 = uVar10 + 0x30;
  } while (lVar7 == 0);
                    /* try { // try from 0015698e to 001569a8 has its CatchHandler @ 00156c72 */
  auVar12 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
            )(lVar7);
LAB_00156be9:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7026db00be8292baE
            (local_130,local_128);
                    /* try { // try from 00156bfd to 00156c01 has its CatchHandler @ 00156ca9 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h3a2097f9ea964eb3E(local_100);
LAB_00156c02:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_paste__InputSource_GT__GT_17h3f66a46064943b9dE
            (local_d0);
  _ZN4core3ptr124drop_in_place_LT_core__cell__once__OnceCell_LT_alloc__rc__Rc_LT_core__cell__RefCell_LT_std__io__stdio__Stdin_GT__GT__GT__GT_17hdf72225a02b0e473E
            (&local_118);
  _ZN4core3ptr93drop_in_place_LT_alloc__boxed__Box_LT__u5b_alloc__boxed__Box_LT__u5b_u8_u5d__GT__u5d__GT__GT_17h472f2e64428019f0E
            (local_108,local_f8);
  return auVar12;
LAB_00156bcb:
  auVar12 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
            )(lVar7);
LAB_00156bda:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h7026db00be8292baE
            (local_f0,local_e8);
  goto LAB_00156be9;
}