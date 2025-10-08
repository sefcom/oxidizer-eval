fn uu_tsort::Graph::detect_cycle(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xc9]
    let v1: void*;  // [bp-0xc8]
    let v2: struct16;  // [bp-0xc8]
    let v3: core::fmt::Arguments;  // [bp-0xc0]
    let v4: core::fmt::rt::Argument;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: u64;  // [bp-0xa8]
    let v7: void*;  // [bp-0xa0]
    let v8: u128;  // [bp-0x98]
    let v9: iNone;  // [bp-0x88]
    let v10: iNone;  // [bp-0x78]
    let v11: struct32;  // [bp-0x60], Other Possible Types: struct8
    let v12: struct48;  // [bp-0x60]
    let v13: iNone;  // [bp-0x50]
    let v15: u64;  // rax
    let v16: u64;  // rdx
    let v17: i64;  // rax

    v1 = 0;
    v3 = 8;
    v4 = 0;
    v11 = hashbrown::map::HashMap<K,V,S,A>::iter(a1 + 24);
    loop {
        v15 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v11);
        if !v15 {
            break;
        }
        v2 = alloc::vec::Vec<T,A>::push(v15);
    }
    if v4 >= 2 {
        if v4 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v3, v4, 1);
        } else {
            core::slice::sort::unstable::ipnsort(v3, v4, &v0);
        }
    }
    v12 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
    v10 = *(&v12.field_32 as &i128);
    v9 = v13;
    v8 = v12.field_0;
    v5 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*((a1 + 48) as &i64), 8, 16, "src/uu/tsort/src/tsort.rs");
    v6 = v16;
    v7 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
    if v17 {
        do {
            if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v8, v17) && uu_tsort::Graph::dfs(a1, *(v17 as &i64), *((v17 + 8) as &i64), &v8, &v5) {
                return struct24 {
                    field_0: *(&v5 as &i128)
                    field_16: 0
                };
            }
            v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
        } while (v17);
    }
    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
}
