undefined8 ******* __rustcall
uu_mv::rename(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
             undefined8 ******param_4,long param_5,long param_6)

{
  bool bVar1;
  undefined auVar2 [8];
  char cVar3;
  undefined auVar4 [8];
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  char cVar10;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 ******local_308;
  long local_2f8;
  undefined8 ******local_2f0;
  undefined8 ******local_2e8;
  undefined8 *****local_2e0;
  code *local_2d8;
  uint local_2cc;
  undefined8 ******local_2c8;
  undefined8 uStack_2c0;
  undefined8 ******local_2b8;
  code *local_2b0;
  undefined8 ******ppppppuStack_2a8;
  code *local_2a0;
  undefined local_218 [8];
  undefined8 uStack_210;
  undefined8 ******local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 ******local_158;
  undefined8 ******local_150;
  undefined8 *****local_148;
  undefined8 ******local_140;
  undefined8 ******local_138;
  undefined local_130;
  undefined8 ******local_128;
  undefined8 ******local_120;
  undefined8 ******local_118;
  undefined local_110;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *****local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *****local_50;
  undefined local_48 [24];
  
  local_318 = (undefined8 *******)0x8000000000000000;
                    /* try { // try from 001ead1e to 001eae9b has its CatchHandler @ 001eb7ce */
  local_2f8 = param_6;
  std::fs::metadata(&local_2c8,param_3,param_4);
  if ((int)local_2c8 == 2) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_2c8);
