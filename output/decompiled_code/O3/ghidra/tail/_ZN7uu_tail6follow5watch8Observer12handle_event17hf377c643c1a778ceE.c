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
  undefined ********local_2f8;
  code *local_2f0;
  undefined local_2e8 [12];
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined local_2d0;
  undefined ********local_2c8;
  code *pcStack_2c0;
  undefined ********local_2b8;
  code *local_2b0;
  undefined **ppuStack_2a8;
  code *local_2a0;
  undefined8 *local_1f0;
  undefined *******local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined local_1b8 [8];
  code *pcStack_1b0;
  undefined ********local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined local_e0 [40];
  long local_b8;
  uint local_a8;
  
  lVar10 = *(long *)(param_3 + 0x10);
  local_1f0 = param_1;
  if (lVar10 == 0) {
    core::option::unwrap_failed(&PTR_DAT_002bc098);
LAB_00206e13:
    ppuVar14 = &PTR_DAT_002bc110;
LAB_00206e44:
                    /* try { // try from 00206e44 to 00206e49 has its CatchHandler @ 00206e7a */
    core::option::unwrap_failed(ppuVar14);
LAB_00206e4a:
                    /* try { // try from 00206e4a to 00206e56 has its CatchHandler @ 00206e68 */
    uVar12 = core::option::unwrap_failed(&PTR_DAT_002bc0b0);
LAB_00206e57:
                    /* catch() { ... } // from try @ 002066e0 with catch @ 00206e57 */
                    /* catch() { ... } // from try @ 00205d22 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206462 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206626 with catch @ 00206e7a
                       catch() { ... } // from try @ 0020670b with catch @ 00206e7a
                       catch() { ... } // from try @ 0020683e with catch @ 00206e7a
                       catch() { ... } // from try @ 00206a7d with catch @ 00206e7a
                       catch() { ... } // from try @ 00206cf1 with catch @ 00206e7a
                       catch() { ... } // from try @ 00206e44 with catch @ 00206e7a */
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
                    /* try { // try from 00205c93 to 00205cc0 has its CatchHandler @ 00206e8c */
  lVar8 = files::FileHandling::get();
  _<alloc::string::String_as_core::clone::Clone>::clone(&local_1e8,lVar8 + 0xb0);
  cVar6 = *(char *)(param_3 + 0x20);
  if (cVar6 == '\x02') {
    if (*(char *)(param_3 + 0x21) == '\x03') goto LAB_00206cfe;
  }
  else {
    if (cVar6 != '\x03') {
      if ((cVar6 != '\x04') || (1 < *(byte *)(param_3 + 0x21))) goto LAB_00206cfe;
LAB_00205cec:
      if ((*(byte *)((long)param_2 + 0x8e) & 1) == 0) {
        if ((*(byte *)((long)param_2 + 0x8e) == 2) || (*(char *)(param_2 + 0x23) == '\0'))
        goto LAB_00206cfe;
        if (*param_2 != 3) {
                    /* try { // try from 00205d22 to 00206129 has its CatchHandler @ 00206e7a */
          uVar9 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                     uVar12,uVar3);
          core::ptr::
          drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                    (uVar9);
          files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
          core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&local_2c8);
          goto LAB_00206cfe;
        }
        goto LAB_00206e13;
      }
      if (*(char *)(param_4 + 0x48) == '\0') {
                    /* try { // try from 00206462 to 00206561 has its CatchHandler @ 00206e7a */
        _local_1b8 = uucore::util_name();
        stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b8 = (undefined ********)local_2e8;
        local_2b0 = (code *)0x1;
        local_2e8._0_8_ = local_1b8;
        std::io::stdio::_eprint(&local_2c8);
        pcStack_1b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1a8 = (undefined ********)&PTR_DAT_002bc128;
        local_1a0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bc068;
        pcStack_2c0 = (code *)0x3;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x2;
        local_2b8 = (undefined ********)local_1b8;
        local_1b8 = (undefined  [8])&local_1e8;
        std::io::stdio::_eprint(&local_2c8);
        cVar6 = files::FileHandling::files_remaining(plVar1);
        if (cVar6 == '\0' && *(char *)((long)param_2 + 0x8d) != '\0') {
                    /* try { // try from 0020683e to 00206876 has its CatchHandler @ 00206e7a */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_1b8);
          local_2b8 = local_1a8;
          local_2c8 = (undefined ********)local_1b8;
          pcStack_2c0 = pcStack_1b0;
          local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
          uVar12 = ::alloc::boxed::Box<T>::new(&local_2c8);
          local_1f0[1] = uVar12;
          local_1f0[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
          *local_1f0 = 0x8000000000000000;
          goto LAB_00206a8a;
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
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined ********)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
          local_2d0 = 1;
          pcStack_2c0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2b8 = (undefined ********)&PTR_DAT_002bc138;
          local_2b0 = _<&T_as_core::fmt::Display>::fmt;
          ppuStack_2a8 = &PTR_DAT_002bc128;
          local_2a0 = _<&T_as_core::fmt::Display>::fmt;
          local_1b8 = (undefined  [8])&DAT_002bbff8;
          pcStack_1b0 = (code *)0x4;
          local_198 = 0;
          local_1a0 = (code *)0x3;
          local_2c8 = (undefined ********)local_2e8;
          local_1a8 = (undefined ********)&local_2c8;
          std::io::stdio::_eprint(local_1b8);
        }
        cVar6 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_orphan(uVar12,uVar3);
        if ((cVar6 != '\0') &&
           (cVar6 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                              (lVar2,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc)),
           cVar6 == '\0')) {
          _local_1b8 = uucore::util_name();
          stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined ********)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          local_2c8 = (undefined ********)&PTR_DAT_002bc038;
          pcStack_2c0 = (code *)0x1;
          local_2b8 = (undefined ********)0x8;
          local_2b0 = (code *)0x0;
          ppuStack_2a8 = (undefined **)0x0;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = uucore::util_name();
          stack0xfffffffffffffd20 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = local_1b8;
          local_2b8 = (undefined ********)local_2e8;
          _local_1b8 = auVar15;
          std::io::stdio::_eprint(&local_2c8);
          local_1b8 = (undefined  [8])&PTR_DAT_002bbeb0;
          pcStack_1b0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bc048;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = (undefined ********)local_1b8;
          std::io::stdio::_eprint(&local_2c8);
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar2);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(param_2 + 8,local_1b8);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_DAT_002bc148;
            goto LAB_00206e44;
          }
          uVar9 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                     uVar12,uVar3);
          core::ptr::
          drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                    (uVar9);
        }
      }
      files::FileHandling::reset_reader(plVar1,uVar12,uVar3);
      goto LAB_00206cfe;
    }
    cVar6 = *(char *)(param_3 + 0x21);
    if (cVar6 == '\x01') {
      bVar5 = *(byte *)(param_3 + 0x22);
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 != '\x03') goto LAB_00206cfe;
        cVar6 = *(char *)(param_3 + 0x22);
        if (cVar6 != '\x01') {
          if (cVar6 != '\x03') {
            if (cVar6 != '\x02') goto LAB_00206cfe;
            goto LAB_00205cec;
          }
          if ((byte)(*(char *)((long)param_2 + 0x8e) - 1U) < 2) goto LAB_00206cfe;
          lVar10 = lVar10 * 0x18 + -0x18 + lVar2;
                    /* try { // try from 00206626 to 0020669a has its CatchHandler @ 00206e7a */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar10);
          local_1a8 = local_2b8;
          local_1b8 = (undefined  [8])local_2c8;
          pcStack_1b0 = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(&local_1d0,local_1b8);
          files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
          uVar9 = *(undefined8 *)(lVar10 + 8);
          uVar4 = *(undefined8 *)(lVar10 + 0x10);
          files::PathData::from_other_with_path(local_1b8,&local_2c8,uVar9,uVar4);
          (*(code *)PTR_memcpy_002c2760)(&local_2c8,local_1b8,0xd8);
          if (*plVar1 == -0x8000000000000000) {
                    /* try { // try from 00206e25 to 00206e31 has its CatchHandler @ 00206e59 */
            uVar12 = core::option::unwrap_failed(&PTR_DAT_002bc0c8);
            goto LAB_00206e57;
          }
                    /* try { // try from 002066db to 002066df has its CatchHandler @ 00206e59 */
          uVar7 = _<std::path::PathBuf_as_core::cmp::PartialEq>::eq
                            (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12),
                             *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
                    /* try { // try from 002066e0 to 002066f8 has its CatchHandler @ 00206e57 */
          files::FileHandling::insert(plVar1,uVar9,uVar4,&local_2c8,uVar7);
          if (*param_2 == 3) {
            ppuVar14 = &PTR_DAT_002bc0e0;
          }
          else {
                    /* try { // try from 0020670b to 0020673e has its CatchHandler @ 00206e7a */
            uVar12 = WatcherRx::unwatch(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),
                                        uVar12,uVar3);
            core::ptr::
            drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                      (uVar12);
            if (*param_2 != 3) {
              auVar15 = WatcherRx::watch_with_parent
                                  (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),uVar9,
                                   uVar4);
              if (auVar15._0_8_ == 0) goto LAB_00206cfe;
              *(undefined (*) [16])(local_1f0 + 1) = auVar15;
              *local_1f0 = 0x8000000000000000;
              goto LAB_00206a8a;
            }
            ppuVar14 = &PTR_DAT_002bc0f8;
          }
          goto LAB_00206e44;
        }
        goto LAB_00206113;
      }
      bVar5 = *(byte *)(param_3 + 0x22) & 5;
    }
    if (bVar5 != 0) goto LAB_00206cfe;
  }
