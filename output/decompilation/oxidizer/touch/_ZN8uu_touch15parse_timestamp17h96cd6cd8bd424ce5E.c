fn uu_touch::parse_timestamp(a1: i64, a2: i64) -> Result<struct12, struct16> {
    let a0: u64;  // rsi
    let v0: Result<(), Error>;  // [bp-0x148], Other Possible Types: struct16, struct28, struct36, struct24, struct12, u64
    let v1: Error;  // [bp-0x148], Other Possible Types: Result<(), Error>
    let v2: struct12;  // [bp-0x148]
    let v3: struct24;  // [bp-0x148], Other Possible Types: u192
    let v4: u64;  // [bp-0x140]
    let v5: u32;  // [bp-0x13c]
    let v6: struct40;  // [bp-0x138], Other Possible Types: struct16, struct_0 *
    let v7: struct8;  // [bp-0x130], Other Possible Types: u64
    let v8: void*;  // [bp-0x128]
    let v9: Error;  // [bp-0x118], Other Possible Types: struct12
    let v10: i64;  // [bp-0x118]
    let v11: i64;  // [bp-0x118], Other Possible Types: struct_1 *, u64
    let v12: struct12;  // [bp-0x118]
    let v13: i64;  // [bp-0x118]
    let v15: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x110], Other Possible Types: struct28
    let v16: core::slice::iter::Iter<u8>;  // [bp-0x108], Other Possible Types: struct_0 *
    let v17: struct16;  // [bp-0x100], Other Possible Types: u64
    let v18: i64;  // [bp-0xe8], Other Possible Types: u128
    let v19: u64;  // [bp-0xe0]
    let v20: u64;  // [bp-0xd8]
    let v21: u128;  // [bp-0xc8]
    let v23: u32;  // [bp-0xbc]
    let v24: core::fmt::Arguments;  // [bp-0xb8], Other Possible Types: core::fmt::rt::Argument, void*, u64
    let v25: core::fmt::rt::Argument;  // [bp-0xb8], Other Possible Types: u64
    let v26: u128;  // [bp-0xb0]
    let v27: u64;  // [bp-0xa8]
    let v28: u8;  // [bp-0xa0]
    let v29: i64;  // [bp-0x98], Other Possible Types: char
    let v30: u64;  // [bp-0x90]
    let v31: u64;  // [bp-0x88]
    let v32: struct16;  // [bp-0x80]
    let v33: struct12;  // [bp-0x6c], Other Possible Types: struct16
    let v34: struct48;  // [bp-0x60]
    let v35: struct24;  // [bp-0x58]
    let v36: u128;  // [bp-0x50]
    let v37: u64;  // [bp-0x40]
    let v41: i64;  // rdi
    let v42: u64;  // rdx
    let v43: u64;  // rdx
    let v44: u64;  // r8
    let v45: u64;  // rcx
    let v46: u64;  // r9
    let v47: u64;  // rax
    let v48: u64;  // rdi
    let v50: i64;  // rdi
    let v51: u32;  // edx
    let v52: i64;  // rdi
    let v54: u32;  // [bp-0x144]
    let v55: u32;  // [bp-0x114]

    v32 = struct16 {
        field_0: a0
        field_8: a1
    };
    <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a0, a0 + a1);
    match (<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a0, a0 + a1)) {
        8 => {
            chrono::offset::local::Local::now(a0);
            v12 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, v5);
            v24 = v12.field_0 >> 13;
            v24 = v25 & -0x100000000 | v24 as u64;
            *(&v13 as &&core::fmt::rt::Argument) = &v24;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v16 = &v32;
            v17 = <&T as core::fmt::Display>::fmt;
            v0 = &g_46c700;
            v4 = 2;
            v8 = 0;
            v6 = &v12;
            v7 = 2;
            break;
        }
        10 => {
            *(&v10 as &&struct16) = &v32;
            v15 = <&T as core::fmt::Display>::fmt;
            *(&v0 as &&str) = "20";
            v4 = 1;
            v8 = 0;
            v6 = &v10 as u8;
            v7 = 1;
            v3 = core::option::Option<T>::map_or_else(v42);
        }
        11 => {
            chrono::offset::local::Local::now(a0);
            v9 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, v5);
            v24 = v9.field_0 >> 13;
            v24 = v25 & -0x100000000 | v24;
            *(&v11 as &&u64) = &v24;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v16 = &v32;
            v17 = <&T as core::fmt::Display>::fmt;
            v0 = &g_46c700;
            v4 = 2;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
            goto LABEL_5c3957;
        }
        12 => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, &g_474dec.field_0);
        }
        13 => {
            *(&v11 as &&struct16) = &v32;
            v15 = <&T as core::fmt::Display>::fmt;
            *(&v0 as &&str) = "20";
            v4 = 1;
            v8 = 0;
            v6 = &v11 as u8;
            v7 = 1;
LABEL_5c3957:
            v3 = core::option::Option<T>::map_or_else(v43);
        }
        15 => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1, &g_474dec.field_0);
        }
        _ => {
            v24 = 0;
            v26 = a0;
            v27 = a1;
            v28 = 1;
            v18 = &v24;
            v19 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(&v0 as &&str) = "invalid date format ";
            v4 = 1;
            v8 = 0;
            v6 = &v18;
            v7 = 1;
            v0 = core::option::Option<T>::map_or_else(a1);
            *((v41 + 8) as &double) = alloc::boxed::Box<T>::new(&v11 as u8);
            *((v41 + 16) as &&u8) = &g_710e78;
            *(v41 as &i64) = 1;
            return;
        }
    }
    v20 = v31;
    v18 = *(&v29 as &i128);
    chrono::naive::datetime::NaiveDateTime::parse_from_str(v19, v31, v45, v44, v46);
    if v3 as i32 {
        v33 = v0;
        v33 = v0;
        <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v3, 1, &v33);
        v0 = chrono::offset::LocalResult<T>::and_then(&v33, a2);
        if v11 as i32 {
            v24 = 0;
            v26 = *((&v18 as &char + 8) as &i128);
            v28 = 1;
            v29 = &v24;
            v30 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(&v0 as &&str) = "invalid date ts format ";
            v4 = 1;
            v8 = 0;
            v6 = &v29;
            v7 = 1;
            v0 = core::option::Option<T>::map_or_else(a1);
            v0 = struct28 {
                field_0: v36
                field_16: v37
                field_24: 1
            };
            v47 = alloc::boxed::Box<T>::new(&v0);
LABEL_5c3c84:
            *((v52 + 8) as &u64) = v47;
            *((v52 + 16) as &&u8) = &g_710e78;
            *(v52 as &i64) = 1;
        } else {
            v21 = *(&v55 as &i128);
            v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v21, v23);
            if (v54 * 4008636143 - 286331157 >> 2 | (v54 * 4008636143 - 286331157) * 0x40000000) <= 71582787 && core::slice::<impl [T]>::ends_with(v19, v20, ".60") {
                v21 = <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign();
            }
            v0 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v21);
            if !(v0 as i32 && (v9 = v1, v1 = chrono::datetime::DateTime<Tz>::checked_sub_signed(&v9), v1 as i32)) {
                core::option::expect_failed(v48, 33); /* do not return */
            }
            v35 = *((&v1 as &char + 8) as &i32);
            v34 = v1 as i64;
            v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v21, v23);
            v2 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v34, v5);
            *((v50 + 8) as &long long) = uu_touch::datetime_to_filetime(&v21);
            *((v50 + 16) as &u32) = v51;
            *(v50 as &i64) = 0;
        }
        return;
    } else {
        v47 = uu_touch::parse_timestamp::{{closure}}(v19, v20);
        goto LABEL_5c3c84;
    }
}
