void _ZN5uu_wc5Input13try_as_files017hc67935d372cfef28E(long *param_1,long *param_2)

{
  char cVar1;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  uint local_f0;
  ulong local_d8;
  undefined local_78 [88];
  
  if (*param_2 == -0x7fffffffffffffff) {
    cVar1 = _ZN5uu_wc19is_stdin_small_file17hda862548f32829d1E();
    if (cVar1 == '\0') {
      *param_1 = -0x8000000000000000;
      return;
    }
    _ZN5uu_wc17files0_iter_stdin17h027d8be6f7e7f770E(local_78);
    _ZN4core4iter8adapters11try_process17h9f74a5405c84d529E(&local_128,local_78);
    if (local_128 == -0x8000000000000000) {
      param_1[1] = local_120;
      param_1[2] = local_118;
      *param_1 = -0x7fffffffffffffff;
      return;
    }
    *param_1 = local_128;
    param_1[1] = local_120;
    param_1[2] = local_118;
    return;
  }
  _ZN3std2fs8metadata17ha24470e461e4d7b2E(&local_128);
  if (((local_128 == 2) || ((local_f0 & 0xf000) != 0x8000)) || (0xa00000 < local_d8)) {
    *param_1 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 001b92e1 to 001b9353 has its CatchHandler @ 001b93b4 */
    _ZN5uu_wc16files0_iter_file17h4e3b8ab8e030dfcaE(&local_1c8,param_2[1],param_2[2]);
    if (local_1c8 != -0x7fffffffffffffff) {
      local_130 = local_180;
      local_140 = local_190;
      uStack_13c = uStack_18c;
      uStack_138 = uStack_188;
      uStack_134 = uStack_184;
      local_150 = local_1a0;
      uStack_14c = uStack_19c;
      uStack_148 = uStack_198;
      uStack_144 = uStack_194;
      local_160 = local_1b0;
      uStack_15c = uStack_1ac;
      uStack_158 = uStack_1a8;
      uStack_154 = uStack_1a4;
      local_178 = local_1c8;
      local_170 = local_1c0;
      local_168 = local_1b8;
      _ZN4core4iter8adapters11try_process17h5f1b943b2c05a233E(&local_1e0,&local_178);
      local_1c0 = local_1d8;
      local_1b8 = local_1d0;
      if (local_1e0 != -0x8000000000000000) {
        *param_1 = local_1e0;
        param_1[1] = local_1d8;
        param_1[2] = local_1d0;
        goto LAB_001b929e;
      }
    }
    param_1[1] = local_1c0;
    param_1[2] = local_1b8;
    *param_1 = -0x7fffffffffffffff;
  }
LAB_001b929e:
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hc7378430642e479dE
            (local_128,local_120);
  return;
}