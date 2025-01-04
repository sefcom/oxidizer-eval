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
      goto LAB_002a0774;
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
                    /* try { // try from 0029ffc4 to 002a0079 has its CatchHandler @ 002a08b0 */
      cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar7,uVar1,"-",1);
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
            uStack_1e8 = &PTR_drop_in_place<uu_tac_error_TacError>_003c8b70;
                    /* try { // try from 002a01b3 to 002a023d has its CatchHandler @ 002a083e */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_1d8;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_200 = &local_1f0;
            _local_1d8 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 002a0248 to 002a024c has its CatchHandler @ 002a08b0 */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1f0,uStack_1e8);
          }
          else {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (local_138,pcStack_130);
            try_mmap_path(local_190,uVar7,uVar1);
            ppuVar8 = (undefined **)local_190._8_8_;
            uVar9 = local_180;
            if (local_190._0_8_ != 0) goto LAB_0029fff9;
                    /* try { // try from 002a049e to 002a04ab has its CatchHandler @ 002a07a9 */
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
                    /* try { // try from 002a06b1 to 002a06bd has its CatchHandler @ 002a0807 */
                core::ptr::drop_in_place<memmap2::Mmap>(local_190 + 8);
              }
              goto LAB_002a041a;
            }
            local_148 = uStack_1e8;
            local_210 = (undefined8 *)0x0;
            uStack_1f8 = (code *)CONCAT71(uStack_1f8._1_7_,1);
            uStack_1d0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_001636b0;
            pcStack_130 = (code *)0x1;
            local_118 = 0;
            local_120 = (undefined **)0x1;
                    /* try { // try from 002a053f to 002a054b has its CatchHandler @ 002a07a4 */
            uStack_208 = (code *)uVar7;
            local_200 = (undefined8 *)uVar1;
            local_1d8 = (undefined  [8])&local_210;
            local_128 = (undefined8 **)local_1d8;
            core::option::Option<T>::map_or_else(&local_48,&local_138);
            local_1d8._4_4_ = uStack_44;
            local_1d8._0_4_ = local_48;
            uStack_1d0 = (code *)CONCAT44(uStack_3c,uStack_40);
            local_1c8 = local_38;
                    /* try { // try from 002a0569 to 002a05af has its CatchHandler @ 002a07ae */
            _<alloc::string::String_as_core::clone::Clone>::clone(&local_210,local_1d8);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = local_148;
            local_1a0 = ::alloc::boxed::Box<T>::new(&local_138);
            local_198 = &PTR_drop_in_place<uu_tac_error_TacError>_003c8b70;
                    /* try { // try from 002a05bd to 002a064c has its CatchHandler @ 002a07b3 */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_1b0;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            local_200 = &local_1a0;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_128 = &local_210;
            local_120 = (undefined **)0x2;
            local_1b0 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 002a065c to 002a0660 has its CatchHandler @ 002a07ae */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1a0,local_198);
                    /* try { // try from 002a0661 to 002a066a has its CatchHandler @ 002a07a2 */
            core::ptr::drop_in_place<alloc::string::String>(local_1d8);
                    /* try { // try from 002a066b to 002a0677 has its CatchHandler @ 002a08b0 */
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
          uStack_1e8 = &PTR_drop_in_place<uu_tac_error_TacError>_003c8b70;
                    /* try { // try from 002a0084 to 002a010e has its CatchHandler @ 002a089c */
          uucore::mods::error::set_exit_code(1);
          auVar10 = uucore::util_name();
          local_210 = (undefined8 *)local_1d8;
          uStack_208 = _<&T_as_core::fmt::Display>::fmt;
          uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
          local_138 = (undefined8 *)&DAT_003c8b08;
          pcStack_130 = (code *)0x3;
          local_118 = 0;
          local_128 = &local_210;
          local_120 = (undefined **)0x2;
          local_200 = &local_1f0;
          _local_1d8 = auVar10;
          std::io::stdio::_eprint(&local_138);
                    /* try { // try from 002a0119 to 002a01a8 has its CatchHandler @ 002a08b0 */
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
                    /* try { // try from 002a026d to 002a0287 has its CatchHandler @ 002a0852 */
          local_1a0 = std::io::stdio::stdin();
          auVar10 = _<std::io::stdio::Stdin_as_std::io::Read>::read_to_end(&local_1a0,local_1d8);
          if (auVar10._0_8_ == 1) {
                    /* try { // try from 002a029a to 002a02ad has its CatchHandler @ 002a0814 */
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_210,"stdin: \n",5);
            local_128 = (undefined8 **)local_200;
            local_138 = local_210;
            pcStack_130 = uStack_208;
            local_120 = (undefined **)auVar10._8_8_;
                    /* try { // try from 002a02d0 to 002a02d7 has its CatchHandler @ 002a0821 */
            uVar7 = ::alloc::boxed::Box<T>::new(&local_138);
            local_1b0._8_8_ = &PTR_drop_in_place<uu_tac_error_TacError>_003c8b70;
            local_1b0._0_8_ = uVar7;
                    /* try { // try from 002a02e2 to 002a0375 has its CatchHandler @ 002a0823 */
            uucore::mods::error::set_exit_code(1);
            auVar10 = uucore::util_name();
            local_210 = (undefined8 *)local_190;
            uStack_208 = _<&T_as_core::fmt::Display>::fmt;
            local_200 = (undefined8 *)local_1b0;
            uStack_1f8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_138 = (undefined8 *)&DAT_003c8b08;
            pcStack_130 = (code *)0x3;
            local_118 = 0;
            local_120 = (undefined **)0x2;
            local_128 = &local_210;
            local_190 = auVar10;
            std::io::stdio::_eprint(&local_138);
                    /* try { // try from 002a0380 to 002a0384 has its CatchHandler @ 002a0821 */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_1b0._0_8_,local_1b0._8_8_);
                    /* try { // try from 002a0385 to 002a038e has its CatchHandler @ 002a080f */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_1d8);
                    /* try { // try from 002a038f to 002a03b3 has its CatchHandler @ 002a08b0 */
            core::ptr::drop_in_place<core::option::Option<memmap2::Mmap>>(&local_1f0);
            goto LAB_0029ffa7;
          }
                    /* try { // try from 002a03d8 to 002a03e2 has its CatchHandler @ 002a0852 */
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
                    /* try { // try from 002a0410 to 002a0419 has its CatchHandler @ 002a0807 */
            core::ptr::drop_in_place<memmap2::Mmap>(&uStack_1e8);
          }
