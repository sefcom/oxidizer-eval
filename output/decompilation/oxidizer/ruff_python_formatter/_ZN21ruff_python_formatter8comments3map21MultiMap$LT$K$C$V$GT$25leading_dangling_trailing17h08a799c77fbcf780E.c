fn ruff_python_formatter::comments::map::MultiMap<K,V>::leading_dangling_trailing(a0: i64, a1: void*, a2: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: i64;  // rax
    let v3: u64;  // rbp
    let v4: u64;  // r14
    let v5: u64;  // r15
    let v6: struct48;  // r12
    let v7: u64;  // rsi
    let v8: u64;  // rax
    let v9: u32;  // rdx
    let v10: u64;  // rax
    let v17: i64;  // rsi
    let v19: i64;  // r13
    let v21: i64;  // rdx

    v2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 48, a2);
    if v2 {
        v3 = v2 + 16;
        if *(v3 as &i32) {
            v4 = a1[8] as i64;
            v5 = a1[16] as i64;
            v6 = v2;
            v0 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*(v3 as &i32) - 1, *((v2 + 20) as &i32) - 1, v4, v5, "crates/ruff_python_formatter/src/comments/map.rs");
            v7 = *((v6 + 24) as &i32) - 1;
            v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((v6 + 20) as &i32) - 1, v7, v4, v5, "crates/ruff_python_formatter/src/comments/map.rs");
            v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(ruff_python_formatter::comments::map::InOrderEntry::trailing_range(v3), v9, v4, v5, "crates/ruff_python_formatter/src/comments/map.rs");
        }
    }
    return struct48 {
        field_0: v0
        field_8: v17
        field_16: v8
        field_24: v19
        field_32: v10
        field_40: v21
    };
}
