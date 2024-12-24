long __rustcall uu_tail::chunks::BytesChunk::from_chunk(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auStack_2028 [4096];
  undefined8 local_1028;
  
  local_1028 = 0;
  lVar1 = *(ulong *)(param_2 + 0x2000) - param_3;
  if (*(ulong *)(param_2 + 0x2000) < param_3 || lVar1 == 0) {
    lVar1 = 0;
    (*(code *)PTR_memset_002c4d90)(param_1,0,0x2000);
  }
  else {
    (*(code *)PTR_memset_002c4d90)(auStack_2028,0,0x2000);
    auVar2 = get_buffer_with(param_2,param_3);
    auVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                       (auVar2._8_8_,auStack_2028,0x2000,&PTR_DAT_002bdfd0);
    core::slice::_<impl[T]>::copy_from_slice
              (auVar3._0_8_,auVar3._8_8_,auVar2._0_8_,auVar2._8_8_,&PTR_DAT_002bdfe8);
    (*(code *)PTR_memcpy_002c47b8)(param_1,auStack_2028,0x2000);
  }
  *(long *)(param_1 + 0x2000) = lVar1;
  return param_1;
}