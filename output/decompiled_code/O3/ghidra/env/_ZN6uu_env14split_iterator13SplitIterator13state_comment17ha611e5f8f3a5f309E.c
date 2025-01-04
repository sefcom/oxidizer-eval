void __rustcall
uu_env::split_iterator::SplitIterator::state_comment(undefined8 *param_1,long param_2)

{
  int iVar1;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  while( true ) {
    iVar1 = get_current_char(param_2);
    if (iVar1 == 10) {
      skip_one(&local_48,param_2);
      if (local_48 == 8) {
        *(undefined4 *)param_1 = 8;
      }
      else {
        param_1[4] = local_28;
        param_1[2] = local_38;
        param_1[3] = uStack_30;
        *param_1 = CONCAT44(uStack_44,local_48);
        param_1[1] = uStack_40;
      }
      return;
    }
    if (iVar1 == 0x110000) break;
    string_parser::StringParser::skip_until_char_or_end(param_2 + 0x18,10);
  }
  *(undefined4 *)param_1 = 6;
  return;
}