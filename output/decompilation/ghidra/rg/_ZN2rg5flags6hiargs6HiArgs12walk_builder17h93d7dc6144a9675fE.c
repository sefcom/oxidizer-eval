void _ZN2rg5flags6hiargs6HiArgs12walk_builder17h93d7dc6144a9675fE(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined8 local_258;
  undefined8 local_250;
  undefined **local_248;
  undefined8 local_240;
  undefined ***local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_218;
  undefined **local_210;
  undefined **local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined local_b8 [96];
  long local_58;
  undefined local_38;
  undefined local_37;
  
  lVar8 = *(long *)(param_2 + 0x160);
  local_218 = param_1;
  if (lVar8 == 0) {
    uVar6 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00526688)
                      (0,0,&PTR_s_crates_core_flags_hiargs_rs_004eafe0);
                    /* catch() { ... } // from try @ 00350e80 with catch @ 00350e99 */
                    /* try { // try from 00350e9c to 00350f00 has its CatchHandler @ 00350f09 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17haa31b1f83e302f9eE(&local_248);
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(local_258);
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(local_250);
    _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17h648dc1fae12db6abE(&local_1f8);
    _ZN4core3ptr46drop_in_place_LT_ignore__walk__WalkBuilder_GT_17h38295eb0d419261cE(&local_108);
    _Unwind_Resume(uVar6);
    return;
  }
  ppuVar5 = *(undefined ***)(param_2 + 0x158);
  _ZN6ignore4walk11WalkBuilder3new17h00a151c7e04b3dc1E(&local_108,ppuVar5);
  uStack_1f0 = ppuVar5 + lVar8 * 3;
  local_1f8 = ppuVar5;
  while( true ) {
    local_1e8 = 0;
    ppuVar5 = (undefined **)
              _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17h1b0f226fddfaabdfE
                        (&local_1f8);
    if (ppuVar5 == (undefined **)0x0) break;
                    /* try { // try from 003509b9 to 003509c0 has its CatchHandler @ 00350eef */
    while (_ZN6ignore4walk11WalkBuilder3add17hd68dfb85308f880cE(&local_108,ppuVar5), local_1e8 == 0)
    {
      if (local_1f8 == uStack_1f0) goto LAB_003509fc;
      ppuVar5 = local_1f8;
      local_1f8 = local_1f8 + 3;
    }
  }
