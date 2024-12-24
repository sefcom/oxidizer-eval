undefined8 * __rustcall
uu_split::number::FixedWidthNumber::new
          (undefined8 *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 local_38;
  long lStack_30;
  ulong local_28;
  
  _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&local_38,param_3);
  if (param_2 == 0) {
    if (local_28 != 0) {
      uVar3 = core::panicking::panic_const::panic_const_rem_by_zero
                        (&PTR_s_src_uu_split_src_number_rs_00249748);
                    /* catch() { ... } // from try @ 001db6c5 with catch @ 001db6e1 */
                    /* try { // try from 001db6e4 to 001db6eb has its CatchHandler @ 001db6f4 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_38);
      puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
      return puVar4;
    }
LAB_001db687:
    if (param_4 != 0) {
      *param_1 = 0x8000000000000000;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_38);
      return param_1;
    }
  }
  else {
    uVar5 = (ulong)param_2;
    uVar2 = local_28;
    do {
      if (uVar2 == 0) goto LAB_001db687;
      uVar2 = _<usize_as_core::iter::range::Step>::backward_unchecked();
      if (local_28 <= uVar2) {
                    /* try { // try from 001db6c5 to 001db6e0 has its CatchHandler @ 001db6e1 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar2,local_28,&PTR_s_src_uu_split_src_number_rs_00249760);
      }
      uVar1 = param_4;
      if (param_4 >> 0x20 == 0) {
        uVar1 = param_4 & 0xffffffff;
      }
      *(char *)(lStack_30 + uVar2) = (char)(uVar1 % uVar5);
      bVar6 = uVar5 <= param_4;
      param_4 = uVar1 / uVar5;
    } while (bVar6);
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = lStack_30;
  *(byte *)(param_1 + 3) = param_2;
  return param_1;
}