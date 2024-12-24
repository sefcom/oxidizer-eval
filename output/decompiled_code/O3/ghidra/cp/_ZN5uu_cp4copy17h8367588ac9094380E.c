long * __rustcall
uu_cp::copy(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
           long param_6)

{
  char cVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined auVar12 [16];
  undefined local_319;
  undefined8 ******local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  long *local_2f8;
  ulong local_2f0;
  undefined8 ******local_2e8;
  undefined8 ******ppppppuStack_2e0;
  undefined8 ******local_2d8;
  code *local_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 ******local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 ******local_1d8;
  long local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  undefined local_1a0 [16];
  undefined8 ******ppppppuStack_190;
  code *pcStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_319 = TargetType::determine(param_3,param_4,param_5);
  local_2f0 = CONCAT71(local_2f0._1_7_,local_319);
  local_2c0 = param_4;
  local_2b8 = param_5;
  verify_target_type(&local_298,param_4,param_5,&local_319);
  if ((undefined8 *******)local_298 != (undefined8 *******)0xd) {
    param_1[7] = CONCAT44(uStack_25c,uStack_260);
    param_1[5] = CONCAT44(uStack_26c,uStack_270);
    param_1[6] = CONCAT44(uStack_264,local_268);
    param_1[3] = (long)uStack_280;
    param_1[4] = local_278;
    param_1[1] = (long)uStack_290;
    param_1[2] = (long)local_288;
    *param_1 = (long)local_298;
    return param_1;
  }
  std::thread::local::LocalKey<T>::try_with(&local_298);
  auVar12 = core::result::Result<T,E>::expect(&local_298);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_c8 = (undefined4)local_278;
  uStack_c4 = local_278._4_4_;
  uStack_c0 = uStack_270;
  uStack_bc = uStack_26c;
  local_d8 = (undefined4)local_288;
  uStack_d4 = local_288._4_4_;
  uStack_d0 = (undefined4)uStack_280;
  uStack_cc = uStack_280._4_4_;
  local_e8 = (int)local_298;
  uStack_e4 = local_298._4_4_;
  uStack_e0 = (undefined4)uStack_290;
  uStack_dc = uStack_290._4_4_;
                    /* try { // try from 0020296b to 00202977 has its CatchHandler @ 0020337f */
  _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_298);
  local_98 = (undefined4)local_278;
  uStack_94 = local_278._4_4_;
  uStack_90 = uStack_270;
  uStack_8c = uStack_26c;
  local_a8 = (undefined4)local_288;
  uStack_a4 = local_288._4_4_;
  uStack_a0 = (undefined4)uStack_280;
  uStack_9c = uStack_280._4_4_;
  local_b8 = (int)local_298;
  uStack_b4 = local_298._4_4_;
  uStack_b0 = (undefined4)uStack_290;
  uStack_ac = uStack_290._4_4_;
                    /* try { // try from 002029a8 to 002029d7 has its CatchHandler @ 00203394 */
  std::thread::local::LocalKey<T>::try_with(&local_298);
  auVar12 = core::result::Result<T,E>::expect(&local_298);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_68 = (undefined4)local_278;
  uStack_64 = local_278._4_4_;
  uStack_60 = uStack_270;
  uStack_5c = uStack_26c;
  local_78 = (undefined4)local_288;
  uStack_74 = local_288._4_4_;
  uStack_70 = (undefined4)uStack_280;
  uStack_6c = uStack_280._4_4_;
  local_88 = (int)local_298;
  uStack_84 = local_298._4_4_;
  uStack_80 = (undefined4)uStack_290;
  uStack_7c = uStack_290._4_4_;
                    /* try { // try from 00202a08 to 00202a37 has its CatchHandler @ 0020338c */
  std::thread::local::LocalKey<T>::try_with(&local_298);
  auVar12 = core::result::Result<T,E>::expect(&local_298);
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher
            (&local_298,param_3,auVar12._0_8_,auVar12._8_8_);
  local_f8 = (undefined4)local_278;
  uStack_f4 = local_278._4_4_;
  uStack_f0 = uStack_270;
  uStack_ec = uStack_26c;
  local_108 = (undefined4)local_288;
  uStack_104 = local_288._4_4_;
  uStack_100 = (undefined4)uStack_280;
  uStack_fc = uStack_280._4_4_;
  local_118 = (int)local_298;
  uStack_114 = local_298._4_4_;
  uStack_110 = (undefined4)uStack_290;
  uStack_10c = uStack_290._4_4_;
  if (*(char *)(param_6 + 0x49) == '\0') {
    local_1e8 = (undefined8 *******)0x0;
  }
  else {
                    /* try { // try from 00202a76 to 00202aef has its CatchHandler @ 00203362 */
    auVar12 = disk_usage(param_2,param_3,*(undefined *)(param_6 + 0x46));
    if (auVar12._0_8_ != 0) {
      *param_1 = 2;
      param_1[1] = auVar12._8_8_;
LAB_0020329e:
                    /* try { // try from 0020329e to 002032aa has its CatchHandler @ 0020338c */
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&local_118)
      ;
                    /* try { // try from 002032ab to 002032b7 has its CatchHandler @ 00203394 */
      core::ptr::
      drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>
                (&local_88);
                    /* try { // try from 002032b8 to 002032c4 has its CatchHandler @ 0020337f */
      core::ptr::
      drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>
                (&local_b8);
      goto LAB_002032c5;
    }
    indicatif::progress_bar::ProgressBar::new(&local_2e8,auVar12._8_8_);
                    /* try { // try from 00202af0 to 00202b1e has its CatchHandler @ 00203350 */
    indicatif::style::ProgressStyle::with_template
              (&local_298,"{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}",0x40);
    core::result::Result<T,E>::unwrap(local_1a0,&local_298);
                    /* try { // try from 00202b1f to 00202b36 has its CatchHandler @ 00203331 */
    indicatif::progress_bar::ProgressBar::with_style(&local_318,&local_2e8,local_1a0);
                    /* try { // try from 00202b37 to 00202b3c has its CatchHandler @ 0020331f */
    auVar12 = uucore::util_name();
                    /* try { // try from 00202b3d to 00202b51 has its CatchHandler @ 0020331d */
    indicatif::progress_bar::ProgressBar::with_message
              (&local_2b0,&local_318,auVar12._0_8_,auVar12._8_8_);
                    /* try { // try from 00202b52 to 00202b5c has its CatchHandler @ 0020330b */
    indicatif::progress_bar::ProgressBar::tick(&local_2b0);
    local_1d8 = local_2a0;
    local_1e8 = (undefined8 *******)CONCAT44(uStack_2ac,local_2b0);
    uStack_1e0 = uStack_2a8;
    uStack_1dc = uStack_2a4;
  }
  local_1a8 = param_2 + param_3 * 0x18;
  local_1b0 = param_2;
  lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_1b0);
  if (lVar7 == 0) {
    lVar7 = 0xd;
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
    local_298 = (undefined **)local_1e8;
    local_288 = (undefined8 *******)local_1d8;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x4c);
    cVar2 = *(char *)(param_6 + 0x4e);
    bVar9 = false;
    bVar10 = false;
    local_2f0 = local_2f0 & 0xff;
    local_1b8 = (ulong)*(byte *)(param_6 + 0x44);
    local_1c0 = (ulong)*(byte *)(param_6 + 0x42);
    local_2f8 = param_1;
    local_1c8 = param_6;
    do {
      pppppppuVar3 = *(undefined8 ********)(lVar7 + 8);
      pppppppuVar4 = *(undefined8 ********)(lVar7 + 0x10);
                    /* try { // try from 00202c18 to 00202c28 has its CatchHandler @ 0020339e */
      uucore::features::fs::normalize_path(&local_2b0,pppppppuVar3,pppppppuVar4);
                    /* try { // try from 00202d70 to 00202ef1 has its CatchHandler @ 002033d1 */
      if ((cVar1 == '\0') &&
         (lVar8 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&local_e8,&local_2b0), lVar8 != 0)) {
        std::fs::symlink_metadata(&local_298,pppppppuVar3,pppppppuVar4);
        if ((int)local_298 == 2) {
          *local_2f8 = 2;
          local_2f8[1] = (long)uStack_290;
          param_1 = local_2f8;
LAB_00203285:
                    /* try { // try from 00203287 to 00203290 has its CatchHandler @ 00203348 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_2b0);
                    /* try { // try from 00203291 to 0020329d has its CatchHandler @ 00203362 */
          core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>
                    (&local_1e8);
          goto LAB_0020329e;
        }
        bVar11 = (uStack_260 & 0xf000) == 0x4000;
        local_318 = (undefined8 ******)0x11e0fc;
        if (bVar11) {
          local_318 = (undefined8 ******)0x12ce95;
        }
        uStack_310 = (undefined8 *******)((ulong)bVar11 * 5 + 4);
        local_1a0 = uucore::util_name();
        local_2e8 = (undefined8 ******)local_1a0;
        ppppppuStack_2e0 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
        local_298 = (undefined **)&DAT_002b5668;
        uStack_290 = (undefined8 *******)0x2;
        local_278 = 0;
        local_288 = &local_2e8;
        uStack_280 = (code *)0x1;
        std::io::stdio::_eprint(&local_298);
        local_1a0._0_8_ = &DAT_00000001;
        pcStack_188 = (code *)CONCAT71(pcStack_188._1_7_,1);
        local_2e8 = &local_318;
        ppppppuStack_2e0 = (undefined8 ******)_<&T_as_core::fmt::Display>::fmt;
        local_2d8 = (undefined8 ******)local_1a0;
        local_2d0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_298 = &PTR_s_source_002b5688;
        uStack_290 = (undefined8 *******)0x3;
        local_278 = 0;
        local_288 = &local_2e8;
        uStack_280 = (code *)0x2;
        local_1a0._8_8_ = pppppppuVar3;
        ppppppuStack_190 = pppppppuVar4;
        std::io::stdio::_eprint(&local_298);
      }
      else {
                    /* try { // try from 00202c34 to 00202ce6 has its CatchHandler @ 002033d1 */
        construct_dest_path(local_1a0,pppppppuVar3,pppppppuVar4,local_2c0,local_2b8,local_2f0,
                            local_1c0,local_1b8);
        if (local_1a0._0_4_ == 0xd) {
          local_308 = pcStack_188;
          local_318 = (undefined8 ******)local_1a0._8_8_;
          uStack_310 = (undefined8 *******)ppppppuStack_190;
        }
        else {
          local_268 = local_170;
          uStack_264 = uStack_16c;
          uStack_260 = uStack_168;
          uStack_25c = uStack_164;
          local_278 = CONCAT44(uStack_17c,local_180);
          uStack_270 = uStack_178;
          uStack_26c = uStack_174;
          local_288 = (undefined8 *******)ppppppuStack_190;
          uStack_280 = pcStack_188;
          local_298 = (undefined **)local_1a0._0_8_;
          uStack_290 = (undefined8 *******)local_1a0._8_8_;
          copy::___closure__(&local_318,local_2c0,local_2b8,&local_298);
        }
                    /* try { // try from 00202ce7 to 00202d6a has its CatchHandler @ 002033d6 */
        std::fs::metadata(&local_298,&local_318);
        if ((int)local_298 != 2) {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                    (&local_298);
          std::fs::symlink_metadata(&local_298,&local_318);
          if ((int)local_298 != 2) {
            if ((uStack_260 & 0xf000) == 0xa000) goto LAB_00202d4a;
            goto LAB_00202f3b;
          }
LAB_00203196:
          *local_2f8 = 2;
          local_2f8[1] = (long)uStack_290;
LAB_0020327b:
                    /* try { // try from 0020327b to 00203284 has its CatchHandler @ 00203306 */
          param_1 = local_2f8;
          core::ptr::drop_in_place<std::path::PathBuf>(&local_318);
          goto LAB_00203285;
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_298);
LAB_00202d4a:
        std::fs::metadata(&local_298,lVar7);
        if ((int)local_298 == 2) {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                    (&local_298);
        }
        else {
                    /* try { // try from 00202f00 to 00202faa has its CatchHandler @ 002033d6 */
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                    (&local_298);
          std::fs::symlink_metadata(&local_298,lVar7);
          if ((int)local_298 == 2) goto LAB_00203196;
          if ((uStack_260 & 0xf000) == 0xa000) goto LAB_00202f3b;
        }
        if (cVar2 == '\x01') {
LAB_00202f3b:
          lVar7 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&local_118,&local_318);
          if ((cVar1 != '\x02') && (lVar7 != 0)) {
            local_40 = (undefined4)uStack_310;
            uStack_3c = uStack_310._4_4_;
            uStack_38 = (undefined4)local_308;
            uStack_34 = local_308._4_4_;
            local_1a0._0_8_ = &local_40;
            local_1a0._8_8_ = _<std::path::Display_as_core::fmt::Display>::fmt;
            ppppppuStack_190 = &local_2e8;
            pcStack_188 = _<std::path::Display_as_core::fmt::Display>::fmt;
            local_298 = &PTR_s_will_not_overwrite_just_created___002b56b8;
            uStack_290 = (undefined8 *******)0x3;
            local_278 = 0;
            local_288 = (undefined8 *******)local_1a0;
            uStack_280 = (code *)0x2;
                    /* try { // try from 00203241 to 00203255 has its CatchHandler @ 00203301 */
            local_2e8 = pppppppuVar3;
            ppppppuStack_2e0 = pppppppuVar4;
            core::option::Option<T>::map_or_else(&local_58,&local_298);
            local_2f8[3] = local_48;
            *(undefined4 *)(local_2f8 + 1) = local_58;
            *(undefined4 *)((long)local_2f8 + 0xc) = uStack_54;
            *(undefined4 *)(local_2f8 + 2) = uStack_50;
            *(undefined4 *)((long)local_2f8 + 0x14) = uStack_4c;
            *local_2f8 = 4;
            goto LAB_0020327b;
          }
        }
        copy_source(local_1a0,&local_1e8,pppppppuVar3,pppppppuVar4,local_2c0,local_2b8,local_2f0,
                    param_6,&local_b8,&local_118,&local_88);
        uVar6 = local_1a0._0_8_;
        if ((undefined8 *******)local_1a0._0_8_ == (undefined8 *******)0xd) {
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_298,&local_318);
          local_2d8 = local_288;
          local_2e8 = (undefined8 ******)local_298;
          ppppppuStack_2e0 = uStack_290;
          hashbrown::map::HashMap<K,V,S,A>::insert(&local_118,&local_2e8);
        }
        else {
          local_268 = local_170;
          uStack_264 = uStack_16c;
          uStack_260 = uStack_168;
          uStack_25c = uStack_164;
          local_278 = CONCAT44(uStack_17c,local_180);
          uStack_270 = uStack_178;
          uStack_26c = uStack_174;
          local_288 = (undefined8 *******)ppppppuStack_190;
          uStack_280 = pcStack_188;
          local_298 = (undefined **)local_1a0._0_8_;
          uStack_290 = (undefined8 *******)local_1a0._8_8_;
                    /* try { // try from 00202ffd to 00203004 has its CatchHandler @ 0020336a */
          show_error_if_needed(&local_298);
          pppppppuVar3 = (undefined8 *******)local_298;
          cVar5 = (char)uStack_290;
                    /* try { // try from 00203019 to 0020307b has its CatchHandler @ 002033a3 */
          core::ptr::drop_in_place<uu_cp::Error>(&local_298);
          if (cVar5 != '\0') {
            bVar9 = true;
          }
          bVar10 = bVar9;
          if ((int)pppppppuVar3 != 8) {
            bVar10 = true;
            bVar9 = true;
          }
        }
                    /* try { // try from 0020307f to 00203088 has its CatchHandler @ 00203387 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_318);
        param_6 = local_1c8;
        if (((int)uVar6 == 0xd) && ((int)local_1a0._0_8_ != 0xd)) {
                    /* try { // try from 002030a3 to 002030af has its CatchHandler @ 002033d1 */
          core::ptr::drop_in_place<uu_cp::Error>(local_1a0);
        }
      }
      local_288 = (undefined8 *******)local_2a0;
      local_298 = (undefined **)CONCAT44(uStack_2ac,local_2b0);
      uStack_290 = (undefined8 *******)CONCAT44(uStack_2a4,uStack_2a8);
                    /* try { // try from 002030cd to 002030dc has its CatchHandler @ 0020339c */
      hashbrown::map::HashMap<K,V,S,A>::insert(&local_e8,&local_298);
      lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_1b0);
    } while (lVar7 != 0);
    lVar7 = (ulong)!bVar10 * 8 + 5;
    param_1 = local_2f8;
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
    local_298 = (undefined **)local_1e8;
    local_288 = (undefined8 *******)local_1d8;
  }
  local_1e8 = (undefined8 *******)local_298;
  local_1d8 = local_288;
  if ((undefined8 *******)local_298 != (undefined8 *******)0x0) {
    uStack_290 = (undefined8 *******)CONCAT44(uStack_1dc,uStack_1e0);
                    /* try { // try from 00203149 to 00203156 has its CatchHandler @ 00203333 */
    indicatif::progress_bar::ProgressBar::finish(&local_298);
                    /* try { // try from 0020315a to 00203166 has its CatchHandler @ 00203348 */
    core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&local_298);
    pppppppuVar3 = (undefined8 *******)local_298;
    pppppppuVar4 = local_288;
  }
  local_288 = pppppppuVar4;
  local_298 = (undefined **)pppppppuVar3;
  *param_1 = lVar7;
                    /* try { // try from 0020316a to 00203176 has its CatchHandler @ 0020338c */
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&local_118);
                    /* try { // try from 00203177 to 00203183 has its CatchHandler @ 00203394 */
  core::ptr::
  drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>
            (&local_88);
                    /* try { // try from 00203184 to 00203190 has its CatchHandler @ 0020337f */
  core::ptr::
  drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>
            (&local_b8);
LAB_002032c5:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&local_e8);
  return param_1;
}