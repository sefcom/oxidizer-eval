long __rustcall
uu_join::State::print_headers(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_3 + 0x10);
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*plVar1 == 0) {
      return 0;
    }
  }
  else {
    param_3 = param_1;
    if (*plVar1 != 0) {
      lVar2 = combine();
      goto joined_r0x00171d60;
    }
  }
  lVar2 = print_first_line(param_3,param_2,param_4);
joined_r0x00171d60:
  if (lVar2 == 0) {
    return 0;
  }
  return lVar2;
}