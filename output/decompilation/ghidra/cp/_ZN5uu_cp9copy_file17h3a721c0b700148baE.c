undefined8 * __rustcall
uu_cp::copy_file(undefined8 *param_1,long *param_2,undefined ********param_3,
                undefined ********param_4,undefined ********param_5,undefined ********param_6,
                long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,byte param_11
                )

{
  undefined *puVar1;
  int iVar2;
  undefined *******pppppppuVar3;
  undefined *******pppppppuVar4;
  undefined ********ppppppppuVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  undefined *******local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined local_3a0;
  uint local_394;
  undefined *******local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  long *local_2e0;
  undefined *******local_2d8;
  undefined *******pppppppuStack_2d0;
  undefined *******local_2c8;
  undefined *******local_2c0;
  undefined *******local_2b8;
  undefined *******pppppppuStack_2b0;
  undefined *******local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *******local_218;
  undefined *******pppppppuStack_210;
  undefined *******local_208;
  code *pcStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *******local_160;
  undefined *******pppppppuStack_158;
  undefined *******local_150;
  undefined *******local_148;
  code *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *******local_c0;
  undefined local_b8 [136];
  
  local_2e0 = param_2;
  bVar6 = std::path::Path::is_symlink(param_3,param_4);
  bVar7 = std::path::Path::is_symlink(param_5,param_6);
  if (bVar7 != 0) {
    uucore::features::fs::FileInformation::from_path(&local_390,param_5,param_6,0);
    if ((undefined ********)local_390 == (undefined ********)0x0) {
      (*(code *)PTR_memcpy_002bbe30)(&local_218,&local_388,0x90);
      lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_8,&local_218);
      if (lVar12 == 0) goto LAB_002072cf;
    }
    else {
      pppppppuStack_2b0 = (undefined *******)local_388;
      local_2b8 = (undefined *******)CONCAT71(local_2b8._1_7_,1);
      core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&local_2b8);
LAB_002072cf:
      lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_9,param_5,param_6);
      if (lVar12 == 0) {
        if (((*(char *)(param_7 + 0x41) == '\0') &&
            ((param_11 & *(char *)(param_7 + 0x40) != '\0') == 0)) && (bVar6 == 1)) {
LAB_00207539:
          cVar8 = uucore::features::fs::paths_refer_to_same_file(param_3,param_4,param_5,param_6,1);
          if (((cVar8 != '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
             ((*(char *)(param_7 + 0x3d) == '\x01' &&
              ((*(char *)(param_7 + 0x4c) == '\0' &&
               (lVar12 = std::fs::remove_file(param_5,param_6), lVar12 != 0)))))) {
            *param_1 = 2;
            param_1[1] = lVar12;
            return param_1;
          }
          goto LAB_0020758c;
        }
        std::fs::metadata(&local_390,param_5,param_6);
        iVar2 = (int)local_390;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_390);
        if (((iVar2 != 2) ||
            ((*(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01')))) ||
           (cVar8 = uucore::features::fs::is_symlink_loop(param_5,param_6), cVar8 != '\0'))
        goto LAB_00207539;
        std::env::var_os(&local_390,"POSIXLY_CORRECT",0xf);
        pppppppuVar3 = local_390;
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_390);
        if ((undefined ********)pppppppuVar3 != (undefined ********)0x8000000000000000)
        goto LAB_00207539;
        pppppppuStack_2b0 = (undefined *******)_<std::path::Display_as_core::fmt::Display>::fmt;
        local_390 = (undefined *******)&PTR_s_not_writing_through_dangling_sym_002b6018;
        local_218 = (undefined *******)param_5;
        pppppppuStack_210 = (undefined *******)param_6;
        goto LAB_002078fe;
      }
    }
    local_208 = (undefined *******)&local_2b8;
    local_218 = (undefined *******)&local_3b8;
    uStack_380 = &local_218;
    pcStack_200 = _<std::path::Display_as_core::fmt::Display>::fmt;
    pppppppuStack_210 = (undefined *******)_<std::path::Display_as_core::fmt::Display>::fmt;
    local_388 = (undefined ********)0x3;
    local_390 = (undefined *******)&PTR_s_will_not_copy___002b5fe8;
    local_378 = 2;
    local_3b8 = (undefined *******)param_3;
    uStack_3b0 = param_4;
    local_2b8 = (undefined *******)param_5;
    pppppppuStack_2b0 = (undefined *******)param_6;
LAB_0020792b:
    uStack_36c = 0;
    uStack_370 = 0;
    uStack_374 = 0;
    core::option::Option<T>::map_or_else(param_1 + 1,&local_390);
    *param_1 = 4;
    return param_1;
  }
LAB_0020758c:
  cVar8 = uucore::features::fs::are_hardlinks_to_same_file(param_3,param_4,param_5,param_6);
  if (cVar8 != '\0') {
    std::path::Path::components(&local_218,param_3,param_4);
    std::path::Path::components(&local_390,param_5,param_6);
    cVar8 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_218,&local_390);
    if ((((cVar8 == '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
        (*(char *)(param_7 + 0x3d) == '\x01')) &&
       (lVar12 = std::fs::remove_file(param_5,param_6), lVar12 != 0)) goto LAB_00207ac4;
  }
  cVar9 = file_or_link_exists(param_5,param_6);
  cVar8 = *(char *)(param_7 + 0x3e);
  cVar10 = cVar8;
  if ((cVar9 != '\0') &&
     ((cVar8 == '\0' ||
      ((cVar10 = '\x01', *(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01'))
      )))) {
    cVar10 = uucore::features::fs::paths_refer_to_same_file(param_3,param_4,param_5,param_6,1);
    cVar9 = *(char *)(param_7 + 0x4e);
    if ((cVar10 != '\0') && (cVar9 == '\0')) {
      if (bVar6 == 0) {
        if (*(char *)(param_7 + 0x4c) != '\0' && bVar7 == 0) {
          std::path::Path::components(&local_218,param_3,param_4);
          std::path::Path::components(&local_390,param_5,param_6);
          cVar10 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_218,&local_390);
          if (cVar10 == '\0') goto LAB_00207e4b;
          if (*(char *)(param_7 + 0x3c) != '\0' || *(char *)(param_7 + 0x3d) != '\0')
          goto LAB_00207e3e;
        }
      }
      else if ((bVar7 == 0) || (*(char *)(param_7 + 0x41) == '\0')) goto LAB_00207e3e;
    }
    handle_existing_dest(&local_390,param_3,param_4,param_5,param_6,param_7,param_11,param_10);
    if (local_390 != (undefined *******)&DAT_0000000d) {
      param_1[7] = CONCAT44(uStack_354,local_358);
      param_1[5] = CONCAT44(uStack_364,local_368);
      param_1[6] = CONCAT44(uStack_35c,uStack_360);
      param_1[3] = CONCAT44(uStack_374,local_378);
      param_1[4] = CONCAT44(uStack_36c,uStack_370);
      param_1[1] = local_388;
      param_1[2] = uStack_380;
      *param_1 = local_390;
      return param_1;
    }
    cVar11 = uucore::features::fs::are_hardlinks_to_same_file(param_3,param_4,param_5,param_6);
    cVar10 = cVar8;
    if ((cVar11 != '\0') &&
       (((cVar9 == '\x02' && (*(char *)(param_7 + 0x4c) != '\0')) ||
        (((bVar7 & bVar6) == 0 && (cVar9 == '\0')))))) {
LAB_00207e3e:
      *param_1 = 0xd;
      return param_1;
    }
  }
  if (((bVar6 & cVar10 != '\0') != 0) &&
     ((*(char *)(param_7 + 0x3c) != '\0' || (*(char *)(param_7 + 0x3d) != '\x01')))) {
    local_218 = (undefined *******)&DAT_00000001;
    pcStack_200 = (code *)CONCAT71(pcStack_200._1_7_,1);
    pppppppuStack_2b0 = (undefined *******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_390 = (undefined *******)&PTR_s_cannot_change_attribute___Source_002b6038;
    pppppppuStack_210 = (undefined *******)param_5;
    local_208 = (undefined *******)param_6;
LAB_002078fe:
    local_2b8 = (undefined *******)&local_218;
    local_388 = (undefined ********)0x2;
    uStack_380 = &local_2b8;
    local_378 = 1;
    goto LAB_0020792b;
  }
  if (*(char *)(param_7 + 0x48) != '\0') {
    print_verbose_output(*(undefined *)(param_7 + 0x44),local_2e0,param_3,param_4,param_5,param_6);
  }
  if (*(char *)(param_7 + 0x38) == '\0') {
    bVar6 = *(byte *)(param_7 + 0x40);
    bVar14 = *(byte *)(param_7 + 0x41);
  }
  else {
    bVar6 = *(byte *)(param_7 + 0x40);
    bVar14 = *(byte *)(param_7 + 0x41);
    bVar13 = bVar6 != 0;
    if (param_11 == 0) {
      bVar13 = bVar14 != 0;
    }
    if (bVar14 != 0) {
      bVar13 = bVar14 != 0;
    }
    uucore::features::fs::FileInformation::from_path(&local_390,param_3,param_4,bVar13);
    local_3b8 = (undefined *******)&DAT_00000001;
    local_3a0 = 1;
    local_148 = (undefined *******)&local_3b8;
    local_140 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_2b8 = (undefined *******)&PTR_s_cannot_stat_002b5f08;
    pppppppuStack_2b0 = (undefined *******)0x1;
    local_298 = 0;
    local_2a8 = (undefined *******)&local_148;
    local_2a0 = 1;
                    /* try { // try from 002077bb to 002077cf has its CatchHandler @ 002080bf */
    uStack_3b0 = param_3;
    uStack_3a8 = param_4;
    core::option::Option<T>::map_or_else(&local_160,&local_2b8);
    local_2a8 = local_150;
    local_2b8 = local_160;
    pppppppuStack_2b0 = pppppppuStack_158;
    if ((undefined ********)local_390 != (undefined ********)0x0) {
      param_1[3] = local_150;
      param_1[1] = local_160;
      param_1[2] = pppppppuStack_158;
      *param_1 = 3;
      param_1[4] = local_388;
      return param_1;
    }
    local_2c8 = (undefined *******)CONCAT44(uStack_374,local_378);
    local_2d8 = (undefined *******)local_388;
    pppppppuStack_2d0 = (undefined *******)uStack_380;
    local_138 = CONCAT44(uStack_364,local_368);
    uStack_130 = CONCAT44(uStack_35c,uStack_360);
    local_128 = local_358;
    uStack_124 = uStack_354;
    uStack_120 = uStack_350;
    local_118 = local_348;
    uStack_110 = uStack_340;
    local_108 = local_338;
    uStack_100 = uStack_330;
    local_f8 = local_328;
    uStack_f0 = uStack_320;
    local_e8 = local_318;
    uStack_e0 = uStack_310;
    local_d8 = local_308;
    uStack_d4 = uStack_304;
    uStack_d0 = uStack_300;
    uStack_cc = uStack_2fc;
    core::ptr::
    drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>as_quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::__closure__>
              (&local_2b8);
    local_218 = local_2d8;
    pppppppuStack_210 = pppppppuStack_2d0;
    local_208 = local_2c8;
    local_1f8 = local_138;
    uStack_1f0 = uStack_130;
    local_1e8 = local_128;
    uStack_1e4 = uStack_124;
    uStack_1e0 = (undefined4)uStack_120;
    uStack_1dc = uStack_120._4_4_;
    local_1d8 = (undefined4)local_118;
    uStack_1d4 = local_118._4_4_;
    uStack_1d0 = (undefined4)uStack_110;
    uStack_1cc = uStack_110._4_4_;
    local_1c8 = (undefined4)local_108;
    uStack_1c4 = local_108._4_4_;
    uStack_1c0 = (undefined4)uStack_100;
    uStack_1bc = uStack_100._4_4_;
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    local_1a8 = local_e8;
    uStack_1a0 = uStack_e0;
    local_198 = local_d8;
    uStack_194 = uStack_d4;
    uStack_190 = uStack_d0;
    uStack_18c = uStack_cc;
    lVar12 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_10,&local_218);
    if (lVar12 != 0) {
      lVar12 = std::fs::hard_link(lVar12 + 0x90,param_5,param_6);
      if (lVar12 != 0) {
LAB_00207ac4:
        *param_1 = 2;
        param_1[1] = lVar12;
        return param_1;
      }
LAB_00207e4b:
      *param_1 = 0xd;
      return param_1;
    }
  }
  context_for(&local_2d8,param_3,param_4,param_5,param_6);
  pppppppuVar3 = pppppppuStack_2d0;
  local_2c0 = local_2c8;
  local_394 = (uint)bVar6;
  if (param_11 == 0) {
    local_394 = (uint)bVar14;
  }
  if (bVar14 != 0) {
    local_394 = (uint)bVar14;
  }
  if ((char)local_394 == '\0') {
                    /* try { // try from 00207ad6 to 00207b08 has its CatchHandler @ 002080ce */
    std::fs::symlink_metadata(&local_390,param_3,param_4);
  }
  else {
                    /* try { // try from 0020789f to 002078ae has its CatchHandler @ 002080ce */
    std::fs::metadata(&local_390,param_3,param_4);
  }
  ppppppppuVar5 = local_388;
  pppppppuVar4 = local_390;
  puVar1 = PTR_memcpy_002bbe30;
  if ((undefined ********)local_390 == (undefined ********)0x2) {
    copy_file::___closure__(&local_3b8,param_3,param_4,local_388);
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_3b0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3b0._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_3a8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_3a8._4_4_;
    *param_1 = 4;
    local_388 = (undefined ********)local_3b8;
LAB_00207b21:
    param_1[1] = local_388;
  }
  else {
    (*(code *)PTR_memcpy_002bbe30)(&local_2b8,&uStack_380,0xa0);
    (*(code *)puVar1)(&local_1f8,&local_2a8,0x90);
    local_208 = (undefined *******)uStack_380;
    local_218 = pppppppuVar4;
    pppppppuStack_210 = (undefined *******)ppppppppuVar5;
                    /* try { // try from 00207b95 to 00207c97 has its CatchHandler @ 002080ce */
    calculate_dest_permissions
              (&local_390,param_5,param_6,uStack_1e0,*(undefined *)(param_7 + 0x32),
               *(undefined *)(param_7 + 0x33),pppppppuVar3,local_2c0);
    ppppppppuVar5 = local_388;
    if (local_390 != (undefined *******)&DAT_0000000d) {
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_354;
      *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_360,uStack_364);
      *(ulong *)((long)param_1 + 0x34) = CONCAT44(local_358,uStack_35c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_370,uStack_374);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_368,uStack_36c);
      *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
      *(undefined4 *)(param_1 + 3) = local_378;
      *param_1 = local_390;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
      goto LAB_00207f57;
    }
    handle_copy_mode(&local_390,param_3,param_4,param_5,param_6,param_7,pppppppuVar3,local_2c0,
                     &local_218,param_8,param_11);
    if (local_390 != (undefined *******)&DAT_0000000d) {
LAB_00207e89:
      param_1[7] = CONCAT44(uStack_354,local_358);
      param_1[5] = CONCAT44(uStack_364,local_368);
      param_1[6] = CONCAT44(uStack_35c,uStack_360);
      param_1[3] = CONCAT44(uStack_374,local_378);
      param_1[4] = CONCAT44(uStack_36c,uStack_370);
      *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
      *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
      *param_1 = local_390;
      goto LAB_00207f57;
    }
    if ((bVar7 == 0) &&
       (local_390 = (undefined *******)
                    std::fs::set_permissions(param_5,param_6,(ulong)ppppppppuVar5 & 0xffffffff),
       (undefined ********)local_390 != (undefined ********)0x0)) {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_390);
    }
    if ((char)local_394 == '\0') {
                    /* try { // try from 00207e5d to 00207e79 has its CatchHandler @ 002080ce */
      copy_attributes(&local_390,param_3,param_4,param_5,param_6,param_7 + 0x30);
      if (local_390 != (undefined *******)&DAT_0000000d) goto LAB_00207e89;
    }
    else {
      uucore::features::fs::canonicalize(&local_3b8,param_3,param_4,0,1);
      if ((undefined ********)local_3b8 != (undefined ********)0x8000000000000000) {
        local_2a8 = (undefined *******)uStack_3a8;
        local_2b8 = local_3b8;
        pppppppuStack_2b0 = (undefined *******)uStack_3b0;
                    /* try { // try from 00207ee5 to 00207efb has its CatchHandler @ 0020809c */
        copy_attributes(&local_390,uStack_3b0,uStack_3a8,param_5,param_6,param_7 + 0x30);
        if (local_390 != (undefined *******)&DAT_0000000d) {
          param_1[7] = CONCAT44(uStack_354,local_358);
          *(undefined4 *)(param_1 + 5) = local_368;
          *(undefined4 *)((long)param_1 + 0x2c) = uStack_364;
          *(undefined4 *)(param_1 + 6) = uStack_360;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_35c;
          *(undefined4 *)(param_1 + 3) = local_378;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_374;
          *(undefined4 *)(param_1 + 4) = uStack_370;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_36c;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_388;
          *(undefined4 *)((long)param_1 + 0xc) = local_388._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_380;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_380._4_4_;
          *param_1 = local_390;
                    /* try { // try from 0020804d to 00208059 has its CatchHandler @ 00208097 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_2b8);
          if ((undefined ********)local_3b8 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00208065 to 00208089 has its CatchHandler @ 002080ce */
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                      (&local_3b8);
          }
          goto LAB_00207f57;
        }
                    /* try { // try from 00207f0b to 00207f17 has its CatchHandler @ 00208097 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_2b8);
        if ((undefined ********)local_3b8 != (undefined ********)0x8000000000000000)
        goto LAB_00207f23;
      }
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                (&local_3b8);
    }
LAB_00207f23:
                    /* try { // try from 00207f2d to 00207f3c has its CatchHandler @ 002080ce */
    uucore::features::fs::FileInformation::from_path
              (&local_390,param_3,param_4,(char)local_394 != '\0');
    ppppppppuVar5 = local_388;
    if ((undefined ********)local_390 != (undefined ********)0x0) {
      *param_1 = 2;
      param_1[1] = local_388;
      goto LAB_00207f57;
    }
    (*(code *)PTR_memcpy_002bbe30)(local_b8,&uStack_380,0x88);
    local_c0 = (undefined *******)ppppppppuVar5;
                    /* try { // try from 00207f99 to 00207ffe has its CatchHandler @ 002080ce */
    std::sys::pal::unix::os::split_paths::bytes_to_path(&local_390,param_5,param_6);
    hashbrown::map::HashMap<K,V,S,A>::insert(&local_2b8,param_10,&local_c0,&local_390);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_2b8);
    if (*local_2e0 != 0) {
      std::fs::metadata(&local_390,param_3,param_4);
      if ((int)local_390 == 2) {
        *param_1 = 2;
        goto LAB_00207b21;
      }
      indicatif::progress_bar::ProgressBar::inc(local_2e0,uStack_340);
    }
    *param_1 = 0xd;
  }
LAB_00207f57:
  core::ptr::drop_in_place<alloc::string::String>(&local_2d8);
  return param_1;
}