void _ZN5uu_wc5Input13try_as_files017h87a8bdb6df7fa337E(long *param_1,long *param_2)

{
  char cVar1;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  uint local_98;
  ulong local_80;
  
  if (*param_2 == -0x7fffffffffffffff) {
    cVar1 = _ZN5uu_wc19is_stdin_small_file17h8e95ce074e5d12c9E();
    if (cVar1 == '\0') {
      *param_1 = -0x8000000000000000;
      return;
    }
    _ZN5uu_wc17files0_iter_stdin17hd59bc0c5728ca01bE(&local_d0);
    _ZN4core4iter6traits8iterator8Iterator7collect17h9b6196a4a3d64ef8E(&local_170,&local_d0);
    if (local_170 == -0x8000000000000000) {
      param_1[1] = local_168;
      param_1[2] = local_160;
      *param_1 = -0x7fffffffffffffff;
      return;
    }
    *param_1 = local_170;
    param_1[1] = local_168;
    param_1[2] = local_160;
    return;
  }
  _ZN3std2fs8metadata17hbb43a01f12775689E(&local_d0);
  if (((local_d0 == 2) || ((local_98 & 0xf000) != 0x8000)) || (0xa00000 < local_80)) {
    *param_1 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 00165721 to 0016578e has its CatchHandler @ 001657ee */
    _ZN5uu_wc16files0_iter_file17hc5b7d8d6cb685047E(&local_170,param_2[1],param_2[2]);
    if (local_170 != -0x7fffffffffffffff) {
      local_d8 = local_128;
      local_e8 = local_138;
      uStack_e4 = uStack_134;
      uStack_e0 = uStack_130;
      uStack_dc = uStack_12c;
      local_f8 = local_148;
      uStack_f4 = uStack_144;
      uStack_f0 = uStack_140;
      uStack_ec = uStack_13c;
      local_108 = local_158;
      uStack_104 = uStack_154;
      uStack_100 = uStack_150;
      uStack_fc = uStack_14c;
      local_120 = local_170;
      local_118 = local_168;
      local_110 = local_160;
      _ZN4core4iter6traits8iterator8Iterator7collect17h55491619144f5cb3E(&local_188,&local_120);
      local_168 = local_180;
      local_160 = local_178;
      if (local_188 != -0x8000000000000000) {
        *param_1 = local_188;
        param_1[1] = local_180;
        param_1[2] = local_178;
        goto LAB_001656de;
      }
    }
    param_1[1] = local_168;
    param_1[2] = local_160;
    *param_1 = -0x7fffffffffffffff;
  }
LAB_001656de:
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h92f497ce60e154e1E
            (local_d0,local_c8);
  return;
}