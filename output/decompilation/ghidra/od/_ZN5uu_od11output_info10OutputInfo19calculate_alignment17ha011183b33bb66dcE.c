undefined8 *
_ZN5uu_od11output_info10OutputInfo19calculate_alignment17ha011183b33bb66dcE
          (undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  long local_a0;
  long **local_98 [9];
  long *local_50;
  code *local_48;
  char *local_40;
  code *local_38;
  
  if (8 < param_4) {
    local_a0 = param_4 << 3;
    local_50 = &local_a0;
    local_48 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_40 = "@";
    local_38 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_98[0] = (long **)&DAT_00243668;
    local_98[1] = (long **)0x3;
    local_98[4] = (long **)0x0;
    local_98[2] = &local_50;
    local_98[3] = (long **)0x2;
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E(local_98,&DAT_00243698);
  }
  local_98[6] = (long **)0x0;
  local_98[7] = (long **)0x0;
  local_98[4] = (long **)0x0;
  local_98[5] = (long **)0x0;
  local_98[2] = (long **)0x0;
  local_98[3] = (long **)0x0;
  local_98[0] = (long **)0x0;
  local_98[1] = (long **)0x0;
  uVar3 = (**(code **)(param_3 + 0x18))(param_2);
  if (uVar3 == 0) {
    _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE(&DAT_002436b0);
    pcVar1 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar1)();
    return puVar6;
  }
  lVar4 = (**(code **)(param_3 + 0x20))(param_2);
  if (uVar3 <= param_4) {
    uVar7 = (ulong)(byte)(((ushort)param_4 & 0xff) / (ushort)(byte)uVar3);
    uVar9 = param_5 - lVar4 * uVar7;
    do {
      uVar2 = uVar9;
      if (uVar9 >> 0x20 == 0) {
        uVar2 = uVar9 & 0xffffffff;
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5 * uVar3;
        if (7 < uVar8) {
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar8,8,&DAT_002436c8);
        }
        uVar5 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                          (uVar5);
        local_98[uVar8] = (long **)((long)local_98[uVar8] + uVar2 / uVar7);
        uVar9 = uVar9 - uVar2 / uVar7;
      } while (uVar5 < uVar7);
      uVar3 = uVar3 * 2;
      bVar10 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar10);
  }
  param_1[6] = local_98[6];
  param_1[7] = local_98[7];
  param_1[4] = local_98[4];
  param_1[5] = local_98[5];
  param_1[2] = local_98[2];
  param_1[3] = local_98[3];
  *param_1 = local_98[0];
  param_1[1] = local_98[1];
  return param_1;
}