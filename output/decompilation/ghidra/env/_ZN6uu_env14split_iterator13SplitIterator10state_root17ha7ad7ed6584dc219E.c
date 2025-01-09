void __rustcall
uu_env::split_iterator::SplitIterator::state_root(undefined8 *param_1,undefined8 param_2)

{
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  while( true ) {
    state_delimiter(&local_40,param_2);
    if (local_40 != 7) break;
    core::ptr::drop_in_place<core::result::Result<(),uu_env::parse_error::ParseError>>(&local_40);
  }
  if (local_40 == 6) {
    *(undefined4 *)param_1 = 8;
    core::ptr::drop_in_place<core::result::Result<(),uu_env::parse_error::ParseError>>(&local_40);
  }
  else {
    param_1[4] = local_20;
    param_1[2] = local_30;
    param_1[3] = uStack_28;
    *param_1 = CONCAT44(uStack_3c,local_40);
    param_1[1] = uStack_38;
  }
  return;
}