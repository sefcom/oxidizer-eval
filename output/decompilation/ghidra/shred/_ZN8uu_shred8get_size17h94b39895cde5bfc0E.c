void _ZN8uu_shred8get_size17h94b39895cde5bfc0E(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  
  if (*param_1 == -0x8000000000000000) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001bcac5 to 001bcac9 has its CatchHandler @ 001bcaf0 */
    auVar2 = _ZN8uu_shred8get_size28__u7b__u7b_closure_u7d__u7d_17ha01372414ef3048bE
                       (param_1[1],param_1[2]);
    param_2 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
  }
  local_18 = param_1[2];
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)((long)param_1 + 4);
  uStack_20 = *(undefined4 *)(param_1 + 1);
  uStack_1c = *(undefined4 *)((long)param_1 + 0xc);
  _ZN4core6option15Option_LT_T_GT_7or_else17hc94a834c3c270ed5E(uVar1,param_2,&local_28);
  return;
}