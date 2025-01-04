undefined8 * __rustcall uu_tsort::Graph::run_tsort(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined local_e1;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined local_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_50 [4];
  
  local_e0 = param_1;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_d8,*(undefined8 *)(param_2 + 0x18),0);
  local_b0 = CONCAT44(uStack_cc,uStack_d0);
  if (CONCAT44(uStack_d4,local_d8) != 0) {
LAB_001b695b:
    uVar3 = ::alloc::raw_vec::handle_error();
                    /* catch() { ... } // from try @ 001b67b2 with catch @ 001b6966
                       catch() { ... } // from try @ 001b68cb with catch @ 001b6966 */
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(local_98);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_b0);
    puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
    return puVar4;
  }
  uStack_a8 = CONCAT44(uStack_c4,local_c8);
  local_a0 = 0;
                    /* try { // try from 001b6772 to 001b67b1 has its CatchHandler @ 001b696b */
  hashbrown::map::HashMap<K,V,S,A>::iter(&local_d8,param_2);
  local_58 = local_b8;
  local_68 = local_c8;
  uStack_64 = uStack_c4;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  local_78 = local_d8;
  uStack_74 = uStack_d4;
  uStack_70 = uStack_d0;
  uStack_6c = uStack_cc;
  _<alloc::collections::vec_deque::VecDeque<T>as_alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>
  ::spec_from_iter(local_98,&local_78);
                    /* try { // try from 001b67b2 to 001b67eb has its CatchHandler @ 001b6966 */
  auVar6 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(local_98);
  uVar5 = auVar6._8_8_;
  if (1 < uVar5) {
    if (uVar5 < 0x15) {
      core::slice::sort::shared::smallsort::insertion_sort_shift_left
                (auVar6._0_8_,uVar5,1,&local_e1);
    }
    else {
      core::slice::sort::unstable::ipnsort(auVar6._0_8_,uVar5,&local_e1);
    }
  }
  do {
    do {
      auVar6 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(local_98);
      puVar4 = local_e0;
      lVar2 = auVar6._0_8_;
      if (lVar2 == 0) {
        if (*(long *)(param_2 + 0x18) == 0) {
          local_e0[3] = local_a0;
          *(undefined4 *)(local_e0 + 1) = (undefined4)local_b0;
          *(undefined4 *)((long)local_e0 + 0xc) = local_b0._4_4_;
          *(undefined4 *)(local_e0 + 2) = (undefined4)uStack_a8;
          *(undefined4 *)((long)local_e0 + 0x14) = uStack_a8._4_4_;
          *local_e0 = 0;
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(local_98);
        }
        else {
                    /* try { // try from 001b68cb to 001b68d7 has its CatchHandler @ 001b6966 */
          detect_cycle(&local_d8,param_2);
          local_e0[3] = CONCAT44(uStack_c4,local_c8);
          *(undefined4 *)(local_e0 + 1) = local_d8;
          *(undefined4 *)((long)local_e0 + 0xc) = uStack_d4;
          *(undefined4 *)(local_e0 + 2) = uStack_d0;
          *(undefined4 *)((long)local_e0 + 0x14) = uStack_cc;
          *local_e0 = 1;
                    /* try { // try from 001b68f6 to 001b68ff has its CatchHandler @ 001b696b */
          core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(local_98);
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_b0);
          puVar4 = local_e0;
        }
        return puVar4;
      }
      ::alloc::vec::Vec<T,A>::push(&local_b0,lVar2);
      hashbrown::map::HashMap<K,V,S,A>::remove(local_50,param_2,lVar2,auVar6._8_8_);
    } while (local_50[0] == -0x8000000000000000);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_d8,local_50);
    auVar6 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                       (&local_d8);
    lVar2 = auVar6._0_8_;
    while (lVar2 != 0) {
                    /* try { // try from 001b6897 to 001b68c1 has its CatchHandler @ 001b6977 */
      lVar2 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(param_2,auVar6._0_8_,auVar6._8_8_);
      if (lVar2 == 0) {
                    /* try { // try from 001b694e to 001b695a has its CatchHandler @ 001b6975 */
        core::option::unwrap_failed(&PTR_s_src_uu_tsort_src_tsort_rs_00221518);
        goto LAB_001b695b;
      }
      plVar1 = (long *)(lVar2 + 0x28);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        ::alloc::collections::vec_deque::VecDeque<T,A>::push_back
                  (local_98,auVar6._0_8_,auVar6._8_8_);
      }
      auVar6 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
               next(&local_d8);
      lVar2 = auVar6._0_8_;
    }
                    /* try { // try from 001b6800 to 001b683c has its CatchHandler @ 001b6970 */
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&local_d8);
  } while( true );
}