long _ZN7uu_join5State13print_headers17h1a883c7176263678E
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
      lVar2 = _ZN7uu_join5State7combine17h9cc01a532d9d0943E();
      goto joined_r0x00162620;
    }
  }
  lVar2 = _ZN7uu_join5State16print_first_line17h4753b74b852bc4d0E(param_3,param_2,param_4);
joined_r0x00162620:
  if (lVar2 == 0) {
    return 0;
  }
  return lVar2;
}