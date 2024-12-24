void __rustcall
uu_split::number::DynamicWidthNumber::digits(undefined8 *param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = (ulong)param_3;
  uVar1 = (uVar3 - 1) * uVar3;
  lVar4 = 2;
  if (uVar1 < param_2 || uVar1 - param_2 == 0) {
    do {
      param_2 = param_2 - uVar1;
      lVar4 = lVar4 + 1;
      uVar1 = uVar1 * uVar3;
    } while (uVar1 <= param_2);
  }
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar2 = core::panicking::panic_const::panic_const_rem_by_zero
                        (&PTR_s_src_uu_split_src_number_rs_00249790);
                    /* catch() { ... } // from try @ 001db91c with catch @ 001db964 */
                    /* catch() { ... } // from try @ 001db90a with catch @ 001db966 */
                    /* try { // try from 001db969 to 001db970 has its CatchHandler @ 001db979 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_48);
      _Unwind_Resume(uVar2);
      return;
    }
    do {
      uVar1 = param_2;
      if (param_2 >> 0x20 == 0) {
        uVar1 = param_2 & 0xffffffff;
      }
                    /* try { // try from 001db90a to 001db913 has its CatchHandler @ 001db966 */
      ::alloc::vec::Vec<T,A>::push(&local_48,uVar1 % uVar3);
      bVar5 = uVar3 <= param_2;
      param_2 = uVar1 / uVar3;
    } while (bVar5);
  }
                    /* try { // try from 001db91c to 001db963 has its CatchHandler @ 001db964 */
  ::alloc::vec::Vec<T,A>::resize(&local_48,lVar4,0);
  core::slice::_<impl[T]>::reverse(uStack_40,local_38);
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}