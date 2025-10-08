void _ZN4just6parser6Parser16unexpected_token17hbee08644eef5d075E(undefined8 *param_1,long param_2)

{
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48;
  undefined4 uStack_47;
  undefined3 uStack_43;
  undefined local_28 [16];
  undefined8 local_18;
  
  uStack_80 = *(long *)(param_2 + 0x38);
  local_78 = *(undefined8 *)(param_2 + 0x40);
  local_50 = uStack_80;
  if (uStack_80 != 0) {
    local_50 = *(long *)(param_2 + 0x48);
  }
  local_90 = (ulong)(uStack_80 != 0);
  local_88 = 0;
  local_68 = 0;
  uStack_70 = local_90;
  uStack_60 = uStack_80;
  local_58 = local_78;
  _ZN4core4iter6traits8iterator8Iterator7collect17heef43278e911205dE(local_28,&local_90);
                    /* try { // try from 00376351 to 0037635d has its CatchHandler @ 00376432 */
  _ZN4just6parser6Parser4next17h26f20bd451ef506fE(&local_90,param_2);
  if (local_48 == '%') {
    local_78 = local_18;
    uStack_70 = CONCAT71(uStack_70._1_7_,(undefined)local_50);
    local_90 = 0x8000000000000038;
    _ZN4just6parser6Parser5error17hcfcee5ba02637174E(param_1,param_2,&local_90);
    return;
  }
  *(uint *)((long)param_1 + 0x54) = CONCAT31(uStack_43,uStack_47._3_1_);
  *(undefined4 *)((long)param_1 + 0x51) = uStack_47;
  *(int *)((long)param_1 + 0x4c) = (int)((ulong)local_50 >> 0x20);
  *(undefined4 *)((long)param_1 + 0x49) = local_50._1_4_;
  param_1[1] = local_90;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
  *(undefined4 *)((long)param_1 + 0x14) = local_88._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_80._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_78;
  *(undefined4 *)((long)param_1 + 0x24) = local_78._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_70;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_70._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)local_68;
  *(undefined4 *)((long)param_1 + 0x34) = local_68._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_60;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_60._4_4_;
  param_1[8] = local_58;
  *(undefined *)(param_1 + 9) = (undefined)local_50;
  *(char *)(param_1 + 10) = local_48;
  *param_1 = 1;
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h614c8d5056af1490E(local_28);
  return;
}