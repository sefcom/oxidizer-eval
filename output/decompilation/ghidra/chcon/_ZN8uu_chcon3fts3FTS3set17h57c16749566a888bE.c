void _ZN8uu_chcon3fts3FTS3set17h57c16749566a888bE
               (undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_3 == 0) {
    *param_1 = 0x10;
    *(char **)(param_1 + 2) = "FTS::set()";
    *(undefined8 *)(param_1 + 4) = 10;
    *(undefined8 *)(param_1 + 6) = 0x2500000003;
    return;
  }
  iVar2 = (*(code *)PTR_fts_set_001f7078)(param_2,param_3,param_4);
  if (iVar2 != -1) {
    *param_1 = 0x12;
    return;
  }
  puVar3 = (uint *)(*(code *)PTR___errno_location_001f6e90)();
  uVar1 = *puVar3;
  *param_1 = 0x10;
  *(char **)(param_1 + 2) = "fts_set()";
  *(undefined8 *)(param_1 + 4) = 9;
  *(ulong *)(param_1 + 6) = (ulong)uVar1 << 0x20 | 2;
  return;
}