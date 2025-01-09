fn uu_touch::parse_date(a0: &Option<struct12>, a1: &struct16, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xc0], Other Possible Types: Option<Result<struct16, struct32>>, struct16, Result<struct2, struct8>, struct24
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i64;  // [sp-0xa0]
    let v5: i64;  // [sp-0x98]
    let v6: i64;  // [sp-0x90]
    let v7: i64;  // [sp-0x88]
    let v8: i64;  // [sp-0x80]
    let v9: i64;  // [sp-0x78]
    let v10: i96;  // [sp-0x64], Other Possible Types: struct12
    let v11: i96;  // [sp-0x58], Other Possible Types: struct12
    let v12: struct12;  // [bp-0x4c]
    let v13: i128;  // [bp-0x40], Other Possible Types: struct16
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // rax

    v10 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, "%a %b %e %H:%M:%S %Y");
    if v10 {
        v15 = uu_touch::datetime_to_filetime(&v10);
    }
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
        v11 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, v16, v17);
        if v11 {
            *((a0 + 8) as &long long) = uu_touch::datetime_to_filetime(&v11);
            *((a0 + 16) as &u32) = v17;
            *(a0 as &i64) = 9223372036854775812;
        }
    }
    if !(chrono::naive::date::NaiveDate::parse_from_str(a2, a3, "%Y-%m-%d") as i8 & 1) {
        v12 = struct12 {
            field_0: (v18 >> 32) as i32
            field_4: 0
        };
        <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v13, 1, &v12);
        v0 = chrono::offset::LocalResult<T>::and_then(&v13, &v12);
        v13 = chrono::offset::LocalResult<T>::unwrap(&v0, "src/uu/touch/src/touch.rs");
        v15 = uu_touch::datetime_to_filetime(&v13);
        return Some(struct12 {
            field_0: v15
            field_8: v17 as i32
        });
    }
    v0 = struct16 {
        field_0: a2
        field_8: a2 + a3
    };
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v19 && *(v19 as &i8) == 64 {
        v20 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a2, a3);
        if !v20 {
            core::str::slice_error_fail(a2, a3, 1, a3, "src/uu/touch/src/touch.rs"); /* do not return */
        }
        v0 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v20, v17) as u64;
        return Some(struct12 {
            field_0: v1
            field_8: 0
        });
    }
    v0 = parse_datetime::parse_datetime_at_date(a1, a2, a3);
    if v0 != 9223372036854775810 {
        v21 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, a3);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    *((a0 + 8) as &long long) = uu_touch::datetime_to_filetime(&v0);
    *((a0 + 16) as &u32) = v17;
    *(a0 as &i64) = 9223372036854775812;
}
