fn uu_df::table::Table::new(a0: &struct72, a1: void*, a2: &struct24) -> u64 {
    let v0: struct16;  // [sp-0x570], Other Possible Types: i192, struct24
    let v1: i64;  // [sp-0x558]
    let v2: i64;  // [sp-0x550]
    let v3: i8;  // [sp-0x548]
    let v4: i8;  // [bp-0x540]
    let v5: i8;  // [bp-0x530]
    let v6: i64;  // [sp-0x528]
    let v7: i64;  // [sp-0x520]
    let v8: struct24;  // [sp-0x518], Other Possible Types: i192
    let v9: i8;  // [bp-0x500]
    let v10: i8;  // [bp-0x4f0]
    let v11: struct32;  // [bp-0x4e8]
    let v12: struct32;  // [sp-0x4c8], Other Possible Types: i256
    let v13: i64;  // [bp-0x4a8]
    let v14: i64;  // [sp-0x4a0]
    let v15: i8;  // [bp-0x498]
    let v16: i8;  // [bp-0x3f0]
    let v17: i192;  // [bp-0x3b8], Other Possible Types: struct24
    let v18: i64;  // [sp-0x3b0]
    let v19: i64;  // [sp-0x3a8]
    let v20: i1856;  // [sp-0x2c8], Other Possible Types: Option<struct232>
    let v21: i64;  // [sp-0x2b8]
    let v22: struct200;  // [sp-0x1d8], Other Possible Types: struct184, i1600
    let v23: struct200;  // [sp-0x108], Other Possible Types: i1600
    let v25: i64;  // r14
    let v26: i64;  // r15
    let v27: i64;  // rax
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdx
    let v34: struct8;  // rax
    let v35: struct8;  // rax
    let v36: i64;  // rdx
    let v37: i64;  // r12
    let v38: i64;  // r13
    let v39: i64;  // r14

    uu_df::table::Header::get_headers();
    v25 = *((a1 + 8) as &i64);
    v26 = *((a1 + 16) as &i64);
    v11 = struct32 {
        field_0: v25
        field_8: v25 + v26
        field_16: 0
        field_24: &v9
    };
    v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    v27 = alloc::alloc::Global::alloc_impl();
    v6 = v26;
    v7 = v25;
    *((v27 + 16) as &i8) = v10;
    v28 = v9;
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    *(v27 as &i128) = v28;
    v0 = alloc::slice::hack::into_vec(v27, 1);
    v22 = uu_df::table::Row::new();
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
    if v20 != 0x8000000000000000 {
        if *((a1 + 81) as &i8) {
            do {
                memcpy(&v13, &v20, 232);
                memcpy(&v17, &v20, 232);
                v23 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v17);
                v1 = &v23;
                v2 = a1;
                v3 = 0;
                uu_df::table::RowFormatter::get_values();
                memcpy(&v17, &v23, 208);
                v22 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v17);
                v19 = v5;
                v31 = v4;
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                v17 = v31;
                v0 = alloc::vec::Vec<T,A>::push(&v17, v33);
                v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12);
            } while (v20 != 0x8000000000000000);
        } else {
            do {
                memcpy(&v13, &v20, 232);
                if v16 {
                    memcpy(&v17, &v20, 232);
                    v23 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v17);
                    v1 = &v23;
                    v2 = a1;
                    v3 = 0;
                    uu_df::table::RowFormatter::get_values();
                    memcpy(&v17, &v23, 208);
                    v22 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v17);
                    v19 = v5;
                    v32 = v4;
                    v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                    v17 = v32;
                    v0 = alloc::vec::Vec<T,A>::push(&v17, v33);
                }
            } while ((v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12), v20 != 0x8000000000000000));
        }
    }
    if *((a1 + 83) as &i8) {
        v13 = &v22;
        v14 = a1;
        v15 = 1;
        uu_df::table::RowFormatter::get_values();
        v0 = alloc::vec::Vec<T,A>::push(&v17, v33);
    }
    v13 = *((&v0 as &char + 8) as &i64);
    v14 = v13 + *((&v0 as &char + 16) as &i64) * 24;
    v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v34 {
        v21 = *((&v0 as &char + 16) as &i64);
        v20 = v0;
        v13 = v8;
        v17 = uu_df::table::Table::get_alignments(v7, v6);
        *((a0 + 16) as &i64) = v19;
        *(a0 as &i192) = v17;
        *((a0 + 24) as &i128) = v20;
        *((a0 + 40) as &i64) = v21;
        *((a0 + 48) as &i192) = v13;
        *((a0 + 64) as &i64) = *((&v13 as &char + 16) as &i64);
        return a0;
    }
    do {
        v17 = *((v34 + 8) as &i64);
        v18 = v17 + *((v34 + 16) as &i64) * 24;
        v19 = 0;
        v35 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
        if v33 {
            v36 = v33;
            do {
                v37 = *((v36 + 8) as &i64);
                v38 = *((v36 + 16) as &i64);
                v39 = *((&v8 as &char + 8) as &i64);
                if unicode_width::str_width(v37, v38, 0) > *((v39 + v35 * 8) as &i64) {
                    *((v39 + v35 * 8) as &long long) = unicode_width::str_width(v37, v38, 0);
                }
                v35 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                v36 = v33;
            } while (v33);
        }
    } while ((v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v12), v20 != 0x8000000000000000));
}
