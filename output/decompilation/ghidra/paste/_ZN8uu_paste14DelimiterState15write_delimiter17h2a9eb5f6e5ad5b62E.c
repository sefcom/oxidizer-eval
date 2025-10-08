void _ZN8uu_paste14DelimiterState15write_delimiter17h2a9eb5f6e5ad5b62E
               (long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h5f8246458d20e263E
                (param_2,param_1[1],param_1[2] + param_1[1]);
      return;
    }
    plVar3 = (long *)_ZN102__LT_core__iter__adapters__cycle__Cycle_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4d77355d8d9a2419E
                               (param_1 + 5);
    if (plVar3 == (long *)0x0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e52c8)
                (&PTR_s_src_uu_paste_src_paste_rs_001dedb8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h5f8246458d20e263E
              (param_2,*plVar3,plVar3[1] + *plVar3);
    lVar2 = plVar3[1];
    param_1[1] = *plVar3;
    param_1[2] = lVar2;
  }
  return;
}