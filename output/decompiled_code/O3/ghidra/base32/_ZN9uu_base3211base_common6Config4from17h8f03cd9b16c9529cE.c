undefined8 * __rustcall uu_base32::base_common::Config::from(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined8 *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 *puStack_188;
  undefined local_180;
  undefined local_178 [24];
  undefined4 local_160;
  undefined **local_158;
  undefined4 *local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar9 = &anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_158,param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,
             4);
  clap_builder::parser::error::MatchesError::unwrap
            (&local_68,&anon_c1c055de090567b5a95d92af4d90b7c9_26_llvm_10347091732497712345,4,
             &local_158);
  if (CONCAT44(uStack_64,local_68) != 0) {
    local_78 = local_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    local_88 = local_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    lVar4 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
            ::next(&local_a8);
    if (lVar4 == 0) {
      uVar6 = core::option::unwrap_failed(&PTR_s_src_uu_base32_src_base_common_rs_002495a0);
                    /* catch() { ... } // from try @ 001c1111 with catch @ 001c12d7
                       catch() { ... } // from try @ 001c118c with catch @ 001c12d7 */
                    /* try { // try from 001c12da to 001c12e3 has its CatchHandler @ 001c12ec */
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_1b0);
      puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
      return puVar7;
    }
    lVar5 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
            ::next(&local_a8);
    if (lVar5 != 0) {
      local_190 = *(undefined8 *)(lVar5 + 8);
      puStack_188 = *(undefined4 **)(lVar5 + 0x10);
      local_198 = 0;
      local_180 = 1;
      local_1c0 = &local_198;
      local_1b8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_158 = &PTR_DAT_00249570;
      local_150 = (undefined4 *)0x1;
      local_138 = 0;
      local_148 = &local_1c0;
      local_140 = 1;
      core::option::Option<T>::map_or_else(local_178,&local_158);
      local_160 = 1;
      uVar6 = ::alloc::boxed::Box<T>::new(local_178);
      ppuVar8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002495f0;
LAB_001c10c7:
      param_1[1] = uVar6;
      param_1[2] = ppuVar8;
      *param_1 = 2;
      return param_1;
    }
    uVar6 = *(undefined8 *)(lVar4 + 8);
    puVar9 = *(undefined4 **)(lVar4 + 0x10);
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar6,puVar9,&DAT_00118b77,1);
    if (cVar1 == '\0') {
      std::fs::metadata(&local_158,uVar6,puVar9);
      if (local_158 == (undefined **)0x2) {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (2,local_150);
        local_198 = 1;
        local_180 = 0;
        local_1c0 = &local_198;
        local_1b8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_158 = (undefined **)&DAT_00249580;
        local_150 = (undefined4 *)0x2;
        local_138 = 0;
        local_148 = &local_1c0;
        local_140 = 1;
        local_190 = uVar6;
        puStack_188 = puVar9;
        core::option::Option<T>::map_or_else(local_178,&local_158);
        local_160 = 1;
        uVar6 = ::alloc::boxed::Box<T>::new(local_178);
        ppuVar8 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00249698;
        goto LAB_001c10c7;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_158,local_150);
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_1b0,uVar6,puVar9);
      goto LAB_001c1111;
    }
  }
  local_1b0 = 0x8000000000000000;
LAB_001c1111:
                    /* try { // try from 001c1111 to 001c1156 has its CatchHandler @ 001c12d7 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_158,param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,
             4);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap
                    (&anon_c1c055de090567b5a95d92af4d90b7c9_24_llvm_10347091732497712345,4,
                     &local_158);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    from::___closure__(&local_158,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    if (local_158 != (undefined **)0x0) {
      param_1[1] = local_158;
      param_1[2] = local_150;
      *param_1 = 2;
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_1b0);
      return param_1;
    }
    uVar6 = 1;
    puVar9 = local_150;
  }
                    /* try { // try from 001c118c to 001c11b7 has its CatchHandler @ 001c12d7 */
  uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,&anon_c1c055de090567b5a95d92af4d90b7c9_23_llvm_10347091732497712345,6);
  uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                    (param_2,anon_c1c055de090567b5a95d92af4d90b7c9_25_llvm_10347091732497712345,0xe)
  ;
  param_1[4] = local_1a0;
  param_1[2] = local_1b0;
  param_1[3] = uStack_1a8;
  *param_1 = uVar6;
  param_1[1] = puVar9;
  *(undefined *)(param_1 + 5) = uVar2;
  *(undefined *)((long)param_1 + 0x29) = uVar3;
  return param_1;
}