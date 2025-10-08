fn uu_chmod::extract_negative_modes(a0: i64, a1: i64) -> void {
    let v0: i64;  // [bp-0x110]
    let v1: struct24;  // [bp-0x108]
    let v3: u64;  // [bp-0x100]
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf8]
    let v6: void*;  // [bp-0xf0], Other Possible Types: struct16
    let v7: struct16;  // [bp-0xf0]
    let v8: struct8;  // [bp-0xf0]
    let v9: struct16;  // [bp-0xf0]
    let v10: u64;  // [bp-0xe8]
    let v11: void*;  // [bp-0xe0]
    let v12: Result<struct24, struct24>;  // [bp-0xd8], Other Possible Types: struct32, struct48, struct24
    let v13: struct24;  // [bp-0xd8]
    let v14: u64;  // [bp-0xc8]
    let v15: u64;  // [bp-0xc8]
    let v16: iNone;  // [bp-0xc0]
    let v17: u64;  // [bp-0xb0]
    let v18: struct24;  // [bp-0xa8], Other Possible Types: u8
    let v19: u64;  // [bp-0xa0]
    let v20: u64;  // [bp-0x98]
    let v21: u128;  // [bp-0x88]
    let v22: u64;  // [bp-0x80]
    let v23: u64;  // [bp-0x78]
    let v24: iNone;  // [bp-0x68]
    let v25: u64;  // [bp-0x58]
    let v26: struct24;  // [bp-0x48]
    let v28: u64;  // r13

    v12 = core::iter::traits::iterator::Iterator::partition(a1);
    v23 = v14;
    v21 = v12.field_0;
    v24 = v16;
    v25 = v17;
    v6 = 0;
    v10 = 8;
    v11 = 0;
    if v14 {
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("w");
        v1 = v13;
        v7 = alloc::vec::Vec<T,A>::push(&v1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/chmod/src/chmod.rs");
    }
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v24);
    v0 = &v6;
    v8 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(&v12);
    <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::next(&v18);
    v28 = *(&v18 as &i64);
    if (((0 ^ v28) & (0 ^ -(v28))) >> 63) as char {
        v15 = v14;
    } else {
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--");
        v1 = v13;
        v6 = alloc::vec::Vec<T,A>::push(&v1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/chmod/src/chmod.rs");
        v12 = struct24 {
            field_0: v28
            field_8: v19
            field_16: v20
        };
        v9 = alloc::vec::Vec<T,A>::push(&v12, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/chmod/src/chmod.rs");
        v4 = v5;
    }
    v26 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v9, &v26);
    core::iter::traits::iterator::Iterator::collect(&v1, v22, v22 + v14 * 24);
    v12 = alloc::str::join_generic_copy(v3, v4);
    v18 = v13;
    core::option::Option<T>::filter(a0, &v18);
    *((a0 + 40) as &i64) = 0;
    *((a0 + 24) as &i128) = *(&v9.field_0 as &i128);
    return;
}
