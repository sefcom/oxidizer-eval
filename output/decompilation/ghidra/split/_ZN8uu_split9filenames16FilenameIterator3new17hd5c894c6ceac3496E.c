long * _ZN8uu_split9filenames16FilenameIterator3new17hd5c894c6ceac3496E
                 (long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  undefined local_48 [24];
  undefined4 local_30;
  
  bVar4 = *(char *)(param_4 + 0x29) << 3;
  uVar2 = 0x100a1a >> (bVar4 & 0x1f);
  if (*(char *)(param_4 + 0x28) == '\0') {
    _ZN8uu_split6number16FixedWidthNumber3new17he6f7e0494f2522baE
              (&local_68,(char)uVar2,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x20)
              );
    if (local_68 == -0x8000000000000000) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha461c13160c52a35E(local_48)
      ;
      local_30 = 1;
      lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb3c54f980883cdc1E(local_48);
      param_1[1] = lVar3;
      param_1[2] = (long)&
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h957db0c9a72d5de1E_00249160
      ;
      *param_1 = -0x7fffffffffffffff;
      return param_1;
    }
    plVar5 = (long *)(local_58 >> 8);
  }
  else {
    local_60 = *(long *)(param_4 + 0x20);
    local_58 = (ulong)uVar2;
    local_50 = (ulong)bVar4;
    plVar5 = param_1;
    local_68 = -0x8000000000000000;
  }
  lVar3 = *(long *)(param_4 + 8);
  lVar1 = *(long *)(param_4 + 0x10);
  *param_1 = local_68;
  param_1[1] = local_60;
  *(char *)(param_1 + 2) = (char)local_58;
  *(int *)((long)param_1 + 0x11) = (int)plVar5;
  *(char *)((long)param_1 + 0x17) = (char)((ulong)plVar5 >> 0x30);
  *(short *)((long)param_1 + 0x15) = (short)((ulong)plVar5 >> 0x20);
  param_1[3] = local_50;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = lVar3;
  param_1[7] = lVar1;
  *(undefined *)(param_1 + 8) = 1;
  return param_1;
}