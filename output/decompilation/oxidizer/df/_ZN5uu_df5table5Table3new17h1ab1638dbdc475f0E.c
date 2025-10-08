fn uu_df::table::Table::new(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x450]
    let v1: struct16;  // [bp-0x450]
    let v2: struct16;  // [bp-0x450]
    let v3: u64;  // [bp-0x450]
    let v4: i64;  // [bp-0x448]
    let v5: u64;  // [bp-0x440]
    let v6: u8;  // [bp-0x438]
    let v7: i64;  // [bp-0x430]
    let v8: &str;  // [bp-0x428]
    let v9: struct17;  // [bp-0x420]
    let v10: &u64;  // [bp-0x408]
    let v11: i64;  // [bp-0x400]
    let v12: u64;  // [bp-0x3f8]
    let v13: u64;  // [bp-0x3f0]
    let v14: i64;  // [bp-0x3e8]
    let v15: u8;  // [bp-0x3e0]
    let v16: u64;  // [bp-0x3d0]
    let v17: struct32;  // [bp-0x3c8]
    let v18: u192;  // [bp-0x3a8]
    let v19: Option<struct232>;  // [bp-0x390], Other Possible Types: struct24
    let v20: struct24;  // [bp-0x390]
    let v21: struct32;  // [bp-0x390]
    let v22: Option<struct232>;  // [bp-0x390]
    let v23: Option<struct232>;  // [bp-0x390]
    let v24: u384;  // [bp-0x2d8]
    let v25: struct184;  // [bp-0x2a8]
    let v27: struct200;  // [bp-0x2a8]
    let v28: struct17;  // [bp-0x1d8], Other Possible Types: u64
    let v29: struct200;  // [bp-0x108]
    let v31: u64;  // r12
    let v32: i64;  // rax
    let v33: i64;  // r12
    let v34: i64;  // rax
    let v35: i64;  // r12
    let v36: u64;  // rax
    let v37: i64;  // rdx
    let v38: u64;  // r14
    let v39: i64;  // r15
    let v40: u64;  // rax

    uu_df::table::Header::get_headers(&v15, a1);
    v31 = *((a1 + 8) as &i64);
    v21 = struct32 {
        field_0: v31
        field_8: v31 + *((a1 + 16) as &i64)
        field_16: 0
        field_24: &v15
    };
    core::iter::traits::iterator::Iterator::collect(&v6, &v21);
    v32 = alloc::alloc::Global::alloc_impl(8, 24);
    v12 = *((a1 + 16) as &i64);
    v13 = v31;
    *((v32 + 16) as &u64) = v16;
    *(v32 as &u128) = v15;
    v3 = 1;
    v4 = v32;
    v5 = 1;
    v25 = uu_df::table::Row::new();
    v10 = a2;
    v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v19 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
    if !((((0 ^ v19) & (0 ^ -(v20))) >> 63) as char) {
        if *((a1 + 81) as &i8) == 1 {
            do {
                v29 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v23);
                v9 = struct17 {
                    field_0: &v29
                    field_8: a1
                    field_16: 0
                };
                uu_df::table::RowFormatter::get_values(&v18, &v9);
                memcpy(&v28, &v29, 208);
                v25 as u1600 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v28);
                v0 = alloc::vec::Vec<T,A>::push(&v18, "src/uu/df/src/table.rs");
                v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v22 != 0x8000000000000000);
        } else {
            do {
                if v24 as i64 {
                    v29 = <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(&v19);
                    v9 = struct17 {
                        field_0: &v29
                        field_8: a1
                        field_16: 0
                    };
                    uu_df::table::RowFormatter::get_values(&v18, &v9);
                    memcpy(&v28, &v29, 208);
                    v27 = <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(&v28);
                    v1 = alloc::vec::Vec<T,A>::push(&v18, "src/uu/df/src/table.rs");
                }
                v23 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v23 != 0x8000000000000000);
        }
    }
    if *((a1 + 83) as &i8) {
        v28 = struct17 {
            field_0: &v25 as u1600
            field_8: a1
            field_16: 1
        };
        uu_df::table::RowFormatter::get_values(&v23, &v28);
        v2 = alloc::vec::Vec<T,A>::push(&v23, "src/uu/df/src/table.rs");
    }
    if v5 {
        v33 = v4;
        v14 = v33 + v5 * 24;
        v34 = v33 + 24;
        loop {
            v19 = struct24 {
                field_0: *((v33 + 8) as &i64)
                field_8: *((v33 + 8) as &i64) + *((v33 + 16) as &i64) * 24
                field_16: 0
            };
            v36 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
            if v37 {
                v38 = v36;
                v39 = v37;
                do {
                    v40 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(*((v39 + 8) as &i64), *((v39 + 16) as &i64) + *((v39 + 8) as &i64));
                    if v40 > *((v7 + v38 * 8) as &i64) {
                        *((v7 + v38 * 8) as &u64) = core::iter::traits::double_ended::DoubleEndedIterator::rfold(*((v39 + 8) as &i64), *((v39 + 16) as &i64) + *((v39 + 8) as &i64));
                    }
                    v38 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
                    v39 = v37;
                } while (v37);
            }
            v34 = v35 + 24;
            if v35 == v14 {
                v33 = v35;
                if v33 == v14 {
                    break;
                }
            } else {
                v33 = v35;
                if v33 == v14 {
                    break;
                }
            }
        }
    }
    uu_df::table::Table::get_alignments(&v20, v13, v12);
    *((v11 + 16) as &i64) = 0;
    *(v11 as &i128) = *(&v23 as &i128);
    *((v11 + 24) as &i128) = *(&v2.field_0 as &i128);
    *((v11 + 40) as &u64) = v5;
    *((v11 + 48) as &u64) = v6;
    *((v11 + 56) as &struct_0 *) = v7;
    *((v11 + 64) as &&str) = v8;
    return v11;
}
