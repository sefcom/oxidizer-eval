void __rustcall uu_shuf::find_seps(long param_1,undefined param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_50;
  long local_48;
  long local_40;
  undefined local_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if ((uVar1 == 1) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      do {
        uVar1 = _<usize_as_core::iter::range::Step>::backward_unchecked(uVar1);
        if (*(ulong *)(param_1 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar1,*(ulong *)(param_1 + 0x10),&PTR_DAT_00237cd8);
        }
        lVar2 = core::slice::memchr::memchr
                          (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + uVar1 * 0x10),
                           *(undefined8 *)(*(long *)(param_1 + 8) + 8 + uVar1 * 0x10));
        if (lVar2 == 1) {
          auVar7 = ::alloc::vec::Vec<T,A>::swap_remove(param_1,uVar1);
          uVar4 = auVar7._8_8_;
          lVar2 = auVar7._0_8_;
          local_40 = lVar2 + uVar4;
          local_50 = lVar2;
          local_48 = lVar2;
          local_38[0] = param_2;
          auVar7 = memchr::arch::generic::memchr::Iter::next(&local_50,local_38);
          lVar5 = auVar7._8_8_;
          if (auVar7._0_8_ == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                                (uVar6,lVar5,lVar2,uVar4,&PTR_DAT_00237cf0);
              ::alloc::vec::Vec<T,A>::push(param_1,uVar3);
              uVar6 = lVar5 + 1;
              auVar7 = memchr::arch::generic::memchr::Iter::next(&local_50,local_38);
              lVar5 = auVar7._8_8_;
            } while (auVar7._0_8_ != 0);
          }
          if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
            ::alloc::vec::Vec<T,A>::push(param_1,lVar2 + uVar6,uVar4 - uVar6);
          }
        }
      } while (uVar1 != 0);
    }
  }
  return;
}