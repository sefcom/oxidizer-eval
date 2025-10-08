void _ZN12forc_publish7tarball14process_readme17h2262dfad0f7ab0fbE
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  int *local_148;
  undefined *local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined local_f0 [8];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined4 **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  _ZN3std4path4Path4join17h3d685c86d6c853ecE(&local_160,param_2,param_3,"README.md",9);
                    /* try { // try from 00764ea2 to 00764ef9 has its CatchHandler @ 00765017 */
  _ZN3std2fs8metadata17h581a12f35fd9c335E(&local_d8,local_158,local_150);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hec7eb2b2c600b37eE
            (&local_d8);
  if ((int)local_d8 != 2) {
    _ZN12forc_publish14md_pre_process16flatten_markdown17ha70b80a78302ad97E
              (&local_110,local_158,local_150);
    if (local_110 == 6) {
      lVar1 = _ZN3std2fs5write17haae821248600f7a0E(&local_160,&uStack_108);
      if (lVar1 != 0) {
        *param_1 = 0;
        *(long *)(param_1 + 8) = lVar1;
        goto LAB_00764fd4;
      }
    }
    else {
      local_128 = local_100;
      uStack_124 = uStack_fc;
      uStack_120 = uStack_f8;
      uStack_11c = uStack_f4;
      local_138 = local_110;
      uStack_134 = uStack_10c;
      uStack_130 = uStack_108;
      uStack_12c = uStack_104;
      local_148 = &local_138;
      local_140 = 
      PTR__ZN93__LT_forc_publish__md_pre_process__error__MDPreProcessError_u20_as_u20_core__fmt__Display_GT_3fmt17hf0de12073a708bb5E_01049550
      ;
      local_d8 = &PTR_s_Failed_to_flatten_README_md_incl_00f53fa0;
      uStack_d0 = 1;
      local_b8 = 0;
      local_c8 = &local_148;
      local_c0 = 1;
                    /* try { // try from 00764f7a to 00764f8d has its CatchHandler @ 00765002 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h88cda8b789b8b31eE
                (local_f0,0,extraout_RDX,&local_d8);
      uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
      local_c8 = (undefined4 **)local_e0;
                    /* try { // try from 00764fb3 to 00764fb8 has its CatchHandler @ 00764ff0 */
      (*(code *)PTR__ZN12forc_tracing15println_warning17h9ebc5e3e2d740adeE_01049958)(uStack_d0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_d8);
                    /* try { // try from 00764fc6 to 00764fcf has its CatchHandler @ 00765017 */
      _ZN4core3ptr75drop_in_place_LT_forc_publish__md_pre_process__error__MDPreProcessError_GT_17haad8168bd1e1fa1dE
                (&local_138);
    }
  }
  *param_1 = 0xe;
LAB_00764fd4:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(local_160,local_158);
  return;
}