LAB_002a041a:
          bVar2 = true;
          bVar3 = false;
        }
        else {
LAB_0029fff9:
          bVar3 = true;
          bVar2 = false;
          local_178[0] = ppuVar8;
        }
        if (local_88 == (undefined8 *)0x0) {
          lVar6 = buffer_tac(ppuVar8,uVar9,local_1b4,local_60,local_140);
        }
        else {
                    /* try { // try from 002a0432 to 002a0462 has its CatchHandler @ 002a0873 */
          lVar6 = buffer_tac_regex(ppuVar8,uVar9,local_88,CONCAT44(uStack_7c,uStack_80),local_1b4);
        }
        if (lVar6 != 0) {
          local_138 = (undefined8 *)0x8000000000000004;
                    /* try { // try from 002a0733 to 002a073f has its CatchHandler @ 002a079d */
          pcStack_130 = (code *)lVar6;
          uVar7 = ::alloc::boxed::Box<T>::new(&local_138);
          if (bVar2) {
                    /* try { // try from 002a0748 to 002a0754 has its CatchHandler @ 002a0795 */
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_168);
          }
          if (bVar3) {
                    /* try { // try from 002a075a to 002a0766 has its CatchHandler @ 002a0790 */
            core::ptr::drop_in_place<memmap2::Mmap>(local_178);
          }
          core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&local_88);
          goto LAB_002a0774;
        }
        if (bVar2) {
                    /* try { // try from 002a0471 to 002a047d has its CatchHandler @ 002a0839 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_168);
        }
        if (bVar3) {
                    /* try { // try from 002a048c to 002a0498 has its CatchHandler @ 002a0837 */
          core::ptr::drop_in_place<memmap2::Mmap>(local_178);
        }
      }
LAB_0029ffa7:
      puVar5 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_58);
    } while (puVar5 != (undefined8 *)0x0);
  }
  core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&local_88);
  uVar7 = 0;
LAB_002a0774:
  auVar11._8_8_ = &PTR_drop_in_place<uu_tac_error_TacError>_003c8b70;
  auVar11._0_8_ = uVar7;
  return auVar11;
}