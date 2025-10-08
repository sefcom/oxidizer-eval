void _ZN11firecracker10api_server14parsed_request10checked_id17hc78530a21c875bb9E
               (undefined *param_1,long param_2,long param_3)

{
  undefined uVar1;
  char cVar2;
  long local_28;
  long local_20;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    local_20 = param_2 + param_3;
    local_28 = param_2;
    uVar1 = _ZN4core4iter6traits8iterator8Iterator8try_fold17heb71c9329db38417E(&local_28);
    cVar2 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h862a34282a5c52bfE
                      (uVar1);
    uVar1 = 2;
    if (cVar2 != '\0') {
      *(long *)(param_1 + 8) = param_2;
      *(long *)(param_1 + 0x10) = param_3;
      uVar1 = 5;
    }
  }
  *param_1 = uVar1;
  return;
}