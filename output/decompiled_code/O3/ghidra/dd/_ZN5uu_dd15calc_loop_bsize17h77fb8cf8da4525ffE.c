void __rustcall
uu_dd::calc_loop_bsize
          (long param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
          long param_7,undefined8 param_8)

{
  if (param_1 == 0) {
    core::cmp::min_by(param_8,(param_2 - (param_3 + param_4)) * param_7);
    return;
  }
  if (param_1 == 1) {
    core::cmp::min_by(param_8,0,param_2 - param_5,-(ulong)(param_2 < param_5) - param_6);
    return;
  }
  return;
}