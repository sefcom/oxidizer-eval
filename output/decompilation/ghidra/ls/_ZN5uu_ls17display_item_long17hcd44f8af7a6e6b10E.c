undefined  [16]
_ZN5uu_ls17display_item_long17hcd44f8af7a6e6b10E
          (long param_1,long param_2,long param_3,long *param_4,long param_5,undefined4 param_6)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  undefined *puVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined local_e8 [16];
  ulong local_d8;
  long local_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined *local_38;
  
  local_d0 = param_1;
  local_7c = param_6;
  local_e8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hf473535ce603429cE
                       (0x80,1,1,&PTR_s_src_uu_ls_src_ls_rs_00386cd0);
  local_d8 = 0;
  if (*(char *)((long)param_4 + 0x85) != '\x02') {
                    /* try { // try from 0029d4b2 to 0029d4bb has its CatchHandler @ 0029dedd */
    _ZN5uu_ls6colors12StyleManager12apply_normal17h69c01341e2d260d1E(&local_c8,param_4 + 0xd);
                    /* try { // try from 0029d4c9 to 0029d4d2 has its CatchHandler @ 0029de6f */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,lStack_c0,(long)local_b8 + lStack_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
  }
  cVar1 = *(char *)(param_3 + 0xf6);
  if (cVar1 != '\0') {
                    /* try { // try from 0029d4ed to 0029d553 has its CatchHandler @ 0029dedd */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,&DAT_001d2809,&DAT_001d280b);
  }
  lVar5 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(local_d0,param_4);
  if (lVar5 == 0) {
    puVar11 = &DAT_001d4217;
    if (((*(uint *)(local_d0 + 0xf8) != 2) && ((*(uint *)(local_d0 + 0xf8) & 1) != 0)) &&
       (uVar4 = *(uint *)(local_d0 + 0xfc) & 0xf000, uVar4 = uVar4 << 0x13 | uVar4 - 0x2000 >> 0xd,
       uVar4 < 5)) {
      puVar11 = &DAT_001d44c0 + *(int *)(&DAT_001d44c0 + (ulong)uVar4 * 4);
    }
                    /* try { // try from 0029d7e8 to 0029d955 has its CatchHandler @ 0029dedd */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,puVar11,puVar11 + 1);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,&DAT_001d420c,&DAT_001d4215);
    if (1 < *(ulong *)(local_d0 + 0x40)) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8,".","/");
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,&DAT_001d4206,1,*(undefined8 *)(param_2 + 8));
    if (*(char *)(param_3 + 0xea) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,&DAT_001d4206,1,*(undefined8 *)(param_2 + 0x10));
    }
    if (*(char *)(param_3 + 0xe9) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,&DAT_001d4206,1,*(undefined8 *)(param_2 + 0x18));
    }
    if (*(char *)(param_3 + 0xf3) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,*(undefined8 *)(local_d0 + 0x38),*(undefined8 *)(local_d0 + 0x40),
        *(undefined8 *)(param_2 + 0x20));
    }
    if (*(char *)(param_3 + 0xe8) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,&DAT_001d4206,1,*(undefined8 *)(param_2 + 0x10));
    }
    local_98 = 0;
    lStack_90 = 1;
    local_88 = (undefined *)0x0;
                    /* try { // try from 0029d971 to 0029d97a has its CatchHandler @ 0029de60 */
    lStack_c0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d3ebcf2dcfb6a31E(local_e8);
    local_c8 = 0;
    local_b8 = &DAT_00386d08;
                    /* try { // try from 0029d998 to 0029d9be has its CatchHandler @ 0029de5e */
    _ZN5uu_ls17display_item_name17h23801d128c21da3cE(&local_78,local_d0,param_3,0);
                    /* try { // try from 0029d9bf to 0029da6e has its CatchHandler @ 0029dec0 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,&DAT_001d4206,1,*(undefined8 *)(param_2 + 0x28));
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,&DAT_001d4206,1,0xc);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    uVar2 = local_d8;
    if (cVar1 != '\0') {
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)
                (&local_c8,local_70,local_68);
      uVar7 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h180c41ce689d4cdeE
                        (lStack_c0,local_b8);
                    /* try { // try from 0029da7e to 0029da8b has its CatchHandler @ 0029de40 */
      _ZN5uu_ls5dired30calculate_and_update_positions17h95a9ea6d492d96ccE(param_5,uVar2,uVar7);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
                (&local_c8);
    }
                    /* try { // try from 0029dc84 to 0029dca7 has its CatchHandler @ 0029dec0 */
    _ZN5uu_ls12write_os_str17h18794456fbab1bc6E(local_e8,local_70,local_68);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0ee67096214dca41E
              (&local_c8,param_3 + 0x102);
                    /* try { // try from 0029dcb5 to 0029dcbe has its CatchHandler @ 0029de4f */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,lStack_c0,local_b8 + lStack_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
  }
  else {
    _ZN5xattr4list17h98bb10efc77fe3e7E
              (&local_c8,*(undefined8 *)(local_d0 + 8),*(undefined8 *)(local_d0 + 0x10));
    cVar3 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h84dfcb59db6f5993E(&local_c8);
    (*(code *)PTR__ZN6uucore8features2fs19display_permissions17hc8fe13fd96ae0343E_0048feb0)
              (&local_c8,lVar5,1);
                    /* try { // try from 0029d561 to 0029d56a has its CatchHandler @ 0029de9a */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,lStack_c0,(long)local_b8 + lStack_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
    uVar2 = *(ulong *)(local_d0 + 0x40);
    if (1 < uVar2 || cVar3 != '\0') {
      pcVar8 = "?????????bd-???_-.:~/\x1b]8;;file://\a\x1b]8;;\a%";
      if (1 < uVar2) {
        pcVar8 = "/";
      }
      pcVar10 = "+?????????bd-???_-.:~/\x1b]8;;file://\a\x1b]8;;\a%";
      if (1 < uVar2) {
        pcVar10 = ".";
      }
                    /* try { // try from 0029d5b2 to 0029d5e1 has its CatchHandler @ 0029dedd */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8,pcVar10,pcVar8);
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    _ZN5uu_ls21display_symlink_count17h2fe71a64427ba274E(&local_c8,*(undefined8 *)(lVar5 + 0x30));
                    /* try { // try from 0029d5f0 to 0029d5fa has its CatchHandler @ 0029de98 */
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,lStack_c0,local_b8,*(undefined8 *)(param_2 + 8));
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
    if (*(char *)(param_3 + 0xea) != '\0') {
                    /* try { // try from 0029d60f to 0029d745 has its CatchHandler @ 0029dedd */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      lVar6 = _ZN5uu_ls13display_uname17h7c414fef392325b1E
                        (*(undefined4 *)(lVar5 + 0x3c),*(undefined *)(param_3 + 0xeb),param_4);
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),
        *(undefined8 *)(param_2 + 0x10));
    }
    if (*(char *)(param_3 + 0xe9) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      lVar6 = _ZN5uu_ls13display_group17h274df09bb9587751E
                        (*(undefined4 *)(lVar5 + 0x40),*(undefined *)(param_3 + 0xeb),param_4);
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),
        *(undefined8 *)(param_2 + 0x18));
    }
    if (*(char *)(param_3 + 0xf3) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,*(undefined8 *)(local_d0 + 0x38),*(undefined8 *)(local_d0 + 0x40),
        *(undefined8 *)(param_2 + 0x20));
    }
    if (*(char *)(param_3 + 0xe8) != '\0') {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
                (local_e8," ","\t");
      lVar6 = _ZN5uu_ls13display_uname17h7c414fef392325b1E
                        (*(undefined4 *)(lVar5 + 0x3c),*(undefined *)(param_3 + 0xeb),param_4);
      (*(code *)
        PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_16extend_pad_right17ha3afe12e98e0c3b8E_0048fea0
      )(local_e8,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),
        *(undefined8 *)(param_2 + 0x10));
    }
    _ZN5uu_ls19display_len_or_rdev17h54f0966b5b04a08aE
              (&local_c8,lVar5,*(undefined8 *)(param_3 + 0xd0),*(undefined *)(param_3 + 0xf9));
    puVar11 = local_b8;
    lVar6 = lStack_c0;
    local_58 = local_a8;
    local_60 = local_a0;
                    /* try { // try from 0029dabf to 0029db4c has its CatchHandler @ 0029de9f */
    local_50 = param_5;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    uVar2 = *(ulong *)(param_2 + 0x38);
    uVar9 = 0xffffffffffffffff;
    if (uVar2 < 0xfffffffffffffffe) {
      uVar9 = uVar2 + 2;
    }
    lVar12 = 0;
    if (uVar9 <= *(ulong *)(param_2 + 0x28)) {
      lVar12 = *(ulong *)(param_2 + 0x28) - uVar9;
    }
    uVar7 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(*(undefined8 *)(param_2 + 0x30),lVar12);
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,lVar6,puVar11,uVar7);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,", ","");
    (*(code *)
      PTR__ZN62__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_uu_ls__ExtendPad_GT_15extend_pad_left17h467ba58bf40f4318E_0048fe98
    )(local_e8,local_58,local_60,uVar2);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(local_b0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
                    /* try { // try from 0029db61 to 0029db90 has its CatchHandler @ 0029dedd */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    _ZN5uu_ls12display_date17h897c60a9acee5f16E
              (&local_c8,lVar5,*(undefined *)(param_3 + 0xfb),param_4);
                    /* try { // try from 0029db9e to 0029dba7 has its CatchHandler @ 0029de8c */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,lStack_c0,(long)local_b8 + lStack_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
                    /* try { // try from 0029dbb5 to 0029dbcc has its CatchHandler @ 0029dedd */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8," ","\t");
    local_98 = 0;
    lStack_90 = 1;
    local_88 = (undefined *)0x0;
                    /* try { // try from 0029dbe8 to 0029dbf1 has its CatchHandler @ 0029de82 */
    lStack_c0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d3ebcf2dcfb6a31E(local_e8);
    local_c8 = 0;
    local_b8 = &DAT_00386ce8;
                    /* try { // try from 0029dc0c to 0029dc2e has its CatchHandler @ 0029de80 */
    _ZN5uu_ls17display_item_name17h23801d128c21da3cE(&local_48,local_d0,param_3,0);
    uVar7 = local_48;
    lVar5 = local_40;
    if ((char)local_7c != '\0') {
                    /* try { // try from 0029dc46 to 0029dc57 has its CatchHandler @ 0029de62 */
      cVar3 = _ZN5uu_ls18os_str_starts_with17hfc6f2914b2c0a945E(local_40,local_38,&DAT_001d4209);
      uVar7 = local_48;
      if (cVar3 == '\0') {
                    /* try { // try from 0029dcd6 to 0029dceb has its CatchHandler @ 0029de62 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
                  (&local_c8," ",1);
        local_88 = local_b8;
        local_98 = local_c8;
        lStack_90 = lStack_c0;
                    /* try { // try from 0029dd00 to 0029dd11 has its CatchHandler @ 0029de29 */
        _ZN3std3ffi6os_str8OsString4push17h7ae4c515aa982082E(&local_98,&local_48);
        uVar7 = local_98;
        lVar5 = lStack_90;
        local_38 = local_88;
      }
    }
    if (cVar1 != '\0') {
      if (*(long *)(local_50 + 0x10) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)(local_50 + 8) + -8 + *(long *)(local_50 + 0x10) * 0x10) + 1;
      }
                    /* try { // try from 0029dd59 to 0029dd81 has its CatchHandler @ 0029deb8 */
      _ZN5uu_ls5dired16update_positions17hea3b08d96622b01cE
                (local_50,lVar6 + local_d8,local_38 + lVar6 + local_d8);
    }
    _ZN5uu_ls12write_os_str17h18794456fbab1bc6E(local_e8,lVar5,local_38);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0ee67096214dca41E
              (&local_c8,param_3 + 0x102);
                    /* try { // try from 0029dd8f to 0029dd98 has its CatchHandler @ 0029de71 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h1aaadf86e95554cfE
              (local_e8,lStack_c0,local_b8 + lStack_c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
    local_78 = uVar7;
    local_70 = lVar5;
  }
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
            (local_78,local_70);
  uVar2 = local_d8;
  lVar5 = param_4[2];
  if (local_d8 < (ulong)(*param_4 - lVar5)) {
    (*(code *)PTR_memcpy_0048f8f8)(param_4[1] + lVar5,local_e8._8_8_,local_d8);
    param_4[2] = lVar5 + uVar2;
  }
  else {
                    /* try { // try from 0029de07 to 0029de20 has its CatchHandler @ 0029dedd */
    lVar5 = (*(code *)
              PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h28d011dc1ac5cb15E_0048f9e8
            )(param_4,local_e8._8_8_,local_d8);
    if (lVar5 != 0) {
      auVar13 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
                )(lVar5);
      goto LAB_0029dde0;
    }
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar13 = auVar13 << 0x40;
LAB_0029dde0:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he07c38d0805bada3E
            (local_e8._0_8_,local_e8._8_8_);
  return auVar13;
}