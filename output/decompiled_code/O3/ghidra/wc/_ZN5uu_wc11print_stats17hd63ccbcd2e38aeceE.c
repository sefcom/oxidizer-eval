long __rustcall
uu_wc::print_stats(long param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  char **local_150;
  code *local_148;
  undefined **local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined8 local_88;
  undefined local_80 [8];
  undefined8 local_78;
  undefined local_70;
  undefined8 local_68;
  undefined local_60;
  undefined8 local_58;
  undefined local_50;
  undefined8 local_48;
  undefined local_40;
  undefined8 local_38;
  
  local_178 = param_4;
  local_170 = param_3;
  local_120 = (undefined **)std::io::stdio::stdout();
  local_190 = std::io::stdio::Stderr::lock(&local_120);
  local_80[0] = *(undefined *)(param_1 + 0x1a);
  local_78 = param_2[2];
  local_70 = *(undefined *)(param_1 + 0x1b);
  local_68 = param_2[3];
  local_50 = *(undefined *)(param_1 + 0x18);
  local_60 = *(undefined *)(param_1 + 0x19);
  local_48 = *param_2;
  local_58 = param_2[1];
  local_40 = *(undefined *)(param_1 + 0x1c);
  local_38 = param_2[4];
  local_188 = (char *)0x1;
  local_180 = 0;
  local_160 = &stack0xffffffffffffffd0;
  local_168 = local_80;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find(&local_168);
  if (lVar1 != 0) {
    do {
      local_158 = (undefined *)(lVar1 + 8);
      local_150 = &local_188;
      local_148 = _<&T_as_core::fmt::Display>::fmt;
      local_140 = &local_158;
      local_138 = _<&T_as_core::fmt::Display>::fmt;
      local_128 = 0;
      local_120 = (undefined **)0x2;
      local_110 = (char ***)0x2;
      uStack_100 = 0;
      local_f8 = 0x20;
      local_f0 = 3;
      local_e8 = 2;
      local_d8 = 1;
      local_d0 = 2;
      local_c8 = 1;
      local_c0 = 0x20;
      local_b8 = 3;
      local_b0 = &DAT_00119ac8;
      local_a8 = 2;
      local_90 = &local_120;
      local_88 = 2;
      local_a0 = &local_150;
      local_98 = 3;
      local_130 = param_5;
                    /* try { // try from 001bded9 to 001bdee3 has its CatchHandler @ 001be00a */
      lVar1 = std::io::Write::write_fmt(&local_190,&local_b0);
      if (lVar1 != 0) goto LAB_001bdfe9;
      local_188 = " ";
      local_180 = 1;
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                        (&local_168);
    } while (lVar1 != 0);
  }
  if (local_170 == (undefined *)0x0) {
    local_120 = &PTR_s__002311f8;
    local_118 = 1;
    local_110 = (undefined8 **)&DAT_00000008;
    local_108 = 0;
    uStack_100 = 0;
    lVar1 = std::io::Write::write_fmt(&local_190,&local_120);
  }
  else {
    local_b0 = local_170;
    local_a8 = local_178;
    local_150 = &local_188;
    local_148 = _<&T_as_core::fmt::Display>::fmt;
    local_140 = &local_b0;
    local_138 = _<&T_as_core::fmt::Display>::fmt;
    local_120 = (undefined **)&DAT_00231208;
    local_118 = 3;
    uStack_100 = 0;
    local_110 = &local_150;
    local_108 = 2;
                    /* try { // try from 001bdf97 to 001bdfe5 has its CatchHandler @ 001be008 */
    lVar1 = std::io::Write::write_fmt(&local_190,&local_120);
  }
LAB_001bdfe9:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_190);
  return lVar1;
}