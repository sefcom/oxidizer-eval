fn uu_touch::parse_date(a1: &struct16, a2: &str) -> Result<(), Error> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xc0], Other Possible Types: struct36
    let v1: void*;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: &str;  // [bp-0xb0]
    let v4: &str;  // [bp-0xa0]
    let v5: &str;  // [bp-0x90]
    let v6: &str;  // [bp-0x80]
    let v7: struct12;  // [bp-0x64]
    let v8: struct12;  // [bp-0x4c]
    let v9: struct16;  // [bp-0x40]
    let v11: u64;  // rcx
    let v12: i64;  // rdi
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // rdx
    let v18: u64;  // rdx
    let v19: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx
    let v20: struct12;  // [bp-0x58]

    v7 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, v11, &g_457c7f);
    if v7.field_0 {
        v14 = uu_touch::datetime_to_filetime(v12);
        *((a0 + 8) as &u64) = v14;
        *((a0 + 16) as &u32) = v18;
    }
    v1 = 0;
    v2 = 4;
    v3 = "%Y-%m-%d %H:%M:%S";
    v4 = "%Y-%m-%d %H:%M:%S.%f";
    v5 = "%Y-%m-%d %H:%M";
    v6 = "%Y-%m-%d %H:%M %z";
    v13 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v1);
    if let Ok(_) = v13 {
        loop {
            v20 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a2, v11, v13);
            if v20.field_0 {
                break;
            }
            v13 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v1);
            if !v13 {
                goto LABEL_53abff;
            }
        }
    }
LABEL_53abff:
    v15 = chrono::naive::date::NaiveDate::parse_from_str(a2, v11, &g_452190);
    if !(v15 & 1) {
        v8 = struct12 {
            field_0: (v15 >> 32) as u32
            field_4: 0
        };
        <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v8 as u8, 1, &v8);
        v0 = chrono::offset::LocalResult<T>::and_then(&v8 as u8, &v8);
        v9 = chrono::offset::LocalResult<T>::unwrap(&v0);
        v14 = uu_touch::datetime_to_filetime(&v9);
        *((a0 + 8) as &u64) = v14;
        *((a0 + 16) as &u32) = v18;
    }
    if v11 && v16 == "@" {
        v19 = core::num::<impl i64>::from_ascii_radix(&v1, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a2) as u64, v16);
        if !v1 as i8 {
            return Err(struct16 {
                field_0: v2
                field_8: 0
            });
        }
    }
    v0 = parse_datetime::parse_datetime_at_date(a1, a2);
    if v0.field_0 != 9223372036854775810 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0 + 8, a2);
        return Ok(());
    }
    return Err(struct16 {
        field_0: uu_touch::datetime_to_filetime(&v2)
        field_8: v16 as u32
    });
}
