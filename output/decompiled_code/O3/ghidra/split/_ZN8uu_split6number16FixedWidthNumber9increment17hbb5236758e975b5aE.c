undefined4 __rustcall uu_split::number::FixedWidthNumber::increment(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x18);
    uVar5 = uVar3;
    do {
      uVar5 = _<usize_as_core::iter::range::Step>::backward_unchecked(uVar5);
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar5,uVar3,&PTR_s_src_uu_split_src_number_rs_00249778);
      }
      cVar6 = *(char *)(lVar2 + uVar5) + '\x01';
      *(char *)(lVar2 + uVar5) = cVar6;
    } while ((cVar6 == cVar1) && (*(undefined *)(lVar2 + uVar5) = 0, uVar5 != 0));
  }
  _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_30,uVar3);
                    /* try { // try from 001db75e to 001db768 has its CatchHandler @ 001db793 */
  uVar4 = ::alloc::vec::partial_eq::
          _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                    (lVar2,uVar3,local_28,local_20);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_30);
  return uVar4;
}