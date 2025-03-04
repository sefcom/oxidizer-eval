void _ZN6uu_env14split_iterator13SplitIterator14state_unquoted17h4114e84db94125c1E
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
    while (local_2c = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h5ca55267f11846dcE
                                (param_2), 0x26 < local_2c) {
      if (local_2c == 0x27) {
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
        if (local_58 != 8) goto LAB_001d9d77;
        _ZN6uu_env14split_iterator13SplitIterator19state_single_quoted17hb66b7ab13358fbb8E
                  (&local_58,param_2);
      }
      else {
        if (local_2c != 0x5c) {
          if (local_2c == 0x110000) {
            _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17h2e43e9c5d0186d6cE
                      (param_2);
            *param_1 = 6;
            return;
          }
          goto LAB_001d9cfe;
        }
        _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
        if (local_58 != 8) goto LAB_001d9d77;
        _ZN6uu_env14split_iterator13SplitIterator24state_unquoted_backslash17h38190f9bed933da1E
                  (&local_58,param_2);
      }
LAB_001d9c69:
      if (local_58 != 8) {
LAB_001d9d77:
        *(ulong *)(param_1 + 8) = CONCAT44(iStack_34,local_38);
        *(ulong *)(param_1 + 4) = CONCAT44(uStack_44,local_48);
        *(ulong *)(param_1 + 6) = CONCAT44(uStack_3c,uStack_40);
        *(ulong *)param_1 = CONCAT44(uStack_54,local_58);
        *(ulong *)(param_1 + 2) = CONCAT44(uStack_4c,uStack_50);
        return;
      }
    }
    if (local_2c == 0x22) {
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
      if (local_58 != 8) goto LAB_001d9d77;
      _ZN6uu_env14split_iterator13SplitIterator19state_double_quoted17hb7981fc821b01516E
                (&local_58,param_2);
      goto LAB_001d9c69;
    }
    if (local_2c == 0x24) {
      _ZN6uu_env14split_iterator13SplitIterator19substitute_variable17h1db80b01658fc728E
                (&local_58,param_2);
      goto LAB_001d9c69;
    }
LAB_001d9cfe:
    cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h1ba5288d29bd1e28E
                      (&local_2c,&DAT_00125318,6);
    if (cVar1 != '\0') {
      _ZN6uu_env14split_iterator13SplitIterator18push_word_to_words17h2e43e9c5d0186d6cE(param_2);
      _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_58,param_2);
      if (local_58 == 8) {
        *param_1 = 8;
        return;
      }
      goto LAB_001d9d77;
    }
    _ZN6uu_env14split_iterator13SplitIterator8take_one17h79c5ef4ea4fbd4eeE(&local_58,param_2);
    if (local_58 != 8) {
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