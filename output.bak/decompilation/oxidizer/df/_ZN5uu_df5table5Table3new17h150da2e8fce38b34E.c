fn uu_df::table::Table::new(a0: &struct72, a1: void*, a2: &struct24) -> u64 {
    let v0: struct16;  // [sp-0x570], Other Possible Types: i192, struct24
    let v1: i64;  // [sp-0x558]
    let v2: i64;  // [sp-0x550]
    let v3: i8;  // [sp-0x548]
    let v4: struct24;  // [sp-0x540], Other Possible Types: i192
    let v5: i64;  // [sp-0x528]
    let v6: i64;  // [sp-0x520]
    let v7: i192;  // [sp-0x518], Other Possible Types: struct24
    let v8: struct24;  // [sp-0x500], Other Possible Types: i192
    let v9: struct32;  // [bp-0x4e8]
    let v10: struct32;  // [sp-0x4c8], Other Possible Types: i256
    let v11: i8;  // [bp-0x4a8], Other Possible Types: struct24
    let v12: i64;  // [sp-0x4a0]
    let v13: i8;  // [bp-0x498]
    let v14: i8;  // [bp-0x3f0]
    let v15: i128;  // [bp-0x3b8], Other Possible Types: struct24
    let v16: i64;  // [sp-0x3b0]
    let v17: i64;  // [sp-0x3a8]
    let v18: i1856;  // [sp-0x2c8], Other Possible Types: Option<struct232>, struct16
    let v19: i64;  // [sp-0x2b8]
    let v20: struct200;  // [sp-0x1d8], Other Possible Types: i1600, struct184
    let v21: i1600;  // [sp-0x108], Other Possible Types: struct200
    let v23: i64;  // r14
    let v24: i64;  // r15
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i128;  // xmm0
    let v30: i128;  // xmm0
    let v31: struct8;  // rax
    let v32: struct8;  // rax
    let v33: i64;  // rdx
    let v34: i64;  // rdx
    let v35: i64;  // r12
    let v36: i64;  // r13
    let v37: i64;  // r14

    v8 = uu_df::table::Header::get_headers(a1);
    v23 = *((a1 + 8) as &i64);
    v24 = *((a1 + 16) as &i64);
    v9 = struct32 {
        field_0: v23
        field_8: v23 + v24
        field_16: 0
        field_24: &v8
    };
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
    v25 = alloc::alloc::Global::alloc_impl();
    v5 = v24;
    v6 = v23;
    *((v25 + 16) as &i64) = *((&v8 as &char + 16) as &i64);
    v26 = v8;
    v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    *(v25 as &i128) = v26;
    v0 = alloc::slice::hack::into_vec(v25, 1);
    v20 = uu_df::table::Row::new();
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v18 != 0x8000000000000000 {
        if *((a1 + 81) as &i8) {
            do {
                memcpy(&v11, &v18, 232);
                memcpy(&v15, &v18, 232);
                v21 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v15);
                v1 = &v21;
                v2 = a1;
                v3 = 0;
                v4 = uu_df::table::RowFormatter::get_values(&v1);
                memcpy(&v15, &v21, 208);
                v20 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v15);
                v17 = *((&v4 as &char + 16) as &i64);
                v29 = v4;
                v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
                v15 = v29;
                v0 = alloc::vec::Vec<T,A>::push(&v15);
                v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
            } while (v18 != 0x8000000000000000);
        } else {
            do {
                memcpy(&v11, &v18, 232);
                if v14 {
                    memcpy(&v15, &v18, 232);
                    v21 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v15);
                    v1 = &v21;
                    v2 = a1;
                    v3 = 0;
                    v4 = uu_df::table::RowFormatter::get_values(&v1);
                    memcpy(&v15, &v21, 208);
                    v20 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v15);
                    v17 = *((&v4 as &char + 16) as &i64);
                    v30 = v4;
                    v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                    v15 = v30;
                    v0 = alloc::vec::Vec<T,A>::push(&v15);
                }
            } while ((v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10), v18 != 0x8000000000000000));
        }
    }
    if *((a1 + 83) as &i8) {
        v11 = &v20;
        v12 = a1;
        v13 = 1;
        v15 = uu_df::table::RowFormatter::get_values(&v11);
        v0 = alloc::vec::Vec<T,A>::push(&v15);
    }
    v11 = *((&v0 as &char + 8) as &i64);
    v12 = v11 + *((&v0 as &char + 16) as &i64) * 24;
    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v31 {
        v19 = *((&v0 as &char + 16) as &i64);
        v18 = v0;
        v11 = v7;
        v15 = uu_df::table::Table::get_alignments(v6, v5);
        return struct72 {
            field_0: v15
            field_16: v17
            field_24: v18
            field_40: v19
            field_48: v11
            field_64: *((&v11 as &char + 16) as &i64)
        };
    }
    do {
        v15 = *((v31 + 8) as &i64);
        v16 = v15 + *((v31 + 16) as &i64) * 24;
        v17 = 0;
        v32 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        if v33 {
            v34 = v33;
            do {
                v35 = *((v34 + 8) as &i64);
                v36 = *((v34 + 16) as &i64);
                v37 = *((&v7 as &char + 8) as &i64);
                if unicode_width::str_width(v35, v36, 0) > *((v37 + v32 * 8) as &i64) {
                    *((v37 + v32 * 8) as &long long) = unicode_width::str_width(v35, v36, 0);
                }
                v32 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                v34 = v33;
            } while (v33);
        }
    } while ((v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10), v18 != 0x8000000000000000));
}
