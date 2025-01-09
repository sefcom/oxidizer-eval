/* WARNING: Removing unreachable block (ram,0x00207944) */
/* WARNING: Removing unreachable block (ram,0x00207952) */

undefined  [16] __rustcall uu_tail::follow::watch::follow(int *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 **ppuVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined **unaff_R15;
  undefined auVar19 [16];
  undefined8 **local_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 **local_2b8;
  int *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 **local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined local_270 [8];
  undefined8 **ppuStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 **local_240;
  undefined4 local_238;
  int local_234;
  undefined **local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 **local_1f8;
  undefined8 *local_170;
  code *local_168;
  long local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 **local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 **local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 **local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined local_e0 [56];
  uint local_a8;
  
  piVar1 = param_1 + 0xe;
  local_2b0 = param_1;
                    /* try { // try from 00206ecd to 00206ee0 has its CatchHandler @ 00207919 */
  cVar11 = files::FileHandling::no_files_remaining(piVar1);
  if ((cVar11 == '\0') ||
     (cVar11 = files::FileHandling::only_stdin_remaining(piVar1), cVar11 != '\0')) {
    iVar13 = local_2b0[0x22];
    cVar11 = *(char *)(param_2 + 0x4c);
    cVar2 = *(char *)(param_2 + 0x4a);
    local_158 = *(undefined8 *)(param_2 + 0x30);
    local_238 = *(undefined4 *)(param_2 + 0x38);
    local_230 = &PTR_DAT_002bc1b8;
    piVar18 = local_2b0;
    local_234 = iVar13;
    local_160 = param_2;
    if (cVar11 == '\x02') goto LAB_00206f60;
LAB_00206f47:
                    /* try { // try from 00206f4b to 00206f57 has its CatchHandler @ 0020791b */
    if ((iVar13 == 0) ||
       (cVar12 = platform::unix::ProcessChecker::is_dead(&local_234), cVar12 == '\0')) {
LAB_00206f60:
      if (((*(byte *)((long)piVar18 + 0x8e) & 1) != 0) && (*(char *)(piVar18 + 0x23) != '\0')) {
        local_2c8 = *(undefined8 ***)(piVar18 + 10);
        ppuStack_2c0 = local_2c8 + *(long *)(piVar18 + 0xc) * 3;
        while (lVar15 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                  (&local_2c8), piVar18 = local_2b0, lVar15 != 0) {
          uVar17 = *(undefined8 *)(lVar15 + 8);
          uVar3 = *(undefined8 *)(lVar15 + 0x10);
          std::fs::metadata(&local_228,uVar17,uVar3);
          if ((int)local_228 == 2) {
                    /* try { // try from 00206fa0 to 002071b1 has its CatchHandler @ 00207972 */
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (&local_228);
          }
          else {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                      (&local_228);
            unaff_R15 = (undefined **)files::FileHandling::get(piVar1,uVar17,uVar3);
            std::fs::metadata(&local_228,uVar17,uVar3);
            core::result::Result<T,E>::unwrap(local_e0,&local_228);
            uVar14 = local_a8 & 0xf000;
            if ((((uVar14 == 0x1000) || (uVar14 == 0x8000)) || (uVar14 == 0x2000)) &&
               (((undefined8 **)unaff_R15)[0x19] == (undefined8 *)0x0)) {
              _local_270 = uucore::util_name();
              local_2a8 = (undefined **)local_270;
              uStack_2a0 = _<&T_as_core::fmt::Display>::fmt;
              local_228 = (undefined **)&DAT_002bbe20;
              uStack_220 = (undefined8 **)0x2;
              local_208 = 0;
              local_218 = (undefined8 **)&local_2a8;
              uStack_210 = 1;
              std::io::stdio::_eprint(&local_228);
              ppuStack_268 = (undefined8 **)((undefined8 **)unaff_R15)[0x17];
              uStack_260 = *(undefined4 *)((undefined8 **)unaff_R15 + 0x18);
              uStack_25c = *(undefined4 *)((long)unaff_R15 + 0xc4);
              local_270 = (undefined  [8])0x0;
              uStack_258 = CONCAT31(uStack_258._1_3_,1);
              local_2a8 = (undefined **)local_270;
              uStack_2a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
              local_228 = (undefined **)&DAT_002bbf58;
              uStack_220 = (undefined8 **)0x2;
              local_208 = 0;
              local_218 = (undefined8 **)&local_2a8;
              uStack_210 = 1;
              std::io::stdio::_eprint(&local_228);
              files::FileHandling::update_metadata(piVar1,uVar17,uVar3,local_e0);
              auVar19 = files::FileHandling::update_reader(piVar1,uVar17,uVar3);
              if (auVar19._0_8_ != 0) goto LAB_00207662;
              files::FileHandling::tail_file(&local_228,piVar1,uVar17,uVar3,cVar2 != '\0');
              auVar19._8_8_ = uStack_220;
              auVar19._0_8_ = local_228;
              if ((undefined8 **)local_228 != (undefined8 **)0x0) goto LAB_00207662;
              if (*local_2b0 == 3) goto LAB_00207848;
              auVar19 = WatcherRx::watch_with_parent
                                  (*(undefined8 *)(local_2b0 + 4),*(undefined8 *)(local_2b0 + 6),
                                   uVar17,uVar3);
              if (auVar19._0_8_ != 0) goto LAB_00207662;
            }
          }
        }
      }
      if (*piVar18 == 3) {
        local_230 = &PTR_DAT_002bc1d0;
LAB_00207848:
                    /* try { // try from 00207848 to 00207855 has its CatchHandler @ 0020791d */
        core::option::unwrap_failed(local_230);
LAB_00207856:
                    /* try { // try from 00207856 to 00207862 has its CatchHandler @ 00207888 */
        uVar17 = core::option::unwrap_failed(&PTR_DAT_002bc1e8);
                    /* catch() { ... } // from try @ 002075f2 with catch @ 00207863 */
                    /* try { // try from 00207866 to 0020797e has its CatchHandler @ 00207987 */
        core::ptr::drop_in_place<notify::error::Error>(&local_228);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2c8);
        if (local_270 == (undefined  [8])0x6) {
          core::ptr::drop_in_place<notify::event::Event>(&ppuStack_268);
        }
        core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(local_2b0);
        auVar19 = _Unwind_Resume(uVar17);
        return auVar19;
      }
                    /* try { // try from 002071e0 to 002071fb has its CatchHandler @ 0020791b */
      std::sync::mpmc::Receiver<T>::recv_timeout(local_270,piVar18,local_158,local_238);
      local_2c8 = (undefined8 **)0x0;
      ppuStack_2c0 = (undefined8 **)&DAT_00000008;
      local_2b8 = (undefined8 **)0x0;
      switch(local_270) {
      case (undefined  [8])0x1:
        cVar12 = std::io::error::Error::kind(ppuStack_268);
        if (cVar12 != '\0') goto switchD_00207237_caseD_2;
        local_298 = local_240;
        local_2a8 = (undefined **)CONCAT44(uStack_24c,uStack_250);
        uStack_2a0 = (code *)CONCAT44(uStack_244,local_248);
        if (local_240 != (undefined8 **)0x0) {
          puVar4 = *(undefined8 **)((long)uStack_2a0 + 8);
          unaff_R15 = *(undefined ***)((long)uStack_2a0 + 0x10);
                    /* try { // try from 00207276 to 002072b0 has its CatchHandler @ 002078d4 */
          cVar12 = files::FileHandling::contains_key(piVar1,puVar4,unaff_R15);
          if (cVar12 != '\0') {
            if (*piVar18 == 3) goto LAB_00207856;
            (**(code **)(*(long *)(piVar18 + 6) + 0x20))
                      (&local_228,*(undefined8 *)(piVar18 + 4),puVar4,unaff_R15);
            core::ptr::drop_in_place<core::result::Result<(),notify::error::Error>>(&local_228);
          }
        }
                    /* try { // try from 002072b6 to 002072bf has its CatchHandler @ 00207917 */
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2a8);
        bVar6 = false;
LAB_002073a0:
        if ((cVar11 != '\x02') && (*(char *)((long)piVar18 + 0x8d) != '\0')) {
          files::FileHandling::keys(&local_228,piVar1);
          local_e8 = local_208;
          local_f8 = (undefined4)local_218;
          uStack_f4 = local_218._4_4_;
          uStack_f0 = (undefined4)uStack_210;
          uStack_ec = uStack_210._4_4_;
          local_108 = (int)local_228;
          uStack_104 = local_228._4_4_;
          uStack_100 = (undefined4)uStack_220;
          uStack_fc = uStack_220._4_4_;
          _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                    (&local_228,&local_108);
                    /* try { // try from 002073fd to 00207406 has its CatchHandler @ 002078eb */
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2c8);
          local_2b8 = local_218;
          local_2c8 = (undefined8 **)local_228;
          ppuStack_2c0 = uStack_220;
        }
        uStack_2a0 = (code *)(ppuStack_2c0 + (long)local_2b8 * 3);
        local_2a8 = (undefined **)ppuStack_2c0;
        while (lVar15 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                  (&local_2a8), lVar15 != 0) {
                    /* try { // try from 00207463 to 0020746d has its CatchHandler @ 0020791f */
          files::FileHandling::tail_file
                    (&local_228,piVar1,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10),
                     cVar2 != '\0');
          if ((undefined8 **)local_228 != (undefined8 **)0x0) {
            bVar5 = false;
            ppuVar16 = (undefined8 **)local_228;
            unaff_R15 = (undefined **)uStack_220;
            goto LAB_002074cc;
          }
        }
                    /* try { // try from 00207480 to 00207489 has its CatchHandler @ 0020790a */
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2c8);
        piVar18 = local_2b0;
        if ((~local_270._0_4_ & 6) != 0) {
                    /* try { // try from 00207499 to 002074a2 has its CatchHandler @ 0020791b */
          core::ptr::drop_in_place<notify::error::ErrorKind>(local_270);
        }
        iVar13 = piVar18[0x22];
        if (cVar11 != '\x02') goto LAB_00206f47;
        goto LAB_00206f60;
      default:
