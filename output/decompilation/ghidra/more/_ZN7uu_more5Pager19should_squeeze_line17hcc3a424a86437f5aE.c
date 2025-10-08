byte _ZN7uu_more5Pager19should_squeeze_line17hcc3a424a86437f5aE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x81) == '\x01') {
    lVar1 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h829d259aa4156da6E(param_2,param_3);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      bVar3 = false;
    }
    else {
      lVar2 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h829d259aa4156da6E
                        (*(undefined8 *)(*(long *)(param_1 + 0x18) + -0x10 + lVar2 * 0x18),
                         *(undefined8 *)(*(long *)(param_1 + 0x18) + -8 + lVar2 * 0x18));
      bVar3 = lVar2 == 0;
    }
    return lVar1 == 0 & bVar3;
  }
  return 0;
}