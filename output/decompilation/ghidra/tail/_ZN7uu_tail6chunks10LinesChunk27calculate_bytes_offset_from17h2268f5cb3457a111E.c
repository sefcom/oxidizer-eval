long _ZN7uu_tail6chunks10LinesChunk27calculate_bytes_offset_from17h2268f5cb3457a111E
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  
  auVar3 = (*(code *)PTR__ZN7uu_tail6chunks10LinesChunk10get_buffer17h12c5d003f1f481a3E_0027d818)();
  if (param_2 == 0 || auVar3._8_8_ == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      if (auVar3._8_8_ + -1 == lVar1) {
        return lVar2;
      }
      param_2 = param_2 - (ulong)(*(char *)(auVar3._0_8_ + lVar1) == *(char *)(param_1 + 0x2010));
      lVar1 = lVar2;
    } while (param_2 != 0);
  }
  return lVar2;
}