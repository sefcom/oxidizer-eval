undefined  [16] __rustcall
uu_sort::FieldSelector::get_range
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auStack_68 [8];
  undefined **local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  auVar3 = get_range::resolve_index(param_2,param_3,param_4,param_5,param_1 + 0x18);
  uVar2 = auVar3._8_8_;
  if (auVar3._0_8_ == 0) {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      lVar1 = get_range::resolve_index(param_2,param_3,param_4,param_5,param_1);
                    /* WARNING: Could not recover jumptable at 0x00221d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*(code *)(&DAT_0012eb30 + *(int *)(&DAT_0012eb30 + lVar1 * 4)))();
      return auVar3;
    }
    if (param_3 < uVar2) {
      param_3 = uVar2;
    }
  }
  else {
    uVar2 = param_3;
    if (auVar3._0_8_ != 3) {
      local_60 = &PTR_s_internal_error__entered_unreacha_002ffb28;
      local_58 = 1;
      local_48 = 0;
      uStack_40 = 0;
      local_50 = auStack_68;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_60,&PTR_s_src_uu_sort_src_sort_rs_002ffb50);
    }
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar2;
  return auVar3;
}