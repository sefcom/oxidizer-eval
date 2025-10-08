void _ZN4just4name4Name15from_identifier17hbd4ef0ea8f6e05d8E
               (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_30 [6];
  
  if (*(char *)(param_2 + 8) == '\x18') {
    param_1[8] = param_2[8];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar8;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    return;
  }
  local_30[0] = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h4f47beb1e872bbbaE_00566628)
            (0,param_2 + 8,&DAT_0016e88e,local_30,&PTR_DAT_005305c8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}