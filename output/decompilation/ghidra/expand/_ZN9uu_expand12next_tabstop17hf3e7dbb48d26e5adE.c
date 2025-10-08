long _ZN9uu_expand12next_tabstop17hf3e7dbb48d26e5adE
               (ulong *param_1,long param_2,ulong param_3,char param_4)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_R12;
  undefined auVar6 [16];
  ulong *local_38;
  ulong *local_30;
  ulong local_28;
  
  local_28 = param_3;
  if (param_4 == '\0') {
LAB_0015d2f5:
    if (param_2 == 1) {
      uVar5 = *param_1;
      if (uVar5 != 0) {
LAB_0015d30b:
        if ((param_3 | uVar5) >> 0x20 == 0) {
          param_3 = (param_3 & 0xffffffff) % (uVar5 & 0xffffffff);
        }
        else {
          param_3 = param_3 % uVar5;
        }
        return uVar5 - param_3;
      }
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_001ef2e8)
                (&PTR_s_src_uu_expand_src_expand_rs_001e89b0);
LAB_0015d3ff:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001ef180)
                (unaff_R12,0,&PTR_s_src_uu_expand_src_expand_rs_001e89e0);
LAB_0015d411:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001ef180)
                (unaff_R12,0,&PTR_s_src_uu_expand_src_expand_rs_001e8a28);
LAB_0015d423:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001ef180)
                (param_2 + -2,1,&PTR_s_src_uu_expand_src_expand_rs_001e8a40);
LAB_0015d43c:
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_001ef2f0)
                (&PTR_s_src_uu_expand_src_expand_rs_001e8a58);
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    local_30 = param_1 + param_2;
    local_38 = param_1;
    plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h1fbb722a12bdd0f1E
                               (&local_38,&local_28);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
  }
  else {
    unaff_R12 = param_2 + -1;
    if (param_4 == '\x01') {
      auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hb47ef625d69d1750E
                         (unaff_R12,param_1,param_2,&PTR_s_src_uu_expand_src_expand_rs_001e89c8);
      local_38 = auVar6._0_8_;
      local_30 = local_38 + auVar6._8_8_;
      plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h1fbb722a12bdd0f1E
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 != 0) {
          uVar5 = param_1[param_2 + -1];
          if (uVar5 != 0) goto LAB_0015d30b;
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_001ef2e8
          )(&PTR_s_src_uu_expand_src_expand_rs_001e89f8);
          goto LAB_0015d2f5;
        }
        goto LAB_0015d3ff;
      }
    }
    else {
      auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hb47ef625d69d1750E
                         (unaff_R12,param_1,param_2,&PTR_s_src_uu_expand_src_expand_rs_001e8a10);
      local_38 = auVar6._0_8_;
      local_30 = local_38 + auVar6._8_8_;
      plVar2 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h1fbb722a12bdd0f1E
                                 (&local_38,&local_28);
      if (plVar2 == (long *)0x0) {
        if (param_2 == 0) goto LAB_0015d411;
        if (param_2 != 1) {
          uVar5 = param_1[param_2 + -1];
          if (uVar5 == 0) goto LAB_0015d43c;
          param_3 = param_3 - param_1[param_2 + -2];
          if ((param_3 | uVar5) >> 0x20 == 0) {
            uVar3 = (param_3 & 0xffffffff) / (uVar5 & 0xffffffff);
          }
          else {
            uVar3 = param_3 / uVar5;
          }
          lVar4 = (uVar3 + 1) * uVar5;
          goto LAB_0015d3bd;
        }
        goto LAB_0015d423;
      }
    }
  }
  lVar4 = *plVar2;
LAB_0015d3bd:
  return lVar4 - param_3;
}