fn uu_dd::parseargs::parse_bytes_with_opt_multiplier(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0xd0], Other Possible Types: struct24
    let v1: i192;  // [sp-0xb8], Other Possible Types: struct24, struct32
    let v2: struct32;  // [sp-0x98]
    let v3: struct16;  // [bp-0x78]
    let v4: struct41;  // [sp-0x68]
    let v5: i16;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: struct8;  // rax
    let v9: i64;  // r12
    let v11: i64;  // r13
    let v12: i64;  // rdx
    let v13: i64;  // r13
    let v14: i64;  // cc_ndep
    let v16: i64;  // rcx
    let v17: i64;  // rax

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x78, a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a2
    };
    v5 = 1;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
    if *((&v0 as &char + 16) as &i64) == 1 {
        v7 = *((&v0 as &char + 8) as &i64);
        uu_dd::parseargs::parse_bytes_no_x(a0, a1, a2, *(v7 as &i64), *((v7 + 8) as &i64));
    } else {
        v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
        v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
        if !v8 {
            return struct16 {
                field_0: 14
                field_8: v9
            };
        }
        v9 = 1;
        do {
            v11 = v13;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11, "0") as i8 {
                uu_dd::parseargs::show_zero_multiplier_warning();
            }
            v1 = uu_dd::parseargs::parse_bytes_no_x(a1, a2, v8, v11);
            v16 = *((&v1 as &char + 8) as &i64);
            if v1 != 14 {
                return struct32 {
                    field_0: v15
                    field_8: v16
                    field_16: *((&v1 as &char + 16) as &i128)
                };
            }
            v17 = v9;
            if amd64g_calculate_condition(0, 48, v17, v16, v14) as char {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
                *((a0 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
            }
            v9 = v17 * v16;
            v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next();
            v13 = v12;
        } while (v8);
    }
}
