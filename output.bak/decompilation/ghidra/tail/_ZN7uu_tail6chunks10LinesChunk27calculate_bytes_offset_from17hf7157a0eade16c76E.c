long __rustcall uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  
  auVar5 = get_buffer();
  local_40 = auVar5._0_8_;
  local_38 = auVar5._8_8_ + local_40;
  pcVar3 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_40);
  lVar4 = 0;
  if ((param_2 != 0) && (pcVar3 != (char *)0x0)) {
    cVar2 = *(char *)(param_1 + 0x2010);
    lVar4 = 0;
    do {
      cVar1 = *pcVar3;
      lVar4 = lVar4 + 1;
      pcVar3 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_40);
      if (pcVar3 == (char *)0x0) {
        return lVar4;
      }
      param_2 = param_2 - (ulong)(cVar1 == cVar2);
    } while (param_2 != 0);
  }
  return lVar4;
}