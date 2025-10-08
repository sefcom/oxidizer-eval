void _ZN11firecracker10api_server14parsed_request15method_to_error17h4698b3af70462059E
               (undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined6 uStack_46;
  undefined2 local_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined local_28 [8];
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 == '\0') {
    puVar2 = &DAT_001380c9;
    uVar1 = 0x1f;
  }
  else if (param_2 == '\x01') {
    puVar2 = &DAT_001380b7;
    uVar1 = 0x12;
  }
  else {
    puVar2 = &DAT_001380a3;
    uVar1 = 0x14;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
            (local_28,puVar2,uVar1);
  local_40 = local_28._0_2_;
  uStack_3e = local_28._2_6_;
  uStack_38 = (undefined2)uStack_20;
  *(undefined2 *)(param_1 + 1) = 0x301;
  param_1[3] = uStack_20;
  param_1[4] = local_18;
  *(ulong *)((long)param_1 + 10) = CONCAT26(local_40,uStack_46);
  *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_38,uStack_3e);
  *param_1 = 1;
  return;
}