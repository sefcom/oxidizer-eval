undefined  [16] __rustcall
uu_tac::tac(long param_1,long param_2,uint param_3,int param_4,undefined8 param_5,undefined8 param_6
           )

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined8 *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined local_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  uint local_1b4;
  undefined local_1b0 [16];
  undefined8 local_1a0;
  undefined **local_198;
  undefined local_190 [16];
  undefined8 local_180;
  undefined **local_178 [2];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined **local_148;
  undefined8 local_140;
  undefined8 *local_138;
  code *pcStack_130;
  undefined8 **local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_60 = param_5;
  if (param_4 == 0) {
    local_88 = (undefined8 *)0x0;
  }
  else {
    regex::regex::bytes::Regex::new(&local_210,param_5,param_6);
    if (local_210 == (undefined8 *)0x0) {
      local_120 = (undefined **)uStack_1f8;
      local_138 = (undefined8 *)0x8000000000000000;
      uVar7 = ::alloc::boxed::Box<T>::new(&local_138);
      goto LAB_002a02e4;
    }
    local_78 = (undefined4)local_200;
    uStack_74 = local_200._4_4_;
    uStack_70 = (undefined4)uStack_1f8;
    uStack_6c = uStack_1f8._4_4_;
    local_88 = local_210;
    uStack_80 = (undefined4)uStack_208;
    uStack_7c = uStack_208._4_4_;
  }
  local_50 = param_2 * 0x10 + param_1;
  local_140 = param_6;
  local_58 = param_1;
  puVar5 = (undefined8 *)
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_58);
  if (puVar5 != (undefined8 *)0x0) {
    local_1b4 = param_3 & 0xff;
    do {
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
                    /* try { // try from 0029fb34 to 0029fbe9 has its CatchHandler @ 002a0420 */
      cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar7,uVar1,"-: \n",1);
      if (cVar4 == '\0') {
        cVar4 = std::path::Path::is_dir(uVar7,uVar1);
        if (cVar4 == '\0') {
          std::fs::metadata(&local_138,uVar7,uVar1);
          if (local_138 == (undefined8 *)0x2) {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (2,pcStack_130);
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_210,uVar7,uVar1);
            local_120 = (undefined **)local_200;
            pcStack_130 = (code *)local_210;
            local_128 = (undefined8 **)uStack_208;
            local_138 = (undefined8 *)0x8000000000000002;
            local_1f0 = ::alloc::boxed::Box<T>::new(&local_138);
            uStack_1e8 = &PTR_drop_in_place<uu_tac_error_TacError>_003c9130;
                    /* try { // try from 0029fd23 to 0029fdad has its CatchHandler @ 002a03ae */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_1d8;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c91a0;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_200 = &local_1f0;
            _local_1d8 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 0029fdb8 to 0029fdbc has its CatchHandler @ 002a0420 */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1f0,uStack_1e8);
          }
          else {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (local_138,pcStack_130);
            try_mmap_path(local_190,uVar7,uVar1);
            ppuVar8 = (undefined **)local_190._8_8_;
            uVar9 = local_180;
            if (local_190._0_8_ != 0) goto LAB_0029fb69;
                    /* try { // try from 002a000e to 002a001b has its CatchHandler @ 002a0319 */
            std::fs::read(&local_1f0,uVar7,uVar1);
            uVar9 = local_1e0;
            ppuVar8 = uStack_1e8;
            if (local_1f0 != -0x8000000000000000) {
              local_168 = (undefined4)local_1f0;
              uStack_164 = local_1f0._4_4_;
              uStack_160 = (undefined4)uStack_1e8;
              uStack_15c = uStack_1e8._4_4_;
              local_158 = local_1e0;
              if (local_190._0_8_ != 0) {
                    /* try { // try from 002a0221 to 002a022d has its CatchHandler @ 002a0377 */
                core::ptr::drop_in_place<memmap2::Mmap>(local_190 + 8);
              }
              goto LAB_0029ff8a;
            }
            local_148 = uStack_1e8;
            local_210 = (undefined8 *)0x0;
            uStack_1f8 = (code *)CONCAT71(uStack_1f8._1_7_,1);
            uStack_1d0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_00163b30;
            pcStack_130 = (code *)0x1;
            local_118 = 0;
            local_120 = (undefined **)0x1;
                    /* try { // try from 002a00af to 002a00bb has its CatchHandler @ 002a0314 */
            uStack_208 = (code *)uVar7;
            local_200 = (undefined8 *)uVar1;
            local_1d8 = (undefined  [8])&local_210;
            local_128 = (undefined8 **)local_1d8;
            core::option::Option<T>::map_or_else(&local_48,&local_138);
            local_1d8._4_4_ = uStack_44;
            local_1d8._0_4_ = local_48;
            uStack_1d0 = (code *)CONCAT44(uStack_3c,uStack_40);
            local_1c8 = local_38;
                    /* try { // try from 002a00d9 to 002a011f has its CatchHandler @ 002a031e */
            _<alloc::string::String_as_core::clone::Clone>::clone(&local_210,local_1d8);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = local_148;
            local_1a0 = ::alloc::boxed::Box<T>::new(&local_138);
            local_198 = &PTR_drop_in_place<uu_tac_error_TacError>_003c9130;
                    /* try { // try from 002a012d to 002a01bc has its CatchHandler @ 002a0323 */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_1b0;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            local_200 = &local_1a0;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c91a0;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_1b0 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 002a01cc to 002a01d0 has its CatchHandler @ 002a031e */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1a0,local_198);
                    /* try { // try from 002a01d1 to 002a01da has its CatchHandler @ 002a0312 */
            core::ptr::drop_in_place<alloc::string::String>(local_1d8);
                    /* try { // try from 002a01db to 002a01e7 has its CatchHandler @ 002a0420 */
            core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(local_190);
          }
        }
        else {
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_210,uVar7,uVar1);
          local_120 = (undefined **)local_200;
          pcStack_130 = (code *)local_210;
          local_128 = (undefined8 **)uStack_208;
          local_138 = (undefined8 *)0x8000000000000001;
          local_1f0 = ::alloc::boxed::Box<T>::new(&local_138);
          uStack_1e8 = &PTR_drop_in_place<uu_tac_error_TacError>_003c9130;
                    /* try { // try from 0029fbf4 to 0029fc7e has its CatchHandler @ 002a040c */
          uucore::mods::error::set_exit_code(1);
          auVar10 = uucore::util_name();
          local_210 = (undefined8 *)local_1d8;
          uStack_208 = _<&T_as_core::fmt::Display>::fmt;
          uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_138 = (undefined8 *)&DAT_003c91a0;
          pcStack_130 = (code *)0x3;
          local_118 = 0;
          local_128 = &local_210;
          local_120 = (undefined **)0x2;
          local_200 = &local_1f0;
          _local_1d8 = auVar10;
          std::io::stdio::_eprint(&local_138);
                    /* try { // try from 0029fc89 to 0029fd18 has its CatchHandler @ 002a0420 */
          core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    (local_1f0,uStack_1e8);
        }
      }
      else {
        try_mmap_stdin(&local_1f0);
        ppuVar8 = uStack_1e8;
        uVar9 = local_1e0;
        if (local_1f0 == 0) {
          local_1d8 = (undefined  [8])0x0;
          uStack_1d0 = (code *)0x1;
          local_1c8 = 0;
                    /* try { // try from 0029fddd to 0029fdf7 has its CatchHandler @ 002a03c2 */
          local_1a0 = std::io::stdio::stdin();
          auVar10 = _<std::io::stdio::Stdin_as_std::io::Read>::read_to_end(&local_1a0,local_1d8);
          if (auVar10._0_8_ == 1) {
                    /* try { // try from 0029fe0a to 0029fe1d has its CatchHandler @ 002a0384 */
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_210,"stdin",5);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = (undefined **)auVar10._8_8_;
                    /* try { // try from 0029fe40 to 0029fe47 has its CatchHandler @ 002a0391 */
            uVar7 = ::alloc::boxed::Box<T>::new(&local_138);
            local_1b0._8_8_ = &PTR_drop_in_place<uu_tac_error_TacError>_003c9130;
            local_1b0._0_8_ = uVar7;
                    /* try { // try from 0029fe52 to 0029fee5 has its CatchHandler @ 002a0393 */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_190;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            local_200 = (undefined8 *)local_1b0;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c91a0;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_120 = (undefined **)0x2;
            local_128 = &local_210;
            local_190 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 0029fef0 to 0029fef4 has its CatchHandler @ 002a0391 */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1b0._0_8_,local_1b0._8_8_);
                    /* try { // try from 0029fef5 to 0029fefe has its CatchHandler @ 002a037f */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_1d8);
                    /* try { // try from 0029feff to 0029ff23 has its CatchHandler @ 002a0420 */
            core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(&local_1f0);
            goto LAB_0029fb17;
          }
                    /* try { // try from 0029ff48 to 0029ff52 has its CatchHandler @ 002a03c2 */
          core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>
                    (auVar10._0_8_,auVar10._8_8_);
          uVar9 = local_1c8;
          ppuVar8 = (undefined **)uStack_1d0;
          auVar10._8_8_ = uStack_1d0;
          auVar10._0_8_ = local_1d8;
          local_168 = local_1d8._0_4_;
          uStack_164 = local_1d8._4_4_;
          uStack_160 = (undefined4)uStack_1d0;
          uStack_15c = uStack_1d0._4_4_;
          local_158 = local_1c8;
          _local_1d8 = auVar10;
          if (local_1f0 != 0) {
                    /* try { // try from 0029ff80 to 0029ff89 has its CatchHandler @ 002a0377 */
            core::ptr::drop_in_place<memmap2::Mmap>(&uStack_1e8);
          }
