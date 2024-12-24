undefined8 * __rustcall
uu_cp::copy_file(undefined8 *param_1,long *param_2,undefined ********param_3,
                undefined ********param_4,undefined ********param_5,undefined ********param_6,
                long param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,byte param_11
                )

{
  undefined *puVar1;
  int iVar2;
  undefined *******pppppppuVar3;
  undefined ********ppppppppuVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  long lVar11;
  bool bVar12;
  undefined *******local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined local_3a8;
  undefined *******local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long *local_2f0;
  undefined *******local_2e8;
  undefined *******pppppppuStack_2e0;
  undefined *******local_2d8;
  undefined *******local_2c8;
  undefined *******local_2c0;
  undefined *******local_2b8;
  undefined *******pppppppuStack_2b0;
  undefined *******local_2a8;
  code *pcStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined *******local_208;
  undefined *******pppppppuStack_200;
  undefined *******local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
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
  
  local_2f0 = param_2;
  bVar5 = std::path::Path::is_symlink(param_3,param_4);
  bVar6 = std::path::Path::is_symlink(param_5,param_6);
  if (bVar6 != 0) {
    uucore::features::fs::FileInformation::from_path(&local_3a0,param_5,param_6,0);
    if ((undefined ********)local_3a0 == (undefined ********)0x0) {
      (*(code *)PTR_memcpy_002bb710)(&local_2b8,&local_398,0x90);
      lVar11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_8,&local_2b8);
      if (lVar11 == 0) goto LAB_0020696c;
    }
    else {
      pppppppuStack_200 = (undefined *******)local_398;
      local_208 = (undefined *******)CONCAT71(local_208._1_7_,1);
      core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&local_208);
LAB_0020696c:
      lVar11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_9,param_5,param_6);
      if (lVar11 == 0) {
        if (((*(char *)(param_7 + 0x41) == '\0') &&
            ((param_11 & *(char *)(param_7 + 0x40) != '\0') == 0)) && (bVar5 == 1)) {
LAB_00206bc9:
          cVar7 = uucore::features::fs::paths_refer_to_same_file(param_3,param_4,param_5,param_6,1);
          if (((cVar7 != '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
             ((*(char *)(param_7 + 0x3d) == '\x01' &&
              ((*(char *)(param_7 + 0x4c) == '\0' &&
               (lVar11 = std::fs::remove_file(param_5,param_6), lVar11 != 0)))))) goto LAB_002071fe;
          goto LAB_00206c0a;
        }
        std::fs::metadata(&local_3a0,param_5,param_6);
        iVar2 = (int)local_3a0;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_3a0);
        if (((iVar2 != 2) ||
            ((*(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01')))) ||
           (cVar7 = uucore::features::fs::is_symlink_loop(param_5,param_6), cVar7 != '\0'))
        goto LAB_00206bc9;
        std::env::var_os(&local_3a0,"POSIXLY_CORRECT",0xf);
        pppppppuVar3 = local_3a0;
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_3a0);
        if ((undefined ********)pppppppuVar3 != (undefined ********)0x8000000000000000)
        goto LAB_00206bc9;
        pppppppuStack_200 = (undefined *******)_<std::path::Display_as_core::fmt::Display>::fmt;
        local_3a0 = (undefined *******)&PTR_s_not_writing_through_dangling_sym_002b5948;
        local_2b8 = (undefined *******)param_5;
        pppppppuStack_2b0 = (undefined *******)param_6;
        goto LAB_00207040;
      }
    }
    local_2a8 = (undefined *******)&local_208;
    local_2b8 = (undefined *******)&local_3c0;
    uStack_390 = &local_2b8;
    pcStack_2a0 = _<std::path::Display_as_core::fmt::Display>::fmt;
    pppppppuStack_2b0 = (undefined *******)_<std::path::Display_as_core::fmt::Display>::fmt;
    local_398 = (undefined ********)0x3;
    local_3a0 = (undefined *******)&PTR_s_will_not_copy___002b5918;
    local_388 = 2;
    local_3c0 = (undefined *******)param_3;
    uStack_3b8 = param_4;
    local_208 = (undefined *******)param_5;
    pppppppuStack_200 = (undefined *******)param_6;
LAB_0020706d:
    uStack_37c = 0;
    uStack_380 = 0;
    uStack_384 = 0;
    core::option::Option<T>::map_or_else(param_1 + 1,&local_3a0);
    *param_1 = 4;
    return param_1;
  }
LAB_00206c0a:
  cVar7 = uucore::features::fs::are_hardlinks_to_same_file(param_3,param_4,param_5,param_6);
  if (cVar7 != '\0') {
    std::path::Path::components(&local_2b8,param_3,param_4);
    std::path::Path::components(&local_3a0,param_5,param_6);
    cVar7 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_2b8,&local_3a0);
    if ((((cVar7 == '\0') && (*(char *)(param_7 + 0x3c) == '\0')) &&
        (*(char *)(param_7 + 0x3d) == '\x01')) &&
       (lVar11 = std::fs::remove_file(param_5,param_6), lVar11 != 0)) goto LAB_002071fe;
  }
  cVar8 = file_or_link_exists(param_5,param_6);
  cVar7 = *(char *)(param_7 + 0x3e);
  cVar9 = cVar7;
  if ((cVar8 != '\0') &&
     ((cVar7 == '\0' ||
      ((cVar9 = '\x01', *(char *)(param_7 + 0x3c) == '\0' && (*(char *)(param_7 + 0x3d) == '\x01')))
      ))) {
    cVar9 = uucore::features::fs::paths_refer_to_same_file(param_3,param_4,param_5,param_6,1);
    cVar8 = *(char *)(param_7 + 0x4e);
    if ((cVar9 != '\0') && (cVar8 == '\0')) {
      if (bVar5 == 0) {
        if (*(char *)(param_7 + 0x4c) != '\0' && bVar6 == 0) {
          std::path::Path::components(&local_2b8,param_3,param_4);
          std::path::Path::components(&local_3a0,param_5,param_6);
          cVar9 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_2b8,&local_3a0);
          if ((cVar9 == '\0') ||
             (*(char *)(param_7 + 0x3c) != '\0' || *(char *)(param_7 + 0x3d) != '\0'))
          goto LAB_00207502;
        }
      }
      else if ((bVar6 == 0) || (*(char *)(param_7 + 0x41) == '\0')) goto LAB_00207502;
    }
    handle_existing_dest(&local_3a0,param_3,param_4,param_5,param_6,param_7,param_11,param_10);
    if ((undefined ********)local_3a0 != (undefined ********)0xd) {
      param_1[7] = CONCAT44(uStack_364,local_368);
      param_1[5] = CONCAT44(uStack_374,local_378);
      param_1[6] = CONCAT44(uStack_36c,uStack_370);
      param_1[3] = CONCAT44(uStack_384,local_388);
      param_1[4] = CONCAT44(uStack_37c,uStack_380);
      param_1[1] = local_398;
      param_1[2] = uStack_390;
      *param_1 = local_3a0;
      return param_1;
    }
    cVar10 = uucore::features::fs::are_hardlinks_to_same_file(param_3,param_4,param_5,param_6);
    cVar9 = cVar7;
    if (cVar10 != '\0') {
      if (cVar8 == '\0') {
        if ((bVar6 & bVar5) == 0) goto LAB_00207502;
      }
      else if ((cVar8 == '\x02') && (*(char *)(param_7 + 0x4c) != '\0')) goto LAB_00207502;
    }
  }
  if (((bVar5 & cVar9 != '\0') != 0) &&
     ((*(char *)(param_7 + 0x3c) != '\0' || (*(char *)(param_7 + 0x3d) != '\x01')))) {
    local_2b8 = (undefined *******)&DAT_00000001;
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    pppppppuStack_200 = (undefined *******)_<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_3a0 = (undefined *******)&PTR_s_cannot_change_attribute___Source_002b5968;
    pppppppuStack_2b0 = (undefined *******)param_5;
    local_2a8 = (undefined *******)param_6;
LAB_00207040:
    local_208 = (undefined *******)&local_2b8;
    local_398 = (undefined ********)0x2;
    uStack_390 = &local_208;
    local_388 = 1;
    goto LAB_0020706d;
  }
  if (*(char *)(param_7 + 0x48) != '\0') {
    print_verbose_output(*(undefined *)(param_7 + 0x44),local_2f0,param_3,param_4,param_5,param_6);
  }
  if (*(char *)(param_7 + 0x38) == '\0') {
    cVar7 = *(char *)(param_7 + 0x41);
  }
  else {
    cVar7 = *(char *)(param_7 + 0x41);
    bVar12 = *(char *)(param_7 + 0x40) != '\0';
    if (param_11 == 0) {
      bVar12 = cVar7 != '\0';
    }
    if (cVar7 != '\0') {
      bVar12 = cVar7 != '\0';
    }
    uucore::features::fs::FileInformation::from_path(&local_3a0,param_3,param_4,bVar12);
    local_3c0 = (undefined *******)&DAT_00000001;
    local_3a8 = 1;
    local_148 = (undefined *******)&local_3c0;
    local_140 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_208 = (undefined *******)&PTR_s_cannot_stat_002b5838;
    pppppppuStack_200 = (undefined *******)0x1;
    local_1e8 = 0;
    local_1f8 = (undefined *******)&local_148;
    local_1f0 = 1;
                    /* try { // try from 00206ebb to 00206ecf has its CatchHandler @ 00207757 */
    uStack_3b8 = param_3;
    uStack_3b0 = param_4;
    core::option::Option<T>::map_or_else(&local_160,&local_208);
    local_1f8 = local_150;
    local_208 = local_160;
    pppppppuStack_200 = pppppppuStack_158;
    if ((undefined ********)local_3a0 != (undefined ********)0x0) {
      param_1[3] = local_150;
      param_1[1] = local_160;
      param_1[2] = pppppppuStack_158;
      *param_1 = 3;
      param_1[4] = local_398;
      return param_1;
    }
    local_2d8 = (undefined *******)CONCAT44(uStack_384,local_388);
    local_2e8 = (undefined *******)local_398;
    pppppppuStack_2e0 = (undefined *******)uStack_390;
    local_138 = CONCAT44(uStack_374,local_378);
    uStack_130 = CONCAT44(uStack_36c,uStack_370);
    local_128 = local_368;
    uStack_124 = uStack_364;
    uStack_120 = uStack_360;
    local_118 = local_358;
    uStack_110 = uStack_350;
    local_108 = local_348;
    uStack_100 = uStack_340;
    local_f8 = local_338;
    uStack_f0 = uStack_330;
    local_e8 = local_328;
    uStack_e0 = uStack_320;
    local_d8 = local_318;
    uStack_d4 = uStack_314;
    uStack_d0 = uStack_310;
    uStack_cc = uStack_30c;
    core::ptr::
    drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>as_quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::__closure__>
              (&local_208);
    local_2b8 = local_2e8;
    pppppppuStack_2b0 = pppppppuStack_2e0;
    local_2a8 = local_2d8;
    local_298 = local_138;
    uStack_290 = uStack_130;
    local_288 = local_128;
    uStack_284 = uStack_124;
    uStack_280 = (undefined4)uStack_120;
    uStack_27c = uStack_120._4_4_;
    local_278 = (undefined4)local_118;
    uStack_274 = local_118._4_4_;
    uStack_270 = (undefined4)uStack_110;
    uStack_26c = uStack_110._4_4_;
    local_268 = (undefined4)local_108;
    uStack_264 = local_108._4_4_;
    uStack_260 = (undefined4)uStack_100;
    uStack_25c = uStack_100._4_4_;
    local_258 = local_f8;
    uStack_250 = uStack_f0;
    local_248 = local_e8;
    uStack_240 = uStack_e0;
    local_238 = local_d8;
    uStack_234 = uStack_d4;
    uStack_230 = uStack_d0;
    uStack_22c = uStack_cc;
    lVar11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_10,&local_2b8);
    if (lVar11 != 0) {
      lVar11 = std::fs::hard_link(lVar11 + 0x90,param_5,param_6);
      if (lVar11 != 0) {
LAB_002071fe:
        *param_1 = 2;
        param_1[1] = lVar11;
        return param_1;
      }
LAB_00207502:
      *param_1 = 0xd;
      return param_1;
    }
  }
  context_for(&local_2e8,param_3,param_4,param_5,param_6);
  local_2c0 = pppppppuStack_2e0;
  local_2c8 = local_2d8;
  bVar12 = cVar7 != '\0';
  if ((bVar12) || ((param_11 != 0 && (*(char *)(param_7 + 0x40) != '\0')))) {
                    /* try { // try from 00206f9c to 00206fd2 has its CatchHandler @ 00207766 */
    std::fs::metadata(&local_3a0,param_3,param_4);
  }
  else {
    std::fs::symlink_metadata(&local_3a0,param_3,param_4);
  }
  ppppppppuVar4 = local_398;
  pppppppuVar3 = local_3a0;
  puVar1 = PTR_memcpy_002bb710;
  if ((undefined ********)local_3a0 == (undefined ********)0x2) {
    copy_file::___closure__(&local_3c0,param_3,param_4,local_398);
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_3b8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_3b8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_3b0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_3b0._4_4_;
    *param_1 = 4;
    local_398 = (undefined ********)local_3c0;
LAB_00206fed:
    param_1[1] = local_398;
  }
  else {
    (*(code *)PTR_memcpy_002bb710)(&local_208,&uStack_390,0xa0);
    (*(code *)puVar1)(&local_298,&local_1f8,0x90);
    local_2a8 = (undefined *******)uStack_390;
    local_2b8 = pppppppuVar3;
    pppppppuStack_2b0 = (undefined *******)ppppppppuVar4;
                    /* try { // try from 0020727d to 00207485 has its CatchHandler @ 00207766 */
    calculate_dest_permissions
              (&local_3a0,param_5,param_6,uStack_280,*(undefined *)(param_7 + 0x32),
               *(undefined *)(param_7 + 0x33),local_2c0,local_2c8);
    ppppppppuVar4 = local_398;
    if ((undefined ********)local_3a0 != (undefined ********)0xd) {
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_364;
      *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_370,uStack_374);
      *(ulong *)((long)param_1 + 0x34) = CONCAT44(local_368,uStack_36c);
      *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_380,uStack_384);
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_378,uStack_37c);
      *(undefined4 *)((long)param_1 + 0xc) = local_398._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_390;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_390._4_4_;
      *(undefined4 *)(param_1 + 3) = local_388;
      *param_1 = local_3a0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_398;
      goto LAB_002076dd;
    }
    handle_copy_mode(&local_3a0,param_3,param_4,param_5,param_6,param_7,local_2c0,local_2c8,
                     &local_2b8,param_8,param_11);
    if ((undefined ********)local_3a0 != (undefined ********)0xd) {
LAB_002076ae:
      param_1[7] = CONCAT44(uStack_364,local_368);
      param_1[5] = CONCAT44(uStack_374,local_378);
      param_1[6] = CONCAT44(uStack_36c,uStack_370);
      param_1[3] = CONCAT44(uStack_384,local_388);
      param_1[4] = CONCAT44(uStack_37c,uStack_380);
      *(undefined4 *)(param_1 + 1) = (undefined4)local_398;
      *(undefined4 *)((long)param_1 + 0xc) = local_398._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_390;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_390._4_4_;
      *param_1 = local_3a0;
      goto LAB_002076dd;
    }
    if ((bVar6 == 0) &&
       (local_3a0 = (undefined *******)
                    std::fs::set_permissions(param_5,param_6,(ulong)ppppppppuVar4 & 0xffffffff),
       (undefined ********)local_3a0 != (undefined ********)0x0)) {
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_3a0);
    }
    if ((cVar7 == '\0') && ((param_11 == 0 || (*(char *)(param_7 + 0x40) == '\0')))) {
      copy_attributes(&local_3a0,param_3,param_4,param_5,param_6,param_7 + 0x30);
      if ((undefined ********)local_3a0 != (undefined ********)0xd) goto LAB_002076ae;
    }
    else {
      uucore::features::fs::canonicalize(&local_3c0,param_3,param_4,0,1);
      if ((undefined ********)local_3c0 != (undefined ********)0x8000000000000000) {
        local_1f8 = (undefined *******)uStack_3b0;
        local_208 = local_3c0;
        pppppppuStack_200 = (undefined *******)uStack_3b8;
                    /* try { // try from 00207535 to 0020754b has its CatchHandler @ 0020772a */
        copy_attributes(&local_3a0,uStack_3b8,uStack_3b0,param_5,param_6,param_7 + 0x30);
        if ((undefined ********)local_3a0 != (undefined ********)0xd) {
          param_1[7] = CONCAT44(uStack_364,local_368);
          *(undefined4 *)(param_1 + 5) = local_378;
          *(undefined4 *)((long)param_1 + 0x2c) = uStack_374;
          *(undefined4 *)(param_1 + 6) = uStack_370;
          *(undefined4 *)((long)param_1 + 0x34) = uStack_36c;
          *(undefined4 *)(param_1 + 3) = local_388;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_384;
          *(undefined4 *)(param_1 + 4) = uStack_380;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_37c;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_398;
          *(undefined4 *)((long)param_1 + 0xc) = local_398._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_390;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_390._4_4_;
          *param_1 = local_3a0;
                    /* try { // try from 00207658 to 00207664 has its CatchHandler @ 00207725 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_208);
          if ((undefined ********)local_3c0 == (undefined ********)0x8000000000000000) {
                    /* try { // try from 00207676 to 0020769e has its CatchHandler @ 00207766 */
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                      (&local_3c0);
          }
          goto LAB_002076dd;
        }
                    /* try { // try from 0020755b to 00207567 has its CatchHandler @ 00207725 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_208);
        if ((undefined ********)local_3c0 != (undefined ********)0x8000000000000000)
        goto LAB_0020739a;
      }
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
                (&local_3c0);
    }
LAB_0020739a:
    if ((cVar7 == '\0') && (param_11 != 0)) {
      bVar12 = *(char *)(param_7 + 0x40) != '\0';
    }
    uucore::features::fs::FileInformation::from_path(&local_3a0,param_3,param_4,bVar12);
    ppppppppuVar4 = local_398;
    if ((undefined ********)local_3a0 != (undefined ********)0x0) {
      *param_1 = 2;
      param_1[1] = local_398;
      goto LAB_002076dd;
    }
    (*(code *)PTR_memcpy_002bb710)(local_b8,&uStack_390,0x88);
    local_c0 = (undefined *******)ppppppppuVar4;
                    /* try { // try from 002075a2 to 00207607 has its CatchHandler @ 00207766 */
    std::sys::pal::unix::os::split_paths::bytes_to_path(&local_3a0,param_5,param_6);
    hashbrown::map::HashMap<K,V,S,A>::insert(&local_208,param_10,&local_c0,&local_3a0);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_208);
    if (*local_2f0 != 0) {
      std::fs::metadata(&local_3a0,param_3,param_4);
      if ((int)local_3a0 == 2) {
        *param_1 = 2;
        goto LAB_00206fed;
      }
                    /* try { // try from 00207701 to 00207716 has its CatchHandler @ 00207766 */
      indicatif::progress_bar::ProgressBar::inc(local_2f0,uStack_350);
    }
    *param_1 = 0xd;
  }
LAB_002076dd:
  core::ptr::drop_in_place<alloc::string::String>(&local_2e8);
  return param_1;
}