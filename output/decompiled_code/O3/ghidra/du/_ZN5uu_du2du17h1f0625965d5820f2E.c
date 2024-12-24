undefined8 * __rustcall
uu_du::du(undefined8 *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
         undefined8 param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 uVar13;
  long lVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  long local_3f8;
  char local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  undefined auStack_3d8 [8];
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  long local_390;
  long lStack_388;
  long local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long local_358;
  undefined local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  long local_330;
  long local_328;
  long local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  long local_2f8;
  long local_2f0;
  undefined8 **local_2e8;
  code *local_2e0;
  undefined8 local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined local_2b8 [16];
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_270;
  long lStack_268;
  long local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined8 uStack_220;
  long local_218;
  long local_208;
  char local_200;
  undefined7 uStack_1ff;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long lStack_1a8;
  char local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined local_e0 [24];
  char local_c8;
  char cStack_c7;
  char cStack_c6;
  char cStack_c5;
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  char cStack_c0;
  char cStack_bf;
  char cStack_be;
  char cStack_bd;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  char cStack_b9;
  undefined8 local_b8;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
LAB_001f24a1:
    (*(code *)PTR_memcpy_00289ca0)(param_1,param_2,0x90);
  }
  else {
                    /* try { // try from 001f1c6a to 001f1cd3 has its CatchHandler @ 001f2647 */
    std::fs::read_dir(&local_208,param_2 + 8);
    if (local_200 == '\x02') {
      auStack_3d8 = (undefined  [8])
                    _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                    ::map_err_context(local_208,param_2 + 8);
      local_3d0 = &PTR_drop_in_place<uucore_mods_error_UIoError>_00283e90;
      local_3e0 = 0;
      local_3e8 = (undefined *)0x2;
      std::sync::mpmc::Sender<T>::send(&local_2c8,param_6,&local_3e8);
      uVar13 = uStack_2c0;
      puVar6 = local_2c8;
      auVar15[0] = -((char)local_2c8 == DAT_0010ef90);
      auVar15[1] = -(local_2c8._1_1_ == UNK_0010ef91);
      auVar15[2] = -(local_2c8._2_1_ == UNK_0010ef92);
      auVar15[3] = -(local_2c8._3_1_ == UNK_0010ef93);
      auVar15[4] = -(local_2c8._4_1_ == UNK_0010ef94);
      auVar15[5] = -(local_2c8._5_1_ == UNK_0010ef95);
      auVar15[6] = -(local_2c8._6_1_ == UNK_0010ef96);
      auVar15[7] = -(local_2c8._7_1_ == UNK_0010ef97);
      auVar15[8] = -((char)uStack_2c0 == UNK_0010ef98);
      auVar15[9] = -(uStack_2c0._1_1_ == UNK_0010ef99);
      auVar15[10] = -(uStack_2c0._2_1_ == UNK_0010ef9a);
      auVar15[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef9b);
      auVar15[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef9c);
      auVar15[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef9d);
      auVar15[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef9e);
      auVar15[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef9f);
      if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) goto LAB_001f24a1;
      (*(code *)PTR_memcpy_00289ca0)(auStack_3d8,local_2b8,0x90);
      local_3e0 = uVar13;
      local_3e8 = puVar6;
                    /* try { // try from 001f1d26 to 001f1d2f has its CatchHandler @ 001f2647 */
      uVar13 = ::alloc::boxed::Box<T>::new(&local_3e8);
      param_1[2] = uVar13;
      param_1[1] = 0;
      *param_1 = 2;
    }
    else {
      local_3f8 = local_208;
      local_3f0 = local_200;
      local_328 = *(long *)(param_3 + 8);
      local_330 = *(long *)(param_3 + 0x10) * 0x38 + local_328;
      cVar1 = *(char *)(param_3 + 0x34);
      cVar2 = *(char *)(param_3 + 0x33);
      cVar3 = *(char *)(param_3 + 0x30);
      cVar4 = *(char *)(param_3 + 0x32);
      param_4 = param_4 + 1;
      cVar5 = *(char *)(param_3 + 0x31);
      do {
        while( true ) {
                    /* try { // try from 001f1de0 to 001f1df2 has its CatchHandler @ 001f2666 */
          _<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_110,&local_3f8)
          ;
          if (local_110 == 0) {
                    /* try { // try from 001f248d to 001f249b has its CatchHandler @ 001f2647 */
            core::ptr::drop_in_place<std::fs::ReadDir>(&local_3f8);
            goto LAB_001f24a1;
          }
          if (local_108 == 0) break;
          local_320 = local_108;
          local_318 = local_100;
          local_300 = local_e8;
          local_310 = local_f8;
          uStack_308 = uStack_f0;
                    /* try { // try from 001f1e4b to 001f1e63 has its CatchHandler @ 001f265a */
          std::fs::DirEntry::path(local_348,&local_320);
                    /* try { // try from 001f1e74 to 001f1e88 has its CatchHandler @ 001f265f */
          Stat::new(&local_c8,local_340,local_338,&local_320,param_3);
          auVar16[0] = -(local_c8 == DAT_0010ee00);
          auVar16[1] = -(cStack_c7 == UNK_0010ee01);
          auVar16[2] = -(cStack_c6 == UNK_0010ee02);
          auVar16[3] = -(cStack_c5 == UNK_0010ee03);
          auVar16[4] = -(cStack_c4 == UNK_0010ee04);
          auVar16[5] = -(cStack_c3 == UNK_0010ee05);
          auVar16[6] = -(cStack_c2 == UNK_0010ee06);
          auVar16[7] = -(cStack_c1 == UNK_0010ee07);
          auVar16[8] = -(cStack_c0 == UNK_0010ee08);
          auVar16[9] = -(cStack_bf == UNK_0010ee09);
          auVar16[10] = -(cStack_be == UNK_0010ee0a);
          auVar16[0xb] = -(cStack_bd == UNK_0010ee0b);
          auVar16[0xc] = -(cStack_bc == UNK_0010ee0c);
          auVar16[0xd] = -(cStack_bb == UNK_0010ee0d);
          auVar16[0xe] = -(cStack_ba == UNK_0010ee0e);
          auVar16[0xf] = -(cStack_b9 == UNK_0010ee0f);
          if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
                    /* try { // try from 001f1eb1 to 001f1ef5 has its CatchHandler @ 001f2655 */
            uVar13 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                     ::map_err_context(local_b8,&local_320);
            local_3d0 = &PTR_drop_in_place<uucore_mods_error_UIoError>_00283e90;
            local_3e0 = 0;
            local_3e8 = (undefined *)0x2;
            auStack_3d8 = (undefined  [8])uVar13;
            std::sync::mpmc::Sender<T>::send(&local_2c8,param_6,&local_3e8);
            uVar13 = uStack_2c0;
            puVar6 = local_2c8;
            auVar17[0] = -((char)local_2c8 == DAT_0010ef90);
            auVar17[1] = -(local_2c8._1_1_ == UNK_0010ef91);
            auVar17[2] = -(local_2c8._2_1_ == UNK_0010ef92);
            auVar17[3] = -(local_2c8._3_1_ == UNK_0010ef93);
            auVar17[4] = -(local_2c8._4_1_ == UNK_0010ef94);
            auVar17[5] = -(local_2c8._5_1_ == UNK_0010ef95);
            auVar17[6] = -(local_2c8._6_1_ == UNK_0010ef96);
            auVar17[7] = -(local_2c8._7_1_ == UNK_0010ef97);
            auVar17[8] = -((char)uStack_2c0 == UNK_0010ef98);
            auVar17[9] = -(uStack_2c0._1_1_ == UNK_0010ef99);
            auVar17[10] = -(uStack_2c0._2_1_ == UNK_0010ef9a);
            auVar17[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef9b);
            auVar17[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef9c);
            auVar17[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef9d);
            auVar17[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef9e);
            auVar17[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef9f);
            if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar17[0xf] >> 7) << 0xf) != 0xffff) {
              (*(code *)PTR_memcpy_00289ca0)(auStack_3d8,local_2b8,0x90);
              local_3e0 = uVar13;
              local_3e8 = puVar6;
                    /* try { // try from 001f2547 to 001f2550 has its CatchHandler @ 001f2639 */
              uVar13 = ::alloc::boxed::Box<T>::new(&local_3e8);
              goto LAB_001f2551;
            }
