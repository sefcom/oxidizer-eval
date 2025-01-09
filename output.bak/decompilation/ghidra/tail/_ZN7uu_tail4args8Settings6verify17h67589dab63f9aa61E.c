char __rustcall uu_tail::args::Settings::verify(long *param_1)

{
  char cVar1;
  long lVar2;
  long local_18;
  long local_10;
  
  local_18 = param_1[4];
  local_10 = param_1[5] * 0x30 + local_18;
  cVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any(&local_18);
  if ((cVar1 == '\0') || (cVar1 = '\x01', (*(byte *)((long)param_1 + 0x4c) & 1) == 0)) {
    if (*(byte *)((long)param_1 + 0x4c) == 2) {
      lVar2 = *param_1;
      if (lVar2 == 4) {
        lVar2 = param_1[1];
      }
      cVar1 = (lVar2 == 3) * '\x02';
    }
    else {
      cVar1 = '\0';
    }
  }
  return cVar1;
}