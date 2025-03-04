fn uu_df::table::Table::new(a0: u32, a1: void*, a2: &struct24) -> u64 {
    let v0: struct16;  // [sp-0x570], Other Possible Types: struct24, int
    let v1: i64;  // [sp-0x558]
    let v2: i64;  // [sp-0x550]
    let v3: i8;  // [sp-0x548]
    let v4: struct24;  // [sp-0x540]
    let v5: i64;  // [sp-0x528]
    let v6: i64;  // [sp-0x520]
    let v7: struct24;  // [sp-0x518]
    let v8: struct24;  // [sp-0x500]
    let v9: struct32;  // [bp-0x4e8]
    let v10: struct32;  // [sp-0x4c8]
    let v11: i64;  // [bp-0x4a8], Other Possible Types: char, struct24
    let v12: i64;  // [sp-0x4a0]
    let v13: i8;  // [bp-0x498]
    let v14: i8;  // [bp-0x3f0]
    let v15: struct24;  // [bp-0x3b8], Other Possible Types: char, int
    let v16: i64;  // [sp-0x3a8]
    let v17: Option<struct232>;  // [sp-0x2c8], Other Possible Types: struct16
    let v18: i64;  // [sp-0x2b8]
    let v19: struct200;  // [sp-0x1d8], Other Possible Types: int, struct184
    let v20: struct200;  // [sp-0x108]
    let v22: i64;  // r14
    let v23: i64;  // r15
    let v24: i64;  // rax
    let v25: iNone;  // xmm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // ymm0
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm0
    let v30: struct8;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // r15
    let v34: i64;  // rdx
    let v35: i64;  // r12
    let v36: i64;  // r13
    let v37: i64;  // r14

    v8 = uu_df::table::Header::get_headers(a1);
    v22 = *((a1 + 8) as &i64);
    v23 = *((a1 + 16) as &i64);
    v9 = struct32 {
        field_0: v22
        field_8: v22 + v23
        field_16: 0
        field_24: &v8
    };
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
    v24 = alloc::alloc::Global::alloc_impl();
    v5 = v23;
    v6 = v22;
    *((v24 + 16) as &u64) = v8.field_16;
    v25 = v8.field_0;
    v27 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
    *(v24 as void*) = v25;
    v0 = alloc::slice::hack::into_vec(v24, 1);
    v19 = uu_df::table::Row::new();
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v17 as i64 != 0x8000000000000000 {
        if *((a1 + 81) as &i8) {
            do {
                memcpy(&v11, &v17, 232);
                memcpy(&v15, &v17, 232);
                v20 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v15);
                v1 = &v20;
                v2 = a1;
                v3 = 0;
                v4 = uu_df::table::RowFormatter::get_values(&v1);
                memcpy(&v15, &v20, 208);
                v19 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v15);
                v16 = v4.field_16;
                v28 = v4.field_0;
                v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
                v15 = v28;
                v0 = alloc::vec::Vec<T,A>::push(&v15);
                v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
            } while (v17 as i64 != 0x8000000000000000);
        } else {
            do {
                memcpy(&v11, &v17, 232);
                if *(&v14 as &i64) {
                    memcpy(&v15, &v17, 232);
                    v20 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v15);
                    v1 = &v20;
                    v2 = a1;
                    v3 = 0;
                    v4 = uu_df::table::RowFormatter::get_values(&v1);
                    memcpy(&v15, &v20, 208);
                    v19 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v15);
                    v16 = v4.field_16;
                    v29 = v4.field_0;
                    v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
                    v15 = v29;
                    v0 = alloc::vec::Vec<T,A>::push(&v15);
                }
            } while ((v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10), v17 as i64 != 0x8000000000000000));
        }
    }
    if *((a1 + 83) as &i8) {
        v11 = &v19;
        v12 = a1;
        *(&v13 as &i8) = 1;
        v15 = uu_df::table::RowFormatter::get_values(&v11);
        v0 = alloc::vec::Vec<T,A>::push(&v15);
    }
    v11 = (&v0)[8] as i64;
    v12 = v11 + v0.field_16 * 24;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v30 {
        do {
            *(&v15.field_0 as &struct24) = struct24 {
                field_0: *((v30 + 8) as &i64)
                field_8: v15 + *((v30 + 16) as &i64) * 24
                field_16: 0
            };
            if v32 {
                v33 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
                v34 = v32;
                do {
                    v35 = *((v34 + 8) as &i64);
                    v36 = *((v34 + 16) as &i64);
                    v37 = *((&v7.field_0 as &char + 8) as &i64);
                    if unicode_width::str_width(v35, v36, 0) > *((v37 + v33 * 8) as &i64) {
                        *((v37 + v33 * 8) as &long long) = unicode_width::str_width(v35, v36, 0);
                    }
                    v33 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
                    v34 = v32;
                } while (v32);
            }
        } while ((v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v30));
    }
    v18 = v0.field_16;
    v17 = v0;
    v11 = v7;
    v15 = uu_df::table::Table::get_alignments(v6, v5);
    return a0;
}
