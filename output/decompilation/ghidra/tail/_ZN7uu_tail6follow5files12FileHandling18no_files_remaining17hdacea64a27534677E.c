ulong _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hdacea64a27534677E
                (long param_1,uint param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return CONCAT71((int7)((ulong)unaff_RBX >> 8),1) & 0xffffffff;
  }
  cVar1 = _ZN7uu_tail6follow5files12FileHandling15files_remaining17h4da9cfafa6cde0f6E();
  if (cVar1 != '\0') {
    return 0;
  }
  return (ulong)(param_2 ^ 1) & 0xffffffffffffff01;
}