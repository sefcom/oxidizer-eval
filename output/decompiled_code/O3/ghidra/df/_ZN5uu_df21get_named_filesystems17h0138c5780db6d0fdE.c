void __rustcall
uu_df::get_named_filesystems(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined local_390 [16];
  undefined8 local_380;
  undefined **local_378;
  undefined local_370 [16];
  undefined8 *local_360;
  code *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined local_338 [8];
  undefined8 local_330;
  long local_328;
  undefined8 *local_320;
  long local_318;
  long local_310;
  undefined8 *local_308;
  code *pcStack_300;
  undefined8 *local_2f8;
  code *local_2f0;
  undefined8 local_2e8;
  undefined *local_258;
  undefined8 local_250;
  undefined8 **local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined *local_228;
  undefined8 uStack_220;
  undefined8 **local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined local_138 [32];
  undefined local_118 [232];
  
  (*(code *)PTR_read_fs_list_002467d8)(&local_228);
  if (local_228 == (undefined *)0x8000000000000000) {
    param_1[1] = uStack_220;
    param_1[2] = local_218;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_258 = local_228;
    local_250 = uStack_220;
    local_248 = local_218;
    (*(code *)PTR_filter_mount_list_002467e0)(&local_308,&local_258,param_4);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_138,&local_308);
    ::alloc::vec::in_place_collect::
    _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
              (local_338,local_138);
    local_350 = 0;
    uStack_348 = 8;
    local_340 = 0;
    if (local_328 == 0) {
                    /* try { // try from 00173ac1 to 00173b08 has its CatchHandler @ 00173c0d */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_308);
      local_218 = (undefined8 **)local_2f8;
      local_210 = CONCAT44(local_210._4_4_,1);
      local_390._0_8_ = ::alloc::boxed::Box<T>::new(&local_228);
      local_390._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0023f6b0;
      uVar1 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code
                        (local_390._0_8_);
                    /* try { // try from 00173b22 to 00173bba has its CatchHandler @ 00173bf9 */
      (*(code *)PTR_set_exit_code_002467f0)(uVar1);
      local_370 = (*(code *)PTR_util_name_002467f8)();
      local_308 = (undefined8 *)local_370;
      pcStack_300 = _<&T_as_core::fmt::Display>::fmt;
      local_2f8 = (undefined8 *)local_390;
      local_2f0 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
      local_228 = &DAT_0023f720;
      uStack_220 = 3;
      local_208 = 0;
      local_210 = 2;
      local_218 = &local_308;
      (*(code *)PTR__eprint_00246800)(&local_228);
                    /* try { // try from 00173bc5 to 00173bc9 has its CatchHandler @ 00173c0d */
      core::ptr::
      drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                (local_390._0_8_,local_390._8_8_);
      param_1[2] = local_340;
      *(undefined4 *)param_1 = (undefined4)local_350;
      *(undefined4 *)((long)param_1 + 4) = local_350._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_348;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_348._4_4_;
    }
    else {
      local_310 = param_2 + param_3 * 8;
      local_320 = param_1;
      local_318 = param_2;
      puVar2 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_318);
      if (puVar2 != (undefined8 *)0x0) {
        do {
          filesystem::Filesystem::from_path(&local_228,local_330,local_328,puVar2);
          if (local_228 == (undefined *)0x8000000000000000) {
            uVar3 = _<&T_as_core::convert::AsRef<U>>::as_ref(*puVar2);
            std::fs::metadata(&local_308,uVar3);
            if (local_308 == (undefined8 *)0x2) {
              core::ptr::
              drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                        (2,pcStack_300);
              local_370 = _<&T_as_core::convert::AsRef<U>>::as_ref(*puVar2);
              local_390._0_8_ = local_370;
              local_390._8_8_ = PTR_fmt_002467e8;
              local_308 = (undefined8 *)&DAT_0023f750;
              pcStack_300 = (code *)0x2;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_390;
              local_2f0 = (code *)0x1;
              core::option::Option<T>::map_or_else(local_240,&local_308);
              local_2f0 = (code *)CONCAT44(local_2f0._4_4_,1);
              local_2f8 = (undefined8 *)local_230;
              local_380 = ::alloc::boxed::Box<T>::new(&local_308);
              local_378 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0023f6b0;
              uVar1 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code
                                (local_380);
                    /* try { // try from 0017390c to 00173998 has its CatchHandler @ 00173c0f */
              (*(code *)PTR_set_exit_code_002467f0)(uVar1);
              local_390 = (*(code *)PTR_util_name_002467f8)();
              local_370._0_8_ = local_390;
              local_370._8_8_ = _<&T_as_core::fmt::Display>::fmt;
              local_360 = &local_380;
              local_358 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
              local_308 = (undefined8 *)&DAT_0023f720;
              pcStack_300 = (code *)0x3;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_370;
              local_2f0 = (code *)0x2;
              (*(code *)PTR__eprint_00246800)(&local_308);
                    /* try { // try from 001739a3 to 001739eb has its CatchHandler @ 00173c37 */
              core::ptr::
              drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                        (local_380,local_378);
            }
            else {
              core::ptr::
              drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                        (local_308,pcStack_300);
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_370);
              local_2f8 = local_360;
              local_308 = (undefined8 *)local_370._0_8_;
              pcStack_300 = (code *)local_370._8_8_;
              local_2f0 = (code *)CONCAT44(local_2f0._4_4_,1);
              local_380 = ::alloc::boxed::Box<T>::new(&local_308);
              local_378 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0023f6b0;
              uVar1 = _<uucore::mods::error::USimpleError_as_uucore::mods::error::UError>::code
                                (local_380);
                    /* try { // try from 00173a05 to 00173a91 has its CatchHandler @ 00173c23 */
              (*(code *)PTR_set_exit_code_002467f0)(uVar1);
              auVar4 = (*(code *)PTR_util_name_002467f8)();
              local_370._0_8_ = local_390;
              local_370._8_8_ = _<&T_as_core::fmt::Display>::fmt;
              local_360 = &local_380;
              local_358 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
              local_308 = (undefined8 *)&DAT_0023f720;
              pcStack_300 = (code *)0x3;
              local_2e8 = 0;
              local_2f8 = (undefined8 *)local_370;
              local_2f0 = (code *)0x2;
              local_390 = auVar4;
              (*(code *)PTR__eprint_00246800)(&local_308);
                    /* try { // try from 00173a9c to 00173aa0 has its CatchHandler @ 00173c37 */
              core::ptr::
              drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                        (local_380,local_378);
            }
          }
          else {
            (*(code *)PTR_memcpy_00246780)(local_118,&local_228,0xe8);
                    /* try { // try from 001737d1 to 001738f2 has its CatchHandler @ 00173c37 */
            ::alloc::vec::Vec<T,A>::push(&local_350,local_118);
          }
          puVar2 = (undefined8 *)
                   _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_318);
        } while (puVar2 != (undefined8 *)0x0);
      }
      local_320[2] = local_340;
      *(undefined4 *)local_320 = (undefined4)local_350;
      *(undefined4 *)((long)local_320 + 4) = local_350._4_4_;
      *(undefined4 *)(local_320 + 1) = (undefined4)uStack_348;
      *(undefined4 *)((long)local_320 + 0xc) = uStack_348._4_4_;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(local_338);
  }
  return;
}