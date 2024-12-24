undefined  [16] __rustcall
uu_mv::move_files_into_dir
          (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  undefined auVar9 [16];
  undefined local_300 [24];
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined local_2d0 [16];
  undefined *local_2c0;
  code *local_2b8;
  long local_298;
  undefined **local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined **local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined **local_268;
  undefined local_258 [8];
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined **local_228;
  undefined8 uStack_220;
  undefined **local_218;
  code *local_210;
  undefined8 local_208;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined local_178 [8];
  undefined auStack_170 [16];
  code *local_160;
  undefined *local_158;
  code *local_150;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined local_88 [48];
  undefined local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_298 = param_5;
  std::thread::local::LocalKey<T>::try_with(local_178);
  auVar9 = core::result::Result<T,E>::expect(local_178);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (local_88,param_2,auVar9._0_8_,auVar9._8_8_);
  local_2e0 = param_3;
  local_2d8 = param_4;
                    /* try { // try from 001e9340 to 001e9422 has its CatchHandler @ 001e9fcc */
  cVar1 = std::path::Path::is_dir(param_3,param_4);
  if (cVar1 == '\0') {
    local_228 = (undefined **)0x1;
    uStack_220 = (code *)local_2e0;
    local_218 = (undefined **)local_2d8;
    local_210 = (code *)CONCAT71(local_210._1_7_,1);
    _<T_as_alloc::string::ToString>::to_string(local_2d0,&local_228);
    local_160 = (code *)local_2c0;
    local_178 = (undefined  [8])0x7;
    uVar4 = ::alloc::boxed::Box<T>::new(local_178);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(local_88);
    goto LAB_001e9ec0;
  }
  std::fs::canonicalize(local_178,local_2e0,local_2d8);
  if (local_178 == (undefined  [8])0x8000000000000000) {
    move_files_into_dir::___closure__(&local_198,local_2e0,local_2d8,auStack_170._0_8_);
  }
  else {
    local_188 = auStack_170._8_8_;
    local_198 = local_178._0_4_;
    uStack_194 = local_178._4_4_;
    uStack_190 = auStack_170._0_4_;
    uStack_18c = auStack_170._4_4_;
  }
  if (*(char *)(local_298 + 0x33) == '\0') {
    local_2e8 = (undefined8 ***)0x0;
LAB_001e9523:
    local_278 = (undefined **)0x0;
  }
  else {
                    /* try { // try from 001e946a to 001e946e has its CatchHandler @ 001e9f4e */
    local_2e8 = (undefined8 **)core::ops::function::FnOnce::call_once();
    if (param_2 < 2) goto LAB_001e9523;
                    /* try { // try from 001e947e to 001e948b has its CatchHandler @ 001e9f46 */
    indicatif::progress_bar::ProgressBar::new(local_2d0,param_2);
                    /* try { // try from 001e948c to 001e94c1 has its CatchHandler @ 001e9ef0 */
    indicatif::style::ProgressStyle::with_template
              (local_178,"moving {msg} {wide_bar} {pos}/{len}",0x23);
    core::result::Result<T,E>::unwrap(&local_228,local_178,&PTR_s_src_uu_mv_src_mv_rs_00287358);
                    /* try { // try from 001e94c2 to 001e94dc has its CatchHandler @ 001e9ed9 */
    indicatif::progress_bar::ProgressBar::with_style(local_178,local_2d0,&local_228);
                    /* try { // try from 001e94dd to 001e94f7 has its CatchHandler @ 001e9f46 */
    indicatif::multi::MultiProgress::add(&local_228,&local_2e8,local_178);
    local_278 = local_228;
    uStack_270 = (undefined4)uStack_220;
    uStack_26c = uStack_220._4_4_;
    local_268 = local_218;
  }
  local_a0 = param_1 + param_2 * 0x18;
  local_a8 = param_1;
  lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_a8);
  if (lVar5 != 0) {
    cVar1 = *(char *)(local_298 + 0x36);
    do {
      puVar7 = *(undefined **)(lVar5 + 8);
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
      std::fs::metadata(local_178,puVar7,uVar4);
      if (local_178._0_4_ == 2) {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_178);
        local_228 = (undefined **)0x1;
        local_210 = (code *)CONCAT71(local_210._1_7_,1);
        uStack_220 = (code *)puVar7;
        local_218 = (undefined **)uVar4;
        _<T_as_alloc::string::ToString>::to_string(local_2d0,&local_228);
        local_160 = (code *)local_2c0;
        local_178 = (undefined  [8])0x0;
        auStack_170 = local_2d0;
                    /* try { // try from 001e9629 to 001e96ae has its CatchHandler @ 001ea01e */
        uucore::mods::error::set_exit_code(1);
        auVar9 = uucore::util_name();
        local_2d0._0_8_ = local_300;
        local_2d0._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_2b8 = _<uu_mv::error::MvError_as_core::fmt::Display>::fmt;
        local_228 = (undefined **)&DAT_00287370;
        uStack_220 = (code *)0x3;
        local_208 = 0;
        local_210 = (code *)0x2;
        local_2c0 = local_178;
        local_218 = (undefined **)local_2d0;
        local_300._0_16_ = auVar9;
        std::io::stdio::_eprint(&local_228);
                    /* try { // try from 001e96af to 001e96e1 has its CatchHandler @ 001ea030 */
        core::ptr::drop_in_place<uu_mv::error::MvError>(local_178);
      }
      else {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_178);
        if (local_278 != (undefined **)0x0) {
          std::sys::os_str::bytes::Slice::to_string_lossy(local_178,puVar7,uVar4);
                    /* try { // try from 001e96f2 to 001e9709 has its CatchHandler @ 001e9ffa */
          _<alloc::borrow::Cow<str>as_alloc::string::ToString>::to_string
                    (&local_228,auStack_170._0_8_,auStack_170._8_8_);
          indicatif::progress_bar::ProgressBar::set_message(&local_278,&local_228);
                    /* try { // try from 001e970a to 001e9743 has its CatchHandler @ 001ea030 */
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_178);
        }
        auVar9 = std::path::Path::file_name(puVar7,uVar4);
        if (auVar9._0_8_ == 0) {
          local_228 = (undefined **)0x1;
          local_210 = (code *)CONCAT71(local_210._1_7_,1);
          uStack_220 = (code *)puVar7;
          local_218 = (undefined **)uVar4;
                    /* try { // try from 001e990e to 001e9918 has its CatchHandler @ 001ea030 */
          _<T_as_alloc::string::ToString>::to_string(local_2d0,&local_228);
          local_160 = (code *)local_2c0;
          local_178 = (undefined  [8])0x0;
          auStack_170 = local_2d0;
                    /* try { // try from 001e993e to 001e99c3 has its CatchHandler @ 001e9fe8 */
          uucore::mods::error::set_exit_code(1);
          auVar9 = uucore::util_name();
          local_2d0._0_8_ = local_300;
          local_2d0._8_8_ = _<&T_as_core::fmt::Display>::fmt;
          local_2b8 = _<uu_mv::error::MvError_as_core::fmt::Display>::fmt;
          local_228 = (undefined **)&DAT_00287370;
          uStack_220 = (code *)0x3;
          local_208 = 0;
          local_210 = (code *)0x2;
          local_2c0 = local_178;
          local_218 = (undefined **)local_2d0;
          local_300._0_16_ = auVar9;
          std::io::stdio::_eprint(&local_228);
                    /* try { // try from 001e99c4 to 001e99cb has its CatchHandler @ 001ea030 */
          core::ptr::drop_in_place<uu_mv::error::MvError>(local_178);
        }
        else {
          std::path::Path::join(local_258,local_2e0,local_2d8,auVar9._0_8_,auVar9._8_8_);
                    /* try { // try from 001e9744 to 001e982d has its CatchHandler @ 001ea00c */
          lVar6 = hashbrown::map::HashMap<K,V,S,A>::get_inner(local_88,local_258);
          if ((lVar6 == 0) || (cVar1 == '\x02')) {
                    /* try { // try from 001e99d1 to 001e9a39 has its CatchHandler @ 001ea00c */
            std::fs::canonicalize(&local_240,puVar7,uVar4);
            if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) {
LAB_001e99fc:
              core::ptr::
              drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                        (&local_240);
            }
            else {
              local_c8 = local_240;
              uStack_c4 = uStack_23c;
              uStack_c0 = uStack_238;
              uStack_bc = uStack_234;
              local_b8 = local_230;
                    /* try { // try from 001e9ad7 to 001e9b08 has its CatchHandler @ 001e9f99 */
              cVar2 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                                (CONCAT44(uStack_234,uStack_238),local_230,
                                 CONCAT44(uStack_18c,uStack_190),local_188);
              if (cVar2 != '\0') {
                local_98 = puVar7;
                local_90 = uVar4;
                uucore::features::fs::normalize_path(&local_290,local_2e0,local_2d8);
                local_40 = local_288;
                uStack_3c = uStack_284;
                uStack_38 = uStack_280;
                uStack_34 = uStack_27c;
                    /* try { // try from 001e9b29 to 001e9b5e has its CatchHandler @ 001e9f6a */
                std::path::Path::components(local_178,CONCAT44(uStack_18c,uStack_190),local_188);
                local_228 = (undefined **)CONCAT71(local_228._1_7_,10);
                core::iter::traits::iterator::Iterator::fold(local_2d0,local_178,&local_228);
                core::option::Option<T>::map_or_else(local_300,local_2d0,local_2e0,local_2d8);
                local_178 = (undefined  [8])&local_98;
                auStack_170._0_8_ = _<std::path::Display_as_core::fmt::Display>::fmt;
                auStack_170._8_8_ = &local_40;
                local_160 = _<std::path::Display_as_core::fmt::Display>::fmt;
                local_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                local_228 = &PTR_s_cannot_move___002873d0;
                uStack_220 = (code *)0x4;
                local_208 = 0;
                local_210 = (code *)0x3;
                local_218 = (undefined **)local_178;
                local_158 = local_300;
                    /* try { // try from 001e9bed to 001e9bf7 has its CatchHandler @ 001e9f20 */
                core::option::Option<T>::map_or_else(local_2d0,&local_228);
                    /* try { // try from 001e9bf8 to 001e9bff has its CatchHandler @ 001e9f07 */
                core::ptr::drop_in_place<alloc::string::String>(local_300);
                    /* try { // try from 001e9c00 to 001e9c09 has its CatchHandler @ 001e9f02 */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_290);
                auStack_170._8_8_ = local_2c0;
                local_160 = (code *)CONCAT44(local_160._4_4_,1);
                _local_178 = local_2d0;
                    /* try { // try from 001e9c2f to 001e9c36 has its CatchHandler @ 001e9f99 */
                puVar7 = (undefined *)::alloc::boxed::Box<T>::new(local_178);
                local_300._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002871d0;
                local_300._0_8_ = puVar7;
                uVar3 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code
                                  (puVar7);
                    /* try { // try from 001e9c50 to 001e9cde has its CatchHandler @ 001e9f56 */
                uucore::mods::error::set_exit_code(uVar3);
                auVar9 = uucore::util_name();
                uStack_220 = _<&T_as_core::fmt::Display>::fmt;
                local_218 = (undefined **)local_300;
                local_210 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
                local_178 = (undefined  [8])&DAT_00287370;
                auStack_170._0_8_ = 3;
                local_158 = (undefined *)0x0;
                local_160 = (code *)0x2;
                local_228 = (undefined **)local_2d0;
                auStack_170._8_8_ = &local_228;
                local_2d0 = auVar9;
                std::io::stdio::_eprint(local_178);
                    /* try { // try from 001e9ce9 to 001e9ced has its CatchHandler @ 001e9f99 */
                core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                          (local_300._0_8_,local_300._8_8_);
                    /* try { // try from 001e9cee to 001e9cfa has its CatchHandler @ 001e9f41 */
                core::ptr::drop_in_place<std::path::PathBuf>(&local_c8);
                if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) {
                    /* try { // try from 001e9d13 to 001e9d1f has its CatchHandler @ 001ea00c */
                  core::ptr::
                  drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                            (&local_240);
                }
                goto LAB_001e957c;
              }
                    /* try { // try from 001e9d25 to 001e9d31 has its CatchHandler @ 001e9f41 */
              core::ptr::drop_in_place<std::path::PathBuf>(&local_c8);
              if (CONCAT44(uStack_23c,local_240) == -0x8000000000000000) goto LAB_001e99fc;
            }
            pppuVar8 = (undefined8 ***)local_2e8;
            if ((undefined8 ***)local_2e8 != (undefined8 ***)0x0) {
              pppuVar8 = &local_2e8;
            }
            local_290 = (undefined **)
                        rename(puVar7,uVar4,CONCAT44(uStack_24c,local_250),
                               CONCAT44(uStack_244,uStack_248),local_298,pppuVar8);
            if (local_290 != (undefined **)0x0) {
                    /* try { // try from 001e9a48 to 001e9a6b has its CatchHandler @ 001e9f7e */
              _<T_as_alloc::string::ToString>::to_string(local_178,&local_290);
              if (auStack_170._8_8_ == 0) {
                    /* try { // try from 001e9d4f to 001e9d56 has its CatchHandler @ 001e9f7e */
                core::ptr::drop_in_place<alloc::string::String>(local_178);
                local_178 = (undefined  [8])local_290;
                    /* try { // try from 001e9d64 to 001e9d6e has its CatchHandler @ 001e9edb */
                uucore::mods::error::set_exit_code(1);
                    /* try { // try from 001e9d6f to 001e9d76 has its CatchHandler @ 001e9f79 */
                core::ptr::drop_in_place<std::io::error::Error>(local_178);
              }
              else {
                core::ptr::drop_in_place<alloc::string::String>(local_178);
                    /* try { // try from 001e9a71 to 001e9a99 has its CatchHandler @ 001e9f79 */
                puVar7 = (undefined *)
                         _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                         ::map_err_context(local_290,lVar5,local_258);
                if ((undefined8 ***)local_2e8 == (undefined8 ***)0x0) {
                  local_300._0_8_ = puVar7;
                    /* try { // try from 001e9d81 to 001e9e12 has its CatchHandler @ 001e9f2f */
                  uucore::mods::error::set_exit_code(1);
                  auVar9 = uucore::util_name();
                  uStack_220 = _<&T_as_core::fmt::Display>::fmt;
                  local_218 = (undefined **)local_300;
                  local_210 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
                  local_178 = (undefined  [8])&DAT_00287370;
                  auStack_170._0_8_ = 3;
                  local_158 = (undefined *)0x0;
                  local_160 = (code *)0x2;
                  local_228 = (undefined **)local_2d0;
                  auStack_170._8_8_ = &local_228;
                  local_2d0 = auVar9;
                  std::io::stdio::_eprint(local_178);
                    /* try { // try from 001e9e18 to 001e9e1c has its CatchHandler @ 001e9f79 */
                  core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>
                            (local_300._0_8_);
                }
                else {
                  indicatif::multi::MultiProgress::suspend(&local_2e8,puVar7);
                }
              }
            }
            if (local_278 != (undefined **)0x0) {
                    /* try { // try from 001e9e28 to 001e9e7a has its CatchHandler @ 001ea00c */
              indicatif::progress_bar::ProgressBar::inc(&local_278,1);
            }
            _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(local_178,local_258);
            local_218 = (undefined **)auStack_170._8_8_;
            local_228 = (undefined **)local_178;
            uStack_220 = (code *)auStack_170._0_8_;
            hashbrown::map::HashMap<K,V,S,A>::insert(local_88,&local_228);
                    /* try { // try from 001e9e7b to 001e9e87 has its CatchHandler @ 001ea030 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_258);
          }
          else {
            local_228 = (undefined **)local_300;
            uStack_220 = _<std::path::Display_as_core::fmt::Display>::fmt;
            local_210 = _<std::path::Display_as_core::fmt::Display>::fmt;
            local_178 = (undefined  [8])&PTR_s_will_not_overwrite_just_created___002873a0;
            auStack_170._0_8_ = 3;
            local_158 = (undefined *)0x0;
            local_160 = (code *)0x2;
            local_2d0._0_8_ = puVar7;
            local_2d0._8_8_ = uVar4;
            local_218 = (undefined **)local_2d0;
            auStack_170._8_8_ = &local_228;
            core::option::Option<T>::map_or_else(local_58,local_178);
            local_160 = (code *)CONCAT44(local_160._4_4_,1);
            auStack_170._8_8_ = local_48;
            local_300._0_8_ = ::alloc::boxed::Box<T>::new(local_178);
            local_300._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002871d0;
            uVar3 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code
                              (local_300._0_8_);
                    /* try { // try from 001e9847 to 001e98d5 has its CatchHandler @ 001e9fd4 */
            uucore::mods::error::set_exit_code(uVar3);
            local_2d0 = uucore::util_name();
            uStack_220 = _<&T_as_core::fmt::Display>::fmt;
            local_218 = (undefined **)local_300;
            local_210 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_178 = (undefined  [8])&DAT_00287370;
            auStack_170._0_8_ = 3;
            local_158 = (undefined *)0x0;
            local_160 = (code *)0x2;
            local_228 = (undefined **)local_2d0;
            auStack_170._8_8_ = &local_228;
            std::io::stdio::_eprint(local_178);
                    /* try { // try from 001e98e0 to 001e98e4 has its CatchHandler @ 001ea00c */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_300._0_8_,local_300._8_8_);
LAB_001e957c:
                    /* try { // try from 001e957c to 001e9603 has its CatchHandler @ 001ea030 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_258);
          }
        }
      }
      lVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_a8);
    } while (lVar5 != 0);
  }
                    /* try { // try from 001e9e8d to 001e9e99 has its CatchHandler @ 001e9f46 */
  core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&local_278);
                    /* try { // try from 001e9e9a to 001e9ea3 has its CatchHandler @ 001e9f4e */
  core::ptr::drop_in_place<core::option::Option<indicatif::multi::MultiProgress>>(&local_2e8);
                    /* try { // try from 001e9ea4 to 001e9eb0 has its CatchHandler @ 001e9fcc */
  core::ptr::drop_in_place<std::path::PathBuf>(&local_198);
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(local_88);
  uVar4 = 0;
LAB_001e9ec0:
  auVar9._8_8_ = &PTR_drop_in_place<uu_mv_error_MvError>_002870b8;
  auVar9._0_8_ = uVar4;
  return auVar9;
}