void __rustcall uu_wc::Input::try_as_files0(long *param_1,long *param_2)

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
    cVar1 = is_stdin_small_file();
    if (cVar1 == '\0') {
      *param_1 = -0x8000000000000000;
      return;
    }
    files0_iter_stdin(local_78);
    core::iter::adapters::try_process(&local_128,local_78);
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
  std::fs::metadata(&local_128);
  if (((local_128 == 2) || ((local_f0 & 0xf000) != 0x8000)) || (0xa00000 < local_d8)) {
    *param_1 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 001b92e1 to 001b9353 has its CatchHandler @ 001b93b4 */
    files0_iter_file(&local_1c8,param_2[1],param_2[2]);
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
      core::iter::adapters::try_process(&local_1e0,&local_178);
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
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (local_128,local_120);
  return;
}