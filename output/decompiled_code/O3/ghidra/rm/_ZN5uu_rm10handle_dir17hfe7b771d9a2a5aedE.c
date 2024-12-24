ulong __rustcall uu_rm::handle_dir(undefined8 **param_1,undefined8 **param_2,long param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  long lVar11;
  undefined8 unaff_RBP;
  undefined7 uVar13;
  ulong uVar12;
  undefined auVar14 [12];
  undefined8 **local_268;
  undefined8 **ppuStack_260;
  undefined8 **local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 **local_238;
  uint local_22c;
  undefined local_228 [12];
  undefined4 uStack_21c;
  undefined8 **local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 **local_180;
  undefined8 **ppuStack_178;
  undefined8 **local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 **local_128;
  undefined8 **local_120;
  undefined8 **ppuStack_118;
  undefined8 **local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 **local_e0;
  long local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined local_88 [16];
  undefined8 **local_78;
  undefined local_70;
  undefined8 **local_68;
  undefined8 **ppuStack_60;
  undefined8 local_58;
  
  std::path::Path::components(&local_1d8,param_1,param_2);
  uVar13 = (undefined7)((ulong)unaff_RBP >> 8);
  if ((local_1a0._2_1_ == '\0') && ((byte)((char)local_1c8 - 5U) < 2)) {
    cVar7 = *(char *)(param_3 + 3);
joined_r0x001b71ae:
    if (cVar7 != '\0') {
LAB_001b71b4:
      bVar8 = *(byte *)(param_3 + 5);
      bVar1 = *(byte *)(param_3 + 6);
      local_238 = param_2;
      if ((bVar1 == 2) || (bVar8 != 0)) {
        local_c8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c0 = 8;
        local_e8 = 0;
        local_e0 = (undefined8 **)&DAT_00000008;
        local_d8 = 0;
                    /* try { // try from 001b73a2 to 001b73be has its CatchHandler @ 001b7cb5 */
        local_d0 = param_1;
        walkdir::WalkDir::new(local_228,param_1,param_2);
        ppuVar10 = local_238;
        local_148 = local_1f0;
        uStack_140 = uStack_1e8;
        local_180 = (undefined8 **)local_228._0_8_;
        ppuStack_178 = stack0xfffffffffffffde0;
        local_170 = local_218;
        local_1d8 = (undefined **)0x0;
        local_1c8 = (undefined8 ***)0x0;
        uStack_1c0 = 8;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 8;
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 8;
        local_188 = 0;
        local_138 = 0;
        uStack_130 = 0;
        uVar12 = 0;
        local_22c = (uint)bVar8;
        local_1dc = (uint)bVar1;
LAB_001b74bd:
        if (bVar1 != 2) {
                    /* try { // try from 001b74c7 to 001b74dc has its CatchHandler @ 001b7cbc */
          _<walkdir::IntoIter_as_core::iter::traits::iterator::Iterator>::next
                    (&local_128,&local_1d8);
          if (local_128 == (undefined8 **)0x3) goto LAB_001b78a1;
          local_68 = local_120;
          ppuStack_60 = ppuStack_118;
          local_58 = local_110;
          if ((int)local_128 == 2) {
            local_248 = CONCAT44(uStack_fc,local_100);
            uStack_240 = uStack_f8;
            uStack_23c = uStack_f4;
            local_258 = local_110;
            uStack_250 = CONCAT44(uStack_104,uStack_108);
            local_268 = local_120;
            ppuStack_260 = ppuStack_118;
            if ((uStack_f8 & 0xf000) == 0x4000) {
LAB_001b7490:
              uStack_208 = (undefined4)local_248;
              uStack_204 = local_248._4_4_;
              uStack_200 = uStack_240;
              uStack_1fc = uStack_23c;
              local_218 = local_258;
              uStack_210 = (undefined4)uStack_250;
              uStack_20c = uStack_250._4_4_;
              local_228._0_8_ = local_268;
              unique0x10001041 = ppuStack_260;
                    /* try { // try from 001b74ad to 001b74bc has its CatchHandler @ 001b7cba */
              ::alloc::collections::vec_deque::VecDeque<T,A>::push_back(&local_c8,local_228);
            }
            else {
                    /* try { // try from 001b755c to 001b756b has its CatchHandler @ 001b7ccf */
              bVar8 = remove_file(ppuStack_118,local_110,local_22c,local_1dc);
LAB_001b7868:
              uVar12 = (ulong)(byte)((byte)uVar12 | bVar8) & 0xffffffffffffff01;
LAB_001b786f:
                    /* try { // try from 001b786f to 001b7876 has its CatchHandler @ 001b7cbe */
              core::ptr::drop_in_place<walkdir::dent::DirEntry>(&local_268);
            }
          }
          else {
LAB_001b76f0:
            local_228._0_8_ = local_128;
            local_58._0_4_ = SUB84(local_110,0);
            local_58._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
            uStack_200 = local_100;
            uStack_1fc = uStack_fc;
            uStack_1f8 = uStack_f8;
            uStack_1f4 = uStack_f4;
            uStack_210 = (undefined4)local_58;
            uStack_20c = local_58._4_4_;
            uStack_208 = uStack_108;
            uStack_204 = uStack_104;
            unique0x10001089 = local_120;
            local_218 = ppuStack_118;
            local_1f0 = local_f0;
            local_68 = local_120;
            ppuStack_60 = ppuStack_118;
            local_58 = local_110;
                    /* try { // try from 001b772a to 001b7838 has its CatchHandler @ 001b7cc0 */
            local_88 = uucore::util_name();
            local_a8 = (undefined8 *)local_88;
            local_a0 = _<&T_as_core::fmt::Display>::fmt;
            local_268 = (undefined8 **)&DAT_00227d88;
            ppuStack_260 = (undefined8 **)0x2;
            local_248 = 0;
            local_258 = &local_a8;
            uStack_250 = 1;
            std::io::stdio::_eprint(&local_268);
            local_88._0_8_ = 1;
            local_88._8_8_ = local_d0;
            local_78 = ppuVar10;
            local_70 = 1;
            local_a8 = (undefined8 *)local_88;
            local_a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_90 = _<walkdir::error::Error_as_core::fmt::Display>::fmt;
            local_268 = (undefined8 **)&PTR_DAT_00227e30;
            ppuStack_260 = (undefined8 **)0x3;
            local_248 = 0;
            local_258 = &local_a8;
            uStack_250 = 2;
            local_98 = local_228;
            std::io::stdio::_eprint(&local_268);
                    /* try { // try from 001b7839 to 001b7840 has its CatchHandler @ 001b7cbe */
            core::ptr::drop_in_place<walkdir::error::Error>(local_228);
            uVar12 = 1;
          }
          goto LAB_001b74bd;
        }
                    /* try { // try from 001b7580 to 001b7595 has its CatchHandler @ 001b7cd1 */
        while (_<walkdir::IntoIter_as_core::iter::traits::iterator::Iterator>::next
                         (&local_128,&local_1d8), local_128 != (undefined8 **)0x3) {
          local_58 = local_110;
          local_68 = local_120;
          ppuStack_60 = ppuStack_118;
          if ((int)local_128 != 2) goto LAB_001b76f0;
          uStack_250 = CONCAT44(uStack_104,uStack_108);
          local_248 = CONCAT44(uStack_fc,local_100);
          uStack_240 = uStack_f8;
          uStack_23c = uStack_f4;
          local_258 = local_110;
          local_268 = local_120;
          ppuStack_260 = ppuStack_118;
          unique0x00004700 = local_e0 + local_d8 * 3;
          local_228._0_8_ = local_e0;
          do {
            lVar11 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (local_228);
            if (lVar11 == 0) {
              if ((uStack_240 & 0xf000) != 0x4000) {
                    /* try { // try from 001b785a to 001b7867 has its CatchHandler @ 001b7ccf */
                bVar8 = remove_file(ppuStack_260,local_258,local_22c,2);
                goto LAB_001b7868;
              }
                    /* try { // try from 001b7670 to 001b76ab has its CatchHandler @ 001b7ccf */
              std::fs::read_dir(local_228,ppuStack_260,local_258);
              auVar14 = core::result::Result<T,E>::unwrap
                                  (local_228._0_8_,(ulong)stack0xfffffffffffffde0 & 0xffffffff);
              lVar11 = core::iter::traits::iterator::Iterator::fold(auVar14._0_8_,auVar14._8_4_ & 1)
              ;
              if (lVar11 == 0) goto LAB_001b7490;
              cVar7 = prompt_descend(ppuStack_260,local_258);
              if (cVar7 == '\0') {
                    /* try { // try from 001b7886 to 001b789e has its CatchHandler @ 001b7ccf */
                std::sys::pal::unix::os::split_paths::bytes_to_path
                          (local_228,ppuStack_260,local_258);
                ::alloc::vec::Vec<T,A>::push(&local_e8,local_228);
                goto LAB_001b786f;
              }
              uStack_208 = (undefined4)local_248;
              uStack_204 = local_248._4_4_;
              uStack_200 = uStack_240;
              uStack_1fc = uStack_23c;
              local_218 = local_258;
              uStack_210 = (undefined4)uStack_250;
              uStack_20c = uStack_250._4_4_;
              local_228._0_8_ = local_268;
              unique0x10001081 = ppuStack_260;
                    /* try { // try from 001b76d1 to 001b76e0 has its CatchHandler @ 001b7cba */
              ::alloc::collections::vec_deque::VecDeque<T,A>::push_back(&local_c8,local_228);
              goto LAB_001b74bd;
            }
                    /* try { // try from 001b7637 to 001b763e has its CatchHandler @ 001b7cdb */
            cVar7 = std::path::Path::starts_with(ppuStack_260,local_258,lVar11);
          } while (cVar7 == '\0');
                    /* try { // try from 001b7643 to 001b764a has its CatchHandler @ 001b7cd1 */
          core::ptr::drop_in_place<walkdir::dent::DirEntry>(&local_268);
        }
LAB_001b78a1:
                    /* try { // try from 001b78a1 to 001b78bf has its CatchHandler @ 001b7cb5 */
        core::ptr::drop_in_place<walkdir::IntoIter>(&local_1d8);
        ::alloc::collections::vec_deque::VecDeque<T,A>::iter(local_228,&local_c8);
        uStack_1c0._0_4_ = uStack_210;
        uStack_1c0._4_4_ = uStack_20c;
        local_1c8 = (undefined8 ***)local_218;
        local_1d8._0_4_ = (undefined4)local_228._0_8_;
        local_1d8._4_4_ = local_228._4_4_;
        uStack_1d0._0_4_ = SUB84(stack0xfffffffffffffde0,0);
        uStack_1d0._4_4_ = uStack_21c;
        do {
          lVar11 = _<core::slice::iter::Iter<T>as_core::iter::traits::double_ended::DoubleEndedIterator>
                   ::next_back(&local_1c8);
          uVar6 = uStack_1d0._4_4_;
          uVar5 = (undefined4)uStack_1d0;
          uVar4 = local_1d8._4_4_;
          if (lVar11 == 0) {
            uVar2 = SUB84(local_1c8,0);
            local_1d8._4_4_ = local_1c8._4_4_;
            uStack_1d0._0_4_ = (undefined4)uStack_1c0;
            uStack_1d0._4_4_ = uStack_1c0._4_4_;
            local_1c8 = (undefined8 ***)CONCAT44(uVar4,(undefined4)local_1d8);
            uStack_1c0._0_4_ = uVar5;
            uStack_1c0._4_4_ = uVar6;
            local_1d8._0_4_ = uVar2;
            lVar11 = _<core::slice::iter::Iter<T>as_core::iter::traits::double_ended::DoubleEndedIterator>
                     ::next_back(&local_1c8);
            if (lVar11 == 0) goto LAB_001b793e;
          }
                    /* try { // try from 001b792d to 001b7934 has its CatchHandler @ 001b7cd6 */
          bVar8 = remove_dir(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10),param_3);
          uVar12 = (ulong)(byte)((byte)uVar12 | bVar8) & 0xffffffffffffff01;
        } while( true );
      }
      ppuVar10 = (undefined8 **)std::fs::remove_dir_all(param_1,param_2);
      if (ppuVar10 == (undefined8 **)0x0) {
        uVar12 = 0;
      }
      else {
        local_268 = ppuVar10;
                    /* try { // try from 001b71f5 to 001b7327 has its CatchHandler @ 001b7ca8 */
        local_1d8 = (undefined **)std::fs::remove_dir(param_1,param_2);
        if (local_1d8 == (undefined **)0x0) {
                    /* try { // try from 001b7b58 to 001b7c7f has its CatchHandler @ 001b7ca8 */
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_1d8);
          uVar12 = 0;
        }
        else {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_1d8);
          cVar7 = std::io::error::Error::kind(ppuVar10);
          if (cVar7 == '\x01') {
            _local_228 = uucore::util_name();
            local_120 = (undefined8 **)_<&T_as_core::fmt::Display>::fmt;
            local_1d8 = (undefined **)&DAT_00227d88;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            std::io::stdio::_eprint(&local_1d8);
            local_228._0_8_ = &DAT_00000001;
            local_218 = local_238;
            uStack_210 = CONCAT31(uStack_210._1_3_,1);
            local_120 = (undefined8 **)_<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_1d8 = &PTR_DAT_00227dc8;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            unique0x10001397 = param_1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            std::io::stdio::_eprint(&local_1d8);
          }
          else {
            _local_228 = uucore::util_name();
            local_120 = (undefined8 **)_<&T_as_core::fmt::Display>::fmt;
            local_1d8 = (undefined **)&DAT_00227d88;
            uStack_1d0 = 2;
            local_1b8 = 0;
            uStack_1c0 = 1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            std::io::stdio::_eprint(&local_1d8);
            local_228._0_8_ = &DAT_00000001;
            local_218 = local_238;
            uStack_210 = CONCAT31(uStack_210._1_3_,1);
            local_120 = (undefined8 **)_<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_110 = (undefined8 **)_<std::io::error::Error_as_core::fmt::Display>::fmt;
            local_1d8 = &PTR_DAT_00227de8;
            uStack_1d0 = 3;
            local_1b8 = 0;
            uStack_1c0 = 2;
            unique0x10001387 = param_1;
            local_1c8 = &local_128;
            local_128 = (undefined8 **)local_228;
            ppuStack_118 = &local_268;
            std::io::stdio::_eprint(&local_1d8);
          }
          uVar12 = CONCAT71(uVar13,1);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&local_268);
      }
      goto LAB_001b7c8b;
    }
    bVar3 = true;
    bVar8 = 1;
    cVar7 = *(char *)(param_3 + 4);
  }
  else {
    lVar11 = std::path::Path::parent(param_1,param_2);
    cVar7 = *(char *)(param_3 + 3);
    if (lVar11 != 0) goto joined_r0x001b71ae;
    if (cVar7 != '\0') {
      if (*(char *)(param_3 + 2) != '\0') {
        bVar3 = false;
        goto LAB_001b795f;
      }
      goto LAB_001b71b4;
    }
    bVar3 = true;
LAB_001b795f:
    bVar8 = 0;
    cVar7 = *(char *)(param_3 + 4);
  }
  if ((cVar7 == '\0') || (!(bool)(bVar8 | *(char *)(param_3 + 2) == '\0'))) {
    if (bVar3) {
      _local_228 = uucore::util_name();
      local_128 = (undefined8 **)local_228;
      local_120 = (undefined8 **)_<&T_as_core::fmt::Display>::fmt;
      local_1d8 = (undefined **)&DAT_00227d88;
      uStack_1d0 = 2;
      local_1b8 = 0;
      local_1c8 = &local_128;
      uStack_1c0 = 1;
      std::io::stdio::_eprint(&local_1d8);
      local_1d8 = &PTR_DAT_00227e60;
    }
    else {
      _local_228 = uucore::util_name();
      local_128 = (undefined8 **)local_228;
      local_120 = (undefined8 **)_<&T_as_core::fmt::Display>::fmt;
      local_1d8 = (undefined **)&DAT_00227d88;
      uStack_1d0 = 2;
      local_1b8 = 0;
      local_1c8 = &local_128;
      uStack_1c0 = 1;
      std::io::stdio::_eprint(&local_1d8);
      local_1d8 = &PTR_DAT_00227e80;
    }
    local_128 = (undefined8 **)local_228;
    local_120 = (undefined8 **)_<os_display::Quoted_as_core::fmt::Display>::fmt;
    uStack_210 = CONCAT31(uStack_210._1_3_,1);
    local_228._0_8_ = (undefined8 *)0x1;
    local_1c8 = &local_128;
    uStack_1d0 = 2;
    local_1b8 = 0;
    uStack_1c0 = 1;
    unique0x100013a7 = param_1;
    local_218 = param_2;
    std::io::stdio::_eprint(&local_1d8);
    uVar12 = CONCAT71(uVar13,1);
  }
  else {
    uVar9 = remove_dir(param_1,param_2,param_3);
    uVar12 = (ulong)uVar9;
  }
LAB_001b7c8b:
  return uVar12 & 0xffffff01;
LAB_001b793e:
                    /* try { // try from 001b793e to 001b794a has its CatchHandler @ 001b7ca3 */
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_e8);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<walkdir::dent::DirEntry>>
            (&local_c8);
  goto LAB_001b7c8b;
}