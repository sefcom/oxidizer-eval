void __rustcall
uu_dd::Input::fill_blocks(undefined8 *param_1,long param_2,long param_3,undefined param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_d8;
  long local_d0;
  undefined local_b0 [24];
  undefined local_98 [32];
  undefined local_78 [72];
  
  uVar5 = *(ulong *)(param_3 + 0x10);
  if (uVar5 == 0) {
    lVar3 = 0;
    uVar4 = 0;
    local_d8 = 0;
    local_d0 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
    local_d0 = 0;
    local_d8 = 0;
    uVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = core::cmp::min_by(lVar1 + uVar4,uVar5);
      uVar2 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                        (uVar4,lVar1,*(undefined8 *)(param_3 + 8),uVar5);
      auVar6 = _<uu_dd::Input_as_std::io::Read>::read(param_2,uVar2);
      uVar5 = auVar6._8_8_;
      if (auVar6._0_8_ != 0) {
        param_1[1] = uVar5;
        uVar2 = 1;
        goto LAB_001d7470;
      }
      if (uVar5 == 0) break;
      if (uVar5 < lVar1 - uVar4) {
        local_d8 = local_d8 + 1;
        _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(local_b0,param_4);
        _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                  (local_98,local_b0);
        ::alloc::vec::Vec<T,A>::splice(local_78,param_3,uVar4 + uVar5,lVar1,local_98);
        core::ptr::drop_in_place<alloc::vec::splice::Splice<alloc::vec::into_iter::IntoIter<u8>>>
                  (local_78);
      }
      else {
        local_d0 = local_d0 + 1;
      }
      lVar3 = lVar3 + uVar5;
      lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
      uVar4 = uVar4 + lVar1;
      uVar5 = *(ulong *)(param_3 + 0x10);
    } while (uVar4 < uVar5);
  }
  ::alloc::vec::Vec<T,A>::truncate(param_3,uVar4);
  param_1[1] = local_d0;
  param_1[2] = local_d8;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = 0;
LAB_001d7470:
  *param_1 = uVar2;
  return;
}