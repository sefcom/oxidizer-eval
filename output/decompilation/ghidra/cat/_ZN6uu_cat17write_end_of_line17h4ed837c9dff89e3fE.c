void _ZN6uu_cat17write_end_of_line17h4ed837c9dff89e3fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  long lVar1;
  
  lVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                    (param_2,param_3,param_4);
  if (lVar1 == 0) {
    if (param_5 != '\0') {
      lVar1 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17hf4899ae455fb37b6E
                        (param_2);
      if (lVar1 != 0) goto LAB_001b0f6e;
    }
    *param_1 = 0x8000000000000006;
  }
  else {
LAB_001b0f6e:
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar1;
  }
  return;
}