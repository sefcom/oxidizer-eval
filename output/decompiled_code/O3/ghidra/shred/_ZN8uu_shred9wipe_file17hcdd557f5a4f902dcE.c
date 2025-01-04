/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * __rustcall
uu_shred::wipe_file(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,long param_5,
                   long param_6,undefined param_7,char param_8,char param_9,char param_10)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  undefined8 local_2b0;
  long local_2a8;
  ulong local_2a0;
  undefined local_298 [8];
  undefined8 local_290;
  undefined *local_288;
  ulong local_280;
  undefined **local_278;
  undefined8 local_270;
  long local_268;
  uint local_25c;
  ulong local_258;
  long local_250;
  undefined4 local_248;
  undefined local_240 [16];
  undefined8 local_230;
  undefined local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined local_148;
  undefined8 *local_140;
  code *local_138;
  undefined8 local_120;
  long local_118;
  long local_110;
  ulong local_108;
  long local_100;
  undefined local_f8 [24];
  undefined local_e0 [16];
  long *local_d0;
  code *local_c8;
  ulong *local_c0;
  code *local_b8;
  undefined *local_b0;
  code *local_a8;
  long local_90;
  
  local_268 = param_6;
  local_110 = param_5;
  std::fs::metadata(&local_220,param_1,param_2);
  iVar2 = (int)local_220;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (&local_220);
  if (iVar2 == 2) {
    local_220 = &DAT_002386d8;
  }
  else {
    cVar3 = std::path::Path::is_file(param_1,param_2);
    if (cVar3 != '\0') {
      std::fs::metadata(&local_220,param_1,param_2);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(local_e0,&local_220);
      if (local_e0._0_4_ == 2) {
        return (code *)local_e0._8_8_;
      }
      local_2c0 = param_2;
      local_25c = param_4;
      if (param_10 != '\0') {
        uVar10 = 0x80;
        if ((char)local_a8 < '\0') {
          uVar10 = (ulong)local_a8 & 0xffffffff;
        }
        uVar6 = std::fs::set_permissions(param_1,param_2,uVar10);
        pcVar5 = (code *)_<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                         ::map_err_context(uVar6);
        if (pcVar5 != (code *)0x0) {
          return pcVar5;
        }
      }
      uVar6 = local_2c0;
      local_2b0 = 0;
      local_2a8 = 1;
      local_2a0 = 0;
      local_118 = local_90;
      if (local_90 != 0) {
        if (param_3 < 4) {
          uVar10 = 0;
          while (uVar10 < param_3) {
            uVar10 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar10);
                    /* try { // try from 001bd084 to 001bd090 has its CatchHandler @ 001bd86b */
            ::alloc::vec::Vec<T,A>::push(&local_2b0,2);
          }
        }
        else {
          local_258 = param_3 / 0x16;
          if (0x15 < param_3) {
            uVar10 = 0;
            do {
              uVar10 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar10);
              local_220 = (undefined *)0x0;
              local_218 = 0x16;
              local_1d0 = CONCAT44(_UNK_0011f0ec,_DAT_0011f0e8);
              uStack_1c8 = CONCAT44(_UNK_0011f0f4,_UNK_0011f0f0);
              local_1e0 = _DAT_0011f0d8;
              uStack_1d8 = _UNK_0011f0e0;
              local_1f0 = _DAT_0011f0c8;
              uStack_1e8 = _UNK_0011f0d0;
              local_200 = _DAT_0011f0b8;
              uStack_1f8 = _UNK_0011f0c0;
              local_210 = (undefined8 **)CONCAT44(_UNK_0011f0ac,_DAT_0011f0a8);
              uStack_208 = CONCAT44(_UNK_0011f0b4,_UNK_0011f0b0);
              local_1c0 = 0xee000000dd00;
                    /* try { // try from 001bd140 to 001bd155 has its CatchHandler @ 001bd8bd */
              while (uVar4 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>
                             ::next(&local_220), (char)uVar4 != '\x02') {
                ::alloc::vec::Vec<T,A>::push(&local_2b0,uVar4);
              }
                    /* try { // try from 001bd160 to 001bd167 has its CatchHandler @ 001bd845 */
              core::ptr::drop_in_place<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>
                        (&local_220);
            } while (uVar10 < local_258);
          }
          local_220 = (undefined *)0x0;
          local_218 = 0x16;
          local_210 = (undefined8 **)CONCAT44(_UNK_0011f0ac,_DAT_0011f0a8);
          uStack_208 = CONCAT44(_UNK_0011f0b4,_UNK_0011f0b0);
          local_200 = _DAT_0011f0b8;
          uStack_1f8 = _UNK_0011f0c0;
          local_1f0 = _DAT_0011f0c8;
          uStack_1e8 = _UNK_0011f0d0;
          local_1e0 = _DAT_0011f0d8;
          uStack_1d8 = _UNK_0011f0e0;
          local_1d0 = CONCAT44(_UNK_0011f0ec,_DAT_0011f0e8);
          uStack_1c8 = CONCAT44(_UNK_0011f0f4,_UNK_0011f0f0);
          local_1c0 = 0xee000000dd00;
          local_1b8 = param_3 + local_258 * -0x16;
          if (local_1b8 != 0) {
            do {
              local_1b8 = local_1b8 + -1;
                    /* try { // try from 001bd22b to 001bd240 has its CatchHandler @ 001bd847 */
              uVar4 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::
                      next(&local_220);
              if ((char)uVar4 == '\x02') break;
              ::alloc::vec::Vec<T,A>::push(&local_2b0,uVar4);
            } while (local_1b8 != 0);
          }
                    /* try { // try from 001bd24e to 001bd260 has its CatchHandler @ 001bd843 */
          core::ptr::
          drop_in_place<core::iter::adapters::take::Take<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>>
                    (&local_220);
          local_220 = (undefined *)rand::rngs::thread::thread_rng();
                    /* try { // try from 001bd273 to 001bd27f has its CatchHandler @ 001bd870 */
          _<[T]as_rand::seq::SliceRandom>::shuffle(local_2a8,local_2a0,&local_220);
          uVar11 = param_3 / 10 + 2;
          uVar10 = 0;
          do {
            uVar7 = uVar10 * (param_3 - 1);
            if ((uVar7 | uVar11) >> 0x20 == 0) {
              uVar8 = (uVar7 & 0xffffffff) / (uVar11 & 0xffffffff);
              uVar7 = (uVar7 & 0xffffffff) % (uVar11 & 0xffffffff);
            }
            else {
              uVar8 = uVar7 / uVar11;
              uVar7 = uVar7 % uVar11;
            }
            if (local_2a0 <= uVar8) {
                    /* try { // try from 001bd82e to 001bd83d has its CatchHandler @ 001bd870 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check(uVar8,local_2a0,&PTR_DAT_002387f0);
            }
            uVar10 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar10,local_2a0,uVar7);
            *(undefined *)(local_2a8 + uVar8 * 4) = 2;
          } while (uVar10 < param_3 / 10 + 3);
                    /* try { // try from 001bd2fc to 001bd395 has its CatchHandler @ 001bd843 */
          core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&local_220);
          uVar6 = local_2c0;
        }
        if (param_8 != '\0') {
          ::alloc::vec::Vec<T,A>::push(&local_2b0,0);
        }
      }
      local_108 = local_2a0;
      local_220 = (undefined *)0x1b600000000;
      uVar10 = (ulong)local_218 >> 0x10;
      local_218 = CONCAT62((uint6)uVar10 & 0xffff00000000,0x100);
      std::fs::OpenOptions::open(local_e0,&local_220,param_1,uVar6);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(local_298,local_e0,param_1,uVar6);
      if (local_298 != (undefined  [8])0x0) {
        core::ptr::drop_in_place<alloc::vec::Vec<uu_shred::PassType>>(&local_2b0);
        return (code *)local_298;
      }
      local_2c4 = (undefined4)local_290;
      if (local_110 == 0) {
        local_268 = local_118;
      }
      _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                (&local_140,&local_2b0);
      local_120 = 0;
      _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::
      next(&local_250,&local_140);
      if ((char)local_248 != '\x03') {
        do {
          lVar1 = local_250;
          local_2b4 = local_248;
          if (param_9 != '\0') {
                    /* try { // try from 001bd4de to 001bd4ef has its CatchHandler @ 001bd89c */
            pass_name(local_f8,&local_2b4);
                    /* try { // try from 001bd4f0 to 001bd72f has its CatchHandler @ 001bd859 */
            local_e0 = uucore::util_name();
            local_290 = _<&T_as_core::fmt::Display>::fmt;
            local_220 = &DAT_00238698;
            local_218 = 2;
            local_200 = 0;
            local_210 = (undefined8 **)local_298;
            uStack_208 = 1;
            local_298 = (undefined  [8])local_e0;
            std::io::stdio::_eprint(&local_220);
            local_240._0_8_ = 1;
            local_230 = local_2c0;
            local_228 = 0;
            local_100 = lVar1 + 1;
            local_e0._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_d0 = &local_100;
            local_c8 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
            local_c0 = &local_108;
            local_b8 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
            local_b0 = local_f8;
            local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_220 = (undefined *)0x2;
            local_210 = (undefined8 **)0x2;
            local_200 = 0;
            uStack_1f8 = 0x20;
            local_1f0 = CONCAT71(local_1f0._1_7_,3);
            uStack_1e8 = 2;
            uStack_1d8 = 0;
            local_1d0 = 2;
            uStack_1c8 = 1;
            local_1c0 = 0x20;
            local_1b8 = CONCAT71(local_1b8._1_7_,3);
            local_1b0 = 2;
            local_1a0 = 2;
            local_190 = 2;
            local_188 = 0x20;
            local_180 = 3;
            local_178 = 2;
            local_168 = 2;
            local_158 = 3;
            local_150 = 0x20;
            local_148 = 3;
            local_298 = (undefined  [8])&DAT_00238808;
            local_290 = (code *)0x5;
            local_278 = &local_220;
            local_270 = 4;
            local_280 = 4;
            local_288 = local_e0;
            local_240._8_8_ = param_1;
            local_e0._0_8_ = local_240;
            std::io::stdio::_eprint(local_298);
                    /* try { // try from 001bd730 to 001bd763 has its CatchHandler @ 001bd89c */
            core::ptr::drop_in_place<alloc::string::String>(local_f8);
          }
          uVar6 = do_pass(&local_2c4,&local_2b4,param_7,local_268);
          auVar12 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                    ::map_err_context(uVar6,param_1,local_2c0);
          if (auVar12._0_8_ != 0) {
                    /* try { // try from 001bd77d to 001bd813 has its CatchHandler @ 001bd882 */
            local_240 = auVar12;
            uVar4 = (**(code **)(auVar12._8_8_ + 0x60))(auVar12._0_8_);
            uucore::mods::error::set_exit_code(uVar4);
            auVar12 = uucore::util_name();
            local_e0._0_8_ = local_298;
            local_e0._8_8_ = _<&T_as_core::fmt::Display>::fmt;
            local_c8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_220 = &DAT_00238718;
            local_218 = 3;
            local_200 = 0;
            uStack_208 = 2;
            local_210 = (undefined8 **)local_e0;
            local_d0 = (long *)local_240;
            _local_298 = auVar12;
            std::io::stdio::_eprint(&local_220);
                    /* try { // try from 001bd824 to 001bd828 has its CatchHandler @ 001bd89c */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_240._0_8_,local_240._8_8_);
          }
          _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
          ::next(&local_250,&local_140);
        } while ((char)local_248 != '\x03');
      }
                    /* try { // try from 001bd413 to 001bd458 has its CatchHandler @ 001bd83e */
      core::ptr::
      drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<uu_shred::PassType>>>
                (&local_140);
      uVar6 = local_2c0;
      if ((char)local_25c != '\0') {
        uVar9 = do_remove(param_1,local_2c0,param_1,local_2c0,param_9,local_25c & 0xff);
        pcVar5 = (code *)_<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                         ::map_err_context(uVar9,param_1,uVar6);
        if (pcVar5 != (code *)0x0) {
          core::ptr::drop_in_place<std::fs::File>(local_2c4);
          return pcVar5;
        }
      }
      core::ptr::drop_in_place<std::fs::File>(local_2c4);
      return (code *)0x0;
    }
    local_220 = &DAT_002386f8;
  }
  local_140 = (undefined8 *)local_298;
  local_138 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_280 = local_280 & 0xffffffffffffff00;
  local_298 = (undefined  [8])0x1;
  local_218 = 2;
  local_200 = 0;
  local_210 = &local_140;
  uStack_208 = 1;
  local_290 = (code *)param_1;
  local_288 = (undefined *)param_2;
  core::option::Option<T>::map_or_else(local_e0,&local_220);
  local_c8 = (code *)CONCAT44(local_c8._4_4_,1);
  pcVar5 = (code *)::alloc::boxed::Box<T>::new(local_e0);
  return pcVar5;
}