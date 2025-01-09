undefined4 __rustcall uu_split::number::Number::increment(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  undefined auStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 == -0x8000000000000000) {
    param_1[1] = param_1[1] + 1;
    return 0;
  }
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    cVar1 = *(char *)(param_1 + 3);
    uVar5 = uVar3;
    do {
      uVar5 = _<usize_as_core::iter::range::Step>::backward_unchecked(uVar5);
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar5,uVar3,&PTR_DAT_00249498);
      }
      cVar6 = *(char *)(lVar2 + uVar5) + '\x01';
      *(char *)(lVar2 + uVar5) = cVar6;
    } while ((cVar6 == cVar1) && (*(undefined *)(lVar2 + uVar5) = 0, uVar5 != 0));
  }
  _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(auStack_30,uVar3);
  uVar4 = ::alloc::vec::partial_eq::
          _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                    (lVar2,uVar3,uStack_28,uStack_20);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(auStack_30);
  return uVar4;
}