void __rustcall
uu_shred::wipe_name(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 *local_228;
  code *local_220;
  undefined8 *puStack_218;
  code *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined local_1e8 [8];
  code *pcStack_1e0;
  undefined8 *puStack_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  code *local_170;
  long *local_168;
  code *local_160;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_1f0 = param_5;
  local_1ec = param_4;
  local_190 = param_1;
  lVar3 = std::path::Path::file_name(param_2,param_3);
  if (lVar3 == 0) {
LAB_001bd602:
    core::option::unwrap_failed(&PTR_DAT_00237db0);
  }
  else {
    std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
              (&local_188,lVar3);
    puVar2 = local_178;
    if (local_188 == (undefined8 *)0x0) {
      std::sys::os_str::bytes::Slice::to_owned(&local_188,param_2,param_3);
      local_1f8 = local_178;
      local_208 = (int)local_188;
      uStack_204 = local_188._4_4_;
      uStack_200 = (undefined4)uStack_180;
      uStack_1fc = uStack_180._4_4_;
      local_d8 = 1;
      local_d0 = puVar2;
      local_c8 = 0;
      auVar5 = _<core::ops::range::RangeInclusive<T>as_core::iter::range::RangeInclusiveIteratorImpl>
               ::spec_next_back(&local_d8);
      uVar4 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
        do {
                    /* try { // try from 001bd1b0 to 001bd1bf has its CatchHandler @ 001bd66c */
          FilenameIter::new(&local_50,uVar4);
          local_78 = local_40;
          uStack_70 = uStack_38;
          local_88 = local_50;
          uStack_84 = uStack_4c;
          uStack_80 = uStack_48;
          uStack_7c = uStack_44;
          while( true ) {
                    /* try { // try from 001bd1e0 to 001bd238 has its CatchHandler @ 001bd680 */
            _<uu_shred::FilenameIter_as_core::iter::traits::iterator::Iterator>::next
                      (&local_a0,&local_88);
            if (CONCAT44(uStack_9c,local_a0) == -0x8000000000000000) break;
            local_58 = local_90;
            local_68 = local_a0;
            uStack_64 = uStack_9c;
            uStack_60 = uStack_98;
            uStack_5c = uStack_94;
            std::path::Path::with_file_name(&local_1b0,param_2,param_3,&local_68);
                    /* try { // try from 001bd249 to 001bd262 has its CatchHandler @ 001bd671 */
            std::fs::metadata(&local_188,CONCAT44(uStack_1a4,uStack_1a8),
                              CONCAT44(uStack_19c,uStack_1a0));
            if ((int)local_188 == 2) {
                    /* try { // try from 001bd270 to 001bd284 has its CatchHandler @ 001bd65b */
              core::ptr::
              drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                        (&local_188);
              local_198 = std::fs::rename(&local_208,&local_1b0);
              if (local_198 != 0) {
                    /* try { // try from 001bd4c0 to 001bd601 has its CatchHandler @ 001bd63b */
                _local_1e8 = uucore::util_name();
                local_228 = (undefined8 *)local_1e8;
                local_220 = _<&T_as_core::fmt::Display>::fmt;
                local_188 = (undefined8 *)&DAT_00237bf0;
                uStack_180 = (code *)0x2;
                local_168 = (long *)0x0;
                local_170 = (code *)0x1;
                local_178 = &local_228;
                std::io::stdio::_eprint(&local_188);
                uStack_b8 = CONCAT44(uStack_1fc,uStack_200);
                local_c0 = 1;
                puStack_b0 = local_1f8;
                local_a8 = 0;
                local_228 = (undefined8 *)&DAT_00000001;
                local_210 = (code *)CONCAT71(local_210._1_7_,1);
                local_188 = &local_c0;
                uStack_180 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
                local_170 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
                local_168 = &local_198;
                local_160 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
                local_1e8 = (undefined  [8])&DAT_00237e40;
                pcStack_1e0 = (code *)0x4;
                local_1c8 = 0;
                local_1d0 = 3;
                puStack_1d8 = &local_188;
                local_178 = &local_228;
                std::io::stdio::_eprint(local_1e8);
                std::process::exit(1);
                goto LAB_001bd602;
              }
              if ((char)local_1ec != '\0') {
                    /* try { // try from 001bd299 to 001bd40d has its CatchHandler @ 001bd65d */
                _local_1e8 = uucore::util_name();
                local_228 = (undefined8 *)local_1e8;
                local_220 = _<&T_as_core::fmt::Display>::fmt;
                local_188 = (undefined8 *)&DAT_00237bf0;
                uStack_180 = (code *)0x2;
                local_168 = (long *)0x0;
                local_170 = (code *)0x1;
                local_178 = &local_228;
                std::io::stdio::_eprint(&local_188);
                pcStack_1e0 = (code *)CONCAT44(uStack_1fc,uStack_200);
                local_1e8 = (undefined  [8])0x1;
                puStack_1d8 = local_1f8;
                local_1d0 = local_1d0 & 0xffffffffffffff00;
                local_228 = (undefined8 *)local_1e8;
                local_220 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
                puStack_218 = &local_c0;
                local_210 = _<std::path::Display_as_core::fmt::Display>::fmt;
                local_188 = (undefined8 *)&DAT_00237de0;
                uStack_180 = (code *)0x3;
                local_168 = (long *)0x0;
                local_170 = (code *)0x2;
                local_178 = &local_228;
                std::io::stdio::_eprint(&local_188);
              }
              if ((char)local_1f0 == '\x03') {
                local_228 = (undefined8 *)0x1b600000000;
                uVar1 = (ulong)local_220 >> 0x10;
                local_220 = (code *)CONCAT62((uint6)uVar1 & 0xffff00000000,0x100);
                _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_188,&local_1b0);
                puStack_1d8 = local_178;
                local_1e8._0_4_ = SUB84(local_188,0);
                local_1e8._4_4_ = local_188._4_4_;
                pcStack_1e0 = uStack_180;
                std::fs::OpenOptions::open(&local_188,&local_228,local_1e8);
                local_1e8._0_4_ = core::result::Result<T,E>::expect(&local_188);
                    /* try { // try from 001bd412 to 001bd424 has its CatchHandler @ 001bd64d */
                uVar4 = std::fs::File::sync_all(local_1e8);
                core::result::Result<T,E>::expect(uVar4);
                core::ptr::drop_in_place<std::fs::File>((ulong)local_1e8 & 0xffffffff);
              }
              local_178 = (undefined8 *)CONCAT44(uStack_19c,uStack_1a0);
              local_188 = (undefined8 *)CONCAT44(uStack_1ac,local_1b0);
              uStack_180 = (code *)CONCAT44(uStack_1a4,uStack_1a8);
                    /* try { // try from 001bd44b to 001bd454 has its CatchHandler @ 001bd61c */
              core::ptr::drop_in_place<std::path::PathBuf>(&local_208);
              local_1f8 = local_178;
              local_208 = (int)local_188;
              uStack_204 = local_188._4_4_;
              uStack_200 = (undefined4)uStack_180;
              uStack_1fc = uStack_180._4_4_;
              break;
            }
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (&local_188);
                    /* try { // try from 001bd263 to 001bd26a has its CatchHandler @ 001bd680 */
            core::ptr::drop_in_place<std::path::PathBuf>(&local_1b0);
          }
                    /* try { // try from 001bd46f to 001bd476 has its CatchHandler @ 001bd66c */
          core::ptr::drop_in_place<uu_shred::FilenameIter>(&local_88);
          auVar5 = _<core::ops::range::RangeInclusive<T>as_core::iter::range::RangeInclusiveIteratorImpl>
                   ::spec_next_back(&local_d8);
          uVar4 = auVar5._8_8_;
        } while (auVar5._0_8_ != 0);
      }
      local_190[2] = local_1f8;
      *local_190 = CONCAT44(uStack_204,local_208);
      local_190[1] = CONCAT44(uStack_1fc,uStack_200);
      return;
    }
  }
  uVar4 = core::option::unwrap_failed(&PTR_DAT_00237dc8);
                    /* catch() { ... } // from try @ 001bd44b with catch @ 001bd61c */
  local_1f8 = local_178;
  local_208 = (int)local_188;
  uStack_204 = local_188._4_4_;
  uStack_200 = (undefined4)uStack_180;
  uStack_1fc = uStack_180._4_4_;
  core::ptr::drop_in_place<uu_shred::FilenameIter>(&local_88);
  core::ptr::drop_in_place<std::path::PathBuf>(&local_208);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}