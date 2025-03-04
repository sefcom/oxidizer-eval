void _ZN6uu_env14split_iterator13SplitIterator29split_single_quoted_backslash17h9a57405ea848f4dbE
               (undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_44;
  undefined *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h5ca55267f11846dcE(param_2);
  local_44 = iVar2;
  if (iVar2 < 0x5c) {
    if (iVar2 == 10) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
      goto joined_r0x001da0a5;
    }
    if (iVar2 != 0x27) goto LAB_001da03d;
  }
  else if (iVar2 != 0x5c) {
    if (iVar2 == 0x110000) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 0x2700000000;
      goto LAB_001da0d0;
    }
LAB_001da03d:
    local_40 = &DAT_001252d0;
    puStack_38 = &DAT_00125318;
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h0082e106958e48e1E
                      (&local_40,&local_44);
    if (cVar1 == '\0') {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      *(undefined4 *)param_1 = 3;
      *(int *)((long)param_1 + 4) = iVar2;
LAB_001da0d0:
      param_1[1] = uVar3;
      return;
    }
    _ZN6uu_env14split_iterator13SplitIterator17push_char_to_word17h02dd43edde3f93feE(param_2,0x5c);
  }
  _ZN6uu_env14split_iterator13SplitIterator8take_one17h79c5ef4ea4fbd4eeE(&local_40,param_2);
joined_r0x001da0a5:
  if ((int)local_40 == 8) {
    *(undefined4 *)param_1 = 8;
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