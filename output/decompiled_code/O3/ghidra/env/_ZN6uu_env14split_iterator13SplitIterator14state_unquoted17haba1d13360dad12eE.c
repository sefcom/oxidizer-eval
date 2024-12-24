void __rustcall
uu_env::split_iterator::SplitIterator::state_unquoted(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_2c;
  
  do {
    local_2c = get_current_char(param_2);
    if (local_2c < 0x27) {
      if (local_2c == 0x22) {
        skip_one(&local_58,param_2);
        if (local_58 != 8) goto LAB_001d9e1f;
        state_double_quoted(&local_58,param_2);
      }
      else {
        if (local_2c != 0x24) goto LAB_001d9dca;
        substitute_variable(&local_58,param_2);
      }
    }
    else if (local_2c == 0x27) {
      skip_one(&local_58,param_2);
      if (local_58 != 8) goto LAB_001d9e1f;
      state_single_quoted(&local_58,param_2);
    }
    else if (local_2c == 0x5c) {
      skip_one(&local_58,param_2);
      if (local_58 != 8) goto LAB_001d9e1f;
      state_unquoted_backslash(&local_58,param_2);
    }
    else {
      if (local_2c == 0x110000) {
        push_word_to_words(param_2);
        *(undefined4 *)param_1 = 6;
        return;
      }
LAB_001d9dca:
      cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_2c,&DAT_00125464,6);
      if (cVar1 != '\0') {
        push_word_to_words(param_2);
        skip_one(&local_58,param_2);
        if (local_58 == 8) {
          *(undefined4 *)param_1 = 8;
          return;
        }
        goto LAB_001d9e1f;
      }
      take_one(&local_58,param_2);
    }
    if (local_58 != 8) {
LAB_001d9e1f:
      param_1[4] = local_38;
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      *param_1 = CONCAT44(uStack_54,local_58);
      param_1[1] = uStack_50;
      return;
    }
  } while( true );
}