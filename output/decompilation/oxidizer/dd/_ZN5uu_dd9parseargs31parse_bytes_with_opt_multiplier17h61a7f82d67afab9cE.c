fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: i64;  // [bp-0xd8]
    let v1: Result<struct24, struct24>;  // [bp-0xd0]
    let v2: i64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u64;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: u128;  // [bp-0xa8]
    let v7: struct32;  // [bp-0x98]
    let v8: struct16;  // [bp-0x78]
    let v9: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v10: u16;  // [bp-0x38]
    let v12: u64;  // r9
    let v13: void*;  // rax
    let v14: u64;  // r12
    let v15: u64;  // rdx
    let v17: u64;  // cc_ndep
    let v18: u64;  // r13
    let v19: u64;  // r9
    let v20: u64;  // rax
    let v21: u64;  // rcx
    let v23: i64;  // rdi
    let v24: i64;  // rdx
    let v25: i64;  // rdi

    v9 = <char as core::str::pattern::Pattern>::into_searcher(0x78, a0, a1);
    v8 = struct16 {
        field_0: 0
        field_8: a1
    };
    v10 = 1;
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v8);
    if v3 == 1 {
        uu_dd::parseargs::parse_bytes_no_x(a0, a1, *(v2 as &i64), *((v2 + 8) as &i64), v12);
        return;
    }
    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v13 {
        do {
            v18 = v15;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13, v18, "0") as i8 {
                uu_dd::parseargs::show_zero_multiplier_warning();
            }
            uu_dd::parseargs::parse_bytes_no_x(a0, a1, v13, v18, v19);
            v20 = v4;
            v21 = v5;
            if v4 != 14 {
                v24 = v23;
                *((v0 + 16) as &u128) = v6;
                *(v24 as &u64) = v20;
                *((v24 + 8) as &u64) = v21;
                return;
            }
            if amd64g_calculate_condition(0, 48, v14, v21, v17) as char {
                <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, v21);
                v21 = v4;
                v24 = v25;
                *((v0 + 16) as &i128) = *(&v5 as &i128);
                *(v24 as &u64) = v20;
                *((v24 + 8) as &u64) = v21;
                return;
            }
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        } while (v13);
    }
    *((v0 + 8) as &u64) = v14;
    *(v0 as &i64) = 14;
    return;
}