LAB_001ead3f:
    std::fs::metadata(&local_2c8,param_3,param_4);
    if ((int)local_2c8 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_2c8);
    }
    else {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_2c8);
      cVar3 = std::path::Path::is_dir(param_3,param_4);
      if ((cVar3 != '\0') && (cVar3 = std::path::Path::is_dir(param_1,param_2), cVar3 != '\0')) {
        cVar3 = is_empty_dir(param_3,param_4);
        if (cVar3 == '\0') {
          uVar7 = 0x13;
          pcVar8 = "Directory not empty";
LAB_001eb3d0:
                    /* try { // try from 001eb3d0 to 001eb5a2 has its CatchHandler @ 001eb7ce */
          auVar4 = (undefined  [8])std::io::error::Error::new(0x27,pcVar8,uVar7);
          goto LAB_001eaea4;
        }
        auVar4 = (undefined  [8])std::fs::remove_dir(param_3,param_4);
        if (auVar4 != (undefined  [8])0x0) goto LAB_001eaea4;
      }
    }
    auVar4 = (undefined  [8])rename_with_fallback(param_1,param_2,param_3,param_4,local_2f8);
    if (auVar4 == (undefined  [8])0x0) {
      if (*(char *)(param_5 + 0x31) == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = local_318 != (undefined8 *******)0x8000000000000000;
        if (local_318 == (undefined8 *******)0x8000000000000000) {
          local_128 = (undefined8 ******)&DAT_00000001;
          local_110 = 1;
          local_218 = (undefined  [8])0x1;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_2f0 = &local_128;
          local_2e8 = (undefined8 ******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2e0 = (undefined8 *****)local_218;
          local_2d8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&PTR_s_renamed_00288230;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          local_2b8 = &local_2f0;
          local_2b0 = (code *)0x2;
          uStack_210 = (code *)param_3;
          local_208 = param_4;
          local_120 = param_1;
          local_118 = param_2;
          core::option::Option<T>::map_or_else(&local_60,&local_2c8);
          local_218._4_4_ = uStack_5c;
          local_218._0_4_ = local_60;
          uStack_210 = (code *)CONCAT44(uStack_54,uStack_58);
          local_208 = (undefined8 ******)local_50;
        }
        else {
          local_158 = local_308;
          local_168 = (undefined4)local_318;
          uStack_164 = local_318._4_4_;
          uStack_160 = uStack_310;
          uStack_15c = uStack_30c;
          local_148 = (undefined8 ******)0x1;
          local_130 = 1;
          local_2f0 = (undefined8 ******)&DAT_00000001;
          local_2d8 = (code *)CONCAT71(local_2d8._1_7_,1);
          local_120 = (undefined8 ******)CONCAT44(uStack_30c,uStack_310);
          local_128 = (undefined8 ******)&DAT_00000001;
          local_118 = local_308;
          local_110 = 1;
          local_2c8 = &local_148;
          uStack_2c0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2b8 = &local_2f0;
          local_2b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          ppppppuStack_2a8 = &local_128;
          local_2a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_218 = (undefined  [8])&PTR_s_renamed_002881f0;
          uStack_210 = (code *)0x4;
          local_1f8 = 0;
          local_200 = 3;
                    /* try { // try from 001eaff0 to 001eb004 has its CatchHandler @ 001eb7aa */
          local_2e8 = param_3;
          local_2e0 = param_4;
          local_208 = &local_2c8;
          local_140 = param_1;
          local_138 = param_2;
          core::option::Option<T>::map_or_else(&local_78,local_218);
          local_218._4_4_ = uStack_74;
          local_218._0_4_ = local_78;
          uStack_210 = (code *)CONCAT44(uStack_6c,uStack_70);
          local_208 = (undefined8 ******)local_68;
                    /* try { // try from 001eb02d to 001eb062 has its CatchHandler @ 001eb7ce */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_168);
        }
        if (local_2f8 == 0) {
          local_128 = (undefined8 ******)local_218;
          local_120 = (undefined8 ******)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&DAT_00287e60;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          local_2b8 = &local_128;
          local_2b0 = (code *)0x1;
          std::io::stdio::_print(&local_2c8);
        }
        else {
                    /* try { // try from 001eb325 to 001eb39a has its CatchHandler @ 001eb7bc */
          indicatif::multi::MultiProgress::suspend(local_2f8,local_218);
        }
                    /* try { // try from 001eb39b to 001eb3a7 has its CatchHandler @ 001eb7ce */
        core::ptr::drop_in_place<alloc::string::String>(local_218);
      }
      if ((!bVar1) && (local_318 != (undefined8 *******)0x8000000000000000)) {
        core::ptr::drop_in_place<std::path::PathBuf>(&local_318);
      }
      return (undefined8 *******)0x0;
    }
  }
  else {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_2c8);
    cVar3 = *(char *)(param_5 + 0x35);
    cVar9 = *(char *)(param_5 + 0x37);
    if ((cVar9 != '\x02') || (cVar3 != '\x01')) {
      if (cVar9 == '\x01') {
        if (*(char *)(param_5 + 0x34) != '\0') {
          local_218 = (undefined  [8])&DAT_00000001;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_128 = (undefined8 ******)local_218;
          local_120 = (undefined8 ******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&PTR_s_skipped_002881a0;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          local_2b8 = &local_128;
          local_2b0 = (code *)0x1;
          uStack_210 = (code *)param_3;
          local_208 = param_4;
          std::io::stdio::_print(&local_2c8);
        }
      }
      else {
        if (cVar9 == '\x02') {
          std::fs::metadata(&local_2c8,param_1,param_2);
          pppppppuVar6 = (undefined8 *******)uStack_2c0;
          ppppppuVar5 = local_2c8;
          auVar4 = (undefined  [8])uStack_2c0;
          if ((undefined8 *******)local_2c8 == (undefined8 *******)0x2) goto LAB_001eaea4;
          (*(code *)PTR_memcpy_0028dbf0)(&local_118,&local_2b8,0xa0);
          local_128 = ppppppuVar5;
          local_120 = pppppppuVar6;
                    /* try { // try from 001eb0a2 to 001eb0ef has its CatchHandler @ 001eb7ce */
          std::fs::Metadata::modified(local_218,&local_128);
          auVar2 = local_218;
          local_2cc = (uint)uStack_210;
          auVar4 = local_218;
          if (((uint)uStack_210 == 1000000000) ||
             (std::fs::metadata(&local_2c8,param_3,param_4), ppppppuVar5 = local_2c8,
             auVar4 = (undefined  [8])uStack_2c0,
             (undefined8 *******)local_2c8 == (undefined8 *******)0x2)) goto LAB_001eaea4;
          local_150 = (undefined8 ******)uStack_2c0;
          (*(code *)PTR_memcpy_0028dbf0)(&local_208,&local_2b8,0xa0);
          local_218 = (undefined  [8])ppppppuVar5;
          uStack_210 = (code *)local_150;
                    /* try { // try from 001eb13b to 001eb2f4 has its CatchHandler @ 001eb7ce */
          std::fs::Metadata::modified(&local_2f0,local_218);
          auVar4 = (undefined  [8])local_2f0;
          if ((uint)local_2e8 == 1000000000) goto LAB_001eaea4;
          cVar9 = auVar2 != (undefined  [8])local_2f0;
          if ((long)auVar2 < (long)local_2f0) {
            cVar9 = -1;
          }
          cVar10 = local_2cc != (uint)local_2e8;
          if (local_2cc < (uint)local_2e8) {
            cVar10 = -1;
          }
          if (cVar9 != '\0') {
            cVar10 = cVar9;
          }
          if (cVar10 != '\x01') goto LAB_001eae2a;
        }
        else if (cVar9 == '\x03') {
          local_218 = (undefined  [8])&DAT_00000001;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_128 = (undefined8 ******)local_218;
          local_120 = (undefined8 ******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&PTR_s_not_replacing____backup____002881c0;
          uStack_2c0 = (code *)&DAT_00000001;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          local_2b8 = &local_128;
          local_2b0 = (code *)0x1;
          uStack_210 = (code *)param_3;
          local_208 = param_4;
          core::option::Option<T>::map_or_else(local_48,&local_2c8);
          auVar4 = (undefined  [8])std::io::error::Error::new(0x27,local_48);
          goto LAB_001eaea4;
        }
        if (cVar3 != '\0') {
          if (cVar3 != '\x01') {
LAB_001eb586:
            uucore::features::backup_control::get_backup_path
                      (&local_2c8,*(undefined *)(param_5 + 0x36),param_3,param_4,
                       *(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
                    /* try { // try from 001eb5a3 to 001eb5ac has its CatchHandler @ 001eb788 */
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_318);
            local_308 = local_2b8;
            uStack_310 = (undefined4)uStack_2c0;
            uStack_30c = uStack_2c0._4_4_;
            local_318 = (undefined8 *******)local_2c8;
                    /* try { // try from 001eb5d9 to 001eb68e has its CatchHandler @ 001eb7ce */
            if (((undefined8 *******)local_2c8 != (undefined8 *******)0x8000000000000000) &&
               (auVar4 = (undefined  [8])
                         rename_with_fallback(param_3,param_4,uStack_2c0,local_2b8,local_2f8),
               auVar4 != (undefined  [8])0x0)) goto LAB_001eaea4;
            goto LAB_001ead3f;
          }
          _local_218 = uucore::util_name();
          local_120 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&DAT_00287e10;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 ******)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = &local_128;
          local_128 = (undefined8 ******)local_218;
          std::io::stdio::_eprint(&local_2c8);
          local_218 = (undefined  [8])&DAT_00000001;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_120 = (undefined8 ******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&PTR_s_overwrite___002881d0;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 ******)0x0;
          local_2b0 = (code *)0x1;
          local_2b8 = &local_128;
          uStack_210 = (code *)param_3;
          local_208 = param_4;
          local_128 = (undefined8 ******)local_218;
          std::io::stdio::_eprint(&local_2c8);
          local_2c8 = (undefined8 ******)&PTR_s__00287e50;
          uStack_2c0 = (code *)&DAT_00000001;
          local_2b8 = (undefined8 ******)&DAT_00000008;
          local_2b0 = (code *)0x0;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          std::io::stdio::_eprint(&local_2c8);
          local_148 = (undefined8 *****)std::io::stdio::stderr::INSTANCE;
          ppppppuVar5 = (undefined8 ******)
                        _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_148);
          if (ppppppuVar5 != (undefined8 ******)0x0) {
            local_2f0 = ppppppuVar5;
                    /* try { // try from 001eb6a5 to 001eb778 has its CatchHandler @ 001eb779 */
            _local_218 = uucore::util_name();
            local_120 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 ******)&DAT_00287e10;
            uStack_2c0 = (code *)0x2;
            ppppppuStack_2a8 = (undefined8 ******)0x0;
            local_2b0 = (code *)0x1;
            local_2b8 = &local_128;
            local_128 = (undefined8 ******)local_218;
            std::io::stdio::_eprint(&local_2c8);
            local_218 = (undefined  [8])&local_2f0;
            uStack_210 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
            local_2c8 = (undefined8 ******)&DAT_00287e60;
            uStack_2c0 = (code *)0x2;
            ppppppuStack_2a8 = (undefined8 ******)0x0;
            local_2b0 = (code *)0x1;
            local_2b8 = (undefined8 ******)local_218;
            std::io::stdio::_eprint(&local_2c8);
            uVar7 = std::process::exit(1);
                    /* catch() { ... } // from try @ 001eb6a5 with catch @ 001eb779 */
                    /* try { // try from 001eb77c to 001eb7e8 has its CatchHandler @ 001eb7f1 */
            core::ptr::drop_in_place<std::io::error::Error>(&local_2f0);
            if (local_318 != (undefined8 *******)0x8000000000000000) {
              core::ptr::drop_in_place<std::path::PathBuf>(&local_318);
            }
            pppppppuVar6 = (undefined8 *******)_Unwind_Resume(uVar7);
            return pppppppuVar6;
          }
          cVar3 = uucore::read_yes();
          if (cVar3 != '\0') goto LAB_001eb586;
          pcVar8 = (char *)0x1;
          uVar7 = 0;
          goto LAB_001eb3d0;
        }
        if (*(char *)(param_5 + 0x34) != '\0') {
          local_218 = (undefined  [8])&DAT_00000001;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_128 = (undefined8 ******)local_218;
          local_120 = (undefined8 ******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
          local_2c8 = (undefined8 ******)&PTR_s_skipped_002881a0;
          uStack_2c0 = (code *)0x2;
          ppppppuStack_2a8 = (undefined8 *******)0x0;
          local_2b8 = &local_128;
          local_2b0 = (code *)0x1;
          uStack_210 = (code *)param_3;
          local_208 = param_4;
          std::io::stdio::_print(&local_2c8);
        }
      }
    }
LAB_001eae2a:
    auVar4 = (undefined  [8])(undefined8 *******)0x0;
  }
LAB_001eaea4:
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_318);
  return (undefined8 *******)auVar4;
}