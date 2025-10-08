void _ZN4just6search6Search20find_global_justfile17hebd54203e27fdeacE(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 local_170;
  char local_168;
  undefined8 *local_160;
  undefined8 local_158;
  char local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined local_98 [32];
  int local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_160 = param_1;
  _ZN4just6search6Search21global_justfile_paths17hd43d3a4a486b84b5E(local_78);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he9c16c10d70dedd9E
            (local_98,local_78);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h55791ac38f39ac02E
            (&local_e8,local_98);
  do {
    uVar2 = local_c8;
    uVar1 = local_d0;
    local_118 = local_d8;
    local_128 = local_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
                    /* try { // try from 003885e8 to 00388604 has its CatchHandler @ 0038882d */
    _ZN3std2fs8read_dir17h5abadba4aa7d2afcE(&local_170,&local_128);
    if (local_168 == '\x02') {
LAB_003885fb:
      _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17hc1759a5b4464200bE
                (&local_170);
    }
    else {
      local_158 = local_170;
      local_150 = local_168;
                    /* try { // try from 00388660 to 00388672 has its CatchHandler @ 00388865 */
      while ((*(code *)
               PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_00566aa8
             )(local_78,&local_158), local_78[0] == 1) {
        if (local_70 == 0) {
                    /* try { // try from 00388744 to 0038874d has its CatchHandler @ 00388821 */
          _ZN4just6search6Search20find_global_justfile28__u7b__u7b_closure_u7d__u7d_17h64683c6068435421E
                    (&local_148,CONCAT44(uStack_11c,uStack_120),local_118);
          local_48 = uStack_140;
          uStack_44 = uStack_13c;
          uStack_40 = local_138;
          uStack_3c = uStack_134;
          local_38 = local_130;
          local_160[3] = local_130;
          *(undefined4 *)(local_160 + 1) = uStack_140;
          *(undefined4 *)((long)local_160 + 0xc) = uStack_13c;
          *(undefined4 *)(local_160 + 2) = local_138;
          *(undefined4 *)((long)local_160 + 0x14) = uStack_134;
          *local_160 = CONCAT44(uStack_144,local_148);
LAB_003887d1:
                    /* try { // try from 003887d1 to 003887da has its CatchHandler @ 00388828 */
          _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(&local_158);
          if (local_168 == '\x02') {
                    /* try { // try from 003887e2 to 003887eb has its CatchHandler @ 0038881c */
            _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17hc1759a5b4464200bE
                      (&local_170);
          }
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_128);
          _ZN4core3ptr96drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_std__path__PathBuf_C__RF_str_RP__GT__GT_17hac9f953bfcc49c5dE
                    (local_98);
          return;
        }
        local_a0 = local_50;
        local_b0 = local_60;
        uStack_ac = uStack_5c;
        uStack_a8 = uStack_58;
        uStack_a4 = uStack_54;
        local_c0 = local_70;
        local_b8 = local_68;
                    /* try { // try from 003886bc to 003886c7 has its CatchHandler @ 00388837 */
        (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_00566ab0)
                  (local_108,&local_c0);
                    /* try { // try from 003886d5 to 003886df has its CatchHandler @ 00388849 */
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
                  (&local_148,local_100,local_f8);
        if ((local_148 != 1) &&
           (cVar3 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                              (CONCAT44(uStack_13c,uStack_140),CONCAT44(uStack_134,local_138),uVar1,
                               uVar2), cVar3 != '\0')) {
                    /* try { // try from 0038877f to 00388791 has its CatchHandler @ 0038881a */
          (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_00566c90)(&local_148,&local_c0)
          ;
          local_160[3] = CONCAT44(uStack_134,local_138);
          *(int *)(local_160 + 1) = local_148;
          *(undefined4 *)((long)local_160 + 0xc) = uStack_144;
          *(undefined4 *)(local_160 + 2) = uStack_140;
          *(undefined4 *)((long)local_160 + 0x14) = uStack_13c;
          *local_160 = 0x8000000000000006;
                    /* try { // try from 003887ba to 003887c6 has its CatchHandler @ 00388815 */
          _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h578cf5996977c0eaE(&local_c0);
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                    (local_108);
          goto LAB_003887d1;
        }
                    /* try { // try from 00388700 to 00388707 has its CatchHandler @ 00388832 */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h578cf5996977c0eaE(&local_c0);
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(local_108)
        ;
      }
                    /* try { // try from 00388720 to 00388729 has its CatchHandler @ 00388823 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(&local_158);
      if (local_168 == '\x02') goto LAB_003885fb;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_128);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h55791ac38f39ac02E
              (&local_e8,local_98);
    if (CONCAT44(uStack_e4,local_e8) == -0x8000000000000000) {
      _ZN4core3ptr96drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP_std__path__PathBuf_C__RF_str_RP__GT__GT_17hac9f953bfcc49c5dE
                (local_98);
      *local_160 = 0x8000000000000001;
      return;
    }
  } while( true );
}