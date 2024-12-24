long __rustcall
uu_base32::base_common::fast_encode::write_with_line_breaks
          (long param_1,long param_2,undefined8 param_3,code *param_4,char param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  auVar4 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(param_2);
  core::slice::_<impl[T]>::chunks_exact
            (&local_58,auVar4._0_8_,auVar4._8_8_,uVar1,
             &PTR_s_src_uu_base32_src_base_common_rs_0024a818);
  auVar4 = _<core::slice::iter::ChunksExact<T>as_core::iter::traits::iterator::Iterator>::next
                     (&local_58);
  lVar3 = 0;
  if (auVar4._0_8_ != 0) {
    do {
      lVar3 = lVar3 + auVar4._8_8_;
      uVar1 = core::slice::iter::Iter<T>::make_slice(auVar4._0_8_,auVar4._8_8_ + auVar4._0_8_);
      ::alloc::vec::Vec<T,A>::append_elements(param_1,uVar1);
      ::alloc::vec::Vec<T,A>::push(param_1,10);
      auVar4 = _<core::slice::iter::ChunksExact<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_58);
    } while (auVar4._0_8_ != 0);
  }
  lVar2 = (*param_4)(param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar2 == 0) {
    auVar4 = core::slice::index::range(lVar3,*(undefined8 *)(param_2 + 0x18),&DAT_0024a830);
    local_48 = auVar4._0_8_;
    local_50 = auVar4._8_8_ - local_48;
    local_40 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = local_48;
    local_40 = local_40 - local_50;
    local_58 = param_2;
    local_38 = local_50;
    core::ptr::drop_in_place<alloc::collections::vec_deque::drain::Drain<u8>>(&local_58);
    if (param_5 == '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else if (*(long *)(param_2 + 0x18) != 0) {
      uVar1 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(param_2);
      lVar3 = (*param_4)(param_3,uVar1);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = (*param_4)(param_3,
                         "\n/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs"
                         ,1);
      return lVar3;
    }
    lVar2 = 0;
  }
  return lVar2;
}