LAB_00206113:
  std::fs::metadata(local_1b8,uVar12,uVar3);
  if (local_1b8._0_4_ != 2) {
    (*(code *)PTR_memcpy_002c2760)(local_e0,local_1b8,0xb0);
    uVar13 = local_a8 & 0xf000;
    if ((uVar13 == 0x2000) || (uVar13 == 0x8000)) {
                    /* try { // try from 00206177 to 00206455 has its CatchHandler @ 00206e68 */
      piVar11 = (int *)files::FileHandling::get(plVar1,uVar12,uVar3);
      if (*piVar11 == 2) {
LAB_00206194:
        _local_2e8 = uucore::util_name();
        local_2f0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        local_2e8._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bbf58;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
        if (auVar15._0_8_ == 0) {
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_2c8,lVar2);
          uStack_2d8 = local_2b8;
          local_2e8._0_8_ = local_2c8;
          unique0x10000f7d = pcStack_2c0;
          ::alloc::vec::Vec<T,A>::push(&local_1d0,local_2e8);
          goto LAB_00206cbf;
        }
LAB_00206a60:
        *(undefined (*) [16])(local_1f0 + 1) = auVar15;
        *local_1f0 = 0x8000000000000000;
                    /* try { // try from 00206a7d to 00206a89 has its CatchHandler @ 00206e7a */
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (local_1b8);
LAB_00206a8a:
                    /* try { // try from 00206a8a to 00206a96 has its CatchHandler @ 00206e8c */
        core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_1d0);
        return;
      }
