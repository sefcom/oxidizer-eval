undefined ** __rustcall
uu_tsort::Graph::add_edge
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined uStack_109;
  undefined **ppuStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined auStack_c0 [32];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long alStack_78 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  add_node();
  ppuVar2 = (undefined **)
            _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,param_4,param_5);
  if ((char)ppuVar2 != '\0') {
    return ppuVar2;
  }
  add_node(param_1,param_4,param_5);
  lVar6 = param_2;
  lVar3 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(param_1,param_2,param_3);
  if (lVar3 == 0) {
    core::option::unwrap_failed(&PTR_s_src_uu_tsort_src_tsort_rs_002214e8);
  }
  else {
    Node::add_successor(lVar3 + 0x10,param_4,param_5);
    lVar6 = param_4;
    ppuVar2 = (undefined **)hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(param_1,param_4,param_5)
    ;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2[5] = ppuVar2[5] + 1;
      return ppuVar2;
    }
  }
  ppuVar2 = &PTR_s_src_uu_tsort_src_tsort_rs_00221500;
  core::option::unwrap_failed();
  ppuStack_108 = ppuVar2;
  uStack_58 = param_5;
  uStack_50 = param_3;
  lStack_48 = param_2;
  lStack_40 = param_4;
  uStack_38 = param_1;
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&uStack_100,*(undefined8 *)(lVar6 + 0x18),0);
  uStack_d8 = CONCAT44(uStack_f4,uStack_f8);
  if (CONCAT44(uStack_fc,uStack_100) == 0) {
    uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
    puStack_c8 = (undefined *)0x0;
    hashbrown::map::HashMap<K,V,S,A>::iter(&uStack_100,lVar6);
    uStack_80 = uStack_e0;
    uStack_90 = uStack_f0;
    uStack_8c = uStack_ec;
    uStack_88 = uStack_e8;
    uStack_84 = uStack_e4;
    uStack_a0 = uStack_100;
    uStack_9c = uStack_fc;
    uStack_98 = uStack_f8;
    uStack_94 = uStack_f4;
    _<alloc::collections::vec_deque::VecDeque<T>as_alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>
    ::spec_from_iter(auStack_c0,&uStack_a0);
    auVar7 = ::alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(auStack_c0);
    uVar5 = auVar7._8_8_;
    if (1 < uVar5) {
      if (uVar5 < 0x15) {
        core::slice::sort::shared::smallsort::insertion_sort_shift_left
                  (auVar7._0_8_,uVar5,1,&uStack_109);
      }
      else {
        core::slice::sort::unstable::ipnsort(auVar7._0_8_,uVar5,&uStack_109);
      }
    }
    do {
      do {
        auVar7 = ::alloc::collections::vec_deque::VecDeque<T,A>::pop_front(auStack_c0);
        ppuVar2 = ppuStack_108;
        lVar3 = auVar7._0_8_;
        if (lVar3 == 0) {
          if (*(long *)(lVar6 + 0x18) == 0) {
            ppuStack_108[3] = puStack_c8;
            *(undefined4 *)(ppuStack_108 + 1) = (undefined4)uStack_d8;
            *(undefined4 *)((long)ppuStack_108 + 0xc) = uStack_d8._4_4_;
            *(undefined4 *)(ppuStack_108 + 2) = (undefined4)uStack_d0;
            *(undefined4 *)((long)ppuStack_108 + 0x14) = uStack_d0._4_4_;
            *ppuStack_108 = (undefined *)0x0;
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(auStack_c0);
          }
          else {
            detect_cycle(&uStack_100,lVar6);
            ppuStack_108[3] = (undefined *)CONCAT44(uStack_ec,uStack_f0);
            *(undefined4 *)(ppuStack_108 + 1) = uStack_100;
            *(undefined4 *)((long)ppuStack_108 + 0xc) = uStack_fc;
            *(undefined4 *)(ppuStack_108 + 2) = uStack_f8;
            *(undefined4 *)((long)ppuStack_108 + 0x14) = uStack_f4;
            *ppuStack_108 = (undefined *)0x1;
            core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(auStack_c0);
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&uStack_d8);
            ppuVar2 = ppuStack_108;
          }
          return ppuVar2;
        }
        ::alloc::vec::Vec<T,A>::push(&uStack_d8,lVar3);
        hashbrown::map::HashMap<K,V,S,A>::remove(alStack_78,lVar6,lVar3,auVar7._8_8_);
      } while (alStack_78[0] == -0x8000000000000000);
      _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                (&uStack_100,alStack_78);
      auVar7 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
               next(&uStack_100);
      lVar3 = auVar7._0_8_;
      while (lVar3 != 0) {
        lVar3 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(lVar6,auVar7._0_8_,auVar7._8_8_);
        if (lVar3 == 0) {
          core::option::unwrap_failed(&PTR_s_src_uu_tsort_src_tsort_rs_00221518);
          goto LAB_001b695b;
        }
        plVar1 = (long *)(lVar3 + 0x28);
        *plVar1 = *plVar1 + -1;
        if (*plVar1 == 0) {
          ::alloc::collections::vec_deque::VecDeque<T,A>::push_back
                    (auStack_c0,auVar7._0_8_,auVar7._8_8_);
        }
        auVar7 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                 next(&uStack_100);
        lVar3 = auVar7._0_8_;
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&uStack_100);
    } while( true );
  }
LAB_001b695b:
  uVar4 = ::alloc::raw_vec::handle_error();
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(auStack_c0);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&uStack_d8);
  ppuVar2 = (undefined **)_Unwind_Resume(uVar4);
  return ppuVar2;
}