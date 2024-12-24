/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __rustcall
uu_numfmt::format::transform_to
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          double **param_5)

{
  double **ppdVar1;
  undefined auVar2 [16];
  double *local_128;
  double *local_120;
  code *local_118;
  double **local_110;
  code *local_108;
  double **local_100;
  undefined8 local_f8;
  double local_f0;
  double *local_e8;
  code *local_e0;
  double **local_d8;
  code *local_d0;
  double **local_c8;
  undefined8 local_c0;
  double *local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  consider_suffix(&local_b8,param_3,param_4,param_5);
  if (local_b8 != (double *)0x8000000000000000) {
    *(undefined2 *)((long)param_1 + 0x1e) = local_a8._6_2_;
    *(undefined4 *)((long)param_1 + 0x1a) = local_a8._2_4_;
    param_1[1] = local_b8;
    param_1[2] = dStack_b0;
    *(undefined *)(param_1 + 3) = (undefined)local_a8;
    *(char *)((long)param_1 + 0x19) = local_a8._1_1_;
    *param_1 = 1;
    return;
  }
  auVar2._8_4_ = (int)((ulong)param_2 >> 0x20);
  auVar2._0_8_ = param_2;
  auVar2._12_4_ = _UNK_00116094;
  local_f0 = dStack_b0 /
             ((auVar2._8_8_ - _UNK_00115fd8) +
             ((double)CONCAT44(_DAT_00116090,(int)param_2) - _DAT_00115fd0));
  if (local_a8._1_1_ == '\x02') {
    local_128 = (double *)round_with_precision((char)param_4,param_5);
    local_d0 = (code *)0x0;
    local_b8 = (double *)0x1;
    dStack_b0 = 4.94065645841247e-324;
    local_120 = (double *)&DAT_00116200;
    local_118 = (code *)0x1;
    local_f8 = 1;
    local_e8 = (double *)&local_128;
    local_d8 = param_5;
  }
  else {
    if (param_5 != (double **)0x0) {
      local_128 = (double *)(CONCAT62(local_128._2_6_,(short)local_a8) & 0xffffffffffff01ff);
      local_120 = &local_f0;
      local_118 = core::fmt::float::_<impl_core::fmt::Display_for_f64>::fmt;
      local_108 = _<uu_numfmt::units::DisplayableSuffix_as_core::fmt::Display>::fmt;
      local_f8 = 0;
      local_b8 = (double *)0x1;
      dStack_b0 = 9.88131291682493e-324;
      local_80 = 2;
      local_70 = 2;
      local_60 = 1;
      local_58 = 0x20;
      local_50 = 3;
      local_e8 = (double *)&DAT_0011a4f0;
      local_e0 = (code *)0x2;
      local_c0 = 2;
      local_d8 = &local_120;
      local_d0 = (code *)0x3;
      ppdVar1 = &local_e8;
      local_110 = &local_128;
      local_100 = param_5;
      local_c8 = &local_b8;
      goto LAB_001c4560;
    }
    local_d8 = &local_128;
    local_e8 = &local_f0;
    dStack_b0 = (double)(ulong)((double)((ulong)local_f0 & _DAT_00115fe0) < _s__00115b98);
    local_b8 = (double *)0x0;
    local_d0 = _<uu_numfmt::units::DisplayableSuffix_as_core::fmt::Display>::fmt;
    local_128 = (double *)(CONCAT62(local_128._2_6_,(short)local_a8) & 0xffffffffffff01ff);
    local_80 = 2;
    local_70 = 2;
    local_60 = 1;
    local_58 = 0x20;
    local_50 = 3;
    local_120 = (double *)&DAT_0011a4f0;
    local_118 = (code *)0x2;
    local_f8 = 2;
  }
  local_e0 = core::fmt::float::_<impl_core::fmt::Display_for_f64>::fmt;
  local_108 = (code *)0x2;
  ppdVar1 = &local_120;
  local_110 = &local_e8;
  local_100 = &local_b8;
LAB_001c4560:
  local_88 = 3;
  local_90 = 0x20;
  local_98 = 0;
  local_a8 = 2;
  core::option::Option<T>::map_or_else(&local_40,ppdVar1);
  param_1[3] = local_30;
  param_1[1] = local_40;
  param_1[2] = uStack_38;
  *param_1 = 0;
  return;
}