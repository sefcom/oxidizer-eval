/* WARNING: Type propagation algorithm not settling */

void __rustcall
uu_tail::follow::watch::Observer::handle_event
          (undefined8 *param_1,int *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined **ppuVar14;
  undefined auVar15 [16];
  undefined8 *******local_2f8;
  code *local_2f0;
  undefined local_2e8 [12];
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined local_2d0;
  undefined8 *******local_2c8;
  code *pcStack_2c0;
  undefined8 *******local_2b8;
  code *local_2b0;
  undefined *puStack_2a8;
  code *local_2a0;
  undefined8 *local_1f0;
  undefined8 ******local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined local_1b8 [8];
  code *pcStack_1b0;
  undefined8 *******local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined local_e0 [40];
  long local_b8;
  uint local_a8;
  
  lVar10 = *(long *)(param_3 + 0x10);
  local_1f0 = param_1;
  if (lVar10 == 0) {
    core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_watch_rs_h_002bebb0);
LAB_00217bf3:
    ppuVar14 = &PTR_s_src_uu_tail_src_follow_watch_rs_h_002bece8;
LAB_00217c24:
                    /* try { // try from 00217c24 to 00217c29 has its CatchHandler @ 00217c5a */
    core::option::unwrap_failed(ppuVar14);
LAB_00217c2a:
                    /* try { // try from 00217c2a to 00217c36 has its CatchHandler @ 00217c48 */
    uVar12 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_watch_rs_h_002bec88);
