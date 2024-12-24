/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall uu_numfmt::parse_unit_size_suffix(char *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  ulong uVar4;
  undefined auVar5 [16];
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  if (param_2 == 0) {
    return 1;
  }
  local_18 = param_1 + param_2;
  local_20 = param_1;
  iVar2 = core::str::validations::next_code_point(&local_20);
  if (iVar2 == 0) {
    core::option::unwrap_failed(&PTR_s_src_uu_numfmt_src_numfmt_rs_00236368);
    uVar4 = extraout_RDX;
LAB_001c088c:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(uVar4,10,&PTR_s_src_uu_numfmt_src_numfmt_rs_00236380);
  }
  local_20 = "K";
  local_18 = "";
  local_28 = extraout_EDX;
  auVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_20,&local_28);
  if (auVar5._0_8_ == 1) {
    if (param_2 == 1) {
      uVar4 = auVar5._8_8_ + 1;
      if (uVar4 < 10) {
        return 1;
      }
      goto LAB_001c088c;
    }
    if (param_2 == 2) {
      local_24 = 0;
      uVar3 = core::char::methods::encode_utf8_raw(&local_24);
      cVar1 = core::slice::_<impl[T]>::ends_with(param_1,2,uVar3,1);
      if (cVar1 != '\0') {
        uVar4 = auVar5._8_8_ + 1;
        if (uVar4 < 10) {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar4,10,&PTR_s_src_uu_numfmt_src_numfmt_rs_00236398);
      }
    }
  }
  return 0;
}