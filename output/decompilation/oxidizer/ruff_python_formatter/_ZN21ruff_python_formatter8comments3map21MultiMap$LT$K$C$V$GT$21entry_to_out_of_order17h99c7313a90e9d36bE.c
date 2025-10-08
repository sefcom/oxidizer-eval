fn ruff_python_formatter::comments::map::MultiMap<K,V>::entry_to_out_of_order(a0: &struct12, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v2: &mut [u8];  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v6: u64;  // [bp-0x10]
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r13
    let v11: u64;  // r12
    let v12: &mut [u8];  // rbx
    let v14: struct24;  // rsi
    let v16: u32;  // rdx

    if !*(a0 as &i32) {
        return a0 + 8;
    }
    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = *((a3 + 16) as &i64);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*(a0 as &i32) - 1, *((a0 + 4) as &i32) - 1, a1, a2, "crates/ruff_python_formatter/src/comments/map.rs"), a2);
    alloc::vec::Vec<T,A>::push(a3, &v1, "crates/ruff_python_formatter/src/comments/map.rs");
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((a0 + 4) as &i32) - 1, v14, a1, a2, "crates/ruff_python_formatter/src/comments/map.rs"), a2);
    alloc::vec::Vec<T,A>::push(a3, &v1, "crates/ruff_python_formatter/src/comments/map.rs");
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(ruff_python_formatter::comments::map::InOrderEntry::trailing_range(a0), v16, a1, a2, "crates/ruff_python_formatter/src/comments/map.rs"), a2);
    alloc::vec::Vec<T,A>::push(a3, &v1, "crates/ruff_python_formatter/src/comments/map.rs");
    return struct16 {
        field_0: 0
        padding_4: <UNKNOWN>
        field_8: v0
    };
}