switchD_00207237_caseD_2:
        local_1f8 = local_240;
        local_208 = CONCAT44(uStack_24c,uStack_250);
        uStack_200 = local_248;
        uStack_1fc = uStack_244;
        local_218 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
        uStack_210 = CONCAT44(uStack_254,uStack_258);
        local_228 = (undefined **)local_270;
        uStack_220 = ppuStack_268;
        local_168 = _<notify::error::Error_as_core::fmt::Display>::fmt;
        local_2a8 = &PTR_DAT_002bc180;
        uStack_2a0 = (code *)0x1;
        local_288 = 0;
        local_298 = &local_170;
        local_290 = 1;
                    /* try { // try from 002075f2 to 0020762f has its CatchHandler @ 00207863 */
        local_170 = &local_228;
        core::option::Option<T>::map_or_else(&local_138,&local_2a8);
        local_290 = CONCAT44(local_290._4_4_,1);
        local_2a8 = (undefined **)CONCAT44(uStack_134,local_138);
        uStack_2a0 = (code *)CONCAT44(uStack_12c,uStack_130);
        local_298 = local_128;
        ppuVar16 = (undefined8 **)::alloc::boxed::Box<T>::new(&local_2a8);
                    /* try { // try from 00207639 to 00207647 has its CatchHandler @ 00207880 */
        core::ptr::drop_in_place<notify::error::Error>(&local_228);
        bVar5 = true;
        bVar6 = false;
        unaff_R15 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
        break;
      case (undefined  [8])0x5:
        local_2a8 = &PTR_DAT_002bbeb0;
        uStack_2a0 = _<&T_as_core::fmt::Display>::fmt;
        local_228 = (undefined **)&DAT_002bc160;
        uStack_220 = (undefined8 **)0x2;
        local_208 = 0;
        local_218 = (undefined8 **)&local_2a8;
        uStack_210 = 1;
                    /* try { // try from 002076df to 00207829 has its CatchHandler @ 00207880 */
        core::option::Option<T>::map_or_else(&local_150,&local_228);
        uStack_210 = CONCAT44(uStack_210._4_4_,1);
        local_228 = (undefined **)CONCAT44(uStack_14c,local_150);
        uStack_220 = (undefined8 **)CONCAT44(uStack_144,uStack_148);
        local_218 = local_140;
        ppuVar16 = (undefined8 **)::alloc::boxed::Box<T>::new(&local_228);
        goto LAB_002077fc;
      case (undefined  [8])0x6:
        local_218 = (undefined8 **)CONCAT44(uStack_254,uStack_258);
        uStack_210 = CONCAT44(uStack_24c,uStack_250);
        local_208 = CONCAT44(uStack_244,local_248);
        local_228 = (undefined **)ppuStack_268;
        uStack_220 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
                    /* try { // try from 00207313 to 00207336 has its CatchHandler @ 002078bb */
        if ((local_218 == (undefined8 **)0x0) ||
           (cVar12 = files::FileHandling::contains_key(piVar1,uStack_220[1],uStack_220[2]),
           cVar12 == '\0')) {
LAB_00207377:
                    /* try { // try from 0020737b to 002073fc has its CatchHandler @ 00207917 */
          core::ptr::drop_in_place<notify::event::Event>(&local_228);
          bVar6 = true;
          goto LAB_002073a0;
        }
        Observer::handle_event(&local_2a8,piVar18,&local_228,local_160);
        unaff_R15 = (undefined **)local_298;
        ppuVar16 = (undefined8 **)uStack_2a0;
        ppuVar10 = (undefined8 **)local_2a8;
        if ((undefined8 **)local_2a8 != (undefined8 **)0x8000000000000000) {
                    /* try { // try from 00207359 to 00207362 has its CatchHandler @ 0020788a */
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2c8);
          local_2c8 = ppuVar10;
          ppuStack_2c0 = ppuVar16;
          local_2b8 = (undefined8 **)unaff_R15;
          piVar18 = local_2b0;
          goto LAB_00207377;
        }
        core::ptr::drop_in_place<notify::event::Event>(&local_228);
        bVar5 = false;
        bVar6 = true;
        break;
      case (undefined  [8])0x7:
        bVar6 = true;
        if ((char)ppuStack_268 == '\0') goto LAB_002073a0;
        local_170 = (undefined8 *)CONCAT71(local_170._1_7_,1);
        local_2a8 = (undefined **)&local_170;
        uStack_2a0 = _<std::sync::mpsc::RecvTimeoutError_as_core::fmt::Display>::fmt;
        local_228 = &PTR_DAT_002bc190;
        uStack_220 = (undefined8 **)0x1;
        local_208 = 0;
        local_218 = (undefined8 **)&local_2a8;
        uStack_210 = 1;
        core::option::Option<T>::map_or_else(&local_120,&local_228);
        uStack_210 = CONCAT44(uStack_210._4_4_,1);
        local_228 = (undefined **)CONCAT44(uStack_11c,local_120);
        uStack_220 = (undefined8 **)CONCAT44(uStack_114,uStack_118);
        local_218 = local_110;
        ppuVar16 = (undefined8 **)::alloc::boxed::Box<T>::new(&local_228);
