void __rustcall
uu_fmt::linebreak::restart_active_breaks
          (undefined8 *param_1,long param_2,long param_3,long param_4,char param_5,
          undefined8 param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  
  if (param_5 == '\0') {
    lVar1 = *(long *)(param_7 + 0x28);
    bVar3 = 0;
    lVar2 = BreakArgs::compute_width(param_2,param_7,param_4,0);
    uVar4 = DAT_00114a20;
    if (param_9 - param_4 < (param_8 + param_4 + lVar2 + lVar1) - *(long *)(param_2 + 0x30)) {
      param_3 = param_3 + lVar1;
      bVar3 = 1;
      uVar4 = DAT_001149e4;
    }
  }
  else {
    bVar3 = 0;
    uVar4 = DAT_00114a20;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  *(byte *)((long)param_1 + 0x24) = bVar3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = uVar4;
  param_1[3] = param_3;
  *(byte *)((long)param_1 + 0x25) = bVar3 ^ 1;
  return;
}