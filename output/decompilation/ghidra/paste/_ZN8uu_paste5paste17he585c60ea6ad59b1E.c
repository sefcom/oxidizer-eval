/* WARNING: Removing unreachable block (ram,0x001abca4) */
/* WARNING: Removing unreachable block (ram,0x001ac24d) */

undefined  [16]
_ZN8uu_paste5paste17he585c60ea6ad59b1E
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined auVar1 [16];
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar8;
  undefined uVar9;
  undefined8 **ppuVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined local_14d;
  uint local_14c;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined local_108 [16];
  ulong local_f8;
  undefined8 *local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong uVar7;
  
                    /* try { // try from 001abb3a to 001abb4c has its CatchHandler @ 001ac1c5 */
  _ZN8uu_paste16parse_delimiters17hdea474197eebcdf0E(&local_a8,param_3,param_4);
  local_148 = puStack_a0;
  if (local_a8 != 0) {
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h178417ce66b4845bE
              (param_1);
    auVar12._8_8_ = local_98;
    auVar12._0_8_ = local_148;
    return auVar12;
  }
  local_120 = local_98;
  local_110 = 0;
                    /* try { // try from 001abb9c to 001abbb2 has its CatchHandler @ 001ac1d2 */
  local_d0 = param_1;
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hc0309f6673228509E
            (&local_a8,*(undefined8 *)(param_1 + 0x10),0);
  local_118 = (undefined **)CONCAT44(local_118._4_4_,param_2);
  local_14c = param_5;
  if (local_a8 != 0) {
                    /* try { // try from 001ac198 to 001ac19d has its CatchHandler @ 001ac1d2 */
    uVar8 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(puStack_a0,local_98);
                    /* catch() { ... } // from try @ 001ac08d with catch @ 001ac19e */
                    /* catch() { ... } // from try @ 001abd35 with catch @ 001ac1de */
    _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hfd58dfe50f3f8eb9E
              (local_108);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_paste__InputSource_GT__GT_17h99c3d173137c32f8E
              (&local_e8);
    _ZN4core3ptr124drop_in_place_LT_core__cell__once__OnceCell_LT_alloc__rc__Rc_LT_core__cell__RefCell_LT_std__io__stdio__Stdin_GT__GT__GT__GT_17h784acaad3057eb27E
              (&local_110);
    _ZN4core3ptr93drop_in_place_LT_alloc__boxed__Box_LT__u5b_alloc__boxed__Box_LT__u5b_u8_u5d__GT__u5d__GT__GT_17h9aef2e2029ad91ffE
              (local_148,local_120);
    auVar12 = _Unwind_Resume(uVar8);
    return auVar12;
  }
  local_e8 = puStack_a0;
  local_e0 = local_98;
  local_d8 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h05a7d1457638e433E
            (local_108,param_1);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf533bc1050936820E
            (&local_c0,local_108);
  if (local_c0 != (undefined8 *)0x8000000000000000) {
    do {
      uVar8 = local_b0;
      puVar3 = puStack_b8;
      local_128 = local_b0;
      local_138 = local_c0;
      puStack_130 = puStack_b8;
                    /* try { // try from 001abc6f to 001abd34 has its CatchHandler @ 001ac1ea */
      cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h89f186647b952d92E
                        (puStack_b8,local_b0,"-",1);
      if (cVar4 == '\0') {
        _ZN3std2fs4File4open17h7451de5ec215f10cE(&local_a8,puVar3,uVar8);
        if ((int)local_a8 != 0) {
                    /* try { // try from 001ac087 to 001ac08c has its CatchHandler @ 001ac1a0 */
          auVar11 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                              (puStack_a0);
                    /* try { // try from 001ac08d to 001ac09c has its CatchHandler @ 001ac19e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c7c8706fc0e4609E(&local_138);
                    /* try { // try from 001ac09d to 001ac0a6 has its CatchHandler @ 001ac1d9 */
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hfd58dfe50f3f8eb9E
                    (local_108);
          goto LAB_001ac128;
        }
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4a8f926ed93deb85E
                  (&local_a8,0x2000,local_a8._4_4_);
        local_48 = CONCAT44(uStack_84,local_88);
        uStack_40 = CONCAT44(uStack_7c,uStack_80);
        local_58 = local_98;
        puStack_50 = puStack_90;
      }
      else {
        puVar5 = (undefined8 *)
                 _ZN4core4cell4once17OnceCell_LT_T_GT_15get_or_try_init17h7d4856c53a0eebb3E
                           (&local_110);
        puVar5 = (undefined8 *)*puVar5;
        _ZN5alloc2rc10RcInnerPtr10inc_strong17h5f27909c12118100E(puVar5);
        local_a8 = 0;
        puStack_a0 = puVar5;
      }
      local_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
      local_98 = local_58;
      puStack_90 = puStack_50;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h23477c10bc9aacfbE(&local_e8,&local_a8);
                    /* try { // try from 001abd35 to 001abd3e has its CatchHandler @ 001ac1de */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c7c8706fc0e4609E(&local_138);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf533bc1050936820E
                (&local_c0,local_108);
    } while (local_c0 != (undefined8 *)0x8000000000000000);
  }
                    /* try { // try from 001abd62 to 001abd87 has its CatchHandler @ 001ac1d9 */
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hfd58dfe50f3f8eb9E
            (local_108);
  local_a8 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_140 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_a8);
  uVar2 = local_14c;
  uVar9 = (undefined)local_14c;
  local_c8 = local_d8;
                    /* try { // try from 001abda5 to 001abdbb has its CatchHandler @ 001ac1c0 */
  local_14d = uVar9;
  _ZN8uu_paste14DelimiterState3new17hf0d8373e3ee9ca93E(&local_a8,local_148,local_120);
  local_138 = (undefined8 *)0x0;
  puStack_130 = &DAT_00000001;
  local_128 = 0;
  if ((char)local_118 == '\0') {
    _ZN62__LT_T_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h77e6ba0b5c65416bE
              (local_108,local_c8);
    ppuVar10 = &local_138;
    local_118 = &PTR_s_src_uu_paste_src_paste_rs_00213528;
    local_14c = uVar2 & 0xff;
    do {
      local_128 = 0;
      puStack_50 = local_e0 + local_d8 * 6;
      local_58 = local_e0;
      local_48 = 0;
      lVar6 = 0;
      while( true ) {
        auVar12 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h42462181228ea0b1E
                            (&local_58);
        uVar7 = auVar12._0_8_;
        if (auVar12._8_8_ == 0) break;
        if (local_f8 <= uVar7) {
LAB_001ac182:
                    /* try { // try from 001ac182 to 001ac18f has its CatchHandler @ 001ac1e8 */
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar7,local_f8,local_118);
        }
        if (*(char *)(local_108._8_8_ + uVar7) == '\0') {
          _ZN8uu_paste11InputSource10read_until17ha189b0ba8cf073bbE
                    (&local_c0,auVar12._8_8_,local_14c,ppuVar10);
          auVar11._8_8_ = puStack_b8;
          auVar11._0_8_ = local_c0;
          if (local_c0 != (undefined8 *)0x0) goto LAB_001ac10a;
          if (puStack_b8 == (undefined *)0x0) {
            if (local_f8 <= uVar7) {
              local_118 = &PTR_s_src_uu_paste_src_paste_rs_00213540;
              goto LAB_001ac182;
            }
            *(undefined *)(local_108._8_8_ + uVar7) = 1;
            goto LAB_001abf60;
          }
          _ZN8uu_paste32remove_trailing_line_ending_byte17h9c66266c54fb3aecE(local_14c,ppuVar10);
        }
        else {
LAB_001abf60:
          lVar6 = lVar6 + 1;
        }
                    /* try { // try from 001abf63 to 001abfb2 has its CatchHandler @ 001ac203 */
        _ZN8uu_paste14DelimiterState15write_delimiter17h3f07c0732667350aE(&local_a8,ppuVar10);
      }
      if (lVar6 == local_c8) {
                    /* try { // try from 001ac0a9 to 001ac0b2 has its CatchHandler @ 001ac1be */
        _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_bool_GT__GT_17h75ed7e5d09a18263E
                  (local_108);
        goto LAB_001ac0b3;
      }
                    /* try { // try from 001ac02e to 001ac079 has its CatchHandler @ 001ac1d7 */
      _ZN8uu_paste14DelimiterState25remove_trailing_delimiter17h05f8c54b5ae335cdE
                (local_a8,local_98,ppuVar10);
      lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (&local_140,puStack_130,local_128);
      if (lVar6 != 0) {
                    /* try { // try from 001ac0f0 to 001ac103 has its CatchHandler @ 001ac1e8 */
        auVar11 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                            (lVar6);
        goto LAB_001ac10a;
      }
      lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (&local_140,&local_14d,1);
      if (lVar6 != 0) goto LAB_001ac0fb;
      _ZN8uu_paste14DelimiterState24reset_to_first_delimiter17h9238978dbebe5df3E(&local_a8);
    } while( true );
  }
                    /* try { // try from 001abde3 to 001abdec has its CatchHandler @ 001ac1be */
  local_108 = _ZN102__LT__RF_mut_u20_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h205b584f20030d6bE
                        (&local_e8);
  do {
    ppuVar10 = (undefined8 **)local_108;
    lVar6 = _ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcf19a3115311c622E
                      (ppuVar10);
    if (lVar6 == 0) {
LAB_001ac0b3:
                    /* try { // try from 001ac0b3 to 001ac0bc has its CatchHandler @ 001ac1c0 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h12b87962429c2728E(&local_138);
                    /* try { // try from 001ac0c2 to 001ac0c6 has its CatchHandler @ 001ac1d9 */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h17cbaf2a99daf26dE(local_140);
                    /* try { // try from 001ac0c9 to 001ac0d2 has its CatchHandler @ 001ac1d2 */
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_paste__InputSource_GT__GT_17h99c3d173137c32f8E
                (&local_e8);
                    /* try { // try from 001ac0d3 to 001ac0dc has its CatchHandler @ 001ac1a2 */
      _ZN4core3ptr124drop_in_place_LT_core__cell__once__OnceCell_LT_alloc__rc__Rc_LT_core__cell__RefCell_LT_std__io__stdio__Stdin_GT__GT__GT__GT_17h784acaad3057eb27E
                (&local_110);
      _ZN4core3ptr93drop_in_place_LT_alloc__boxed__Box_LT__u5b_alloc__boxed__Box_LT__u5b_u8_u5d__GT__u5d__GT__GT_17h9aef2e2029ad91ffE
                (local_148,local_120);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ppuVar10;
      return auVar1 << 0x40;
    }
    local_128 = 0;
    while( true ) {
                    /* try { // try from 001abe30 to 001abe79 has its CatchHandler @ 001ac1e3 */
      _ZN8uu_paste11InputSource10read_until17ha189b0ba8cf073bbE(&local_58,lVar6,uVar9,&local_138);
      auVar11._8_8_ = puStack_50;
      auVar11._0_8_ = local_58;
      if (local_58 != (undefined8 *)0x0) goto LAB_001ac114;
      if (puStack_50 == (undefined8 *)0x0) break;
      _ZN8uu_paste32remove_trailing_line_ending_byte17h9c66266c54fb3aecE(uVar2 & 0xff,&local_138);
      _ZN8uu_paste14DelimiterState15write_delimiter17h3f07c0732667350aE(&local_a8,&local_138);
    }
                    /* try { // try from 001abe8c to 001abecb has its CatchHandler @ 001ac1bc */
    _ZN8uu_paste14DelimiterState25remove_trailing_delimiter17h05f8c54b5ae335cdE
              (local_a8,local_98,&local_138);
    lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (&local_140,puStack_130,local_128);
    if (lVar6 != 0) {
                    /* try { // try from 001ac165 to 001ac16d has its CatchHandler @ 001ac1be */
      auVar11 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                          (lVar6);
      goto LAB_001ac114;
    }
    lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (&local_140,&local_14d,1);
  } while (lVar6 == 0);
                    /* try { // try from 001abed5 to 001abef4 has its CatchHandler @ 001ac1be */
  auVar11 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                      (lVar6);
