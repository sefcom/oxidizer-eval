void _ZN14linera_summary19performance_summary18PerformanceSummary4init17hd45f7079d32341d8E
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  (*(code *)PTR_memcpy_00a4ac98)(param_1,param_2,0x118);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  *(undefined8 *)(param_1 + 0x118) = *param_3;
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar5;
  *(undefined *)(param_1 + 0x2e0) = 0;
  return;
}