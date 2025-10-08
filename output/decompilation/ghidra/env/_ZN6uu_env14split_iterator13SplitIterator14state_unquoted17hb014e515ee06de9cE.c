void _ZN6uu_env14split_iterator13SplitIterator14state_unquoted17hb014e515ee06de9cE
               (int *param_1,undefined8 param_2)

{
  char cVar1;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int iStack_34;
  int local_2c;
  
  do {
    while (local_2c = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE
                                (param_2), 0x26 < local_2c) {
      if (local_2c == 0x27) {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
        if (local_58 != 0xc) goto LAB_00170b27;
        _ZN6uu_env14split_iterator13SplitIterator19state_single_quoted17hc3a62f3f6b5c568cE
                  (&local_58,param_2);
      }
      else {
        if (local_2c != 0x5c) {
          if (local_2c == 0x110000) {
            _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17hde29bdf58d338eebE
                      (param_2);
            *param_1 = 9;
            return;
          }
          goto LAB_00170aae;
        }
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
        if (local_58 != 0xc) goto LAB_00170b27;
        _ZN6uu_env14split_iterator13SplitIterator24state_unquoted_backslash17h36c7c5f0e0f90489E
                  (&local_58,param_2);
      }
LAB_00170a19:
      if (local_58 != 0xc) {
LAB_00170b27:
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_34,local_38);
        *(ulong *)(param_1 + 4) = CONCAT44(uStack_44,local_48);
        *(ulong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
        *(ulong *)param_1 = CONCAT44(uStack_54,local_58);
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_4c,uStack_50);
        return;
      }
    }
    if (local_2c == 0x22) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
      if (local_58 != 0xc) goto LAB_00170b27;
      _ZN6uu_env14split_iterator13SplitIterator19state_double_quoted17h95d0342559df96c6E
                (&local_58,param_2);
      goto LAB_00170a19;
    }
    if (local_2c == 0x24) {
      _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17hf281b653692e3534E
                (&local_58,param_2);
      goto LAB_00170a19;
    }
LAB_00170aae:
    cVar1 = _ZN56__LT_char_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h2af8667b79ce998cE
                      (&local_2c,&DAT_0011e808,6);
    if (cVar1 != '\0') {
      _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17hde29bdf58d338eebE(param_2);
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_58,param_2);
      if (local_58 == 0xc) {
        *param_1 = 0xc;
        return;
      }
      goto LAB_00170b27;
    }
    _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_58,param_2);
    if (local_58 != 0xc) {
      param_1[9] = iStack_34;
      *(ulong *)(param_1 + 5) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(param_1 + 7) = CONCAT44(local_38,uStack_3c);
      *(ulong *)(param_1 + 1) = CONCAT44(uStack_50,uStack_54);
      *(ulong *)(param_1 + 3) = CONCAT44(local_48,uStack_4c);
      *param_1 = local_58;
      return;
    }
  } while( true );
}