long _ZN7uu_tail6chunks10LinesChunk10from_chunk17h92082d78e298c7e3E
               (long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined uVar2;
  long lVar3;
  
  lVar3 = *(ulong *)(param_2 + 0x2008) - param_3;
  if (*(ulong *)(param_2 + 0x2008) < param_3) {
    uVar2 = *(undefined *)(param_2 + 0x2010);
    lVar3 = 0;
    (*(code *)PTR_memset_002c2d40)(param_1,0,0x2008);
  }
  else {
    uVar1 = _ZN7uu_tail6chunks10LinesChunk27calculate_bytes_offset_from17hf7157a0eade16c76E
                      (param_2,param_3);
    _ZN7uu_tail6chunks10BytesChunk10from_chunk17hb6067992a01f279aE(param_1,param_2,uVar1);
    uVar2 = *(undefined *)(param_2 + 0x2010);
  }
  *(long *)(param_1 + 0x2008) = lVar3;
  *(undefined *)(param_1 + 0x2010) = uVar2;
  return param_1;
}