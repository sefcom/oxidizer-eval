fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0xd0]
    let v1: struct24;  // [sp-0xb8], Other Possible Types: struct32
    let v2: struct32;  // [sp-0x98]
    let v3: struct16;  // [bp-0x78]
    let v4: struct41;  // [sp-0x68]
    let v5: i16;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: struct8;  // rax
    let v9: struct8;  // rbx
    let v10: i64;  // rdx
    let v11: i64;  // r13
    let v12: i64;  // r12
    let v13: i64;  // cc_ndep
    let v14: i64;  // rcx
    let v15: i64;  // rax

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x78, a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a2
    };
    v5 = 1;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
    if v0.field_16 != 1 {
        v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
        v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        if !v8 {
            return struct16 {
                field_0: 14
                field_8: v17
            };
        }
        v9 = v8;
        v11 = v10;
        v12 = 1;
        do {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v11, "0") as i8 {
                uu_dd::parseargs::show_zero_multiplier_warning();
            }
            v1 = uu_dd::parseargs::parse_bytes_no_x(a1, a2, v9, v11);
            v14 = v1.field_8;
            if v1.field_0 != 14 {
                *((a0 + 16) as &i128) = *(&v1.field_16 as &i128);
            }
            v15 = v12;
            if amd64g_calculate_condition(0, 48, v15, v14, v13) as char {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                *((a0 + 16) as &i128) = *(&v1.field_8 as &i128);
            }
            v12 = (v15 * v14) as u64;
            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
            v11 = v10;
        } while (v9);
    }
    v7 = v0.field_8;
    uu_dd::parseargs::parse_bytes_no_x(a0, a1, a2, *(v7 as &i64), *((v7 + 8) as &i64));
}
