undefined  [16] _ZN2rg5flags7lowargs18ContextModeLimited3get17h7014c861f00e9897E(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  if (param_1[0x20] == '\0') {
    cVar1 = *param_1;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    cVar1 = *param_1;
  }
  uVar3 = uVar2;
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  if (param_1[0x10] == '\0') {
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = uVar3;
    return auVar4;
  }
  auVar5._8_8_ = *(undefined8 *)(param_1 + 0x18);
  auVar5._0_8_ = uVar3;
  return auVar5;
}