LAB_001f1f16:
                    /* try { // try from 001f1f16 to 001f1f22 has its CatchHandler @ 001f2653 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_348);
                    /* try { // try from 001f1f23 to 001f1f76 has its CatchHandler @ 001f2664 */
            core::ptr::drop_in_place<std::fs::DirEntry>(&local_320);
          }
          else {
            (*(code *)PTR_memcpy_00289ca0)(&local_208,&local_c8,0x90);
            local_2f8 = local_328;
            local_2f0 = local_330;
            while( true ) {
              lVar14 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_2f8);
              if (lVar14 == 0) break;
                    /* try { // try from 001f2009 to 001f2011 has its CatchHandler @ 001f268c */
              std::sys::os_str::bytes::Slice::to_string_lossy(&local_3e8,local_1c0,uStack_1b8);
                    /* try { // try from 001f201c to 001f2024 has its CatchHandler @ 001f267d */
              cVar12 = glob::Pattern::matches(lVar14,local_3e0,auStack_3d8);
              if (cVar12 != '\0') {
                    /* try { // try from 001f2316 to 001f23bc has its CatchHandler @ 001f2651 */
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3e8);
                auVar21 = local_2b8;
LAB_001f2328:
                local_2b8 = auVar21;
                if (cVar1 != '\0') {
                  local_2c8 = (undefined *)0x1;
                  uStack_2c0 = local_1c0;
                  local_2b8._0_8_ = uStack_1b8;
                  local_2b8._9_7_ = auVar21._9_7_;
                  local_2b8[8] = 1;
                  local_2d0 = &local_2c8;
                  local_2e8 = &local_2d0;
                  local_2e0 = _<&T_as_core::fmt::Display>::fmt;
                  local_3e8 = &DAT_00283e38;
                  local_3e0 = 2;
                  uStack_3c8 = 0;
                  local_3d0 = (undefined **)0x1;
                  auStack_3d8 = (undefined  [8])&local_2e8;
                  std::io::stdio::_print(&local_3e8);
                }
                goto LAB_001f23bd;
              }
                    /* try { // try from 001f202d to 001f207f has its CatchHandler @ 001f268c */
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3e8);
              std::fs::DirEntry::file_name(local_e0,&local_320);
              std::sys::os_str::bytes::Buf::into_string(&local_3e8,local_e0);
              uStack_2c0 = local_3e0;
              local_2c8 = local_3e8;
              local_2b8 = _auStack_3d8;
              core::result::Result<T,E>::unwrap(&local_2e8,&local_2c8);
                    /* try { // try from 001f2090 to 001f2098 has its CatchHandler @ 001f266b */
              cVar12 = glob::Pattern::matches(lVar14,local_2e0,local_2d8);
              if (cVar12 != '\0') {
                core::ptr::drop_in_place<alloc::string::String>(&local_2e8);
                auVar21 = local_2b8;
                goto LAB_001f2328;
              }
                    /* try { // try from 001f20a1 to 001f20a8 has its CatchHandler @ 001f268c */
              core::ptr::drop_in_place<alloc::string::String>(&local_2e8);
            }
            if (local_208 == 0 && CONCAT71(uStack_1ff,local_200) == 0) {
LAB_001f2131:
              if (local_188 == '\0') {
                param_2[0xd] = param_2[0xd] + 1;
                param_2[0xb] = param_2[0xb] + local_1b0;
                param_2[0xc] = param_2[0xc] + lStack_1a8;
                if (cVar3 == '\0') {
                    /* try { // try from 001f246d to 001f2479 has its CatchHandler @ 001f2655 */
                  core::ptr::drop_in_place<uu_du::Stat>(&local_208);
                }
                else {
                  (*(code *)PTR_memcpy_00289ca0)(&local_3e8,&local_208,0x90);
                    /* try { // try from 001f2433 to 001f2447 has its CatchHandler @ 001f2642 */
                  local_358 = param_4;
                  std::sync::mpmc::Sender<T>::send(&local_2c8,param_6,&local_3e8);
                  uVar13 = uStack_2c0;
                  puVar6 = local_2c8;
                  auVar20[0] = -((char)local_2c8 == DAT_0010ef90);
                  auVar20[1] = -(local_2c8._1_1_ == UNK_0010ef91);
                  auVar20[2] = -(local_2c8._2_1_ == UNK_0010ef92);
                  auVar20[3] = -(local_2c8._3_1_ == UNK_0010ef93);
                  auVar20[4] = -(local_2c8._4_1_ == UNK_0010ef94);
                  auVar20[5] = -(local_2c8._5_1_ == UNK_0010ef95);
                  auVar20[6] = -(local_2c8._6_1_ == UNK_0010ef96);
                  auVar20[7] = -(local_2c8._7_1_ == UNK_0010ef97);
                  auVar20[8] = -((char)uStack_2c0 == UNK_0010ef98);
                  auVar20[9] = -(uStack_2c0._1_1_ == UNK_0010ef99);
                  auVar20[10] = -(uStack_2c0._2_1_ == UNK_0010ef9a);
                  auVar20[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef9b);
                  auVar20[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef9c);
                  auVar20[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef9d);
                  auVar20[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef9e);
                  auVar20[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef9f);
                  if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar20[0xf] >> 7) << 0xf) != 0xffff) {
                    (*(code *)PTR_memcpy_00289ca0)(auStack_3d8,local_2b8,0x90);
                    local_3e0 = uVar13;
                    local_3e8 = puVar6;
                    /* try { // try from 001f2625 to 001f262e has its CatchHandler @ 001f2634 */
                    uVar13 = ::alloc::boxed::Box<T>::new(&local_3e8);
                    goto LAB_001f2551;
                  }
                }
                goto LAB_001f1f16;
              }
              if ((((cVar4 == '\0') || (local_208 != 1)) || (*param_2 != 1)) ||
                 (local_1e8 == param_2[4])) {
                (*(code *)PTR_memcpy_00289ca0)(&local_3e8,&local_208,0x90);
                    /* try { // try from 001f2189 to 001f22f0 has its CatchHandler @ 001f2642 */
                du(&local_2c8,&local_3e8,param_3,param_4,param_5,param_6);
                auVar18[0] = -((char)local_2c8 == DAT_0010ee00);
                auVar18[1] = -(local_2c8._1_1_ == UNK_0010ee01);
                auVar18[2] = -(local_2c8._2_1_ == UNK_0010ee02);
                auVar18[3] = -(local_2c8._3_1_ == UNK_0010ee03);
                auVar18[4] = -(local_2c8._4_1_ == UNK_0010ee04);
                auVar18[5] = -(local_2c8._5_1_ == UNK_0010ee05);
                auVar18[6] = -(local_2c8._6_1_ == UNK_0010ee06);
                auVar18[7] = -(local_2c8._7_1_ == UNK_0010ee07);
                auVar18[8] = -((char)uStack_2c0 == UNK_0010ee08);
                auVar18[9] = -(uStack_2c0._1_1_ == UNK_0010ee09);
                auVar18[10] = -(uStack_2c0._2_1_ == UNK_0010ee0a);
                auVar18[0xb] = -(uStack_2c0._3_1_ == UNK_0010ee0b);
                auVar18[0xc] = -(uStack_2c0._4_1_ == UNK_0010ee0c);
                auVar18[0xd] = -(uStack_2c0._5_1_ == UNK_0010ee0d);
                auVar18[0xe] = -(uStack_2c0._6_1_ == UNK_0010ee0e);
                auVar18[0xf] = -(uStack_2c0._7_1_ == UNK_0010ee0f);
                uVar13 = local_2b8._0_8_;
                if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar18[0xf] >> 7) << 0xf) != 0xffff) {
                  local_128 = local_280;
                  uVar10 = local_128;
                  uStack_120 = uStack_278;
                  uVar11 = uStack_120;
                  local_138 = local_290;
                  uVar8 = local_138;
                  uStack_130 = uStack_288;
                  uVar9 = uStack_130;
                  local_148 = local_2a0;
                  uStack_140 = uStack_298;
                  local_158 = local_2b8._8_8_;
                  uStack_150 = uStack_2a8;
                  local_178 = local_258;
                  uStack_170 = uStack_250;
                  local_168 = local_248;
                  uVar13 = local_168;
                  uStack_160 = uStack_240;
                  uVar7 = uStack_160;
                  if (cVar5 == '\0') {
                    param_2[0xb] = param_2[0xb] + local_270;
                    param_2[0xc] = param_2[0xc] + lStack_268;
                    param_2[0xd] = param_2[0xd] + local_260;
                  }
                  local_138._0_4_ = (undefined4)local_290;
                  local_138._4_4_ = (undefined4)((ulong)local_290 >> 0x20);
                  uStack_130._0_4_ = (undefined4)uStack_288;
                  uStack_130._4_4_ = (undefined4)((ulong)uStack_288 >> 0x20);
                  local_128._0_4_ = (undefined4)local_280;
                  local_128._4_4_ = (undefined4)((ulong)local_280 >> 0x20);
                  uStack_120._0_4_ = (undefined4)uStack_278;
                  uStack_120._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
                  local_3a0 = (undefined4)local_128;
                  uStack_39c = local_128._4_4_;
                  uStack_398 = (undefined4)uStack_120;
                  uStack_394 = uStack_120._4_4_;
                  local_3b0 = (undefined4)local_138;
                  uStack_3ac = local_138._4_4_;
                  uStack_3a8 = (undefined4)uStack_130;
                  uStack_3a4 = uStack_130._4_4_;
                  local_3c0 = local_2a0;
                  uStack_3b8 = uStack_298;
                  uStack_3c8 = uStack_2a8;
                  local_168._0_4_ = (undefined4)local_248;
                  local_168._4_4_ = (undefined4)((ulong)local_248 >> 0x20);
                  uStack_160._0_4_ = (undefined4)uStack_240;
                  uStack_160._4_4_ = (undefined4)((ulong)uStack_240 >> 0x20);
                  local_368 = (undefined4)local_168;
                  uStack_364 = local_168._4_4_;
                  uStack_360 = (undefined4)uStack_160;
                  uStack_35c = uStack_160._4_4_;
                  local_378 = local_258;
                  uStack_370 = uStack_250;
                  local_3e0 = uStack_2c0;
                  local_3e8 = local_2c8;
                  local_390 = local_270;
                  lStack_388 = lStack_268;
                  local_380 = local_260;
                  local_358 = param_4;
                  local_168 = uVar13;
                  uStack_160 = uVar7;
                  local_138 = uVar8;
                  uStack_130 = uVar9;
                  local_128 = uVar10;
                  uStack_120 = uVar11;
                  _auStack_3d8 = local_2b8;
                  std::sync::mpmc::Sender<T>::send(&local_2c8,param_6,&local_3e8);
                  uVar13 = uStack_2c0;
                  puVar6 = local_2c8;
                  auVar19[0] = -((char)local_2c8 == DAT_0010ef90);
                  auVar19[1] = -(local_2c8._1_1_ == UNK_0010ef91);
                  auVar19[2] = -(local_2c8._2_1_ == UNK_0010ef92);
                  auVar19[3] = -(local_2c8._3_1_ == UNK_0010ef93);
                  auVar19[4] = -(local_2c8._4_1_ == UNK_0010ef94);
                  auVar19[5] = -(local_2c8._5_1_ == UNK_0010ef95);
                  auVar19[6] = -(local_2c8._6_1_ == UNK_0010ef96);
                  auVar19[7] = -(local_2c8._7_1_ == UNK_0010ef97);
                  auVar19[8] = -((char)uStack_2c0 == UNK_0010ef98);
                  auVar19[9] = -(uStack_2c0._1_1_ == UNK_0010ef99);
                  auVar19[10] = -(uStack_2c0._2_1_ == UNK_0010ef9a);
                  auVar19[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef9b);
                  auVar19[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef9c);
                  auVar19[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef9d);
                  auVar19[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef9e);
                  auVar19[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef9f);
                  if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) goto LAB_001f1f16;
                  (*(code *)PTR_memcpy_00289ca0)(auStack_3d8,local_2b8,0x90);
                  local_3e0 = uVar13;
                  local_3e8 = puVar6;
                    /* try { // try from 001f25e4 to 001f25ed has its CatchHandler @ 001f2634 */
                  uVar13 = ::alloc::boxed::Box<T>::new(&local_3e8);
                }
