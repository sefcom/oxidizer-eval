undefined  [16]
_ZN5uu_ln4link17h8c92ebae2dccde8fE
          (undefined8 param_1,undefined ****param_2,undefined8 param_3,undefined ****param_4,
          long param_5)

{
  undefined auVar1 [16];
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined auVar6 [16];
  undefined **local_188;
  undefined8 local_180;
  undefined ****ppppuStack_178;
  undefined local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined ****local_158;
  undefined local_150;
  undefined **local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined ****local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined ****ppppuStack_118;
  undefined8 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined ****local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined ***local_58;
  code *local_50;
  undefined ***local_48;
  code *local_40;
  
  local_140 = (undefined **)0x8000000000000000;
  local_110 = param_1;
  if (*(char *)(param_5 + 0x31) == '\0') {
    local_128 = (undefined *)0x8000000000000000;
    local_120 = param_1;
    ppppuStack_118 = param_2;
  }
  else {
                    /* try { // try from 001ba4a1 to 001ba4b3 has its CatchHandler @ 001badd3 */
    _ZN5uu_ln13relative_path17ha14d8bdd96810d1dE(&local_128,param_1,param_2,param_3,param_4);
  }
                    /* try { // try from 001ba4d1 to 001ba5bc has its CatchHandler @ 001baddd */
  cVar2 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_3,param_4);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001ba505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)(&DAT_0011e8e8 +
                       *(int *)(&DAT_0011e8e8 + (ulong)*(byte *)(param_5 + 0x37) * 4)))();
    return auVar6;
  }
  _ZN3std2fs8metadata17hebad4fc3d3e825b8E(&local_108,param_3,param_4);
  if (local_108 != (undefined **)0x2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
              (local_108,local_100);
                    /* WARNING: Could not recover jumptable at 0x001ba56e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)(&DAT_0011e8e8 +
                       *(int *)(&DAT_0011e8e8 + (ulong)*(byte *)(param_5 + 0x37) * 4)))();
    return auVar6;
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h834abcfa2f925b76E
            (2,local_100);
  if (*(char *)(param_5 + 0x30) == '\0') {
    if ((*(char *)(param_5 + 0x32) == '\0') ||
       (cVar2 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(local_120,ppppuStack_118),
       cVar2 == '\0')) {
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E
                (&local_168,local_120,ppppuStack_118);
    }
    else {
      _ZN3std2fs12canonicalize17h9984b9af66694330E(&local_108,&local_128);
      _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9a2705f0495ff63bE
                (&local_188,&local_108,&local_128);
      auVar6._8_8_ = ppppuStack_178;
      auVar6._0_8_ = local_180;
      if (local_188 == (undefined **)0x8000000000000000) goto LAB_001bab92;
      local_168 = local_188;
      uStack_160 = local_180;
      local_158 = ppppuStack_178;
      param_2 = ppppuStack_178;
    }
    local_f8 = local_158;
    local_108 = local_168;
    local_100 = uStack_160;
    uVar4 = _ZN3std2fs9hard_link17hedb4a065c044017dE(&local_108,param_3,param_4);
    local_108 = &local_128;
    local_100 = param_3;
    local_f8 = param_4;
    auVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h35311f61e0a1e46bE
                       (uVar4,&local_108);
    if (auVar6._0_8_ != 0) goto LAB_001bab92;
  }
  else {
    lVar3 = _ZN3std2os4unix2fs7symlink17ha8160bb27397fc33E(&local_128,param_3,param_4);
    if (lVar3 != 0) {
      auVar6 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (lVar3);
LAB_001bab92:
                    /* try { // try from 001bab95 to 001bab9e has its CatchHandler @ 001badd3 */
      _ZN4core3ptr62drop_in_place_LT_alloc__borrow__Cow_LT_std__path__Path_GT__GT_17h64f669095bad1067E
                (&local_128);
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h31d4f7ecf091fd1cE
                (&local_140);
      return auVar6;
    }
  }
  if (*(char *)(param_5 + 0x35) != '\0') {
    local_168 = (undefined **)0x1;
    local_150 = 1;
    local_188 = (undefined **)0x1;
    local_180 = local_120;
    ppppuStack_178 = ppppuStack_118;
    local_170 = 1;
    local_58 = &local_168;
    local_50 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_40 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_108 = (undefined **)&DAT_0022d088;
    local_100 = 2;
    uStack_e8 = 0;
    local_f0 = 2;
    uStack_160 = param_3;
    local_158 = param_4;
    local_f8 = &local_58;
    local_48 = &local_188;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
    if (local_140 != (undefined **)0x8000000000000000) {
      local_158 = local_130;
      local_168 = local_140;
      uStack_160 = CONCAT44(uStack_134,uStack_138);
      local_188 = (undefined **)0x1;
      local_180 = uStack_160;
      ppppuStack_178 = local_130;
      local_170 = 1;
      local_50 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_108 = &PTR_s__backup____0022d0b8;
      local_100 = 2;
      uStack_e8 = 0;
      local_f0 = 1;
                    /* try { // try from 001bac42 to 001bac4f has its CatchHandler @ 001bad81 */
      local_f8 = &local_58;
      local_58 = &local_188;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
                    /* try { // try from 001bac58 to 001bac61 has its CatchHandler @ 001baddd */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(&local_168);
      bVar5 = 1;
      goto LAB_001bac67;
    }
    local_108 = &PTR_s__0022d0a8;
    local_100 = 1;
    local_f8 = (undefined ****)&DAT_00000008;
    local_f0 = 0;
    uStack_e8 = 0;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
  }
  bVar5 = 0;
LAB_001bac67:
                    /* try { // try from 001bac67 to 001bac70 has its CatchHandler @ 001badd3 */
  _ZN4core3ptr62drop_in_place_LT_alloc__borrow__Cow_LT_std__path__Path_GT__GT_17h64f669095bad1067E
            (&local_128);
  if ((bool)(~bVar5 & local_140 != (undefined **)0x8000000000000000)) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(&local_140);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}