LAB_00206574:
      uVar13 = piVar11[0xe] & 0xf000;
      if (((uVar13 == 0x1000) || (uVar13 == 0x2000)) || (uVar13 == 0x8000)) {
        if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 002068a0 to 00206a56 has its CatchHandler @ 00206e68 */
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbf58;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
        cVar6 = _<notify::event::EventKind_as_core::cmp::PartialEq>::eq(param_3 + 0x20);
        if ((cVar6 != '\0') ||
           ((*(char *)((long)param_2 + 0x8d) != '\0' && (*(long *)(piVar11 + 10) != local_b8)))) {
                    /* try { // try from 00206760 to 00206838 has its CatchHandler @ 00206e68 */
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          local_2e8._0_8_ = (undefined ********)0x0;
          stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
          local_2d0 = 1;
          local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbf78;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          local_2b8 = (undefined ********)&local_2f8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
                    /* try { // try from 002065d8 to 002065ed has its CatchHandler @ 00206e68 */
        _<std::fs::Metadata_as_uu_tail::paths::MetadataExtTail>::got_truncated
                  (&local_2c8,piVar11,local_e0);
        auVar15._8_8_ = pcStack_2c0;
        auVar15._0_8_ = local_2c8;
        if (local_2c8 != (undefined ********)0x0) goto LAB_00206a60;
        if ((char)pcStack_2c0 != '\0') {
          _local_2e8 = uucore::util_name();
          local_2f0 = _<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbe20;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b8 = (undefined ********)&local_2f8;
          local_2b0 = (code *)0x1;
          local_2f8 = (undefined ********)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          stack0xfffffffffffffd20 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined ********)&DAT_002bbf98;
          pcStack_2c0 = (code *)0x2;
          ppuStack_2a8 = (undefined **)0x0;
          local_2b0 = (code *)0x1;
          local_2e8._0_8_ = &local_1e8;
          local_2b8 = (undefined ********)local_2e8;
          std::io::stdio::_eprint(&local_2c8);
          auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
          goto LAB_00206a57;
        }
      }
      else {
        _local_2e8 = uucore::util_name();
        local_2f0 = _<&T_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bbe20;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        local_2e8._0_8_ = (undefined ********)0x0;
        stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
        local_2d0 = 1;
        local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_2c8 = (undefined ********)&DAT_002bbf38;
        pcStack_2c0 = (code *)0x2;
        ppuStack_2a8 = (undefined **)0x0;
        local_2b0 = (code *)0x1;
        local_2f8 = (undefined ********)local_2e8;
        local_2b8 = (undefined ********)&local_2f8;
        std::io::stdio::_eprint(&local_2c8);
        auVar15 = files::FileHandling::update_reader(plVar1,uVar12,uVar3);
LAB_00206a57:
        if (auVar15._0_8_ != 0) goto LAB_00206a60;
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
        if (uVar13 == 0x1000) goto LAB_00206194;
        if (*(char *)(param_4 + 0x48) != '\0') {
          if ((*(byte *)((long)param_2 + 0x8e) == 2) || ((*(byte *)((long)param_2 + 0x8e) & 1) != 0)
             ) {
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbfb8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
          }
          else {
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbfd8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            if (*param_2 == 3) goto LAB_00206e4a;
            (**(code **)(*(long *)(param_2 + 6) + 0x20))
                      (&local_2c8,*(undefined8 *)(param_2 + 4),uVar12,uVar3);
            core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&local_2c8);
            files::FileHandling::remove(&local_2c8,plVar1,uVar12,uVar3);
            core::ptr::drop_in_place<uu_tail::follow::files::PathData>(&local_2c8);
            cVar6 = files::FileHandling::no_files_remaining(plVar1,param_4);
            if (cVar6 != '\0') {
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_2e8);
              local_2b8 = uStack_2d8;
              local_2c8 = (undefined ********)local_2e8._0_8_;
              pcStack_2c0 = stack0xfffffffffffffd20;
              local_2b0 = (code *)CONCAT44(local_2b0._4_4_,1);
              uVar12 = ::alloc::boxed::Box<T>::new(&local_2c8);
              auVar15._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
              auVar15._0_8_ = uVar12;
              goto LAB_00206a60;
            }
          }
        }
      }
      else {
        if (uVar13 == 0x1000) goto LAB_00206574;
        uVar13 = piVar11[0xe] & 0xf000;
        if (((uVar13 == 0x1000) || (uVar13 == 0x8000)) || (uVar13 == 0x2000)) {
          if (*(long *)(piVar11 + 0x32) == 0) {
                    /* try { // try from 00206d3c to 00206e00 has its CatchHandler @ 00206e68 */
            _local_2e8 = uucore::util_name();
            local_2f0 = _<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbe20;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
            local_2e8._0_8_ = (undefined ********)0x0;
            stack0xfffffffffffffd20 = (code *)CONCAT44(uStack_1dc,local_1e0);
            uStack_2d8 = (undefined ********)CONCAT44(uStack_1d4,uStack_1d8);
            local_2d0 = 1;
            local_2f0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined ********)&DAT_002bbfb8;
            pcStack_2c0 = (code *)0x2;
            ppuStack_2a8 = (undefined **)0x0;
            local_2b0 = (code *)0x1;
            local_2f8 = (undefined ********)local_2e8;
            local_2b8 = (undefined ********)&local_2f8;
            std::io::stdio::_eprint(&local_2c8);
          }
          else {
                    /* try { // try from 00206adb to 00206cbe has its CatchHandler @ 00206e68 */
            files::FileHandling::reset_reader(plVar1,uVar12,uVar3);
          }
        }
      }
    }
LAB_00206cbf:
    (*(code *)PTR_memcpy_002c2760)(&local_2c8,local_e0,0xb0);
                    /* try { // try from 00206cda to 00206cf0 has its CatchHandler @ 00206e68 */
    files::FileHandling::update_metadata(plVar1,uVar12,uVar3,&local_2c8);
  }
                    /* try { // try from 00206cf1 to 00206cfd has its CatchHandler @ 00206e7a */
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_1b8)
  ;
LAB_00206cfe:
  local_1f0[2] = local_1c0;
  *(undefined4 *)local_1f0 = (undefined4)local_1d0;
  *(undefined4 *)((long)local_1f0 + 4) = local_1d0._4_4_;
  *(undefined4 *)(local_1f0 + 1) = (undefined4)uStack_1c8;
  *(undefined4 *)((long)local_1f0 + 0xc) = uStack_1c8._4_4_;
  core::ptr::drop_in_place<alloc::string::String>(&local_1e8);
  return;
}