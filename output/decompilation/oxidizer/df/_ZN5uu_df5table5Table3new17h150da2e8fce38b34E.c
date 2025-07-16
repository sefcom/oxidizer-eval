fn uu_df::table::Table::new(a0: i64, a1: i64, a2: &struct24) -> long long {
    let <0x4cb510[is_1]|Stack bp-0x500, 1 B>: i64;  // [bp-0x500]
    let v0: i64;  // [bp-0x578]
    let v1: struct16;  // [bp-0x570], Other Possible Types: struct24
    let v2: u64;  // [bp-0x568]
    let v3: u64;  // [bp-0x560]
    let v4: i64;  // [bp-0x558]
    let v5: i64;  // [bp-0x550]
    let v6: u8;  // [bp-0x548]
    let v7: u128;  // [bp-0x540]
    let v8: u64;  // [bp-0x530]
    let v9: u64;  // [bp-0x528]
    let v10: u64;  // [bp-0x520]
    let v11: struct24;  // [bp-0x518]
    let v12: i64;  // [bp-0x510]
    let v13: u64;  // [bp-0x508]
    let v14: u128;  // [bp-0x500]
    let v15: u64;  // [bp-0x4f0]
    let v16: u256;  // [bp-0x4e8]
    let v17: struct32;  // [bp-0x4c8]
    let v18: u64;  // [bp-0x4a8], Other Possible Types: struct_0 *
    let v19: u128;  // [bp-0x4a8]
    let v20: u64;  // [bp-0x4a0], Other Possible Types: struct_5 *
    let v21: u8;  // [bp-0x498]
    let v22: u448;  // [bp-0x3f0]
    let v23: u64;  // [bp-0x3b8]
    let v24: u128;  // [bp-0x3b8]
    let v25: u192;  // [bp-0x3b8]
    let v26: u64;  // [bp-0x3a8]
    let v27: u64;  // [bp-0x3a8]
    let v28: Option<struct232>;  // [bp-0x2c8]
    let v29: Option<struct232>;  // [bp-0x2c8]
    let v30: Option<struct232>;  // [bp-0x2c8]
    let v31: u64;  // [bp-0x2b8]
    let v32: struct200;  // [bp-0x1d8]
    let v33: struct200;  // [bp-0x1d8]
    let v34: struct200;  // [bp-0x108]
    let v36: u64;  // r14
    let v37: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v38: *const [u8];  // rax
    let v39: u64;  // rax
    let v40: i64;  // rdx
    let v41: u64;  // r15
    let v43: i64;  // rdx
    let v44: u64;  // rax

    uu_df::table::Header::get_headers(a1, a2);
    v36 = *((a1 + 8) as &i64);
    v16 = struct32 {
        field_0: v36
        field_8: v36 + *((a1 + 16) as &i64)
        field_16: 0
        field_24: &<0x4cb510[is_1]|Stack bp-0x500, 1 B>
    };
    v11 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    v37 = alloc::alloc::Global::alloc_impl(a0) as u64;
    v9 = *((a1 + 16) as &i64);
    v10 = v36;
    *((v37 + 16) as &u64) = v15;
    *(v37 as &u128) = v14;
    v1 = alloc::slice::hack::into_vec(v37, 1);
    uu_df::table::Row::new(a1);
    v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v28 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
    if let Some(_) = v28 {
        if *((a1 + 81) as &i8) {
            do {
                memcpy(&v18, &v28, 232);
                memcpy(&v24 as u64, &v28, 232);
                v34 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v24 as u64);
                v4 = &v34;
                v5 = a1;
                v6 = 0;
                uu_df::table::RowFormatter::get_values(&v7, &v4);
                memcpy(&v24 as u64, &v34, 208);
                v32 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v24 as u64);
                v26 = v8;
                v24 = v7;
                v1 = alloc::vec::Vec<T,A>::push(&v24 as u64);
                v29 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v29 != 0x8000000000000000);
        } else {
            do {
                memcpy(&v18, &v30, 232);
                if v22 as i64 {
                    memcpy(&v24 as u64, &v30, 232);
                    v34 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v24 as u64);
                    v4 = &v34;
                    v5 = a1;
                    v6 = 0;
                    uu_df::table::RowFormatter::get_values(&v7, &v4);
                    memcpy(&v24 as u64, &v34, 208);
                    v33 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v24 as u64);
                    v26 = v8;
                    v24 = v7;
                    v1 = alloc::vec::Vec<T,A>::push(&v24 as u64);
                }
                v30 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v30 != 0x8000000000000000);
        }
    }
    if *((a1 + 83) as &i8) {
        v18 = &v32;
        v20 = a1;
        v21 = 1;
        uu_df::table::RowFormatter::get_values(&v23, &v18);
        v1 = alloc::vec::Vec<T,A>::push(&v23);
    }
    v18 = v2;
    v20 = v2 + v3 * 24;
    v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v38 {
        do {
            v23 = struct24 {
                field_0: *((v38 + 8) as &i64)
                field_8: *((v38 + 8) as &i64) + *((v38 + 16) as &i64) * 24
                field_16: 0
            };
            v39 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v23);
            if v40 {
                v41 = v39;
                do {
                    v43 = v40;
                    v44 = unicode_width::str_width(*((v43 + 8) as &i64), *((v43 + 16) as &i64), 0);
                    if v44 > *((v12 + v41 * 8) as &i64) {
                        *((v12 + v41 * 8) as &long long) = unicode_width::str_width(*((v43 + 8) as &i64), *((v43 + 16) as &i64), 0);
                    }
                    v41 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v23);
                } while (v40);
            }
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
        } while (v38);
    }
    vvar_569{stack -952} = struct24 OrderedDict({0: 𝜙@64b [((5027721, None), vvar_419{stack -952}), ((5027773, None), vvar_540{stack -952})], 16: 𝜙@64b [((5027721, None), vvar_424{stack -936}), ((5027773, None), vvar_542{stack -936})]})
    v31 = v3;
    memcpy(&v28, &v1, 16);
    v21 = v13;
    v19 = v11.field_0;
    uu_df::table::Table::get_alignments(&v25, v10, v9);
    *((v0 + 16) as &u64) = v27;
    *(v0 as &i128) = v25;
    *((v0 + 24) as &i128) = *(&v30 as &i128);
    *((v0 + 40) as &u64) = v31;
    *((v0 + 48) as &u128) = v19;
    *((v0 + 64) as &u64) = v21;
    return a0;
}
