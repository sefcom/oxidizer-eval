void __rustcall
uu_env::split_iterator::SplitIterator::state_unquoted(int *param_1,undefined8 param_2)

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
    while (local_2c = get_current_char(param_2), 0x26 < local_2c) {
      if (local_2c == 0x27) {
        skip_one(&local_58,param_2);
        if (local_58 != 8) goto LAB_001d9d77;
        state_single_quoted(&local_58,param_2);
      }
      else {
        if (local_2c != 0x5c) {
          if (local_2c == 0x110000) {
            push_word_to_words(param_2);
            *param_1 = 6;
            return;
          }
          goto LAB_001d9cfe;
        }
        skip_one(&local_58,param_2);
        if (local_58 != 8) goto LAB_001d9d77;
        state_unquoted_backslash(&local_58,param_2);
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
      skip_one(&local_58,param_2);
      if (local_58 != 8) goto LAB_001d9d77;
      state_double_quoted(&local_58,param_2);
      goto LAB_001d9c69;
    }
    if (local_2c == 0x24) {
      substitute_variable(&local_58,param_2);
      goto LAB_001d9c69;
    }
LAB_001d9cfe:
    cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_2c,&DAT_00125318,6);
    if (cVar1 != '\0') {
      push_word_to_words(param_2);
      skip_one(&local_58,param_2);
      if (local_58 == 8) {
        *param_1 = 8;
        return;
      }
      goto LAB_001d9d77;
    }
    take_one(&local_58,param_2);
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