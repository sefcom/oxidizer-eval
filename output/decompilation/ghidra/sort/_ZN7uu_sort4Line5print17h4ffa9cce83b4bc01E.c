void _ZN7uu_sort4Line5print17h4ffa9cce83b4bc01E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 in_RAX;
  long lVar1;
  undefined8 uStack_18;
  
  if (*(char *)(param_4 + 0x7c) != '\0') {
    _ZN7uu_sort4Line11print_debug17h88f864449603f37cE(param_1,param_2,param_4,param_3);
    return;
  }
  uStack_18 = in_RAX;
  lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h13b43e7386c9bd95E
                    (param_3);
  if (lVar1 != 0) {
    return;
  }
  uStack_18 = CONCAT17(*(undefined *)(param_4 + 0x99),(undefined7)uStack_18);
  _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h13b43e7386c9bd95E
            (param_3,(long)&uStack_18 + 7,1);
  return;
}