undefined8 _ZN2fd12regex_helper22hir_has_uppercase_char17h47600744d8eac6faE(ulong *param_1)

{
  ulong uVar1;
  undefined uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_38;
  ulong local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  do {
    uVar5 = *param_1 - 2;
    if (7 < uVar5) {
      uVar5 = 2;
    }
    lVar4 = 0x10;
    switch(uVar5) {
    case 1:
      uVar5 = param_1[1];
      uVar1 = param_1[2];
      (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0053ff10)
                (&local_38,uVar5,uVar1);
      if ((local_38 & 1) != 0) {
        local_18 = uVar1 + uVar5;
        local_20 = uVar5;
        uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hdb2b8379688b931cE
                          (&local_20);
        return uVar3;
      }
      local_18 = local_28 + local_30;
      local_20 = local_30;
      uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hb263849006ded29dE(&local_20);
LAB_002f76dc:
      uVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hf5117a12fd3a5609E
                        (uVar2);
      return uVar3;
    case 2:
      if ((*param_1 & 1) == 0) {
        local_38 = param_1[2];
        local_30 = local_38 + param_1[3] * 8;
        uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h8988d4c59a076347E(&local_38);
      }
      else {
        local_38 = param_1[2];
        local_30 = local_38 + param_1[3] * 2;
        uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hc1c7f954704853d3E(&local_38);
      }
      goto LAB_002f76dc;
    default:
      return 0;
    case 5:
      lVar4 = 8;
    case 4:
      param_1 = *(ulong **)((long)param_1 + lVar4);
      break;
    case 6:
    case 7:
      local_38 = param_1[2];
      local_30 = param_1[3] * 0x30 + local_38;
      uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17haa53f3d57c60f664E
                        (&local_38);
      return uVar3;
    }
  } while( true );
}