fn uu_tsort::Graph::run_tsort(a0: void*, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [bp-0xe1]
    let v1: i256;  // [sp-0xd8], Other Possible Types: Result<struct16, struct8>, struct26, struct32
    let v2: i8;  // [bp-0xc8]
    let v4: i64;  // [sp-0xb0], Other Possible Types: struct16
    let v5: i64;  // [sp-0xa8]
    let v6: i64;  // [sp-0xa0]
    let v7: struct32;  // [sp-0x98], Other Possible Types: i256, struct16
    let v8: struct40;  // [bp-0x78]
    let v9: i256;  // [sp-0x50], Other Possible Types: Option<struct32>
    let v12: i64;  // rdx
    let v13: struct8;  // rax
    let v14: i64;  // rcx
    let v15: i64;  // rbx
    let v16: struct8;  // rax
    let v17: i64;  // rdx
    let v18: i64;  // r12
    let v19: i64;  // rax
    let v20: i64;  // 4096
    let v21: i64;  // rcx

    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v4 = *((&v1 as &char + 8) as &i64);
    v5 = v2;
    v6 = 0;
    v1 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v8 = struct40 {
        field_0: v1
        field_16: v2
        field_32: v3
    };
    v7 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v8, v12);
    v13 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
    if v12 >= 2 {
        if v12 >= 21 {
            core::slice::sort::unstable::ipnsort(v13, v12, &v0, v14);
        } else {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v13, v12, 1);
        }
    }
    loop {
        do {
            v15 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v7);
            if !v15 {
                if *((a1 + 24) as &i64) {
                    uu_tsort::Graph::detect_cycle(&v1, a1, v12);
                    v21 = a0;
                    *((v21 + 24) as &i64) = *((&v1 as &char + 16) as &i64);
                    *((v21 + 8) as &i256) = v1;
                    *(v21 as &i64) = 1;
                    return a0;
                }
                a0 = a0;
                *((a0 + 24) as &i64) = v6;
                *((a0 + 8) as &i128) = v4;
                *(a0 as &i64) = 0;
                return a0;
            }
            v4 = alloc::vec::Vec<T,A>::push(v15, v12);
            v9 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v15, v12);
        } while (v9 == 0x8000000000000000);
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        if v16 {
            do {
                v18 = v17;
                v19 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v16, v18);
                if !v19 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v20 = *((v19 + 40) as &i64);
                *((v19 + 40) as &i64) = *((v19 + 40) as &i64) - 1;
                if v20 == 1 {
                    v7 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v16, v18);
                }
                v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            } while (v16);
        }
    }
}
