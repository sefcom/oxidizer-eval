void _ZN5uu_dd15calc_loop_bsize17hf5b351f02be9ced6E
               (ulong param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
               long param_7,undefined8 param_8)

{
  if (param_1 != 2) {
    if ((param_1 & 1) == 0) {
      _ZN4core3cmp3Ord3min17h1162548a3a8ea989E(param_8,(param_2 - (param_3 + param_4)) * param_7);
      return;
    }
    _ZN4core3cmp3Ord3min17h84bf08038dadaa19E
              (param_8,0,param_2 - param_5,-(ulong)(param_2 < param_5) - param_6);
  }
  return;
}