long _ZN7uu_join15Repr_LT_Sep_GT_12print_format17hea27b3577be33d0eE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  auVar3 = *(undefined (*) [16])(param_1 + 0x18);
  uVar6 = 0;
  while( true ) {
    if (uVar2 <= uVar6) {
      return 0;
    }
    uVar4 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                      (uVar6);
    if ((uVar6 != 0) &&
       (lVar5 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                          (param_2,&DAT_0010b685,1), lVar5 != 0)) break;
    auVar7 = _ZN7uu_join5State7combine28__u7b__u7b_closure_u7d__u7d_17h06ca42913a256998E
                       (param_3,uVar6 * 0x10 + lVar1);
    if (auVar7._0_8_ == 0) {
      auVar7 = auVar3;
    }
    lVar5 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                      (param_2,auVar7._0_8_,auVar7._8_8_);
    uVar6 = uVar4;
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  return lVar5;
}