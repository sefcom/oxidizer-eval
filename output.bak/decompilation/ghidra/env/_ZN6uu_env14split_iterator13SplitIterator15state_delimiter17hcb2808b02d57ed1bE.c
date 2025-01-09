void __rustcall
uu_env::split_iterator::SplitIterator::state_delimiter(undefined8 *param_1,undefined8 param_2)

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
    if (local_2c == 0x23) {
      skip_one(&local_58,param_2);
      if (local_58 != 8) break;
      state_comment(&local_58,param_2);
    }
    else if (local_2c == 0x5c) {
      skip_one(&local_58,param_2);
      if (local_58 != 8) break;
      state_delimiter_backslash(&local_58,param_2);
    }
    else {
      if (local_2c == 0x110000) {
        *(undefined4 *)param_1 = 8;
        return;
      }
      cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_2c,&DAT_00125318,6);
      if (cVar1 == '\0') {
        state_unquoted(&local_58,param_2);
      }
      else {
        skip_one();
      }
    }
  } while (local_58 == 8);
  param_1[4] = local_38;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = CONCAT44(uStack_54,local_58);
  param_1[1] = uStack_50;
  return;
}