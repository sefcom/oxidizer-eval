undefined8 __rustcall
uu_ln::link_files_in_dir(long param_1,long param_2,code *param_3,undefined8 **param_4,long param_5)

{
  char cVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined local_f8 [16];
  undefined8 **local_e8;
  code *local_e0;
  uint local_cc;
  undefined local_c8 [16];
  undefined8 *local_b8;
  code *pcStack_b0;
  undefined *local_a8;
  code *local_a0;
  undefined local_98 [8];
  undefined *local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  long local_70;
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
  
  local_80 = param_5;
  cVar6 = std::path::Path::is_dir(param_3,param_4);
  if (cVar6 == '\0') {
    std::sys::pal::unix::os::split_paths::bytes_to_path(&local_128,param_3,param_4);
    uStack_110 = 0x8000000000000000;
    uVar11 = ::alloc::boxed::Box<T>::new(&local_128);
    return uVar11;
  }
  std::thread::local::LocalKey<T>::try_with(&local_128);
  auVar12 = core::result::Result<T,E>::expect(&local_128);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (&local_128,param_2,auVar12._0_8_,auVar12._8_8_);
  local_48 = (undefined4)local_108;
  uStack_44 = local_108._4_4_;
  uStack_40 = uStack_100;
  uStack_3c = uStack_fc;
  local_58 = (undefined4)local_118;
  uStack_54 = local_118._4_4_;
  uStack_50 = (undefined4)uStack_110;
  uStack_4c = uStack_110._4_4_;
  local_68 = (undefined4)local_128;
  uStack_64 = local_128._4_4_;
  uStack_60 = (undefined4)uStack_120;
  uStack_5c = uStack_120._4_4_;
  local_70 = param_1 + param_2 * 0x18;
  local_78 = param_1;
  lVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_78);
  if (lVar8 != 0) {
    cVar6 = *(char *)(local_80 + 0x34);
    cVar1 = *(char *)(local_80 + 0x36);
    local_cc = (uint)CONCAT71((int7)((ulong)lVar8 >> 8),1);
    do {
      if (cVar1 == '\x02' && cVar6 != '\0') {
                    /* try { // try from 001b985c to 001b988e has its CatchHandler @ 001b9f68 */
        cVar7 = std::path::Path::is_symlink(param_3,param_4);
        if (cVar7 == '\0') goto LAB_001b9af0;
        cVar7 = std::path::Path::is_file(param_3,param_4);
        if (cVar7 != '\0') {
          puVar9 = (undefined *)std::fs::remove_file(param_3,param_4);
          if (puVar9 != (undefined *)0x0) {
            local_c8._0_8_ = puVar9;
                    /* try { // try from 001b989d to 001b9992 has its CatchHandler @ 001b9f33 */
            local_f8 = uucore::util_name();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
            local_128 = (undefined **)&DAT_0022d6a8;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            std::io::stdio::_eprint(&local_128);
            local_f8._0_8_ = &DAT_00000001;
            local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_a8 = local_c8;
            local_a0 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
            local_128 = &PTR_s_Could_not_update_0022d6c8;
            uStack_120 = (code *)0x3;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 2;
            local_f8._8_8_ = param_3;
            local_e8 = param_4;
            std::io::stdio::_eprint(&local_128);
                    /* try { // try from 001b9998 to 001b99bb has its CatchHandler @ 001b9f68 */
            core::ptr::drop_in_place<std::io::error::Error>(local_c8._0_8_);
          }
        }
        cVar7 = std::path::Path::is_dir(param_3,param_4);
        if (cVar7 != '\0') {
          puVar9 = (undefined *)std::fs::remove_dir(param_3,param_4);
          if (puVar9 != (undefined *)0x0) {
            local_c8._0_8_ = puVar9;
                    /* try { // try from 001b99ca to 001b9abf has its CatchHandler @ 001b9f24 */
            local_f8 = uucore::util_name();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
            local_128 = (undefined **)&DAT_0022d6a8;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            std::io::stdio::_eprint(&local_128);
            local_f8._0_8_ = &DAT_00000001;
            local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_a8 = local_c8;
            local_a0 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
            local_128 = &PTR_s_Could_not_update_0022d6c8;
            uStack_120 = (code *)0x3;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 2;
            local_f8._8_8_ = param_3;
            local_e8 = param_4;
            std::io::stdio::_eprint(&local_128);
                    /* try { // try from 001b9ac5 to 001b9c4e has its CatchHandler @ 001b9f68 */
            core::ptr::drop_in_place<std::io::error::Error>(local_c8._0_8_);
          }
        }
        std::sys::pal::unix::os::split_paths::bytes_to_path(local_98,param_3,param_4);
LAB_001b9c50:
                    /* try { // try from 001b9c50 to 001b9d7c has its CatchHandler @ 001b9f56 */
        lVar10 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&local_68,local_98);
        if (lVar10 == 0) {
          auVar12 = link(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),local_90,uStack_88
                         ,local_80);
          if (auVar12._0_8_ != 0) {
            local_c8 = auVar12;
                    /* try { // try from 001b9d90 to 001b9e48 has its CatchHandler @ 001b9f42 */
            local_f8 = uucore::util_name();
            local_b8 = (undefined8 *)local_f8;
            pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
            local_128 = (undefined **)&DAT_0022d6a8;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = &local_b8;
            uStack_110 = 1;
            std::io::stdio::_eprint(&local_128);
            local_f8._0_8_ = local_c8;
            local_f8._8_8_ = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
            local_128 = (undefined **)&DAT_0022d748;
            uStack_120 = (code *)0x2;
            local_108 = 0;
            local_118 = (undefined8 **)local_f8;
            uStack_110 = 1;
            std::io::stdio::_eprint(&local_128);
                    /* try { // try from 001b9e53 to 001b9e95 has its CatchHandler @ 001b9f56 */
            core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      (local_c8._0_8_,local_c8._8_8_);
            goto LAB_001b9e58;
          }
        }
        else {
          local_f8 = uucore::util_name();
          local_b8 = (undefined8 *)local_f8;
          pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
          local_128 = (undefined **)&DAT_0022d6a8;
          uStack_120 = (code *)0x2;
          local_108 = 0;
          local_118 = &local_b8;
          uStack_110 = 1;
          std::io::stdio::_eprint(&local_128);
          local_c8._0_8_ = local_90;
          local_c8._8_8_ = uStack_88;
          local_b8 = *(undefined8 **)(lVar8 + 8);
          pcStack_b0 = *(code **)(lVar8 + 0x10);
          local_f8._0_8_ = local_c8;
          local_f8._8_8_ = _<std::path::Display_as_core::fmt::Display>::fmt;
          local_e8 = &local_b8;
          local_e0 = _<std::path::Display_as_core::fmt::Display>::fmt;
          local_128 = &PTR_s_will_not_overwrite_just_created___0022d718;
          uStack_120 = (code *)0x3;
          local_108 = 0;
          local_118 = (undefined8 **)local_f8;
          uStack_110 = 2;
          std::io::stdio::_eprint(&local_128);
LAB_001b9e58:
          local_cc = 0;
        }
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_128,local_98);
        local_e8 = local_118;
        local_f8._0_8_ = local_128;
        local_f8._8_8_ = uStack_120;
        hashbrown::map::HashMap<K,V,S,A>::insert(&local_68,local_f8);
                    /* try { // try from 001b9e96 to 001b9ea2 has its CatchHandler @ 001b9f68 */
        core::ptr::drop_in_place<std::path::PathBuf>(local_98);
      }
      else {
LAB_001b9af0:
        pcVar2 = *(code **)(lVar8 + 8);
        ppuVar3 = *(undefined8 ***)(lVar8 + 0x10);
        std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                  (&local_128,pcVar2,ppuVar3);
        ppuVar5 = local_118;
        pcVar4 = uStack_120;
        if (local_128 == (undefined **)0x0) {
          auVar12 = std::path::Path::file_name(uStack_120,local_118);
          if (auVar12._0_8_ == 0) {
            std::path::Path::join(local_98,param_3,param_4,pcVar4,ppuVar5);
          }
          else {
            std::path::Path::join(local_98,param_3,param_4,auVar12._0_8_,auVar12._8_8_);
          }
          goto LAB_001b9c50;
        }
        local_f8 = uucore::util_name();
        local_b8 = (undefined8 *)local_f8;
        pcStack_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_128 = (undefined **)&DAT_0022d6a8;
        uStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = &local_b8;
        uStack_110 = 1;
        std::io::stdio::_eprint(&local_128);
        local_f8._0_8_ = &DAT_00000001;
        local_e0 = (code *)CONCAT71(local_e0._1_7_,1);
        local_b8 = (undefined8 *)local_f8;
        pcStack_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_128 = &PTR_s_cannot_stat___No_such_file_or_di_0022d6f8;
        uStack_120 = (code *)0x2;
        local_108 = 0;
        local_118 = &local_b8;
        uStack_110 = 1;
        local_f8._8_8_ = pcVar2;
        local_e8 = ppuVar3;
        std::io::stdio::_eprint(&local_128);
        local_cc = 0;
      }
      lVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_78);
    } while (lVar8 != 0);
    if ((local_cc & 1) == 0) {
      uStack_110 = 0x8000000000000001;
                    /* try { // try from 001b9eef to 001b9ef8 has its CatchHandler @ 001b9f22 */
      uVar11 = ::alloc::boxed::Box<T>::new(&local_128);
      goto LAB_001b9f00;
    }
  }
  uVar11 = 0;
LAB_001b9f00:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&local_68);
  return uVar11;
}