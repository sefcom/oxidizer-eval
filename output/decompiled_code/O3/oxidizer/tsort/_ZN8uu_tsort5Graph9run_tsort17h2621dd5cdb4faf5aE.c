fn uu_tsort::Graph::run_tsort(a0: &struct32, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [bp-0xe1]
    let v1: i128;  // [sp-0xd8], Other Possible Types: struct32, struct24, struct26, Result<struct16, struct8>
    let v2: i8;  // [bp-0xc8]
    let v3: i64;  // [sp-0xb0], Other Possible Types: struct16
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i256;  // [sp-0x98], Other Possible Types: struct16, struct32
    let v7: i320;  // [bp-0x78]
    let v8: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v11: i64;  // rdx
    let v12: struct8;  // rax
    let v13: i64;  // rcx
    let v14: i64;  // rbx
    let v15: struct8;  // rax
    let v16: i64;  // rdx
    let v17: i64;  // r12
    let v18: i64;  // rax
    let v19: i64;  // 4096
    let v20: i64;  // rcx

    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v3 = *((&v1 as &char + 8) as &i64);
    v4 = v2;
    v5 = 0;
    v1 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v7 = v1;
    v6 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v7, v11);
    v12 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
    if v11 >= 2 {
        if v11 >= 21 {
            core::slice::sort::unstable::ipnsort(v12, v11, &v0, v13);
        } else {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v12, v11, 1);
        }
    }
    loop {
        do {
            v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v6);
            if !v14 {
                if *((a1 + 24) as &i64) {
                    v1 = uu_tsort::Graph::detect_cycle(a1, v11);
                    v20 = a0;
                    *((v20 + 24) as &i64) = *((&v1 as &char + 16) as &i64);
                    *((v20 + 8) as &i192) = v1;
                    *(v20 as &i64) = 1;
                    return a0;
                }
                a0 = a0;
                *((a0 + 24) as &i64) = v5;
                *((a0 + 8) as &i128) = v3;
                *(a0 as &i64) = 0;
                return a0;
            }
            v3 = alloc::vec::Vec<T,A>::push(v14, v11);
            v8 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v14, v11);
        } while (v8 == 0x8000000000000000);
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        if v15 {
            v16 = v11;
            do {
                v17 = v16;
                v18 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v15, v17);
                if !v18 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v19 = *((v18 + 40) as &i64);
                *((v18 + 40) as &i64) = *((v18 + 40) as &i64) - 1;
                if v19 == 1 {
                    v6 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v15, v17);
                }
                v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
                v16 = v11;
            } while (v15);
        }
    }
}
