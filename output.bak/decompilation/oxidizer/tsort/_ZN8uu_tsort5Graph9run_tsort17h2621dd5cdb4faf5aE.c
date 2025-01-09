fn uu_tsort::Graph::run_tsort(a0: &struct32, a1: void*) -> u64 {
    let v0: i8;  // [bp-0xe1]
    let v1: struct24;  // [sp-0xd8], Other Possible Types: struct32, struct26, Result<struct16, struct8>, i136
    let v3: struct16;  // [sp-0xb0], Other Possible Types: i64
    let v4: i64;  // [sp-0xa8]
    let v5: i64;  // [sp-0xa0]
    let v6: i256;  // [sp-0x98], Other Possible Types: struct16, struct32
    let v7: struct40;  // [bp-0x78]
    let v8: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v11: struct8;  // rax
    let v12: i64;  // rdx
    let v13: i64;  // rbx
    let v14: struct8;  // rax
    let v15: i64;  // rdx
    let v16: i64;  // r12
    let v17: i64;  // rax
    let v18: i64;  // 4096
    let v19: i64;  // rcx

    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v3 = *((&v1 as &char + 8) as &i64);
    v4 = v1;
    v5 = 0;
    v1 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v7 = struct40 {
        field_0: v1
        field_16: v1
        field_32: v2
    };
    v6 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v7);
    v11 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous();
    if v12 >= 2 {
        if v12 >= 21 {
            core::slice::sort::unstable::ipnsort(v11, v12, &v0);
        } else {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v11, v12, 1);
        }
    }
    loop {
        do {
            v13 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v6);
            if !v13 {
                return struct32 {
                    field_0: 0
                    field_8: v3
                    field_24: v5
                };
                v1 = uu_tsort::Graph::detect_cycle(a1);
                v19 = a0;
                return struct32 {
                    field_0: 1
                    field_8: v1
                    field_24: *((&v1 as &char + 16) as &i64)
                };
            }
            v3 = alloc::vec::Vec<T,A>::push(v13, v12);
            v8 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v13, v12);
        } while (v8 == 0x8000000000000000);
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        if v14 {
            v15 = v12;
            do {
                v16 = v15;
                v17 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v14, v16);
                if !v17 {
                    core::option::unwrap_failed("src/uu/tsort/src/tsort.rs"); /* do not return */
                }
                v18 = *((v17 + 40) as &i64);
                *((v17 + 40) as &i64) = *((v17 + 40) as &i64) - 1;
                if v18 == 1 {
                    v6 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v14, v16);
                }
                v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
                v15 = v12;
            } while (v14);
        }
    }
}