LAB_00217c37:
                    /* catch() { ... } // from try @ 002174c0 with catch @ 00217c37 */
                    /* catch() { ... } // from try @ 00216b02 with catch @ 00217c5a
                       catch() { ... } // from try @ 00217242 with catch @ 00217c5a
                       catch() { ... } // from try @ 00217406 with catch @ 00217c5a
                       catch() { ... } // from try @ 002174eb with catch @ 00217c5a
                       catch() { ... } // from try @ 0021761e with catch @ 00217c5a
                       catch() { ... } // from try @ 0021785d with catch @ 00217c5a
                       catch() { ... } // from try @ 00217ad1 with catch @ 00217c5a
                       catch() { ... } // from try @ 00217c24 with catch @ 00217c5a */
    core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_1d0);
    _Unwind_Resume(uVar12);
    return;
  }
  lVar2 = *(long *)(param_3 + 8);
  local_1d0 = 0;
  uStack_1c8 = 8;
  local_1c0 = 0;
  plVar1 = (long *)(param_2 + 0xe);
  uVar12 = *(undefined8 *)(lVar2 + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
                    /* try { // try from 00216a73 to 00216aa0 has its CatchHandler @ 00217c6c */
  lVar8 = files::FileHandling::get();
  _<alloc::string::String_as_core::clone::Clone>::clone(&local_1e8,lVar8 + 0xb0);
  cVar6 = *(char *)(param_3 + 0x20);
  if (cVar6 == '\x02') {
    if (*(char *)(param_3 + 0x21) == '\x03') goto LAB_00217ade;
  }
  else {
    if (cVar6 != '\x03') {
      if ((cVar6 != '\x04') || (1 < *(byte *)(param_3 + 0x21))) goto LAB_00217ade;
LAB_00216acc:
      if ((*(byte *)((long)param_2 + 0x8e) & 1) == 0) {
        if ((*(byte *)((long)param_2 + 0x8e) == 2) || (*(char *)(param_2 + 0x23) == '\0'))
        goto LAB_00217ade;
        if (*param_2 != 3) {
                    /* try { // try from 00216b02 to 00216f09 has its CatchHandler @ 00217c5a */
          uVar9 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                     uVar12,uVar3);
          core::ptr::
          drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                    (uVar9);
          files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
          core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&local_2c8);
          goto LAB_00217ade;
        }
        goto LAB_00217bf3;
      }
      if (*(char *)(param_4 + 0x48) == '\0') {
                    /* try { // try from 00217242 to 00217341 has its CatchHandler @ 00217c5a */
        _local_1b8 = uucore::util_name();
        stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002beae8;
        pcStack_2c0 = (code *)0x2;
        puStack_2a8 = (undefined *)0x0;
        local_2b8 = (undefined8 *******)local_2e8;
        local_2b0 = (code *)0x1;
        local_2e8._0_8_ = local_1b8;
        std::io::stdio::_eprint(&local_2c8);
        pcStack_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1a8 = (undefined8 *******)&DAT_002bed00;
        local_1a0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002bed10;
        pcStack_2c0 = (code *)0x3;
        puStack_2a8 = (undefined *)0x0;
        local_2b0 = (code *)0x2;
        local_2b8 = (undefined8 *******)local_1b8;
        local_1b8 = (undefined  [8])&local_1e8;
        std::io::stdio::_eprint(&local_2c8);
        cVar6 = files::FileHandling::files_remaining(plVar1);
        if (cVar6 == '\0' && *(char *)((long)param_2 + 0x8d) != '\0') {
                    /* try { // try from 0021761e to 00217656 has its CatchHandler @ 00217c5a */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_1b8);
          local_2b8 = local_1a8;
          local_2c8 = (undefined8 *******)local_1b8;
          pcStack_2c0 = pcStack_1b0;
          local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
          uVar12 = ::alloc::boxed::Box<T>::new(&local_2c8);
          local_1f0[1] = uVar12;
          local_1f0[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bea28;
          *local_1f0 = 0x8000000000000000;
          goto LAB_0021786a;
        }
      }
      else {
        lVar10 = files::FileHandling::get_mut_metadata(plVar1,uVar12,uVar3);
        if ((lVar10 != 0) &&
           ((((uVar13 = *(uint *)(lVar10 + 0x38) & 0xf000, uVar13 == 0x1000 || (uVar13 == 0x2000))
             || (uVar13 == 0x8000)) &&
            (lVar10 = files::FileHandling::get(plVar1,uVar12,uVar3), *(long *)(lVar10 + 200) != 0)))
           ) {
          _local_1b8 = uucore::util_name();
          local_2e8._0_8_ = local_1b8;
          stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined8 *******)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined8 *******)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          uStack_2d8 = (undefined8 *******)CONCAT44(uStack_1d4,uStack_1d8);
          local_2d0 = 1;
          pcStack_2c0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2b8 = (undefined8 *******)&DAT_002bed40;
          local_2b0 = _<&T_as_core::fmt::Display>::fmt;
          puStack_2a8 = &DAT_002bed00;
          local_2a0 = _<&T_as_core::fmt::Display>::fmt;
          local_1b8 = (undefined  [8])&DAT_002bed50;
          pcStack_1b0 = (code *)0x4;
          local_198 = 0;
          local_1a0 = (code *)0x3;
          local_2c8 = (undefined8 *******)local_2e8;
          local_1a8 = &local_2c8;
          std::io::stdio::_eprint(local_1b8);
        }
        cVar6 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_orphan(uVar12,uVar3);
        if ((cVar6 != '\0') &&
           (cVar6 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                              (lVar2,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc)),
           cVar6 == '\0')) {
          _local_1b8 = uucore::util_name();
          stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined8 *******)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          local_2c8 = (undefined8 *******)&DAT_002bed90;
          pcStack_2c0 = (code *)0x1;
          local_2b8 = (undefined8 *******)0x8;
          local_2b0 = (code *)0x0;
          puStack_2a8 = (undefined *)0x0;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = uucore::util_name();
          stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined8 *******)local_2e8;
          _local_1b8 = auVar15;
          std::io::stdio::_eprint(&local_2c8);
          local_1b8 = (undefined  [8])&PTR_s_inotify_cannot_be_used__revertin_002beb08;
          pcStack_1b0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beda0;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined8 *******)local_1b8;
          std::io::stdio::_eprint(&local_2c8);
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar2);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(param_2 + 8,local_1b8);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_s_src_uu_tail_src_follow_watch_rs_h_002bedc0;
            goto LAB_00217c24;
          }
          uVar9 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                     uVar12,uVar3);
          core::ptr::
          drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                    (uVar9);
        }
      }
      files::FileHandling::reset_reader(plVar1,uVar12,uVar3);
      goto LAB_00217ade;
    }
    cVar6 = *(char *)(param_3 + 0x21);
    if (cVar6 == '\x01') {
      bVar5 = *(byte *)(param_3 + 0x22);
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 != '\x03') goto LAB_00217ade;
        cVar6 = *(char *)(param_3 + 0x22);
        if (cVar6 != '\x01') {
          if (cVar6 != '\x03') {
            if (cVar6 != '\x02') goto LAB_00217ade;
            goto LAB_00216acc;
          }
          if ((byte)(*(char *)((long)param_2 + 0x8e) - 1U) < 2) goto LAB_00217ade;
          lVar10 = lVar10 * 0x18 + -0x18 + lVar2;
                    /* try { // try from 00217406 to 0021747a has its CatchHandler @ 00217c5a */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar10);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(&local_1d0,local_1b8);
          files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
          uVar9 = *(undefined8 *)(lVar10 + 8);
          uVar4 = *(undefined8 *)(lVar10 + 0x10);
          files::PathData::from_other_with_path(local_1b8,&local_2c8,uVar9,uVar4);
          (*(code *)PTR_memcpy_002c47b8)(&local_2c8,local_1b8,0xd8);
          if (*plVar1 == -0x8000000000000000) {
                    /* try { // try from 00217c05 to 00217c11 has its CatchHandler @ 00217c39 */
            uVar12 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_follow_watch_rs_h_002beca0);
            goto LAB_00217c37;
          }
                    /* try { // try from 002174bb to 002174bf has its CatchHandler @ 00217c39 */
          uVar7 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                            (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12),
                             *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
                    /* try { // try from 002174c0 to 002174d8 has its CatchHandler @ 00217c37 */
          files::FileHandling::insert(plVar1,uVar9,uVar4,&local_2c8,uVar7);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_s_src_uu_tail_src_follow_watch_rs_h_002becb8;
          }
          else {
                    /* try { // try from 002174eb to 0021751e has its CatchHandler @ 00217c5a */
            uVar12 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                        uVar12,uVar3);
            core::ptr::
            drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                      (uVar12);
            if (*param_2 != 3) {
              auVar15 = WatcherRx::watch_with_parent
                                  (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar9,
                                   uVar4);
              if (auVar15._0_8_ == 0) goto LAB_00217ade;
              *(undefined (*) [16])(local_1f0 + 1) = auVar15;
              *local_1f0 = 0x8000000000000000;
              goto LAB_0021786a;
            }
            ppuVar14 = &PTR_s_src_uu_tail_src_follow_watch_rs_h_002becd0;
          }
          goto LAB_00217c24;
        }
        goto LAB_00216ef3;
      }
      bVar5 = *(byte *)(param_3 + 0x22) & 5;
    }
    if (bVar5 != 0) goto LAB_00217ade;
  }
