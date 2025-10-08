void _ZN6uu_env14split_iterator13SplitIterator24state_unquoted_backslash17h36c7c5f0e0f90489E
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_40;
  uint uStack_3c;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2);
  if (iVar2 < 0x5c) {
    switch(iVar2) {
    case 10:
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
      break;
    default:
      goto switchD_00170b8a_caseD_b;
    case 0x22:
    case 0x24:
    case 0x27:
switchD_00170b8a_caseD_22:
      _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_40,param_2);
    }
    if (local_40 != 0xc) {
LAB_00170bfe:
      *(ulong *)(param_1 + 8) = CONCAT44(iStack_1c,uStack_20);
      *(ulong *)(param_1 + 4) = CONCAT35(uStack_2b,uStack_30);
      *(ulong *)(param_1 + 6) = CONCAT35(uStack_23,uStack_28);
      *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
      *(ulong *)(param_1 + 2) = CONCAT35(uStack_33,uStack_38);
      return;
    }
  }
  else {
    if (iVar2 < 99) {
      if (iVar2 == 0x5c) goto switchD_00170b8a_caseD_22;
      if (iVar2 == 0x5f) {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
        if (local_40 == 0xc) {
          _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17hde29bdf58d338eebE(param_2)
          ;
          *param_1 = 10;
          return;
        }
        goto LAB_00170bfe;
      }
    }
    else {
      if (iVar2 == 99) {
        _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17hde29bdf58d338eebE(param_2);
        *param_1 = 9;
        return;
      }
      if (iVar2 == 0x110000) {
        uVar1 = *(undefined8 *)(param_2 + 0x38);
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
                  (param_1 + 4,"Unquoted",8);
        *param_1 = 1;
        *(undefined8 *)(param_1 + 2) = uVar1;
        return;
      }
    }
switchD_00170b8a_caseD_b:
    _ZN6uu_env14split_iterator13SplitIterator35check_and_replace_ascii_escape_code17hbf4d9b34cfe30d19E
              (&local_40,param_2,iVar2);
    if (local_40 != 0xc) {
      param_1[9] = iStack_1c;
      *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_28,uStack_2b);
      *(ulong *)((long)param_1 + 0x1d) =
           CONCAT17((undefined)iStack_1c,CONCAT43(uStack_20,uStack_23));
      *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_38,uStack_3c._1_3_);
      *(ulong *)((long)param_1 + 0xd) = CONCAT53(uStack_30,uStack_33);
      *param_1 = local_40;
      *(undefined *)(param_1 + 1) = (undefined)uStack_3c;
      return;
    }
    if ((uStack_3c & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 3;
      param_1[1] = iVar2;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
  }
  *param_1 = 0xc;
  return;
}