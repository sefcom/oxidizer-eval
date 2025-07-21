fn uu_df::table::Table::new(a0: i64, a1: i64, a2: &struct24) -> long long {
    let <0x4cb510[is_1]|Stack bp-0x500, 1 B>: i64;  // [bp-0x500]
    let v0: i64;  // [bp-0x578]
    let v1: struct16;  // [bp-0x570]
    let v2: struct16;  // [bp-0x570]
    let v3: struct16;  // [bp-0x570]
    let v4: struct24;  // [bp-0x570]
    let v5: u64;  // [bp-0x568]
    let v6: u64;  // [bp-0x560]
    let v7: struct24;  // [bp-0x558]
    let v8: u128;  // [bp-0x540]
    let v9: u64;  // [bp-0x530]
    let v10: u64;  // [bp-0x528]
    let v11: u64;  // [bp-0x520]
    let v12: struct24;  // [bp-0x518]
    let v13: i64;  // [bp-0x510]
    let v14: u128;  // [bp-0x500]
    let v15: u64;  // [bp-0x4f0]
    let v16: struct32;  // [bp-0x4e8]
    let v17: struct32;  // [bp-0x4c8]
    let v18: struct16;  // [bp-0x4a8], Other Possible Types: struct24, u64
    let v19: u128;  // [bp-0x4a8]
    let v20: u64;  // [bp-0x498]
    let v21: u448;  // [bp-0x3f0]
    let v22: struct24;  // [bp-0x3b8], Other Possible Types: u64
    let v23: u128;  // [bp-0x3b8]
    let v24: struct24;  // [bp-0x3b8]
    let v25: u64;  // [bp-0x3a8]
    let v26: u64;  // [bp-0x3a8]
    let v27: Option<struct232>;  // [bp-0x2c8], Other Possible Types: u128
    let v28: Option<struct232>;  // [bp-0x2c8]
    let v29: u64;  // [bp-0x2b8]
    let v30: struct200;  // [bp-0x1d8]
    let v31: struct200;  // [bp-0x1d8]
    let v32: struct200;  // [bp-0x108]
    let v34: u64;  // r14
    let v35: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v36: *const [u8];  // rax
    let v37: u64;  // rax
    let v38: core::fmt::Arguments;  // rdx
    let v39: u64;  // r15
    let v41: struct16;  // rdx
    let v42: u64;  // rax
    let v43: u64;  // [bp-0x508]

    uu_df::table::Header::get_headers(a1, a2);
    v34 = *((a1 + 8) as &i64);
    v16 = struct32 {
        field_0: v34
        field_8: v34 + *((a1 + 16) as &i64)
        field_16: 0
        field_24: &<0x4cb510[is_1]|Stack bp-0x500, 1 B>
    };
    v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    v35 = alloc::alloc::Global::alloc_impl(a0) as u64;
    v10 = *((a1 + 16) as &i64);
    v11 = v34;
    *((v35 + 16) as &u64) = v15;
    *(v35 as &u128) = v14;
    v4 = alloc::slice::hack::into_vec(v35, 1);
    uu_df::table::Row::new(a1);
    v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v27 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
    if let Some(_) = v27 {
        if *((a1 + 81) as &i8) {
            do {
                memcpy(&v18, &v27, 232);
                memcpy(&v23 as u64, &v27, 232);
                v32 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v23 as u64);
                v7 = struct24 {
                    field_0: &v32
                    field_8: a1
                    field_16: 0
                };
                uu_df::table::RowFormatter::get_values(&v8, &v7);
                memcpy(&v23 as u64, &v32, 208);
                v30 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v23 as u64);
                v25 = v9;
                v23 = v8;
                v1 = alloc::vec::Vec<T,A>::push(&v23 as u64);
                v28 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v28 != 0x8000000000000000);
        } else {
            do {
                memcpy(&v18, &v28, 232);
                if v21 as i64 {
                    memcpy(&v23 as u64, &v28, 232);
                    v32 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v23 as u64);
                    v7 = struct24 {
                        field_0: &v32
                        field_8: a1
                        field_16: 0
                    };
                    uu_df::table::RowFormatter::get_values(&v8, &v7);
                    memcpy(&v23 as u64, &v32, 208);
                    v31 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v23 as u64);
                    v25 = v9;
                    v23 = v8;
                    v2 = alloc::vec::Vec<T,A>::push(&v23 as u64);
                }
                v28 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v28 != 0x8000000000000000);
        }
    }
    if *((a1 + 83) as &i8) {
        v18 = struct24 {
            field_0: &v30
            field_8: a1
            field_16: 1
        };
        uu_df::table::RowFormatter::get_values(&v22, &v18);
        v3 = alloc::vec::Vec<T,A>::push(&v22);
    }
    v18 = struct16 {
        field_0: v5
        field_8: v5 + v6 * 24
    };
    v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v36 {
        do {
            v22 = struct24 {
                field_0: *((v36 + 8) as &i64)
                field_8: *((v36 + 8) as &i64) + *((v36 + 16) as &i64) * 24
                field_16: 0
            };
            v37 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v22);
            if v38 {
                v39 = v37;
                do {
                    v41 = v38;
                    v42 = unicode_width::str_width(*((v41 + 8) as &i64), *((v41 + 16) as &i64), 0);
                    if v42 > *((v13 + v39 * 8) as &i64) {
                        *((v13 + v39 * 8) as &long long) = unicode_width::str_width(*((v41 + 8) as &i64), *((v41 + 16) as &i64), 0);
                    }
                    v39 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v22);
                } while (v38);
            }
            v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
        } while (v36);
    }
    vvar_568{stack -952} = struct24 OrderedDict({0: 𝜙@64b [((5027721, None), vvar_419{stack -952}), ((5027773, None), vvar_540{stack -952})], 16: 𝜙@64b [((5027721, None), vvar_424{stack -936}), ((5027773, None), vvar_542{stack -936})]})
    v29 = v6;
    v27 = v4.field_0;
    v20 = v43;
    v19 = v12.field_0;
    uu_df::table::Table::get_alignments(&v24, v11, v10);
    *((v0 + 16) as &u64) = v26;
    *(v0 as &u128) = v24.field_0;
    *((v0 + 24) as &u128) = v27;
    *((v0 + 40) as &u64) = v29;
    *((v0 + 48) as &u128) = v19;
    *((v0 + 64) as &u64) = v20;
    return a0;
}
