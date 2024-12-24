undefined  [16] __rustcall
uu_sort::FieldSelector::get_range
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auStack_68 [8];
  undefined **local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  auVar2 = get_range::resolve_index(param_2,param_3,param_4,param_5,param_1 + 0x18);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      auVar2 = get_range::resolve_index(param_2,param_3,param_4,param_5,param_1);
                    /* WARNING: Could not recover jumptable at 0x00220dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar2 = (*(code *)(&DAT_0012e9e0 + *(int *)(&DAT_0012e9e0 + auVar2._0_8_ * 4)))(auVar2._8_8_)
      ;
      return auVar2;
    }
    if (param_3 < uVar1) {
      param_3 = uVar1;
    }
  }
  else {
    uVar1 = param_3;
    if (auVar2._0_8_ != 3) {
      local_60 = &PTR_s_internal_error__entered_unreacha_002ff018;
      local_58 = 1;
      local_48 = 0;
      uStack_40 = 0;
      local_50 = auStack_68;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_60,&PTR_s_src_uu_sort_src_sort_rs_002ff028);
    }
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}