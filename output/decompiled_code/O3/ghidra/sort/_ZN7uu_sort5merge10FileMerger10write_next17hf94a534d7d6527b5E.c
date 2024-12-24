bool __rustcall uu_sort::merge::FileMerger::write_next(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *local_180;
  undefined local_178 [16];
  long local_168;
  undefined8 uStack_160;
  long local_158;
  long local_148;
  long local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  ::alloc::rc::RcInnerPtr::inc_strong(lVar4);
  local_48 = *(undefined4 *)(lVar3 + 0x18);
  uStack_44 = *(undefined4 *)(lVar3 + 0x1c);
  uStack_40 = *(undefined4 *)(lVar3 + 0x20);
  uStack_3c = *(undefined4 *)(lVar3 + 0x24);
  local_158 = *(long *)(param_1 + 0x58);
  local_168 = *(long *)(param_1 + 0x48);
  uStack_160 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x48) = lVar4;
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)(param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  plStack_138 = &local_168;
                    /* try { // try from 00232596 to 002325cd has its CatchHandler @ 00232863 */
  local_148 = lVar3;
  local_140 = param_2;
  local_130 = param_3;
  write_next::___closure__
            (&local_148,*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x20),
             *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x28));
  lVar1 = param_1 + 0x10;
  if (*(long *)(*(long *)(lVar4 + 0x10) + 0x28) == CONCAT44(uStack_44,local_48) + 1) {
    local_180 = (long *)std::sync::mpmc::Receiver<T>::recv(lVar3);
    if (local_180 == (long *)0x0) {
                    /* try { // try from 002327b1 to 002327c7 has its CatchHandler @ 00232833 */
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(&local_148,lVar1);
      core::ptr::drop_in_place<core::option::Option<uu_sort::merge::MergeableFile>>(&local_148);
      if (local_180 != (long *)0x0) {
                    /* try { // try from 002327d6 to 002327f3 has its CatchHandler @ 00232863 */
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_180);
      }
    }
    else {
      local_178._0_8_ = local_180;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* try { // try from 002327f6 to 00232802 has its CatchHandler @ 00232824 */
        uVar5 = core::option::unwrap_failed(&PTR_DAT_002ff940);
        goto LAB_00232803;
      }
      uStack_c0 = 0;
      local_148 = 1;
      local_140 = 1;
                    /* try { // try from 00232613 to 0023261c has its CatchHandler @ 00232812 */
      plStack_138 = local_180;
      local_c8 = lVar1;
      uVar5 = ::alloc::boxed::Box<T>::new(&local_148);
      uStack_c0 = 1;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
                    /* try { // try from 00232630 to 00232637 has its CatchHandler @ 0023280a */
      core::ptr::drop_in_place<alloc::rc::Rc<uu_sort::chunks::Chunk>>(puVar6);
      *puVar6 = uVar5;
      uStack_c0 = 1;
      *(undefined8 *)(*(long *)(local_c8 + 8) + 0x18) = 0;
                    /* try { // try from 00232657 to 00232663 has its CatchHandler @ 00232803 */
      core::ptr::
      drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>
                (&local_c8);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      uVar5 = core::option::unwrap_failed(&PTR_DAT_002ff928);
LAB_00232803:
                    /* catch() { ... } // from try @ 00232657 with catch @ 00232803 */
      if (local_168 != 0) {
        core::ptr::drop_in_place<uu_sort::merge::PreviousLine>(&local_168);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar5);
    }
    local_140 = CONCAT71(local_140._1_7_,1);
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x18);
    *plVar2 = *plVar2 + 1;
                    /* try { // try from 0023268c to 002326b0 has its CatchHandler @ 00232863 */
    local_148 = lVar1;
    core::ptr::
    drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>
              (&local_148);
  }
  lVar1 = local_158;
  if (local_168 != 0) {
    local_178 = ::alloc::rc::Rc<T,A>::try_unwrap();
    if (local_178._0_8_ == 0) {
                    /* try { // try from 002326c4 to 00232784 has its CatchHandler @ 0023284c */
      chunks::Chunk::recycle(&local_c8,local_178._8_8_);
      local_148 = lVar1;
      plStack_138 = (long *)CONCAT71(uStack_bf,uStack_c0);
      local_140 = local_c8;
      local_130 = CONCAT44(uStack_b4,local_b8);
      uStack_128 = uStack_b0;
      uStack_124 = uStack_ac;
      local_120 = local_a8;
      uStack_11c = uStack_a4;
      uStack_118 = uStack_a0;
      uStack_114 = uStack_9c;
      local_110 = local_98;
      uStack_10c = uStack_94;
      uStack_108 = uStack_90;
      uStack_104 = uStack_8c;
      local_100 = local_88;
      uStack_f8 = uStack_80;
      local_f0 = local_78;
      uStack_e8 = uStack_70;
      local_e0 = local_68;
      uStack_d8 = uStack_60;
      local_d0 = local_58;
      std::sync::mpmc::Sender<T>::send(&local_c8,param_1,&local_148);
      if (CONCAT71(uStack_bf,uStack_c0) != -0x8000000000000000) {
        core::ptr::
        drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(usize,uu_sort::chunks::RecycledChunk)>>>
                  (&local_c8);
      }
      if (local_178._0_8_ == 0) goto LAB_00232797;
    }
                    /* try { // try from 0023278d to 00232796 has its CatchHandler @ 00232863 */
    core::ptr::
    drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>
              (local_178);
  }
LAB_00232797:
  return *(long *)(param_1 + 0x20) != 0;
}