long _ZN7uu_tail6chunks10LinesChunk10from_chunk17h9998bcc032f5fddeE
               (long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined uVar2;
  long lVar3;
  
  lVar3 = *(ulong *)(param_2 + 0x2008) - param_3;
  if (*(ulong *)(param_2 + 0x2008) < param_3) {
    uVar2 = *(undefined *)(param_2 + 0x2010);
    lVar3 = 0;
    (*(code *)PTR_memset_0027d738)(param_1,0,0x2000);
    *(undefined8 *)(param_1 + 0x2000) = 0;
  }
  else {
    uVar1 = (*(code *)
              PTR__ZN7uu_tail6chunks10LinesChunk27calculate_bytes_offset_from17h2268f5cb3457a111E_0027d828
            )(param_2,param_3);
    (*(code *)PTR__ZN7uu_tail6chunks10BytesChunk10from_chunk17hf1adf92578b17e1cE_0027d7f0)
              (param_1,param_2,uVar1);
    uVar2 = *(undefined *)(param_2 + 0x2010);
  }
  *(long *)(param_1 + 0x2008) = lVar3;
  *(undefined *)(param_1 + 0x2010) = uVar2;
  return param_1;
}