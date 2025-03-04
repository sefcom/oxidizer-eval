long _ZN7uu_tail6chunks10LinesChunk27calculate_bytes_offset_from17hf7157a0eade16c76E
               (long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  
  auVar5 = _ZN7uu_tail6chunks10LinesChunk10get_buffer17h4eee912e7ef2e0dbE();
  local_40 = auVar5._0_8_;
  local_38 = auVar5._8_8_ + local_40;
  pcVar3 = (char *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfe7d83be48d23115E
                             (&local_40);
  lVar4 = 0;
  if ((param_2 != 0) && (pcVar3 != (char *)0x0)) {
    cVar2 = *(char *)(param_1 + 0x2010);
    lVar4 = 0;
    do {
      cVar1 = *pcVar3;
      lVar4 = lVar4 + 1;
      pcVar3 = (char *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfe7d83be48d23115E
                                 (&local_40);
      if (pcVar3 == (char *)0x0) {
        return lVar4;
      }
      param_2 = param_2 - (ulong)(cVar1 == cVar2);
    } while (param_2 != 0);
  }
  return lVar4;
}