void _ZN6uu_env14split_iterator13SplitIterator24state_unquoted_backslash17h38190f9bed933da1E
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 local_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 local_20;
  int iStack_1c;
  
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h5ca55267f11846dcE(param_2);
  if (iVar2 < 0x5c) {
    switch(iVar2) {
    case 10:
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
      break;
    default:
      goto switchD_001d9dda_caseD_b;
    case 0x22:
    case 0x24:
    case 0x27:
switchD_001d9dda_caseD_22:
      _ZN6uu_env14split_iterator13SplitIterator8take_one17h79c5ef4ea4fbd4eeE(&local_40,param_2);
    }
    if (local_40 != 8) {
LAB_001d9e4e:
      *(ulong *)(param_1 + 8) = CONCAT44(iStack_1c,local_20);
      *(ulong *)(param_1 + 4) = CONCAT35(uStack_2b,local_30);
      *(ulong *)(param_1 + 6) = CONCAT35(uStack_23,uStack_28);
      *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
      *(ulong *)(param_1 + 2) = CONCAT35(uStack_33,uStack_38);
      return;
    }
  }
  else {
    if (iVar2 < 99) {
      if (iVar2 == 0x5c) goto switchD_001d9dda_caseD_22;
      if (iVar2 == 0x5f) {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
        if (local_40 == 8) {
          _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17h2e43e9c5d0186d6cE(param_2)
          ;
          *param_1 = 7;
          return;
        }
        goto LAB_001d9e4e;
      }
    }
    else {
      if (iVar2 == 99) {
        _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17h2e43e9c5d0186d6cE(param_2);
        *param_1 = 6;
        return;
      }
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(param_2 + 0x38);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
                  (param_1 + 4,&DAT_001179f8,8);
        *param_1 = 1;
        *(undefined8 *)(param_1 + 2) = uVar1;
        return;
      }
    }
switchD_001d9dda_caseD_b:
    _ZN6uu_env14split_iterator13SplitIterator35check_and_replace_ascii_escape_code17h4d5fe0b4c9b39b36E
              (&local_40,param_2,iVar2);
    if (local_40 != 8) {
      param_1[9] = iStack_1c;
      *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_28,uStack_2b);
      *(ulong *)((long)param_1 + 0x1d) = CONCAT17((undefined)iStack_1c,CONCAT43(local_20,uStack_23))
      ;
      *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_38,uStack_3c._1_3_);
      *(ulong *)((long)param_1 + 0xd) = CONCAT53(local_30,uStack_33);
      *param_1 = local_40;
      *(char *)(param_1 + 1) = (char)uStack_3c;
      return;
    }
    if ((char)uStack_3c == '\0') {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 3;
      param_1[1] = iVar2;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
  }
  *param_1 = 8;
  return;
}