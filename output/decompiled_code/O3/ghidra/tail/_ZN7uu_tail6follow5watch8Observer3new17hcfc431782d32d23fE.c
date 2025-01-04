void __rustcall
uu_tail::follow::watch::Observer::new
          (undefined8 *param_1,undefined param_2,undefined param_3,undefined param_4,
          undefined8 *param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  
                    /* try { // try from 0020503c to 00205043 has its CatchHandler @ 002050c1 */
  cVar8 = platform::unix::supports_pid_checks(param_6);
  uVar9 = 0;
  if (cVar8 != '\0') {
    uVar9 = param_6;
  }
  uVar1 = param_5[9];
  param_1[0xf] = param_5[8];
  param_1[0x10] = uVar1;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  uVar5 = param_5[4];
  uVar6 = param_5[5];
  uVar7 = param_5[7];
  param_1[0xd] = param_5[6];
  param_1[0xe] = uVar7;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar6;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  *(undefined *)((long)param_1 + 0x8c) = param_2;
  *(undefined *)((long)param_1 + 0x8e) = param_3;
  *(undefined *)((long)param_1 + 0x8d) = param_4;
  *param_1 = 3;
  param_1[4] = 0;
  param_1[5] = 8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x11) = uVar9;
  return;
}