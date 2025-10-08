undefined  [16]
_ZN8uu_chcon3fts8EntryRef11access_path17h84f48584df271673E
          (long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined auVar4 [16];
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = (*(code *)PTR_strlen_001f7090)(lVar1);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2 << 0x40;
}