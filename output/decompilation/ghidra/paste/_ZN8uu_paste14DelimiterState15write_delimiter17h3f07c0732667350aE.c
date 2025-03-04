void _ZN8uu_paste14DelimiterState15write_delimiter17h3f07c0732667350aE
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      uVar4 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hcc8a2e10db1efe00E
                        (param_1[1],param_1[2] + param_1[1]);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17hc26dafc40ef81f0cE(param_2,uVar4);
      return;
    }
    plVar5 = (long *)_ZN102__LT_core__iter__adapters__cycle__Cycle_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h51037f884ab7bbf8E
                               (param_1 + 5);
    if (plVar5 == (long *)0x0) {
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_paste_src_paste_rs_00213628);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    uVar4 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hcc8a2e10db1efe00E(lVar1,lVar1 + lVar2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17hc26dafc40ef81f0cE(param_2,uVar4);
    param_1[1] = lVar1;
    param_1[2] = lVar2;
  }
  return;
}