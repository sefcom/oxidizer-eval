void _ZN6uu_env14split_iterator13SplitIterator29split_single_quoted_backslash17hc455b19cc4950464E
               (undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_44;
  char *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2);
  local_44 = iVar2;
  if (iVar2 < 0x5c) {
    if (iVar2 == 10) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
      goto joined_r0x00170e55;
    }
    if (iVar2 != 0x27) goto LAB_00170ded;
  }
  else if (iVar2 != 0x5c) {
    if (iVar2 == 0x110000) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 0x2700000000;
      goto LAB_00170e80;
    }
LAB_00170ded:
    local_40 = "r";
    puStack_38 = &DAT_0011e808;
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hfa16b6fb84ed72f1E
                      (&local_40,&local_44);
    if (cVar1 == '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *(undefined4 *)param_1 = 3;
      *(int *)((long)param_1 + 4) = iVar2;
LAB_00170e80:
      param_1[1] = uVar3;
      return;
    }
    _ZN6uu_env14split_iterator13SplitIterator17push_char_to_word17hcc09ef0ffa883c76E(param_2,0x5c);
  }
  _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_40,param_2);
joined_r0x00170e55:
  if ((int)local_40 == 0xc) {
    *(undefined4 *)param_1 = 0xc;
  }
  else {
    param_1[4] = local_20;
    param_1[2] = local_30;
    param_1[3] = uStack_28;
    *param_1 = local_40;
    param_1[1] = puStack_38;
  }
  return;
}