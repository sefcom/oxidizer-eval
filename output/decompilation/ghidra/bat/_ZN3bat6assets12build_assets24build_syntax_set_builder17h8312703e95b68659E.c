void _ZN3bat6assets12build_assets24build_syntax_set_builder17h8312703e95b68659E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  undefined uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined7 uStack_f8;
  undefined uStack_f1;
  undefined7 uStack_f0;
  undefined8 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (param_4 == 0) {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 8;
    uStack_12c = 0;
    local_128._0_4_ = 0;
    local_128._4_4_ = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_118 = 8;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
                    /* try { // try from 00533d90 to 00533d9a has its CatchHandler @ 00533fcb */
    (*(code *)
      PTR__ZN7syntect7parsing10syntax_set16SyntaxSetBuilder21add_plain_text_syntax17h344334e751e271aaE_008087b8
    )(&local_138);
    local_178 = CONCAT44(local_128._4_4_,(undefined4)local_128);
    uStack_170 = CONCAT44(uStack_11c,uStack_120);
    local_168 = CONCAT44(uStack_114,local_118);
    uStack_160 = CONCAT44(uStack_10c,uStack_110);
    local_188 = local_138;
    uStack_184 = uStack_134;
    uStack_180 = uStack_130;
    uStack_17c = uStack_12c;
  }
  else {
    _ZN3bat6assets19asset_from_contents17h9aa831f69bef887dE
              (&local_138,&DAT_001a0048,0xf1a71,&DAT_00291ab9,3);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17he666caa0949183cbE(&local_78,&local_138);
    (*(code *)
      PTR__ZN7syntect7parsing10syntax_set9SyntaxSet12into_builder17h7b8a6624b72752eeE_008087b0)
              (&local_188,&local_78);
  }
                    /* try { // try from 00533db8 to 00533dd4 has its CatchHandler @ 00533fda */
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(local_150,param_2,param_3,&DAT_00184020,8);
                    /* try { // try from 00533ddf to 00533e1e has its CatchHandler @ 00533fdf */
  _ZN3std2fs8metadata17h4d9fc7ae25563c19E(&local_138,local_148,local_140);
  iVar5 = local_138;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haf24c6c708ccc154E
            (&local_138);
  if (iVar5 == 2) {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
              (&local_78,local_148,local_140);
    local_80 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5fba9a975e51dcf1E;
    local_138 = 0x7ce070;
    uStack_134 = 0;
    uStack_130 = 2;
    uStack_12c = 0;
    local_118 = 0;
    uStack_114 = 0;
    local_128 = &local_88;
    uStack_120 = 1;
    uStack_11c = 0;
                    /* try { // try from 00533e6a to 00533e74 has its CatchHandler @ 00533fb4 */
    local_88 = &local_78;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_138);
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
              (&local_78);
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_168;
    *(undefined4 *)(param_1 + 0x2c) = local_168._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_160;
    *(undefined4 *)(param_1 + 0x34) = uStack_160._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_178;
    *(undefined4 *)(param_1 + 0x1c) = local_178._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_170;
    *(undefined4 *)(param_1 + 0x24) = uStack_170._4_4_;
    *(int *)(param_1 + 8) = local_188;
    *(undefined4 *)(param_1 + 0xc) = uStack_184;
    *(undefined4 *)(param_1 + 0x10) = uStack_180;
    *(undefined4 *)(param_1 + 0x14) = uStack_17c;
    *param_1 = 0xd;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(local_150);
  }
  else {
                    /* try { // try from 00533eae to 00533ebf has its CatchHandler @ 00533fc6 */
    _ZN7syntect7parsing10syntax_set16SyntaxSetBuilder15add_from_folder17he9adfc661692b083E
              (&local_138,&local_188,local_150);
    uVar13 = uStack_100;
    uVar12 = uStack_10c;
    uVar11 = uStack_110;
    uVar10 = uStack_11c;
    uVar9 = uStack_120;
    uVar8 = uStack_12c;
    uVar7 = uStack_130;
    uVar6 = uStack_134;
    if (CONCAT44(uStack_134,local_138) == -0x7ffffffffffffffa) {
      *(undefined8 *)(param_1 + 0x28) = local_168;
      *(undefined8 *)(param_1 + 0x30) = uStack_160;
      *(undefined8 *)(param_1 + 0x18) = local_178;
      *(undefined8 *)(param_1 + 0x20) = uStack_170;
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_184,local_188);
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_17c,uStack_180);
      *param_1 = 0xd;
    }
    else {
      uVar2 = CONCAT17(uStack_f1,uStack_f8);
      local_78 = CONCAT44(uStack_134,local_138);
      uStack_70 = CONCAT44(uStack_12c,uStack_130);
      local_68 = CONCAT44(local_128._4_4_,(undefined4)local_128);
      uStack_60 = CONCAT44(uStack_11c,uStack_120);
      local_58 = CONCAT44(uStack_114,local_118);
      uStack_50 = CONCAT44(uStack_10c,uStack_110);
      uVar1 = CONCAT44(uStack_fc,uStack_100);
      uStack_f1 = (undefined)uStack_f8;
      uStack_f0 = (undefined7)((ulong)uVar2 >> 8);
      uVar3 = (undefined)local_108;
      uStack_100 = (undefined4)(CONCAT44(uStack_104,local_108) >> 8);
      uStack_fc._3_1_ = (undefined)uVar13;
      uStack_fc = CONCAT13(uStack_fc._3_1_,(int3)((uint)uStack_104 >> 8));
      uStack_f8 = (undefined7)((ulong)uVar1 >> 8);
      uVar4 = (undefined)local_118;
      uStack_110 = (undefined4)((ulong)local_58 >> 8);
      uStack_10c._3_1_ = (undefined)uVar11;
      uStack_10c = CONCAT13(uStack_10c._3_1_,(int3)((uint)uStack_114 >> 8));
      local_108 = (undefined4)((ulong)uStack_50 >> 8);
      uStack_104._0_3_ = (undefined3)((uint)uVar12 >> 8);
      uStack_104 = CONCAT13(uVar3,(undefined3)uStack_104);
      uVar3 = (undefined)(undefined4)local_128;
      uStack_120 = (undefined4)((ulong)local_68 >> 8);
      uStack_11c._3_1_ = (undefined)uVar9;
      uStack_11c = CONCAT13(uStack_11c._3_1_,(int3)((uint)local_128._4_4_ >> 8));
      local_118 = (undefined4)((ulong)uStack_60 >> 8);
      uStack_114._0_3_ = (undefined3)((uint)uVar10 >> 8);
      uStack_114 = CONCAT13(uVar4,(undefined3)uStack_114);
      uStack_134._3_1_ = (undefined)local_138;
      uStack_130 = (undefined4)((ulong)local_78 >> 8);
      uStack_12c._3_1_ = (undefined)uVar7;
      uStack_12c = CONCAT13(uStack_12c._3_1_,(int3)((uint)uVar6 >> 8));
      local_128._0_4_ = (undefined4)((ulong)uStack_70 >> 8);
      local_128._4_3_ = (undefined3)((uint)uVar8 >> 8);
      local_128._4_4_ = CONCAT13(uVar3,local_128._4_3_);
      *param_1 = 3;
      *(int *)(param_1 + 1) = local_138;
      *(undefined4 *)(param_1 + 5) = uStack_134;
      *(undefined4 *)(param_1 + 9) = uStack_130;
      *(undefined4 *)(param_1 + 0xd) = uStack_12c;
      *(undefined4 *)(param_1 + 0x11) = (undefined4)local_128;
      *(undefined4 *)(param_1 + 0x15) = local_128._4_4_;
      *(undefined4 *)(param_1 + 0x19) = uStack_120;
      *(undefined4 *)(param_1 + 0x1d) = uStack_11c;
      *(undefined4 *)(param_1 + 0x21) = local_118;
      *(undefined4 *)(param_1 + 0x25) = uStack_114;
      *(undefined4 *)(param_1 + 0x29) = uStack_110;
      *(undefined4 *)(param_1 + 0x2d) = uStack_10c;
      *(undefined4 *)(param_1 + 0x31) = local_108;
      *(undefined4 *)(param_1 + 0x35) = uStack_104;
      *(undefined4 *)(param_1 + 0x39) = uStack_100;
      *(undefined4 *)(param_1 + 0x3d) = uStack_fc;
      *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_f8,uStack_fc._3_1_);
      *(ulong *)(param_1 + 0x48) = CONCAT71(uStack_f0,uStack_f1);
      _ZN4core3ptr67drop_in_place_LT_syntect__parsing__syntax_set__SyntaxSetBuilder_GT_17h51c5002042f8c4f0E
                (&local_188);
    }
  }
  return;
}