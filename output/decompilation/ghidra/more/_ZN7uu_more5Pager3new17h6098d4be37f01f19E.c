void __rustcall
uu_more::Pager::new(undefined8 *param_1,short param_2,undefined8 *param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  
  uVar2 = param_3[2];
  sVar4 = param_2 + -1;
  if (param_2 == 0) {
    sVar4 = 0;
  }
  uVar1 = *(undefined2 *)(param_6 + 0x26);
  param_1[3] = *(undefined8 *)(param_6 + 0x18);
  *(short *)(param_1 + 8) = sVar4;
  uVar3 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  param_1[2] = param_3[2];
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = uVar2;
  *(undefined2 *)((long)param_1 + 0x42) = uVar1;
  param_1[7] = 0;
  return;
}