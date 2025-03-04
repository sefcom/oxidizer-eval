long _ZN7uu_join5State13print_headers17hb47e9ff319dcdc6dE
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
      lVar2 = _ZN7uu_join5State7combine17h87fbb4174e657c14E();
      goto joined_r0x00171b90;
    }
  }
  lVar2 = _ZN7uu_join5State16print_first_line17h7613f1add6e5ed81E(param_3,param_2,param_4);
joined_r0x00171b90:
  if (lVar2 == 0) {
    return 0;
  }
  return lVar2;
}