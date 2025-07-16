fn uu_tsort::Graph::run_tsort(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0xe1]
    let v1: i64;  // [bp-0xe0]
    let v2: struct24;  // [bp-0xd8]
    let v3: struct32;  // [bp-0xd8]
    let v4: struct26;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: u64;  // [bp-0xb8]
    let v7: u64;  // [bp-0xb0]
    let v8: u64;  // [bp-0xa8]
    let v9: void*;  // [bp-0xa0]
    let v10: struct32;  // [bp-0x98]
    let v12: u8;  // [bp-0x78]
    let v13: u8;  // [bp-0x68]
    let v14: u64;  // [bp-0x58]
    let v15: Option<struct32>;  // [bp-0x50]
    let v17: u64;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rbx
    let v20: u32;  // rcx
    let v21: u64;  // rax
    let v22: u64;  // rbx
    let v23: u64;  // rdx
    let v24: u64;  // r12
    let v25: i64;  // rax
    let v26: u64;  // 4096

    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a1 + 24) as &i64), 0);
    v7 = v5;
    v8 = v2.field_16;
    v9 = 0;
    v4 = hashbrown::map::HashMap<K,V,S,A>::iter(a1);
    v14 = v6;
    memcpy(&v13, &v4 as u8, 16);
    memcpy(&v12, &v4, 16);
    v10 = <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(&v12);
    v17 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v10);
    if v18 >= 2 {
        if v18 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v17, v18, 1);
        } else {
            core::slice::sort::unstable::ipnsort(v17, v18, &v0);
        }
    }
    loop {
        v19 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v10 as u64);
        if !v19 {
            break;
        }
        alloc::vec::Vec<T,A>::push(v19, v18, v20);
        v15 = hashbrown::map::HashMap<K,V,S,A>::remove(a1, v19, v18);
        if let Some(_) = v15 {
            v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
            v21 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
            if v21 {
                v23 = v18;
                do {
                    v24 = v18;
                    v25 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, v22, v24);
                    if !v25 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v26 = *((v25 + 40) as &i64);
                    *((v25 + 40) as &i64) = *((v25 + 40) as &i64) - 1;
                    if v26 == 1 {
                        v10 as u64 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v22, v24);
                    }
                    v22 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
                } while (v21);
            }
        }
    }
    if !*((a1 + 24) as &i64) {
        *((v1 + 24) as &i64) = 0;
        *((v1 + 8) as &i128) = *(&v7 as &i128);
        *(v1 as &i64) = 0;
        return a0;
    }
    uu_tsort::Graph::detect_cycle(&v4, a1);
    *((v1 + 24) as &u64) = v3.field_16;
    *((v1 + 8) as &u128) = v3.field_0;
    *(v1 as &i64) = 1;
    return a0;
}
