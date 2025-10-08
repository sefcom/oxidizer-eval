undefined  [16]
_ZN7uu_sort13FieldSelector9get_range17h36eed4fe0a7f87ecE
          (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_RDX;
  undefined auVar3 [16];
  undefined auStack_68 [8];
  undefined **local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  auVar3 = _ZN7uu_sort13FieldSelector9get_range13resolve_index17h587b75ebbbe61c27E
                     (param_2,param_3,param_4,param_5,param_1 + 0x18);
  uVar2 = auVar3._8_8_;
  if (auVar3._0_8_ != 0) {
    uVar2 = param_3;
    if (auVar3._0_8_ == 3) goto LAB_001d3ceb;
    local_60 = &PTR_s_internal_error__entered_unreacha_0028d100;
    local_58 = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = auStack_68;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00296ca8)
              (&local_60,&PTR_s_src_uu_sort_src_sort_rs_0028d128);
    uVar2 = extraout_RDX;
  }
  if (*(char *)(param_1 + 0x10) != '\x02') {
    lVar1 = _ZN7uu_sort13FieldSelector9get_range13resolve_index17h587b75ebbbe61c27E
                      (param_2,param_3,param_4,param_5,param_1);
                    /* WARNING: Could not recover jumptable at 0x001d3c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)(&DAT_00128b20 + *(int *)(&DAT_00128b20 + lVar1 * 4)))();
    return auVar3;
  }
  if (param_3 < uVar2) {
    param_3 = uVar2;
  }
LAB_001d3ceb:
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar2;
  return auVar3;
}