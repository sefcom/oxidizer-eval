void _ZN4just6parser6Parser5error17hcfcee5ba02637174E
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulong local_20;
  char local_18;
  undefined4 local_17;
  undefined3 uStack_13;
  
                    /* try { // try from 00376210 to 00376219 has its CatchHandler @ 003762cb */
  _ZN4just6parser6Parser4next17h26f20bd451ef506fE(&local_60);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = uStack_38;
  uStack_7c = uStack_34;
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  local_68 = local_20;
  if (local_18 != '%') {
    *(uint *)((long)param_1 + 0x54) = CONCAT31(uStack_13,local_17._3_1_);
    *(undefined4 *)((long)param_1 + 0x51) = local_17;
    param_1[9] = local_20;
    *(undefined4 *)(param_1 + 7) = local_30;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_2c;
    *(undefined4 *)(param_1 + 8) = uStack_28;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_24;
    *(undefined4 *)(param_1 + 5) = local_40;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_3c;
    *(undefined4 *)(param_1 + 6) = uStack_38;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 3) = local_50;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_4c;
    *(undefined4 *)(param_1 + 4) = uStack_48;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_44;
    *(undefined4 *)(param_1 + 1) = local_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
    *(undefined4 *)(param_1 + 2) = uStack_58;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
    *(char *)(param_1 + 10) = local_18;
    _ZN4core3ptr63drop_in_place_LT_just__compile_error_kind__CompileErrorKind_GT_17he0bfeab3ddccc897E
              (param_3);
  }
  else {
    _ZN4just5token5Token5error17h986494da066a4455E(param_1 + 1,&local_a8,param_3);
  }
  *param_1 = (ulong)(local_18 != '%');
  return;
}