LAB_001f2551:
                param_1[2] = uVar13;
                param_1[1] = 0;
                *param_1 = 2;
                    /* try { // try from 001f2571 to 001f257d has its CatchHandler @ 001f263e */
                core::ptr::drop_in_place<std::path::PathBuf>(local_348);
                    /* try { // try from 001f257e to 001f258a has its CatchHandler @ 001f2640 */
                core::ptr::drop_in_place<std::fs::DirEntry>(&local_320);
                goto LAB_001f258b;
              }
            }
            else {
              local_228 = local_1f8;
              uStack_220 = uStack_1f0;
              local_218 = local_1e8;
                    /* try { // try from 001f20e2 to 001f2130 has its CatchHandler @ 001f2651 */
              lVar14 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_5,&local_228);
              if (lVar14 == 0) {
LAB_001f210f:
                hashbrown::map::HashMap<K,V,S,A>::insert(param_5,local_228,uStack_220,local_218);
                goto LAB_001f2131;
              }
              if (cVar2 != '\0') {
                if (cVar3 != '\0') goto LAB_001f210f;
                param_2[0xd] = param_2[0xd] + 1;
              }
            }
LAB_001f23bd:
                    /* try { // try from 001f23bd to 001f23c9 has its CatchHandler @ 001f265f */
            core::ptr::drop_in_place<uu_du::Stat>(&local_208);
                    /* try { // try from 001f23ca to 001f23d6 has its CatchHandler @ 001f265a */
            core::ptr::drop_in_place<std::path::PathBuf>(local_348);
                    /* try { // try from 001f23df to 001f23e3 has its CatchHandler @ 001f2666 */
            core::ptr::drop_in_place<std::fs::DirEntry>(&local_320);
          }
        }
        auVar21 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from();
        local_3e0 = 0;
        local_3e8 = (undefined *)0x2;
        _auStack_3d8 = auVar21;
        std::sync::mpmc::Sender<T>::send(&local_2c8,param_6,&local_3e8);
        uVar13 = uStack_2c0;
        puVar6 = local_2c8;
        auVar21[0] = -((char)local_2c8 == DAT_0010ef90);
        auVar21[1] = -(local_2c8._1_1_ == UNK_0010ef91);
        auVar21[2] = -(local_2c8._2_1_ == UNK_0010ef92);
        auVar21[3] = -(local_2c8._3_1_ == UNK_0010ef93);
        auVar21[4] = -(local_2c8._4_1_ == UNK_0010ef94);
        auVar21[5] = -(local_2c8._5_1_ == UNK_0010ef95);
        auVar21[6] = -(local_2c8._6_1_ == UNK_0010ef96);
        auVar21[7] = -(local_2c8._7_1_ == UNK_0010ef97);
        auVar21[8] = -((char)uStack_2c0 == UNK_0010ef98);
        auVar21[9] = -(uStack_2c0._1_1_ == UNK_0010ef99);
        auVar21[10] = -(uStack_2c0._2_1_ == UNK_0010ef9a);
        auVar21[0xb] = -(uStack_2c0._3_1_ == UNK_0010ef9b);
        auVar21[0xc] = -(uStack_2c0._4_1_ == UNK_0010ef9c);
        auVar21[0xd] = -(uStack_2c0._5_1_ == UNK_0010ef9d);
        auVar21[0xe] = -(uStack_2c0._6_1_ == UNK_0010ef9e);
        auVar21[0xf] = -(uStack_2c0._7_1_ == UNK_0010ef9f);
      } while ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff);
      (*(code *)PTR_memcpy_00289ca0)(auStack_3d8,local_2b8,0x90);
      local_3e0 = uVar13;
      local_3e8 = puVar6;
                    /* try { // try from 001f24e9 to 001f24f7 has its CatchHandler @ 001f2640 */
      uVar13 = ::alloc::boxed::Box<T>::new(&local_3e8);
      param_1[2] = uVar13;
      param_1[1] = 0;
      *param_1 = 2;
LAB_001f258b:
                    /* try { // try from 001f258b to 001f2594 has its CatchHandler @ 001f2647 */
      core::ptr::drop_in_place<std::fs::ReadDir>(&local_3f8);
    }
    core::ptr::drop_in_place<uu_du::Stat>(param_2);
  }
  return param_1;
}