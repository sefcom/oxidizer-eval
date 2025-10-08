void _ZN2rg5flags6hiargs6HiArgs8searcher17h183c926e645b97aeE(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  local_1f = 10;
  if ((*(byte *)(param_2 + 0x387) & 1) != 0) {
    local_1f = 0;
  }
  local_20 = *(undefined *)(param_2 + 0x371);
  local_58[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  auVar2 = ZEXT816(0);
  local_28 = 0;
  local_1e = 0;
  local_1b = 0;
  local_17 = 1;
  local_48 = *(undefined4 *)(param_2 + 0x20);
  uStack_44 = *(undefined4 *)(param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 0x28);
  uStack_3c = *(undefined4 *)(param_2 + 0x2c);
  local_1c = *(undefined *)(param_2 + 0x378);
  local_1a = *(undefined *)(param_2 + 0x37a);
  local_18 = *(undefined *)(param_2 + 0x37d);
  local_19 = *(undefined *)(param_2 + 0x37c);
  local_16 = *(undefined *)(param_2 + 0x38d);
  if (*(int *)(param_2 + 0x60) == 2) {
    local_1b = 1;
    lVar1 = *(long *)(param_2 + 0x90);
  }
  else {
    auVar2 = _ZN2rg5flags7lowargs18ContextModeLimited3get17h7014c861f00e9897E(param_2 + 0x60);
    lVar1 = *(long *)(param_2 + 0x90);
  }
  if (lVar1 != 0) {
    if ((int)lVar1 == 1) {
      local_28 = *(undefined8 *)(param_2 + 0x98);
    }
    else {
      local_17 = 0;
    }
  }
  local_38 = auVar2._8_8_;
  uStack_30 = auVar2._0_8_;
  (*(code *)PTR__ZN13grep_searcher8searcher15SearcherBuilder5build17h3a0046083d70284fE_00527138)
            (param_1,local_58);
  return;
}