LAB_0029ff8a:
          bVar2 = true;
          bVar3 = false;
        }
        else {
LAB_0029fb69:
          bVar3 = true;
          bVar2 = false;
          local_178[0] = ppuVar8;
        }
        if (local_88 == (undefined8 *)0x0) {
          lVar6 = buffer_tac(ppuVar8,uVar9,local_1b4,local_60,local_140);
        }
        else {
                    /* try { // try from 0029ffa2 to 0029ffd2 has its CatchHandler @ 002a03e3 */
          lVar6 = buffer_tac_regex(ppuVar8,uVar9,local_88,CONCAT44(uStack_7c,uStack_80),local_1b4);
        }
        if (lVar6 != 0) {
          local_138 = (undefined8 *)0x8000000000000004;
                    /* try { // try from 002a02a3 to 002a02af has its CatchHandler @ 002a030d */
          pcStack_130 = (code *)lVar6;
          uVar7 = ::alloc::boxed::Box<T>::new(&local_138);
          if (bVar2) {
                    /* try { // try from 002a02b8 to 002a02c4 has its CatchHandler @ 002a0305 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_168);
          }
          if (bVar3) {
                    /* try { // try from 002a02ca to 002a02d6 has its CatchHandler @ 002a0300 */
            core::ptr::drop_in_place<memmap2::Mmap>(local_178);
          }
          core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&local_88);
          goto LAB_002a02e4;
        }
        if (bVar2) {
                    /* try { // try from 0029ffe1 to 0029ffed has its CatchHandler @ 002a03a9 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_168);
        }
        if (bVar3) {
                    /* try { // try from 0029fffc to 002a0008 has its CatchHandler @ 002a03a7 */
          core::ptr::drop_in_place<memmap2::Mmap>(local_178);
        }
      }
LAB_0029fb17:
      puVar5 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_58);
    } while (puVar5 != (undefined8 *)0x0);
  }
  core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&local_88);
  uVar7 = 0;
LAB_002a02e4:
  auVar11._8_8_ = &PTR_drop_in_place<uu_tac_error_TacError>_003c9130;
  auVar11._0_8_ = uVar7;
  return auVar11;
}