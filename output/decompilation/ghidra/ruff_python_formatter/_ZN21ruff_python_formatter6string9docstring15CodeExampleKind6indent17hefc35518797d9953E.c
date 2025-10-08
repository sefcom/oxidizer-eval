void _ZN21ruff_python_formatter6string9docstring15CodeExampleKind6indent17hefc35518797d9953E
               (ulong *param_1,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = 1;
  if ((*param_2 ^ 0x8000000000000000) < 3) {
    uVar3 = *param_2 ^ 0x8000000000000000;
  }
  if (uVar3 == 0) {
    _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
              (param_1,param_2[4],param_2[5]);
    return;
  }
  if (uVar3 != 1) {
    param_1[2] = param_2[6];
    uVar3 = param_2[5];
    *param_1 = param_2[4];
    param_1[1] = uVar3;
    return;
  }
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 == 5) {
    param_1[2] = param_2[5];
    uVar3 = param_2[4];
    *param_1 = param_2[3];
    param_1[1] = uVar3;
    return;
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x44);
  uVar2 = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 4) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
  *(int *)param_1 = iVar1;
  return;
}