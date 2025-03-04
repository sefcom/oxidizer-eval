undefined  [16]
_ZN6uu_cat9cat_files17h6abdb7a5d8f0206fE(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined auVar5 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 *local_238;
  code *local_230;
  undefined local_220 [16];
  undefined *local_210;
  undefined local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined local_1de;
  long local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined local_198 [16];
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *local_e8;
  undefined local_e0 [24];
  undefined *local_c8;
  undefined local_c0 [144];
  
  local_220._0_8_ = _ZN3std2io5stdio6stdout17h077da66234850927E();
  _ZN6uucore8features2fs15FileInformation9from_file17h44cb74378482ad19E(local_198,local_220);
  if ((undefined **)local_198._0_8_ == (undefined **)0x0) {
    (*(code *)PTR_memcpy_0021c170)(local_c0,local_198 + 8,0x90);
    local_c8 = &DAT_00000001;
  }
  else {
    local_c8 = (undefined *)0x0;
    _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h88aced0ed65ad377E
              (local_198);
  }
  local_1e8 = 1;
  local_1e0 = 1;
  local_1de = 0;
  local_200 = 0;
  local_1f8 = 8;
  local_1f0 = 0;
  local_1d0 = param_1 + param_2 * 0x18;
  local_1d8 = param_1;
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f5f6c5f762ec4b9E
                    (&local_1d8);
  if (lVar2 != 0) {
    do {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      puVar1 = *(undefined **)(lVar2 + 0x10);
      puVar4 = local_c8;
      if (local_c8 != (undefined *)0x0) {
        puVar4 = local_c0;
      }
                    /* try { // try from 001af120 to 001af13a has its CatchHandler @ 001af399 */
      _ZN6uu_cat8cat_path17h3f1de2b8bdfd86c8E(&local_1b0,uVar3,puVar1,param_3,&local_1e8,puVar4);
      if (CONCAT44(uStack_1ac,local_1b0) != -0x7ffffffffffffffa) {
        local_1b8 = local_1a0;
        local_1c8 = local_1b0;
        uStack_1c4 = uStack_1ac;
        uStack_1c0 = uStack_1a8;
        uStack_1bc = uStack_1a4;
        local_220._0_8_ = 0;
        local_208 = 0;
        local_248 = local_220;
        uStack_240 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_230 = 
        _ZN55__LT_uu_cat__CatError_u20_as_u20_core__fmt__Display_GT_3fmt17h57a85781e439a5e8E;
        local_198._0_8_ = &DAT_002185e8;
        local_198._8_8_ = 2;
        uStack_178 = 0;
        local_180 = 2;
                    /* try { // try from 001af1eb to 001af207 has its CatchHandler @ 001af387 */
        local_238 = &local_1c8;
        local_220._8_8_ = uVar3;
        local_210 = puVar1;
        local_188 = (undefined *)&local_248;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h4b4049542ff9b626E(local_e0,local_198);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf1bb32e3c1651b49E(&local_200,local_e0);
                    /* try { // try from 001af208 to 001af20f has its CatchHandler @ 001af399 */
        _ZN4core3ptr37drop_in_place_LT_uu_cat__CatError_GT_17hfbd18e323f720f0aE(&local_1c8);
      }
      lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0f5f6c5f762ec4b9E
                        (&local_1d8);
    } while (lVar2 != 0);
    if (local_1e0._1_1_ != '\0') {
      local_198._0_8_ = &PTR_s__00218608;
      local_198._8_8_ = 1;
      local_188 = &DAT_00000008;
      local_180 = 0;
      uStack_178 = 0;
                    /* try { // try from 001af24e to 001af2df has its CatchHandler @ 001af385 */
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(local_198);
    }
  }
  if (local_1f0 == 0) {
    uVar3 = 0;
  }
  else {
    local_220 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_248 = local_220;
    uStack_240 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h59ee80d913007d2dE;
    local_198._0_8_ = &PTR_s__00218618;
    local_198._8_8_ = 2;
    uStack_178 = 0;
    local_180 = 1;
    local_188 = (undefined *)&local_248;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4b4049542ff9b626E(&local_f8,local_198);
    lVar2 = local_1f0;
    local_248 = (undefined *)CONCAT44(uStack_f4,local_f8);
    uStack_240 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_238 = local_e8;
                    /* try { // try from 001af308 to 001af342 has its CatchHandler @ 001af378 */
    _ZN5alloc3str17join_generic_copy17h1c39acc797b18d82E(local_220,local_1f8,local_1f0,uStack_240);
    local_188 = local_210;
    local_180 = CONCAT44(local_180._4_4_,(int)lVar2);
    local_198 = local_220;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb263d7b6b0ccd5dfE(local_198);
                    /* try { // try from 001af343 to 001af34d has its CatchHandler @ 001af385 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3711f10ec472aa2eE(&local_248);
  }
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h407b6df26ef1b321E
            (&local_200);
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h277ef9271e7edddeE_00218670
  ;
  auVar5._0_8_ = uVar3;
  return auVar5;
}