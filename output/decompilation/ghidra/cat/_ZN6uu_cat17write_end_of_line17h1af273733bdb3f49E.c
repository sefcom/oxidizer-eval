void _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  long lVar1;
  
  lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                    (param_2,param_3,param_4);
  if (lVar1 == 0) {
    if (param_5 != '\0') {
      lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h92f2b65981f505d2E
                        (param_2);
      if (lVar1 != 0) goto LAB_0016015d;
    }
    *param_1 = 0x8000000000000006;
  }
  else {
LAB_0016015d:
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar1;
  }
  return;
}