bool __rustcall uu_tail::follow::files::FileHandling::no_files_remaining(long param_1,long param_2)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return true;
  }
  cVar1 = files_remaining();
  if (cVar1 != '\0') {
    return false;
  }
  return *(char *)(param_2 + 0x48) == '\0';
}