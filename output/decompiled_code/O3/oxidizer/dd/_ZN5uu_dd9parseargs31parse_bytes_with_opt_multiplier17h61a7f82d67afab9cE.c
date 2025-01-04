fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0xd0], Other Possible Types: i192
    let v1: i192;  // [sp-0xb8], Other Possible Types: struct32, struct24
    let v2: struct32;  // [sp-0x98]
    let v3: struct16;  // [bp-0x78]
    let v4: struct41;  // [sp-0x68]
    let v5: i16;  // [sp-0x38]
    let v7: i64;  // rdx
    let v8: i64;  // rax
    let v9: struct8;  // rax
    let v10: i64;  // r12
    let v12: i64;  // r13
    let v13: i64;  // r13
    let v14: i64;  // cc_ndep
    let v15: i64;  // rdi
    let v16: i64;  // rsi
    let v17: i64;  // rax
    let v18: i64;  // rcx
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rax

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x78, a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a2
    };
    v5 = 1;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3, v7);
    if *((&v0 as &char + 16) as &i64) == 1 {
        v8 = *((&v0 as &char + 8) as &i64);
        uu_dd::parseargs::parse_bytes_no_x(a0, a1, a2, *(v8 as &i64), *((v8 + 8) as &i64));
        return v21;
    }
    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
    v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
    if !v9 {
        v10 = 1;
    } else {
        v10 = 1;
        do {
            v12 = v13;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v12, "0") as i8 {
                uu_dd::parseargs::show_zero_multiplier_warning(v15, v16, v7);
            }
            v1 = uu_dd::parseargs::parse_bytes_no_x(a1, a2, v9, v12);
            v17 = v1;
            v18 = *((&v1 as &char + 8) as &i64);
            if v17 != 14 {
                v20 = a0;
                *((v20 + 16) as &i128) = *((&v1 as &char + 16) as &i128);
                *(v20 as &i64) = v17;
                *((v20 + 8) as &i64) = v18;
                return v21;
            }
            v19 = v10;
            if amd64g_calculate_condition(0, 48, v19, v18, v14) as char {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                v18 = v1;
                v20 = a0;
                *((v20 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
                v17 = 13;
                *(v20 as &i64) = v17;
                *((v20 + 8) as &i64) = v18;
                return v21;
            }
            v10 = v19 * v18;
            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        } while (v9);
    }
    v21 = a0;
    *((v21 + 8) as &i64) = v10;
    *(v21 as &i64) = 14;
    return v21;
}