LAB_001ac114:
                    /* try { // try from 001ac114 to 001ac11d has its CatchHandler @ 001ac1c0 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h12b87962429c2728E(&local_138);
                    /* try { // try from 001ac123 to 001ac127 has its CatchHandler @ 001ac1d9 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h17cbaf2a99daf26dE(local_140);
LAB_001ac128:
                    /* try { // try from 001ac12a to 001ac133 has its CatchHandler @ 001ac1d2 */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_uu_paste__InputSource_GT__GT_17h99c3d173137c32f8E
            (&local_e8);
                    /* try { // try from 001ac134 to 001ac13d has its CatchHandler @ 001ac1a2 */
  _ZN4core3ptr124drop_in_place_LT_core__cell__once__OnceCell_LT_alloc__rc__Rc_LT_core__cell__RefCell_LT_std__io__stdio__Stdin_GT__GT__GT__GT_17h784acaad3057eb27E
            (&local_110);
  _ZN4core3ptr93drop_in_place_LT_alloc__boxed__Box_LT__u5b_alloc__boxed__Box_LT__u5b_u8_u5d__GT__u5d__GT__GT_17h9aef2e2029ad91ffE
            (local_148,local_120);
  return auVar11;
LAB_001ac0fb:
  auVar11 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                      (lVar6);
LAB_001ac10a:
                    /* try { // try from 001ac10a to 001ac113 has its CatchHandler @ 001ac1be */
  _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_bool_GT__GT_17h75ed7e5d09a18263E(local_108);
  goto LAB_001ac114;
}