undefined  [16]
_ZN6uu_cat9cat_files17hcfbe1e107db8df0eE(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined auVar7 [16];
  undefined **local_248;
  undefined8 uStack_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  undefined local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined local_1b0 [16];
  undefined8 *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  byte local_178 [8];
  undefined local_170 [48];
  ushort local_140;
  undefined local_13e;
  undefined local_e0 [24];
  undefined8 local_c8;
  undefined local_c0 [144];
  
  local_1b8 = param_3;
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
  _ZN6uucore8features2fs15FileInformation9from_file17h1c5b8b34aaabd4d7E(local_178);
  if ((local_178[0] & 1) == 0) {
    (*(code *)PTR_memcpy_001f22b0)(local_c0,local_170,0x90);
    local_c8 = 1;
  }
  else {
    local_c8 = 0;
    _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17hc263a3b15372b709E
              (local_178);
  }
  _ZN6uu_cat10LineNumber3new17he2164f0c2cf54569E(local_178);
  local_140 = 1;
  local_13e = 0;
  local_210 = 0;
  local_208 = 8;
  local_200 = 0;
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 8 + lVar5);
      puVar1 = *(undefined **)(param_1 + 0x10 + lVar5);
      puVar6 = (undefined *)0x0;
      if ((char)local_c8 != '\0') {
        puVar6 = local_c0;
      }
      _ZN6uu_cat8cat_path17h2dae90d146b12434E(&local_190,uVar4,puVar1,local_1b8,local_178,puVar6);
      if (CONCAT44(uStack_18c,local_190) == -0x7ffffffffffffffa) {
                    /* try { // try from 0015e4a0 to 0015e4f6 has its CatchHandler @ 0015e743 */
        _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_cat__CatError_GT__GT_17h698f1a96b81da228E
                  (&local_190);
      }
      else {
        local_1c8 = local_180;
        local_1d8 = (undefined *)CONCAT44(uStack_18c,local_190);
        uStack_1d0 = (code *)CONCAT44(uStack_184,uStack_188);
        local_1f8 = (undefined **)0x0;
        local_1e0 = 0;
        local_1b0._0_8_ = &local_1f8;
        local_1b0._8_8_ =
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f2550
        ;
        local_1a0 = &local_1d8;
        local_198 = 
        PTR__ZN55__LT_uu_cat__CatError_u20_as_u20_core__fmt__Display_GT_3fmt17hf1b120a760cf5cdbE_001f2558
        ;
        local_248 = (undefined **)&DAT_001eab28;
        uStack_240 = 2;
        uStack_228 = 0;
        local_238 = (undefined8 *)local_1b0;
        local_230 = 2;
                    /* try { // try from 0015e5ab to 0015e5ca has its CatchHandler @ 0015e72e */
        uStack_1f0 = uVar4;
        local_1e8 = puVar1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hca5ca0cd9da1a1e1E(local_e0,&local_248);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc802380a4422d572E(&local_210,local_e0);
                    /* try { // try from 0015e5cb to 0015e5d4 has its CatchHandler @ 0015e743 */
        _ZN4core3ptr37drop_in_place_LT_uu_cat__CatError_GT_17h14d6c146dec8346bE(&local_1d8);
      }
      lVar5 = lVar5 + 0x18;
    } while (param_2 * 0x18 != lVar5);
    if ((local_140 & 0x100) != 0) {
      local_248 = &PTR_s__001eab48;
      uStack_240 = 1;
      local_238 = (undefined8 *)&DAT_00000008;
      local_230 = 0;
      uStack_228 = 0;
                    /* try { // try from 0015e609 to 0015e689 has its CatchHandler @ 0015e72c */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f2560)(&local_248);
    }
    if (local_200 != 0) {
      local_1b0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f22d0)();
      local_1d8 = local_1b0;
      uStack_1d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h74b3dbe6826d9b3dE;
      local_248 = &PTR_s__001eab58;
      uStack_240 = 2;
      uStack_228 = 0;
      local_238 = &local_1d8;
      local_230 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hca5ca0cd9da1a1e1E(&local_1f8,&local_248);
      uVar3 = uStack_1f0;
      ppuVar2 = local_1f8;
      lVar5 = local_200;
                    /* try { // try from 0015e6a3 to 0015e6d2 has its CatchHandler @ 0015e70c */
      _ZN5alloc3str17join_generic_copy17hf9249603796c30e8E
                (&local_1f8,local_208,local_200,uStack_1f0,local_1e8);
      local_238 = (undefined8 *)local_1e8;
      local_248 = local_1f8;
      uStack_240 = uStack_1f0;
      local_230 = CONCAT44(local_230._4_4_,(int)lVar5);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8ad1939ef5a5c6bfE(&local_248);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4305df3840418334E(ppuVar2,uVar3);
      goto LAB_0015e6e6;
    }
  }
  uVar4 = 0;
LAB_0015e6e6:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h9e77e8d7d316b011E
            (&local_210);
  auVar7._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h136b6d7b76573e9dE_001eab98
  ;
  auVar7._0_8_ = uVar4;
  return auVar7;
}