LAB_002077fc:
        unaff_R15 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
        bVar5 = false;
        bVar6 = true;
      }
LAB_002074cc:
                    /* try { // try from 002074cc to 002074d5 has its CatchHandler @ 00207912 */
      auVar8._8_8_ = unaff_R15;
      auVar8._0_8_ = ppuVar16;
      auVar7._8_8_ = unaff_R15;
      auVar7._0_8_ = ppuVar16;
      auVar19._8_8_ = unaff_R15;
      auVar19._0_8_ = ppuVar16;
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_2c8);
      if ((~local_270._0_4_ & 6) != 0) {
        if (!bVar5) {
                    /* try { // try from 002074e9 to 002074f2 has its CatchHandler @ 0020789e */
          core::ptr::drop_in_place<notify::error::ErrorKind>(local_270);
        }
        auVar19 = auVar7;
        if (bVar6) {
                    /* try { // try from 002074fb to 00207507 has its CatchHandler @ 0020791d */
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&uStack_250);
          auVar19 = auVar8;
        }
      }
      goto LAB_00207662;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = unaff_R15;
    auVar19 = auVar9 << 0x40;
  }
  else {
                    /* try { // try from 0020750d to 00207548 has its CatchHandler @ 00207919 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_270);
    local_218 = (undefined8 **)CONCAT44(uStack_25c,uStack_260);
    local_228 = (undefined **)local_270;
    uStack_220 = ppuStack_268;
    uStack_210 = CONCAT44(uStack_210._4_4_,1);
    uVar17 = ::alloc::boxed::Box<T>::new(&local_228);
    auVar19._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bbdb0;
    auVar19._0_8_ = uVar17;
  }
LAB_00207662:
  core::ptr::drop_in_place<uu_tail::follow::watch::Observer>(local_2b0);
  return auVar19;
}