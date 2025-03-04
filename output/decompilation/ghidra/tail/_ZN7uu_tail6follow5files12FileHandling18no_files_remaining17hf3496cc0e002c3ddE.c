bool _ZN7uu_tail6follow5files12FileHandling18no_files_remaining17hf3496cc0e002c3ddE
               (long param_1,long param_2)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return true;
  }
  cVar1 = _ZN7uu_tail6follow5files12FileHandling15files_remaining17h86d5a5f2d15f0cfdE();
  if (cVar1 != '\0') {
    return false;
  }
  return *(char *)(param_2 + 0x48) == '\0';
}