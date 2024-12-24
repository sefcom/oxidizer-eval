fn uu_touch::parse_date(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i96;  // [sp-0xa8], Other Possible Types: struct12, struct16
    let v1: i96;  // [sp-0x98], Other Possible Types: Option<Result<struct16, struct32>>, struct12, struct16, struct24, Result<struct2, struct9>
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: struct12;  // [bp-0x3c]
    let v15: i32;  // ebp
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v20: i32;  // ebp
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: i32;  // edx
    let v25: i64;  // r8
    let v26: i64;  // r9
    let v27: i64;  // rax
    let v29: i32;  // ebp

    v1 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, "%a %b %e %H:%M:%S %Y");
    if v1 {
        v15 = *((&v1 as &char + 8) as &i32);
        *((a0 + 8) as &u64) = -62135683200 + *((&v1 as &char + 4) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(v1) as i32 * 86400;
        *((a0 + 16) as &i32) = v15;
        return struct8 {
            field_0: 9223372036854775812
        };
    }
    v1 = &g_47542c;
    v1.8 = 17;
    v3 = &g_47543d;
    v4 = 20;
    v5 = &g_475451;
    v6 = 14;
    v7 = &g_47545f;
    v8 = 17;
    v9 = 0;
    v10 = 4;
    loop {
        v16 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v1);
        if !v16 {
            break;
        }
        v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, a3, v16, v17);
        if v0 {
            v20 = *((&v0 as &char + 8) as &i32);
            *((a0 + 8) as &u64) = -62135683200 + *((&v0 as &char + 4) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(v0) as i32 * 86400;
            *((a0 + 16) as &i32) = v20;
            *(a0 as &i64) = 9223372036854775812;
            return v27;
        }
    }
    if !(chrono::naive::date::NaiveDate::parse_from_str(a2, a3, "%Y-%m-%d") as i8 & 1) {
        v11 = struct12 {
            field_0: (v21 >> 32) as i32
            field_4: 0
        };
        <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v0, 1, &v11);
        v1 = chrono::offset::LocalResult<T>::and_then(&v0, &v11);
        v0 = chrono::offset::LocalResult<T>::unwrap(&v1, "src/uu/touch/src/touch.rs");
        v24 = *((&v0 as &char + 8) as &i32);
        *((a0 + 8) as &u64) = -62135683200 + *((&v0 as &char + 4) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(v0) as i32 * 86400;
        *((a0 + 16) as &i32) = v24;
        return struct8 {
            field_0: 9223372036854775812
        };
    }
    *(&v1.field_0 as &struct16) = struct16 {
        field_0: a2
        field_8: a2 + a3
    };
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v22 && *(v22 as &i8) == 64 {
        v23 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a2, a3);
        if !v23 {
            core::str::slice_error_fail(); /* do not return */
        }
        v1 = core::num::<impl core::str::traits::FromStr for i64>::from_str(v23, v17);
        if !v1 {
            return struct20 {
                field_0: 9223372036854775812
                field_8: v2
                field_16: 0
            };
        }
    }
    v1 = parse_datetime::parse_datetime_at_date(a1, a2, a3, v25, v26);
    if v1 == 9223372036854775810 {
        v29 = *((&v1 as &char + 16) as &i32);
        *((a0 + 8) as &u64) = -62135683200 + *((&v1 as &char + 12) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(*((&v1 as &char + 8) as &i32)) as i32 * 86400;
        *((a0 + 16) as &i32) = v29;
        *(a0 as &i64) = 9223372036854775812;
        return v27;
    }
    v27 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, a3);
    *(a0 as &i64) = 0x8000000000000000;
    return v27;
}
