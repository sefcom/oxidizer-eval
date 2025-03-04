fn uu_tsort::Graph::run_tsort(a0: u32, a1: void*) -> u64 {
    let v0: i8;  // [bp-0xe1]
    let v1: struct24;  // [sp-0xd8], Other Possible Types: struct32, Result<struct16, struct8>, struct26
    let v2: struct16;  // [sp-0xb0], Other Possible Types: unsigned long
    let v3: i64;  // [sp-0xa8]
    let v4: i64;  // [sp-0xa0]
    let v5: struct16;  // [sp-0x98], Other Possible Types: struct32
    let v6: iNone;  // [sp-0x78]
    let v7: Option<struct32>;  // [sp-0x50]
    let v10: struct8;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rbx
    let v13: struct8;  // rax
    let v14: struct8;  // rbx
    let v15: i64;  // r12
    let v16: i64;  // rax
    let v17: i64;  // 4096
    let v18: i64;  // rbx

    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v2 = *((&v1 as &char + 8) as &i64);
    v3 = *((&v1 as &char + 16) as &i64);
    v4 = 0;
    v1 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v6 = *(&v1 as &i320);
    v5 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v6);
    v10 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
    if v11 >= 2 {
        if v11 >= 21 {
            core::slice::sort::unstable::ipnsort(v10, v11, &v0);
        } else {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v10, v11, 1);
        }
    }
    loop {
        v12 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v5);
        if !v12 {
            break;
        }
        v2 = alloc::vec::Vec<T,A>::push(v12, v11);
        v7 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v12, v11);
        if v7 as i64 != 0x8000000000000000 {
            v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
            v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            if v13 {
                v14 = v13;
                v15 = v11;
                do {
                    v16 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v14, v15);
                    if !v16 {
                        core::option::unwrap_failed("src/uu/tsort/src/tsort.rs"); /* do not return */
                    }
                    v17 = *((v16 + 40) as &i64);
                    *((v16 + 40) as &i64) = *((v16 + 40) as &i64) - 1;
                    if v17 == 1 {
                        v5 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v14, v15);
                    }
                    v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v1);
                    v15 = v11;
                } while (v14);
            }
        }
    }
    if !*((a1 + 24) as &i64) {
        return v18;
    }
    v1 = uu_tsort::Graph::detect_cycle(a1);
    v18 = a0;
    return v18;
}
