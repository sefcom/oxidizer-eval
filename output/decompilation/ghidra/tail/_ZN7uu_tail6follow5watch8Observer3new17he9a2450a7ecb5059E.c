void _ZN7uu_tail6follow5watch8Observer3new17he9a2450a7ecb5059E
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
  
                    /* try { // try from 001a329c to 001a32a3 has its CatchHandler @ 001a3322 */
  cVar8 = _ZN7uu_tail8platform4unix19supports_pid_checks17ha9469f91d23a1bd0E(param_6);
  uVar9 = 0;
  if (cVar8 != '\0') {
    uVar9 = param_6;
  }
  *(undefined *)((long)param_1 + 0x8c) = param_2;
  *(undefined *)((long)param_1 + 0x8e) = param_3;
  *(undefined *)((long)param_1 + 0x8d) = param_4;
  *param_1 = 3;
  param_1[4] = 0;
  param_1[5] = 8;
  param_1[6] = 0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  uVar4 = param_5[4];
  uVar5 = param_5[5];
  uVar6 = param_5[6];
  uVar7 = param_5[7];
  param_1[7] = *param_5;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar7;
  uVar1 = param_5[9];
  param_1[0xf] = param_5[8];
  param_1[0x10] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar9;
  return;
}