LAB_00216ef3:
  std::fs::metadata(local_1b8,uVar12,uVar3);
  if (local_1b8._0_4_ != 2) {
    (*(code *)PTR_memcpy_002c47b8)(local_e0,local_1b8,0xb0);
    uVar13 = local_a8 & 0xf000;
    if ((uVar13 == 0x2000) || (uVar13 == 0x8000)) {
                    /* try { // try from 00216f57 to 00217235 has its CatchHandler @ 00217c48 */
      piVar11 = (int *)files::FileHandling::get(plVar1,uVar12,uVar3);
      if (*piVar11 == 2) {
LAB_00216f74:
        _local_2e8 = uucore::util_name();
        local_2f0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002beae8;
        pcStack_2c0 = (code *)0x2;
        puStack_2a8 = (undefined *)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined8 *******)local_2e8;
        local_2b8 = &local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        local_2e8._0_8_ = (undefined8 *******)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002bec48;
        pcStack_2c0 = (code *)0x2;
        puStack_2a8 = (undefined *)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined8 *******)local_2e8;
        local_2b8 = &local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
        if (auVar15._0_8_ == 0) {
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar2);
          uStack_2d8 = local_2b8;
          local_2e8._0_8_ = local_2c8;
          unique0x10000f7d = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(&local_1d0,local_2e8);
          goto LAB_00217a9f;
        }
LAB_00217840:
        *(undefined (*) [16])(local_1f0 + 1) = auVar15;
        *local_1f0 = 0x8000000000000000;
                    /* try { // try from 0021785d to 00217869 has its CatchHandler @ 00217c5a */
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_1b8);
LAB_0021786a:
                    /* try { // try from 0021786a to 00217876 has its CatchHandler @ 00217c6c */
        core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_1d0);
        return;
      }
LAB_00217354:
      uVar13 = piVar11[0xe] & 0xf000;
      if (((uVar13 == 0x1000) || (uVar13 == 0x2000)) || (uVar13 == 0x8000)) {
        if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 00217680 to 00217836 has its CatchHandler @ 00217c48 */
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined8 *******)local_2e8;
          local_2b8 = &local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined8 *******)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002bec48;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined8 *******)local_2e8;
          local_2b8 = &local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00217837;
        }
        cVar6 = _<notify::event::EventKind_as_core::cmp::PartialEq>::eq(param_3 + 0x20);
        if ((cVar6 != '\0') ||
           ((*(char *)((long)param_2 + 0x8d) != '\0' && (*(long *)(piVar11 + 10) != local_b8)))) {
                    /* try { // try from 00217540 to 00217618 has its CatchHandler @ 00217c48 */
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined8 *******)local_2e8;
          local_2b8 = &local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined8 *******)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002bec28;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined8 *******)local_2e8;
          local_2b8 = &local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00217837;
        }
                    /* try { // try from 002173b8 to 002173cd has its CatchHandler @ 00217c48 */
        _<std::fs::Metadata_as_uu_tail::paths::MetadataExtTail>::got_truncated
                  (&local_2c8,piVar11,local_e0);
        auVar15._8_8_ = pcStack_2c0;
        auVar15._0_8_ = local_2c8;
        if (local_2c8 != (undefined8 *******)0x0) goto LAB_00217840;
        if ((char)pcStack_2c0 != '\0') {
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002beae8;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b8 = &local_2f8;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined8 *******)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          stack0xfffffffffffffd20 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 *******)&DAT_002bec08;
          pcStack_2c0 = (code *)0x2;
          puStack_2a8 = (undefined *)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = &local_1e8;
          local_2b8 = (undefined8 *******)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00217837;
        }
      }
      else {
        _local_2e8 = uucore::util_name();
        local_2f0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002beae8;
        pcStack_2c0 = (code *)0x2;
        puStack_2a8 = (undefined *)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined8 *******)local_2e8;
        local_2b8 = &local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        local_2e8._0_8_ = (undefined8 *******)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined8 *******)&DAT_002bebe8;
        pcStack_2c0 = (code *)0x2;
        puStack_2a8 = (undefined *)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined8 *******)local_2e8;
        local_2b8 = &local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
