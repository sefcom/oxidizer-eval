fn uu_touch::parse_date(a1: &struct16, a2: i64, a3: i64) -> Result<(), Error> {
    let a0: void*;  // rsi
    let v0: Option<struct8>;  // [bp-0xc0], Other Possible Types: struct36, struct80
    let v1: struct16;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: struct12;  // [bp-0x64]
    let v4: struct16;  // [bp-0x4c]
    let v5: struct12;  // [bp-0x4c]
    let v6: struct16;  // [bp-0x40]
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: i64;  // rdi
    let v15: u64;  // rdx
    let v16: i64;  // rdi
    let v17: i64;  // rdi
    let v18: i64;  // rdi
    let v19: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx
    let v20: struct12;  // [bp-0x58]

    v3 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a1, a2, "%a %b %e %H:%M:%S %Y");
    if v3.field_0 {
        v8 = uu_touch::datetime_to_filetime(&v3);
        goto LABEL_5c33bc;
    } else {
        v0 = struct80 {
            field_0: &g_4752dc
            field_8: 17
            field_16: &g_4752ed
            field_24: 20
            field_32: &g_475301
            field_40: 14
            field_48: &g_47530f
            field_56: 17
            field_64: 0
            field_72: 4
        };
        loop {
            v9 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v9 {
                break;
            }
            v20 = chrono::naive::datetime::NaiveDateTime::parse_from_str(a1, a2, v9, v10);
            if v20.field_0 {
                *((v12 + 8) as &long long) = uu_touch::datetime_to_filetime(&v20);
                *((v12 + 16) as &u32) = v10;
                *(v12 as &i64) = 9223372036854775812;
                return;
            }
        }
        v11 = chrono::naive::date::NaiveDate::parse_from_str(a1, a2, "%Y-%m-%d");
        if !(v11 & 1) {
            v4 = struct16 {
                field_0: (v11 >> 32) as u32
                field_4: <UNKNOWN>
            };
            v5 = struct12 {
                field_0: (v11 >> 32) as u32
                field_4: 0
            };
            <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v5 as u8, 1, &v5);
            v0 = chrono::offset::LocalResult<T>::and_then(&v5 as u8, &v5);
            v6 = chrono::offset::LocalResult<T>::unwrap(&v0, "src/uu/touch/src/touch.rs");
            v8 = uu_touch::datetime_to_filetime(&v6);
LABEL_5c33bc:
            *((v16 + 8) as &u64) = v8;
            *((v16 + 16) as &u32) = v15;
        } else {
            v1 = struct16 {
                field_0: a1
                field_8: a1 + a2
            };
            if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1) && <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1) == "@" {
                v19 = core::num::<impl core::str::traits::FromStr for i64>::from_str(&v1, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a1, a2) as u64);
                if !(!v1.field_0 as i8) {
                    goto LABEL_5c35a2;
                }
                *((v16 + 8) as &u64) = v2;
                *((v16 + 16) as &i32) = 0;
            } else {
LABEL_5c35a2:
                v0 = parse_datetime::parse_datetime_at_date(a0, a1, a2);
                match v0 {
                    Some(_) => {
                        <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2, a2);
                        *(v18 as &i64) = 0x8000000000000000;
                        return;
                    },
                    None => {
                        *((v17 + 8) as &long long) = uu_touch::datetime_to_filetime(&v1 as u64);
                        *((v17 + 16) as &u32) = v10 as u32;
                        *(v17 as &i64) = 9223372036854775812;
                        return;
                    },
                }
            }
        }
        *(v16 as &i64) = 9223372036854775812;
        return;
    }
}
