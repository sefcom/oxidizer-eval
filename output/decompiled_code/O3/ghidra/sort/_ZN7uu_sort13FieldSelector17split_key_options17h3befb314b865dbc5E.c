void __rustcall uu_sort::FieldSelector::split_key_options(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [12];
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  local_50 = param_2 + param_3;
  local_48 = 0;
  local_58 = param_2;
  auVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_58);
  if (auVar2._8_4_ == 0x110000) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
    param_1[3] = 0;
  }
  else {
    core::str::_<impl_str>::split_at_checked(&local_40,param_2,param_3,auVar2._0_8_);
    if (local_40 == 0) {
      core::str::slice_error_fail
                (param_2,param_3,0,auVar2._0_8_,&PTR_s__rustc_8bfcae730a5db2438bbda7279_002ffa90);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1[2] = local_30;
    param_1[3] = lStack_28;
    *param_1 = local_40;
    param_1[1] = lStack_38;
  }
  return;
}