void _ZN5uu_cp7copydir13copy_direntry17he742c4f146ad7097E
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
                    /* try { // try from 0020e084 to 0020e0b4 has its CatchHandler @ 0020e6a0 */
  bVar5 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(uStack_1f0);
  if ((bVar5 & *(char *)(param_4 + 0x41) == '\0') == 0) {
                    /* try { // try from 0020e0d1 to 0020e160 has its CatchHandler @ 0020e6a0 */
    cVar6 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(uStack_1f0,local_1e8);
    if ((cVar6 == '\0') ||
       (cVar6 = _ZN5uu_cp7copydir19ends_with_slash_dot17h7ca260d86f8cd653E(&local_1f8),
       cVar6 != '\0')) {
LAB_0020e151:
      cVar7 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(uStack_1f0,local_1e8);
      if (cVar7 == '\0') {
        if (param_6 == '\0') {
          _ZN5uu_cp9copy_file17h3a721c0b700148baE
                    (&local_f8,param_2,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),
                     local_1c8,param_4,param_5,param_7,param_8,0);
          pcVar2 = local_d8;
          if (local_f8 == (undefined *)0x3) {
            cVar7 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(local_d8);
            if (cVar7 == '\x01') {
              uVar8 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(pcVar2);
              local_1a8 = (undefined **)0x1;
              uStack_1a0 = (code *)uStack_160;
              local_198 = (undefined *)local_158;
              uStack_190 = (code *)CONCAT71(uStack_190._1_7_,1);
              local_108._8_8_ =
                   _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
              ;
              local_148 = &DAT_002b62e0;
              ppuStack_140 = (undefined **)0x2;
              local_128 = (code *)0x0;
              puStack_130 = (undefined *)0x1;
                    /* try { // try from 0020e350 to 0020e375 has its CatchHandler @ 0020e634 */
              local_138 = (undefined **)local_108;
              local_108._0_8_ = &local_1a8;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(local_48,&local_148)
              ;
              local_1b8 = _ZN6uucore4mods5error8UIoError3new17h583c767c36d4d604E(uVar8,local_48);
                    /* try { // try from 0020e380 to 0020e413 has its CatchHandler @ 0020e64b */
              uVar9 = (**(code **)(local_1b8._8_8_ + 0x60))(local_1b8._0_8_);
              _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar9);
              local_108 = _ZN6uucore9util_name17h60d842bf27b05e82E();
              uStack_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E
              ;
              local_198 = local_1b8;
              uStack_190 = 
              _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hecbc8f9382c41ff5E
              ;
              local_148 = &DAT_002b6300;
              ppuStack_140 = (undefined **)0x3;
              local_128 = (code *)0x0;
              puStack_130 = (undefined *)0x2;
              local_1a8 = (undefined **)local_108;
              local_138 = (undefined **)&local_1a8;
              _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_148);
                    /* try { // try from 0020e41e to 0020e422 has its CatchHandler @ 0020e634 */
              _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hd3f979be012334baE
                        (local_1b8._0_8_,local_1b8._8_8_);
                    /* try { // try from 0020e423 to 0020e42a has its CatchHandler @ 0020e62f */
              _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h414e413090760199E(pcVar2);
              if (local_f8 == (undefined *)0x3) {
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E
                          (&uStack_f0);
              }
              else if (local_f8 != (undefined *)0xd) {
                    /* try { // try from 0020e447 to 0020e55a has its CatchHandler @ 0020e6a0 */
                _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(&local_f8);
              }
              goto LAB_0020e165;
            }
          }
          else if ((int)local_f8 == 0xd) goto LAB_0020e165;
LAB_0020e459:
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
          goto LAB_0020e0b5;
        }
                    /* try { // try from 0020e1ca to 0020e1ea has its CatchHandler @ 0020e6a0 */
        _ZN5uu_cp9copy_file17h3a721c0b700148baE
                  (&local_148,param_2,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8
                   ,param_4,param_5,param_7,param_8,0);
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
                    /* try { // try from 0020e243 to 0020e248 has its CatchHandler @ 0020e639 */
          cVar7 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(uStack_1f0,local_1e8);
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
              goto LAB_0020e5f7;
            }
          }
          else {
                    /* try { // try from 0020e251 to 0020e297 has its CatchHandler @ 0020e6a0 */
            _ZN4core3ptr33drop_in_place_LT_uu_cp__Error_GT_17h771e7f9a0f8a7901E(&local_f8);
          }
        }
      }
LAB_0020e165:
      *param_1 = 0xd;
                    /* try { // try from 0020e16c to 0020e175 has its CatchHandler @ 0020e69b */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_1d8);
                    /* try { // try from 0020e176 to 0020e182 has its CatchHandler @ 0020e696 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_168);
      goto LAB_0020e183;
    }
    _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_f8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8);
    if (local_f8 != (undefined *)0x2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
                (local_f8,uStack_f0);
      goto LAB_0020e151;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
              (2,uStack_f0);
    if (cVar7 != '\0') {
      _ZN67__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h3a818a2f4f98d944E
                (&local_f8,
                 "cannot overwrite non-directory with directorycannot open  for reading: -r not specified; omitting directory cannot copy a directory, , into itself, "
                 ,0x2d);
      goto LAB_0020e459;
    }
    _ZN5uu_cp7copydir9build_dir17h8f7105fdecd19cc9E
              (&local_f8,*(undefined4 *)(param_4 + 0x30),*(undefined *)(param_4 + 0x32),&local_1d8,0
              );
    if (local_f8 == (undefined *)0xd) {
      if (*(char *)(param_4 + 0x48) != '\0') {
        _ZN5uu_cp11context_for17h98549e35fded8509E
                  (&local_148,uStack_160,local_158,CONCAT44(uStack_1cc,uStack_1d0),local_1c8);
        uStack_1a0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_f8 = &DAT_002b62c0;
        uStack_f0 = (undefined **)0x2;
        local_d8 = (code *)0x0;
        local_e8 = (code *)&local_1a8;
        uStack_e0 = &DAT_00000001;
                    /* try { // try from 0020e5ac to 0020e5b9 has its CatchHandler @ 0020e61d */
        local_1a8 = &local_148;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_f8);
                    /* try { // try from 0020e5ba to 0020e617 has its CatchHandler @ 0020e6a0 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_148);
      }
      *param_1 = 0xd;
      goto LAB_0020e0b5;
    }
    param_1[7] = CONCAT44(uStack_bc,uStack_c0);
    uVar9 = uStack_f0._4_4_;
    uVar10 = local_e8._4_4_;
    uVar11 = uStack_e0._4_4_;
    uVar12 = local_d8._4_4_;
LAB_0020e5f7:
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
    _ZN5uu_cp9copy_link17h3110b816ad64228eE
              (param_1,uStack_1f0,local_1e8,CONCAT44(uStack_1cc,uStack_1d0),local_1c8,param_5);
  }
LAB_0020e0b5:
                    /* try { // try from 0020e0b5 to 0020e0be has its CatchHandler @ 0020e69b */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_1d8);
                    /* try { // try from 0020e0bf to 0020e0cb has its CatchHandler @ 0020e696 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_168);
LAB_0020e183:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_1f8);
  return;
}