LAB_003509fc:
  if ((*(char *)(param_2 + 0x381) == '\0') && (*(long *)(param_2 + 0x148) != 0)) {
    lVar8 = *(long *)(param_2 + 0x140);
    lVar9 = *(long *)(param_2 + 0x148) * 0x18;
    do {
      _ZN6ignore4walk11WalkBuilder10add_ignore17h494633bd0004d8f8E(&local_178,&local_108,lVar8);
      if (local_178 == 9) {
                    /* try { // try from 00350a40 to 00350a63 has its CatchHandler @ 00350eed */
        _ZN4core3ptr112drop_in_place_LT_core__result__Result_LT__RF_mut_u20_ignore__gitignore__GitignoreBuilder_C_ignore__Error_GT__GT_17h61d7a7ae1f078bb4E
                  (&local_178);
      }
      else {
        local_1c8 = CONCAT44(uStack_144,local_148);
        local_1d8 = CONCAT44(uStack_154,local_158);
        uStack_1d0 = uStack_150;
        uStack_1cc = uStack_14c;
        local_1e8 = CONCAT44(uStack_164,local_168);
        uStack_1e0 = CONCAT44(uStack_15c,uStack_160);
        local_1f8 = (undefined **)CONCAT44(uStack_174,local_178);
        uStack_1f0 = (undefined **)CONCAT44(uStack_16c,uStack_170);
                    /* try { // try from 00350aa8 to 00350adc has its CatchHandler @ 00350ede */
        cVar4 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
        if ((cVar4 != '\0') &&
           (cVar4 = _ZN2rg8messages15ignore_messages17hf16747a1cdd9c08bE(), cVar4 != '\0')) {
          local_248 = (undefined **)
                      (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
          local_250 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)
                                (&local_248);
          local_248 = (undefined **)
                      PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 00350aec to 00350af9 has its CatchHandler @ 00350eba */
          local_258 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)
                                (&local_248);
          local_248 = &PTR_s_rg__004e99c8;
          local_240 = 1;
          local_238 = (undefined ***)&DAT_00000008;
          local_230 = 0;
          uStack_228 = 0;
                    /* try { // try from 00350b27 to 00350bba has its CatchHandler @ 00350ec1 */
          local_208 = (undefined **)
                      _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_258,&local_248);
          if (local_208 != (undefined **)0x0) {
            local_248 = local_208;
            cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_208);
                    /* try { // try from 00350e61 to 00350e66 has its CatchHandler @ 00350ea8 */
            (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)
                      ((cVar4 != '\v') * '\x02');
            goto LAB_00350e86;
          }
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                    (&local_208);
          local_200 = 
          PTR__ZN52__LT_ignore__Error_u20_as_u20_core__fmt__Display_GT_3fmt17heee24f66390ed69bE_00526ac8
          ;
          local_248 = (undefined **)&DAT_004ea800;
          local_240 = 2;
          uStack_228 = 0;
          local_230 = 1;
          local_238 = &local_208;
          local_208 = (undefined **)&local_1f8;
          local_210 = (undefined **)
                      _ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_258,&local_248);
          if (local_210 != (undefined **)0x0) {
            local_248 = local_210;
            cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_210);
                    /* try { // try from 00350e80 to 00350e85 has its CatchHandler @ 00350e99 */
            (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)
                      ((cVar4 != '\v') * '\x02');
            goto LAB_00350e86;
          }
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                    (&local_210);
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                    (local_250);
                    /* try { // try from 00350bbf to 00350bc3 has its CatchHandler @ 00350ebf */
          _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E
                    (local_258);
        }
                    /* try { // try from 00350bd7 to 00350bde has its CatchHandler @ 00350eed */
        _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17h648dc1fae12db6abE(&local_1f8);
      }
      lVar8 = lVar8 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  local_108 = *(undefined8 *)(param_2 + 0x30);
  uStack_100 = *(undefined8 *)(param_2 + 0x38);
  local_38 = *(undefined *)(param_2 + 0x373);
  local_f8 = *(undefined4 *)(param_2 + 0x40);
  uStack_f4 = *(undefined4 *)(param_2 + 0x44);
  uStack_f0 = *(undefined4 *)(param_2 + 0x48);
  uStack_ec = *(undefined4 *)(param_2 + 0x4c);
  lVar8 = *(long *)(param_2 + 0x310);
  local_37 = *(undefined *)(param_2 + 0x388);
                    /* try { // try from 00350c39 to 00350dd2 has its CatchHandler @ 00350ef1 */
  local_58 = lVar8;
  uVar6 = (*(code *)PTR__ZN6ignore4walk11WalkBuilder11skip_stdout17hdd4731dfa27d7e8bE_00527170)
                    (&local_108,*(char *)(param_2 + 0x322) == '\0');
  _ZN67__LT_ignore__gitignore__Gitignore_u20_as_u20_core__clone__Clone_GT_5clone17h17cf217e3aef61a1E
            (&local_1f8,param_2 + 0xd0);
  local_118 = local_198;
  local_128 = local_1a8;
  uStack_120 = uStack_1a0;
  local_138 = local_1b8;
  uStack_130 = uStack_1b0;
  local_148 = (undefined4)local_1c8;
  uStack_144 = local_1c8._4_4_;
  uStack_140 = uStack_1c0;
  uStack_13c = uStack_1bc;
  local_158 = (undefined4)local_1d8;
  uStack_154 = local_1d8._4_4_;
  uStack_150 = uStack_1d0;
  uStack_14c = uStack_1cc;
  local_168 = (undefined4)local_1e8;
  uStack_164 = local_1e8._4_4_;
  uStack_160 = (undefined4)uStack_1e0;
  uStack_15c = uStack_1e0._4_4_;
  local_178 = (int)local_1f8;
  uStack_174 = local_1f8._4_4_;
  uStack_170 = (undefined4)uStack_1f0;
  uStack_16c = uStack_1f0._4_4_;
  uVar6 = (*(code *)PTR__ZN6ignore4walk11WalkBuilder9overrides17h63e5f07af775591cE_00527178)
                    (uVar6,&local_178);
  _ZN59__LT_ignore__types__Types_u20_as_u20_core__clone__Clone_GT_5clone17hd6a5e9cc2298641aE
            (&local_1f8,param_2 + 0x1f0);
  lVar9 = (*(code *)PTR__ZN6ignore4walk11WalkBuilder5types17h4c377f7b2ea7a776E_00527180)
                    (uVar6,&local_1f8);
  *(byte *)(lVar9 + 0x98) = *(byte *)(param_2 + 0x375) ^ 1;
  *(byte *)(lVar9 + 0x9a) = *(byte *)(param_2 + 899) ^ 1;
  bVar1 = *(byte *)(param_2 + 0x37f);
  *(byte *)(lVar9 + 0x99) = bVar1 ^ 1;
  bVar2 = *(byte *)(param_2 + 900);
  bVar7 = *(byte *)(param_2 + 0x382) ^ 1;
  if (bVar2 != 0) {
    bVar7 = 0;
  }
  *(byte *)(lVar9 + 0x9b) = bVar7;
  *(byte *)(lVar9 + 0x9c) = bVar2 ^ 1;
  bVar7 = *(byte *)(param_2 + 0x380) ^ 1;
  if (bVar2 != 0) {
    bVar7 = 0;
  }
  *(byte *)(lVar9 + 0x9d) = bVar7;
  *(byte *)(lVar9 + 0x9f) = *(byte *)(param_2 + 0x385) ^ 1;
  *(undefined *)(lVar9 + 0x9e) = *(undefined *)(param_2 + 0x376);
  if (bVar1 == 0) {
    _ZN6ignore3dir13IgnoreBuilder26add_custom_ignore_filename17h2f2dc442a6932d20E(local_b8);
  }
  if (*(byte *)(param_2 + 800) != 2) {
    if (lVar8 != 1) {
      local_1f8 = &PTR_s_sorting_implies_single_threaded_004eafd0;
      uStack_1f0 = (undefined **)0x1;
      local_1e8 = 8;
      uStack_1e0 = 0;
      local_1d8 = 0;
                    /* try { // try from 00350e2a to 00350e47 has its CatchHandler @ 00350ef1 */
      (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00526860)
                (0,&DAT_001631a8,param_2 + 0x310,&local_1f8,
                 &PTR_s_crates_core_flags_hiargs_rs_004eaff8);
LAB_00350e86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (((*(byte *)(param_2 + 800) & 1) == 0) && (*(char *)(param_2 + 0x321) == '\0')) {
      _ZN6ignore4walk11WalkBuilder17sort_by_file_name17hf893e8fd018a99a9E(&local_108);
    }
  }
  (*(code *)PTR_memcpy_00526658)(local_218,&local_108,0xd8);
  return;
}