LAB_00217837:
        if (auVar15._0_8_ != 0) goto LAB_00217840;
      }
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar2);
      uStack_2d8 = local_2b8;
      local_2e8._0_8_ = local_2c8;
      unique0x10000fbd = pcStack_2c0;
      ::alloc::vec::Vec<T,A>::push(&local_1d0,local_2e8);
    }
    else {
      piVar11 = (int *)files::FileHandling::get(plVar1,uVar12,uVar3);
      if (*piVar11 == 2) {
        if (uVar13 == 0x1000) goto LAB_00216f74;
        if (*(char *)(param_4 + 0x48) != '\0') {
          if ((*(byte *)((long)param_2 + 0x8e) == 2) || ((*(byte *)((long)param_2 + 0x8e) & 1) != 0)
             ) {
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002beae8;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined8 *******)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined8 *******)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002bebc8;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
          }
          else {
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002beae8;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined8 *******)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined8 *******)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002bec68;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            if (*param_2 == 3) goto LAB_00217c2a;
            (**(code **)(*(long *)(param_2 + 6) + 0x20))
                      (&local_2c8,*(undefined8 *)(param_2 + 4),uVar12,uVar3);
            core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&local_2c8);
            files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
            core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&local_2c8);
            cVar6 = files::FileHandling::no_files_remaining(plVar1,param_4);
            if (cVar6 != '\0') {
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_2e8);
              local_2b8 = uStack_2d8;
              local_2c8 = (undefined8 *******)local_2e8._0_8_;
              pcStack_2c0 = stack0xfffffffffffffd20;
              local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
              uVar12 = ::alloc::boxed::Box<T>::new(&local_2c8);
              auVar15._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bea28;
              auVar15._0_8_ = uVar12;
              goto LAB_00217840;
            }
          }
        }
      }
      else {
        if (uVar13 == 0x1000) goto LAB_00217354;
        uVar13 = piVar11[0xe] & 0xf000;
        if (((uVar13 == 0x1000) || (uVar13 == 0x8000)) || (uVar13 == 0x2000)) {
          if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 00217b1c to 00217be0 has its CatchHandler @ 00217c48 */
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002beae8;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined8 *******)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined8 *******)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 *******)&DAT_002bebc8;
            pcStack_2c0 = (code *)0x2;
            puStack_2a8 = (undefined *)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined8 *******)local_2e8;
            local_2b8 = &local_2f8;
            std::io::stdio::_eprint(&local_2c8);
          }
          else {
                    /* try { // try from 002178bb to 00217a9e has its CatchHandler @ 00217c48 */
            files::FileHandling::reset_reader(plVar1,uVar12,uVar3);
          }
        }
      }
    }
LAB_00217a9f:
    (*(code *)PTR_memcpy_002c47b8)(&local_2c8,local_e0,0xb0);
                    /* try { // try from 00217aba to 00217ad0 has its CatchHandler @ 00217c48 */
    files::FileHandling::update_metadata(plVar1,uVar12,uVar3,&local_2c8);
  }
                    /* try { // try from 00217ad1 to 00217add has its CatchHandler @ 00217c5a */
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_1b8)
  ;
LAB_00217ade:
  local_1f0[2] = local_1c0;
  *(undefined4 *)local_1f0 = (undefined4)local_1d0;
  *(undefined4 *)((long)local_1f0 + 4) = local_1d0._4_4_;
  *(undefined4 *)(local_1f0 + 1) = (undefined4)uStack_1c8;
  *(undefined4 *)((long)local_1f0 + 0xc) = uStack_1c8._4_4_;
  core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
  return;
}