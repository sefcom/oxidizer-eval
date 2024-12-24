void __rustcall
uu_cp::copydir::copy_direntry
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
          undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined *local_148;
  undefined **ppuStack_140;
  undefined **local_138;
  undefined *puStack_130;
  code *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined local_48 [24];
  
  local_1e8 = param_3[2];
  local_1f8 = *param_3;
  uStack_1f0 = param_3[1];
  local_158 = param_3[5];
  local_168 = param_3[3];
  uStack_160 = param_3[4];
  local_1c8 = param_3[8];
  local_1d8 = *(undefined4 *)(param_3 + 6);
  uStack_1d4 = *(undefined4 *)((long)param_3 + 0x34);
  uStack_1d0 = *(undefined4 *)(param_3 + 7);
  uStack_1cc = *(undefined4 *)((long)param_3 + 0x3c);
  cVar7 = *(char *)(param_3 + 9);
                    /* try { // try from 0020d6c4 to 0020d6f4 has its CatchHandler @ 0020dce0 */
  bVar5 = std::path::Path::is_symlink(uStack_1f0);
  if ((bVar5 & *(char *)(param_4 + 0x41) == '\0') == 0) {
                    /* try { // try from 0020d711 to 0020d7a0 has its CatchHandler @ 0020dce0 */
    cVar6 = std::path::Path::is_dir(uStack_1f0,local_1e8);
    if ((cVar6 == '\0') || (cVar6 = ends_with_slash_dot(&local_1f8), cVar6 != '\0')) {
LAB_0020d791:
      cVar7 = std::path::Path::is_dir(uStack_1f0,local_1e8);
      if (cVar7 == '\0') {
        if (param_6 == '\0') {
          copy_file(&local_f8,param_2,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8
                    ,param_4,param_5,param_7,param_8,0);
          pcVar2 = local_d8;
          if (local_f8 == (undefined *)0x3) {
            cVar7 = std::io::error::Error::kind(local_d8);
            if (cVar7 == '\x01') {
              uVar8 = std::io::error::Error::kind(pcVar2);
              local_1a8 = (undefined **)0x1;
              uStack_1a0 = (code *)uStack_160;
              local_198 = (undefined *)local_158;
              uStack_190 = (code *)CONCAT71(uStack_190._1_7_,1);
              local_108._8_8_ = _<os_display::Quoted_as_core::fmt::Display>::fmt;
              local_148 = &DAT_002b5c10;
              ppuStack_140 = (undefined **)0x2;
              local_128 = (code *)0x0;
              puStack_130 = (undefined *)0x1;
                    /* try { // try from 0020d990 to 0020d9b5 has its CatchHandler @ 0020dc74 */
              local_138 = (undefined **)local_108;
              local_108._0_8_ = &local_1a8;
              core::option::Option<T>::map_or_else(local_48,&local_148);
              local_1b8 = uucore::mods::error::UIoError::new(uVar8,local_48);
                    /* try { // try from 0020d9c0 to 0020da53 has its CatchHandler @ 0020dc8b */
              uVar9 = (**(code **)(local_1b8._8_8_ + 0x60))(local_1b8._0_8_);
              uucore::mods::error::set_exit_code(uVar9);
              local_108 = uucore::util_name();
              uStack_1a0 = _<&T_as_core::fmt::Display>::fmt;
              local_198 = local_1b8;
              uStack_190 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
              local_148 = &DAT_002b5c30;
              ppuStack_140 = (undefined **)0x3;
              local_128 = (code *)0x0;
              puStack_130 = (undefined *)0x2;
              local_1a8 = (undefined **)local_108;
              local_138 = (undefined **)&local_1a8;
              std::io::stdio::_eprint(&local_148);
                    /* try { // try from 0020da5e to 0020da62 has its CatchHandler @ 0020dc74 */
              core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                        (local_1b8._0_8_,local_1b8._8_8_);
                    /* try { // try from 0020da63 to 0020da6a has its CatchHandler @ 0020dc6f */
              core::ptr::drop_in_place<std::io::error::Error>(pcVar2);
              if (local_f8 == (undefined *)0x3) {
                core::ptr::drop_in_place<alloc::string::String>(&uStack_f0);
              }
              else if (local_f8 != (undefined *)0xd) {
                    /* try { // try from 0020da87 to 0020db9a has its CatchHandler @ 0020dce0 */
                core::ptr::drop_in_place<uu_cp::Error>(&local_f8);
              }
              goto LAB_0020d7a5;
            }
          }
          else if ((int)local_f8 == 0xd) goto LAB_0020d7a5;
LAB_0020da99:
          param_1[6] = CONCAT44(uStack_c4,local_c8);
          param_1[7] = CONCAT44(uStack_bc,uStack_c0);
          param_1[4] = local_d8;
          param_1[5] = CONCAT44(uStack_cc,uStack_d0);
          param_1[2] = local_e8;
          param_1[3] = uStack_e0;
          *(undefined4 *)param_1 = (undefined4)local_f8;
          *(undefined4 *)((long)param_1 + 4) = local_f8._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_f0;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_f0._4_4_;
          goto LAB_0020d6f5;
        }
                    /* try { // try from 0020d80a to 0020d82a has its CatchHandler @ 0020dce0 */
        copy_file(&local_148,param_2,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8,
                  param_4,param_5,param_7,param_8,0);
        if ((int)local_148 != 0xd) {
          local_c8 = local_118;
          uStack_c4 = uStack_114;
          uStack_c0 = uStack_110;
          uStack_bc = uStack_10c;
          local_d8 = local_128;
          uStack_d0 = uStack_120;
          uStack_cc = uStack_11c;
          local_e8 = (code *)local_138;
          uStack_e0 = puStack_130;
          local_f8 = local_148;
          uStack_f0 = ppuStack_140;
                    /* try { // try from 0020d883 to 0020d888 has its CatchHandler @ 0020dc79 */
          cVar7 = std::path::Path::is_symlink(uStack_1f0,local_1e8);
          if (cVar7 == '\0') {
            local_1a8 = uStack_f0;
            uStack_1a0 = local_e8;
            ppuVar1 = local_1a8;
            pcVar2 = uStack_1a0;
            local_198 = uStack_e0;
            uStack_190 = local_d8;
            puVar3 = local_198;
            pcVar4 = uStack_190;
            local_188 = uStack_d0;
            uStack_184 = uStack_cc;
            uStack_180 = local_c8;
            uStack_17c = uStack_c4;
            local_178 = CONCAT44(uStack_bc,uStack_c0);
            if (local_f8 != (undefined *)0xd) {
              param_1[7] = local_178;
              local_1a8._0_4_ = SUB84(uStack_f0,0);
              local_1a8._4_4_ = (undefined4)((ulong)uStack_f0 >> 0x20);
              uStack_1a0._0_4_ = SUB84(local_e8,0);
              uStack_1a0._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
              local_198._0_4_ = SUB84(uStack_e0,0);
              local_198._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
              uStack_190._0_4_ = SUB84(local_d8,0);
              uStack_190._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
              uStack_f0._0_4_ = (undefined4)local_1a8;
              uVar9 = local_1a8._4_4_;
              local_e8._0_4_ = (undefined4)uStack_1a0;
              uVar10 = uStack_1a0._4_4_;
              uStack_e0._0_4_ = (undefined4)local_198;
              uVar11 = local_198._4_4_;
              local_d8._0_4_ = (undefined4)uStack_190;
              uVar12 = uStack_190._4_4_;
              local_1a8 = ppuVar1;
              uStack_1a0 = pcVar2;
              local_198 = puVar3;
              uStack_190 = pcVar4;
              goto LAB_0020dc37;
            }
          }
          else {
                    /* try { // try from 0020d891 to 0020d8d7 has its CatchHandler @ 0020dce0 */
            core::ptr::drop_in_place<uu_cp::Error>(&local_f8);
          }
        }
      }
LAB_0020d7a5:
      *param_1 = 0xd;
                    /* try { // try from 0020d7ac to 0020d7b5 has its CatchHandler @ 0020dcdb */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_1d8);
                    /* try { // try from 0020d7b6 to 0020d7c2 has its CatchHandler @ 0020dcd6 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_168);
      goto LAB_0020d7c3;
    }
    std::fs::metadata(&local_f8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8);
    if (local_f8 != (undefined *)0x2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_f8,uStack_f0);
      goto LAB_0020d791;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (2,uStack_f0);
    if (cVar7 != '\0') {
      _<uu_cp::Error_as_core::convert::From<&str>>::from
                (&local_f8,
                 "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, "
                 ,0x2d);
      goto LAB_0020da99;
    }
    build_dir(&local_f8,*(undefined4 *)(param_4 + 0x30),*(undefined *)(param_4 + 0x32),&local_1d8,0)
    ;
    if (local_f8 == (undefined *)0xd) {
      if (*(char *)(param_4 + 0x48) != '\0') {
        context_for(&local_148,uStack_160,local_158,CONCAT44(uStack_1cc,uStack_1d0),local_1c8);
        uStack_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_f8 = &DAT_002b5bf0;
        uStack_f0 = (undefined **)0x2;
        local_d8 = (code *)0x0;
        local_e8 = (code *)&local_1a8;
        uStack_e0 = &DAT_00000001;
                    /* try { // try from 0020dbec to 0020dbf9 has its CatchHandler @ 0020dc5d */
        local_1a8 = &local_148;
        std::io::stdio::_print(&local_f8);
                    /* try { // try from 0020dbfa to 0020dc57 has its CatchHandler @ 0020dce0 */
        core::ptr::drop_in_place<alloc::string::String>(&local_148);
      }
      *param_1 = 0xd;
      goto LAB_0020d6f5;
    }
    param_1[7] = CONCAT44(uStack_bc,uStack_c0);
    uVar9 = uStack_f0._4_4_;
    uVar10 = local_e8._4_4_;
    uVar11 = uStack_e0._4_4_;
    uVar12 = local_d8._4_4_;
LAB_0020dc37:
    *(undefined4 *)(param_1 + 5) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_cc;
    *(undefined4 *)(param_1 + 6) = local_c8;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_c4;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_e0;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 4) = (undefined4)local_d8;
    *(undefined4 *)((long)param_1 + 0x24) = uVar12;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_f0;
    *(undefined4 *)((long)param_1 + 0xc) = uVar9;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_e8;
    *(undefined4 *)((long)param_1 + 0x14) = uVar10;
    *param_1 = local_f8;
  }
  else {
    copy_link(param_1,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8,param_5);
  }
LAB_0020d6f5:
                    /* try { // try from 0020d6f5 to 0020d6fe has its CatchHandler @ 0020dcdb */
  core::ptr::drop_in_place<std::path::PathBuf>(&local_1d8);
                    /* try { // try from 0020d6ff to 0020d70b has its CatchHandler @ 0020dcd6 */
  core::ptr::drop_in_place<std::path::PathBuf>(&local_168);
LAB_0020d7c3:
  core::ptr::drop_in_place<std::path::PathBuf>(&local_1f8);
  return;
}