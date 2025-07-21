fn uu_tsort::Graph::run_tsort(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0xe1]
    let v1: i64;  // [bp-0xe0]
    let v2: struct24;  // [bp-0xd8]
    let v3: struct26;  // [bp-0xd8], Other Possible Types: struct32, u256
    let v4: struct40;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: void*;  // [bp-0xa0]
    let v10: struct32;  // [bp-0x98]
    let v11: struct40;  // [bp-0x78]
    let v12: Option<struct32>;  // [bp-0x50]
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rbx
    let v17: u32;  // rcx
    let v18: u64;  // rax
    let v19: u64;  // rbx
    let v20: u64;  // rdx
    let v21: u64;  // r12
    let v22: i64;  // rax
    let v23: u64;  // 4096

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v6 = v5;
    v7 = v2.field_16;
    v8 = 0;
    v3 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v11 = v4;
    v10 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v11);
    v14 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v10);
    if v15 >= 2 {
        if v15 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v14, v15, 1);
        } else {
            core::slice::sort::unstable::ipnsort(v14, v15, &v0);
        }
    }
    loop {
        v16 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v10 as u64);
        if !v16 {
            break;
        }
        alloc::vec::Vec<T,A>::push(v16, v15, v17);
        v12 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v16, v15);
        if let Some(_) = v12 {
            v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
            v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v18 {
                v20 = v15;
                do {
                    v21 = v15;
                    v22 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v19, v21);
                    if !v22 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v23 = *((v22 + 40) as &i64);
                    *((v22 + 40) as &i64) = *((v22 + 40) as &i64) - 1;
                    if v23 == 1 {
                        v10 as u64 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v19, v21);
                    }
                    v19 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
                } while (v18);
            }
        }
    }
    if !*((a1 + 24) as &i64) {
        *((v1 + 24) as &i64) = 0;
        *((v1 + 8) as &i128) = *(&v6 as &i128);
        *(v1 as &i64) = 0;
        return a0;
    }
    uu_tsort::Graph::detect_cycle(&v3, a1);
    *((v1 + 24) as &i64) = *((&v3 as &char + 16) as &i64);
    *((v1 + 8) as &i128) = v3;
    *(v1 as &i64) = 1;
    return a0;
}
