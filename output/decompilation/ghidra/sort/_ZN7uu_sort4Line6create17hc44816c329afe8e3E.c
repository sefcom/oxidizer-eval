void _ZN7uu_sort4Line6create17hc44816c329afe8e3E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_48;
  undefined8 local_40;
  char local_38;
  
  *(undefined8 *)(param_6 + 0x10) = 0;
  if (*(char *)(param_7 + 0x60) == '\0') {
    cVar4 = *(char *)(param_7 + 0x98);
  }
  else {
    _ZN7uu_sort8tokenize17h1a0db68099bd818aE
              (param_2,param_3,*(undefined4 *)(param_7 + 0x78),param_6);
    cVar4 = *(char *)(param_7 + 0x98);
  }
  if (cVar4 == '\0') {
    cVar4 = _ZN4core3str7pattern7Pattern15is_contained_in17h69d69b5be5063fafE(param_2,param_3);
    if (cVar4 == '\0') {
      (*(code *)
        PTR__ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17h05023748d9faa6d2E_002975c0
      )(&local_50,param_2,param_3);
      bVar5 = local_50 ^ 1;
      uVar8 = local_48;
    }
    else {
      bVar5 = 0;
      uVar8 = extraout_XMM0_Qa;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h50aa9f54e4d3c0c5E(uVar8,param_5 + 0x48,bVar5);
    lVar7 = *(long *)(param_7 + 0x10);
  }
  else {
    lVar7 = *(long *)(param_7 + 0x10);
  }
  if (lVar7 != 0) {
    lVar6 = *(long *)(param_7 + 8);
    uVar8 = *(undefined8 *)(param_6 + 8);
    uVar1 = *(undefined8 *)(param_6 + 0x10);
    lVar7 = lVar7 * 0x38;
    do {
      _ZN7uu_sort13FieldSelector13get_selection17hf6d6b91f1121e5faE
                (&local_50,lVar6,param_2,param_3,uVar8,uVar1);
      uVar3 = local_48;
      uVar2 = CONCAT71(uStack_4f,local_50);
      bVar5 = local_38 - 2;
      if (2 < bVar5) {
        bVar5 = 1;
      }
      if (bVar5 == 0) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc482587e95ace0dbE(local_48,param_5 + 0x30,uVar2);
      }
      else if (bVar5 == 1) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc71adfe4ca61889aE(param_5 + 0x18,local_40,local_38);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0603c4e988c7cc61E
                  (param_5,uVar2,uVar3,&PTR_s_src_uu_sort_src_sort_rs_0028ce38);
      }
      else if (*(char *)(lVar6 + 0x37) != '\0') {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0603c4e988c7cc61E
                  (param_5,uVar2,local_48,&PTR_s_src_uu_sort_src_sort_rs_0028ce50);
      }
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}