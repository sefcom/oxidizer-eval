void _ZN5uu_wc21word_count_from_input17h4ad675f40b919e0eE
               (ulong *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte extraout_DL;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong local_40;
  
  if (*param_2 == -0x7fffffffffffffff) {
    local_78 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ffcc0)();
    uVar1 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_001ffce0)(&local_78);
    _ZN5uu_wc22word_count_from_reader17h0362b4aa77d3daddE(&local_68,uVar1,extraout_DL & 1,param_3);
  }
  else {
    _ZN3std2fs4File4open17h9157e31c826b10c5E(&local_78);
    if ((int)local_78 == 1) {
      param_1[1] = local_70;
      *param_1 = 2;
      return;
    }
    _ZN5uu_wc22word_count_from_reader17h8dd899ec4189add4E(&local_68,local_78._4_4_,param_3);
  }
  param_1[5] = local_48;
  param_1[3] = local_58;
  param_1[4] = uStack_50;
  param_1[1] = local_68;
  param_1[2] = uStack_60;
  if (local_40 != 0) {
    param_1[6] = local_40;
  }
  *param_1 = (ulong)(local_40 != 0);
  return;
}