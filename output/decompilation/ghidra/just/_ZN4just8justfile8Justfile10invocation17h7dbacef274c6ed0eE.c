void _ZN4just8justfile8Justfile10invocation17h7dbacef274c6ed0eE
               (undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               ulong param_6,ulong param_7)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_5 + param_7 * 0x18 + 0x10);
  do {
    if (param_6 - 1 == param_7) goto LAB_0036ed92;
    if (param_6 <= param_7) goto LAB_0036ede2;
    param_2 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17he9fea18cadddca02E
                        (*(undefined8 *)(param_2 + 0x2a0),*(undefined8 *)(param_2 + 0x2a8),
                         puVar3[-1],*puVar3);
    puVar3 = puVar3 + 3;
    param_7 = param_7 + 1;
  } while (param_2 != 0);
  param_2 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                      (&PTR_s_src_justfile_rs_______00530220);
LAB_0036ed92:
  if (param_7 < param_6) {
    lVar2 = _ZN4just8justfile8Justfile10get_recipe17h2487a07572812fbdE(param_2,puVar3[-1],*puVar3);
    if (lVar2 != 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hb39d7af186885eb1E
                (param_1 + 8,param_3,param_4);
      *(long *)(param_1 + 0x20) = lVar2;
      *param_1 = 0x38;
      return;
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
              (&PTR_s_src_justfile_rs_______00530250);
LAB_0036ede2:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00566060)
              (param_7,param_6,&PTR_s_src_justfile_rs_______00530208);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00566060)
            (param_7,param_6,&PTR_s_src_justfile_rs_______00530238);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}