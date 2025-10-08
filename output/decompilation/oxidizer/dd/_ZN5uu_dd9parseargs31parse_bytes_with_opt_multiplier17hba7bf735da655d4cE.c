fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1: &str) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xb0]
    let v1: i64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: void*;  // [bp-0x98], Other Possible Types: struct24
    let v4: core::str::pattern::CharSearcher;  // [bp-0x88]
    let v5: u16;  // [bp-0x58]
    let v6: struct32;  // [bp-0x50]
    let v8: void*;  // rsi
    let v9: u64;  // rdx
    let v10: void*;  // rax
    let v11: u64;  // r12
    let v12: u64;  // rdx
    let v14: u64;  // cc_ndep
    let v15: u64;  // r13
    let v16: void*;  // rsi
    let v17: u64;  // rax
    let v18: u64;  // rcx
    let v20: alloc::string::String;  // rdx

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x78, a1);
    v3 = 0;
    v5 = 1;
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    if v2 == 1 {
        uu_dd::parseargs::parse_bytes_no_x(a0, v8, v9, *(v1 as &i64), *((v1 + 8) as &i64));
        return;
    }
    v6 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v10 {
        return struct16 {
            field_0: 14
            field_8: v11
        };
    }
    do {
        v15 = v12;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v15, "0") {
            uu_dd::parseargs::show_zero_multiplier_warning();
        }
        uu_dd::parseargs::parse_bytes_no_x(&v3, v16, v12, v10, v15);
        v17 = v3;
        v18 = v12;
        if v3 != 14 {
            v20 = a0;
            *((a0 + 16) as &i128) = *(&v4.haystack.data_ptr as &i128);
            *(v20 as &u64) = v17;
            *((v20 + 8) as &u64) = v18;
            return;
        }
        if _ccall(0, 48, v11, v12, v14) as char {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
            v20 = a0;
            *((a0 + 16) as &i32) = vvar_81{reg 32};
            *(v20 as &u64) = v17;
            *((v20 + 8) as &u64) = v18;
            return;
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
    } while (v10);
    return struct16 {
        field_0: 14
        field_8: v11
    };
}
