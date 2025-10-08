void _ZN3bat6assets12build_assets15build_theme_set17he10a5c707d4325f2E
               (char *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  code *local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_60;
  code *local_58;
  int *local_50;
  undefined *local_48;
  undefined local_40 [24];
  
  if (param_4 == 0) {
    local_1c8 = 0;
    local_1b8 = 0;
  }
  else {
    _ZN3bat6assets23get_integrated_themeset17h537b3cba0b22caf3E(&local_198);
    (*(code *)
      PTR__ZN3bat6assets14lazy_theme_set144__LT_impl_u20_core__convert__TryFrom_LT_bat__assets__lazy_theme_set__LazyThemeSet_GT__u20_for_u20_syntect__highlighting__theme_set__ThemeSet_GT_8try_from17he56e1dfafe0667dcE_00808798
    )(&local_118,&local_198);
    if ((char)local_118 != '\r') {
      local_158 = (undefined4)(CONCAT44(uStack_108._4_4_,(undefined4)uStack_108) >> 8);
      uStack_160 = (undefined4)CONCAT43(uStack_10c,uStack_110._1_3_);
      uStack_15c = (undefined4)
                   (CONCAT17((undefined)uStack_108,CONCAT43(uStack_10c,uStack_110._1_3_)) >> 0x20);
      *(undefined8 *)(param_1 + 0x40) = local_d8;
      *(undefined8 *)(param_1 + 0x48) = uStack_d0;
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_e4,local_e8);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_dc,uStack_e0);
      *(undefined8 *)(param_1 + 0x20) = local_f8;
      *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_ec,uStack_f0);
      *(ulong *)(param_1 + 0x10) =
           CONCAT35((int3)((uint)uStack_108._4_4_ >> 8),CONCAT41(local_158,(undefined)uStack_108));
      *(undefined8 *)(param_1 + 0x18) = uStack_100;
      *(ulong *)(param_1 + 1) = CONCAT17((undefined)uStack_110,CONCAT43(uStack_114,local_118._1_3_))
      ;
      *(ulong *)(param_1 + 9) = CONCAT44(uStack_15c,uStack_160);
      *param_1 = (char)local_118;
      return;
    }
    local_1c8 = CONCAT44(uStack_10c,uStack_110);
    uStack_1c0 = (undefined4)uStack_108;
    uStack_1bc = uStack_108._4_4_;
    local_1b8 = uStack_100;
  }
                    /* try { // try from 00533a0d to 00533a23 has its CatchHandler @ 00533cd5 */
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(local_1b0,param_2,param_3,&DAT_001a000d,6);
                    /* try { // try from 00533a2e to 00533a76 has its CatchHandler @ 00533cda */
  _ZN3std2fs8metadata17h4d9fc7ae25563c19E(&local_118,local_1a8,local_1a0);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haf24c6c708ccc154E
            (&local_118);
  if (local_118 == 2) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (&local_168,local_1a8,local_1a0);
    local_190 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5fba9a975e51dcf1E;
    local_118 = 0x7ce050;
    uStack_114 = 0;
    uStack_110 = 2;
    uStack_10c = 0;
    local_f8 = 0;
    uStack_108 = &local_198;
    uStack_100 = 1;
                    /* try { // try from 00533ac8 to 00533ad5 has its CatchHandler @ 00533cb1 */
    local_198 = (undefined **)&local_168;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_118);
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
              (&local_168);
  }
  else {
                    /* try { // try from 00533ae5 to 00533af6 has its CatchHandler @ 00533cda */
    _ZN7syntect12highlighting9theme_set8ThemeSet15add_from_folder17h48bc82b2adf2a881E
              (&local_168,&local_1c8,local_1b0);
    if (local_168 != (undefined *)0x8000000000000006) {
      local_d8 = local_128;
      local_e8 = local_138;
      uStack_e4 = uStack_134;
      uStack_e0 = uStack_130;
      uStack_dc = uStack_12c;
      local_f8 = CONCAT44(uStack_144,local_148);
      uStack_f0 = uStack_140;
      uStack_ec = uStack_13c;
      uStack_108._0_4_ = local_158;
      uStack_108._4_4_ = uStack_154;
      uStack_100 = CONCAT44(uStack_14c,uStack_150);
      local_118 = (int)local_168;
      uStack_114 = local_168._4_4_;
      uStack_110 = uStack_160;
      uStack_10c = uStack_15c;
                    /* try { // try from 00533b56 to 00533b6c has its CatchHandler @ 00533c9f */
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                (local_40,local_1a8,local_1a0);
      local_58 = 
      _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5fba9a975e51dcf1E
      ;
      local_48 = 
      PTR__ZN60__LT_syntect__LoadingError_u20_as_u20_core__fmt__Display_GT_3fmt17h5d392441a0aeb0c5E_008087a0
      ;
      local_198 = &PTR_DAT_007ce020;
      local_190 = (code *)0x3;
      local_178 = 0;
      local_188 = &local_60;
      local_180 = 2;
                    /* try { // try from 00533bcf to 00533bd9 has its CatchHandler @ 00533c8d */
      local_60 = local_40;
      local_50 = &local_118;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_198);
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
                (local_40);
                    /* try { // try from 00533be7 to 00533bf3 has its CatchHandler @ 00533cda */
      _ZN4core3ptr42drop_in_place_LT_syntect__LoadingError_GT_17ha141c8bc02d095c0E(&local_118);
    }
  }
  uStack_108._0_4_ = (undefined4)local_1b8;
  uStack_108._4_4_ = (undefined4)((ulong)local_1b8 >> 0x20);
  local_118 = (int)local_1c8;
  uStack_114 = local_1c8._4_4_;
  uStack_110 = uStack_1c0;
  uStack_10c = uStack_1bc;
                    /* try { // try from 00533c0d to 00533c1d has its CatchHandler @ 00533cc0 */
  (*(code *)
    PTR__ZN134__LT_bat__assets__lazy_theme_set__LazyThemeSet_u20_as_u20_core__convert__TryFrom_LT_syntect__highlighting__theme_set__ThemeSet_GT__GT_8try_from17hcc711b3b4d727cf4E_008087a8
  )(param_1,&local_118);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(local_1b0);
  return;
}