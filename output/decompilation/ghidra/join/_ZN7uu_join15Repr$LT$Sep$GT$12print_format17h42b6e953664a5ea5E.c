long _ZN7uu_join15Repr_LT_Sep_GT_12print_format17h42b6e953664a5ea5E
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
LAB_0015e79a:
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    auVar1 = *(undefined (*) [16])(param_1 + 0x18);
    auVar5 = _ZN7uu_join5State7combine28__u7b__u7b_closure_u7d__u7d_17h139dd91493e9d14fE
                       (param_3,lVar3);
    if (auVar5._0_8_ == 0) {
      auVar5 = auVar1;
    }
    lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                      (param_2,auVar5._0_8_,auVar5._8_8_);
    while (lVar2 == 0) {
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) goto LAB_0015e79a;
      lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                        (param_2,1,0);
      if (lVar2 != 0) {
        return lVar2;
      }
      auVar5 = _ZN7uu_join5State7combine28__u7b__u7b_closure_u7d__u7d_17h139dd91493e9d14fE
                         (param_3,lVar3);
      if (auVar5._0_8_ == 0) {
        auVar5 = auVar1;
      }
      lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                        (param_2,auVar5._0_8_,auVar5._8_8_);
    }
  }
  return lVar2;
}