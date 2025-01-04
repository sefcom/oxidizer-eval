fn uu_touch::parse_date(a0: &Option<struct12>, a1: &struct16, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xc0], Other Possible Types: struct16, Result<struct2, struct9>, Option<Result<struct16, struct32>>, struct24
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i64;  // [sp-0xa0]
    let v5: i64;  // [sp-0x98]
    let v6: i64;  // [sp-0x90]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: struct12;  // [sp-0x64], Other Possible Types: i96
    let v11: i96;  // [sp-0x58], Other Possible Types: struct12
    let v12: struct12;  // [bp-0x4c]
    let v13: i128;  // [bp-0x40], Other Possible Types: struct16
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v18: i64;  // r9
    let v19: i64;  // r8
    let v21: i64;  // rax
    let v22: i64;  // rax
    let v24: i64;  // rax

    v10 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, "%a %b %e %H:%M:%S %Y", a5);
    if v10 {
        v15 = uu_touch::datetime_to_filetime(&v10);
    } else {
        v0 = &g_4752dc;
        v1 = 17;
        v2 = &g_4752ed;
        v3 = 20;
        v4 = &g_475301;
        v5 = 14;
        v6 = &g_47530f;
        v7 = 17;
        v8 = 0;
        v9 = 4;
        loop {
            v16 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v16 {
                break;
            }
            v11 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, v16, v17, v18);
            if v11 {
                return struct20 {
                    field_0: 9223372036854775812
                    field_8:                     uu_touch::datetime_to_filetime(&v11)
                    field_16: v17 as u32
                };
            }
        }
        if !(chrono::naive::date::NaiveDate::parse_from_str(a2, a3, "%Y-%m-%d", v19, v18) as i8 & 1) {
            v12 = struct12 {
                field_0: (v20 >> 32) as i32
                field_4: 0
            };
            <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v13, 1, &v12);
            v0 = chrono::offset::LocalResult<T>::and_then(&v13, &v12);
            v13 = chrono::offset::LocalResult<T>::unwrap(&v0, "src/uu/touch/src/touch.rs");
            v15 = uu_touch::datetime_to_filetime(&v13);
        } else {
            *(&v0.field_0 as &struct16) = struct16 {
                field_0: a2
                field_8: a2 + a3
            };
            v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
            if v21 && *(v21 as &i8) == 64 {
                v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a2, a3);
                if !v22 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v0 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v22, v17);
                if !v0 {
                    return struct20 {
                        field_0: 9223372036854775812
                        field_8: v1
                        field_16: 0
                    };
                }
            }
            v0 = parse_datetime::parse_datetime_at_date(a1, a2, a3, v19, v18);
            if v0 == 9223372036854775810 {
                return struct20 {
                    field_0: 9223372036854775812
                    field_8:                     uu_touch::datetime_to_filetime(&v0)
                    field_16: v17 as u32
                };
            }
            v24 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, a3);
            *(a0 as &i64) = 0x8000000000000000;
            return v24;
        }
    }
    return struct20 {
        field_0: 9223372036854775812
        field_8: v15
        field_16: v23 as i32
    };
}
