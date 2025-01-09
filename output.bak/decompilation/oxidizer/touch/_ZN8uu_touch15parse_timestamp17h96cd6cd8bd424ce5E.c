fn uu_touch::parse_timestamp(a0: &Result<struct12, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i96;  // [sp-0x148], Other Possible Types: struct12, struct28, Option<struct16>, struct16
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [bp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i64;  // [sp-0x118], Other Possible Types: struct12, struct16, Option<Result<struct16, struct32>>
    let v6: i64;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [bp-0x100]
    let v9: i64;  // [sp-0xe8], Other Possible Types: struct24
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: struct16;  // [bp-0xc8], Other Possible Types: i128
    let v13: i64;  // [bp-0xb8]
    let v14: i128;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i8;  // [sp-0xa0]
    let v17: i64;  // [sp-0x98], Other Possible Types: struct24
    let v18: i64;  // [sp-0x90]
    let v19: i64;  // [sp-0x80]
    let v20: i64;  // [sp-0x78]
    let v21: struct12;  // [sp-0x6c], Other Possible Types: i32
    let v22: struct16;  // [bp-0x60]
    let v28: i64;  // r14
    let v29: i64;  // r15
    let v31: i64;  // r8
    let v32: i64;  // rcx
    let v36: i128;  // xmm0
    let v37: i64;  // rdx
    let v38: i64;  // rdi
    let v41: i32;  // edx

    v28 = a2;
    v29 = a1;
    v19 = a1;
    v20 = a2;
    switch (<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v29, a1 + a2)) {
    case 8:
        v0 = chrono::offset::local::Local::now();
        v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, *((&v0 as &char + 12) as &i32));
        v13 = v5 >> 13;
        v5 = &v13;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v7 = &v19;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_46c700;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 2;
LABEL_5c38da:
        core::option::Option<T>::map_or_else();
LABEL_5c38ff:
        v31 = 10;
        v32 = &g_475397;
        break;
    case 10:
        v5 = &v19;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = "20";
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        goto LABEL_5c38da;
    case 11:
        v0 = chrono::offset::local::Local::now();
        v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, *((&v0 as &char + 12) as &i32));
        v13 = v5 >> 13;
        v5 = &v13;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v7 = &v19;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_46c700;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 2;
LABEL_5c3957:
        core::option::Option<T>::map_or_else();
LABEL_5c3967:
        v31 = 13;
        v32 = &g_47538a;
        break;
    case 12:
        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v29, v28);
        goto LABEL_5c38ff;
    case 13:
        v5 = &v19;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = "20";
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        goto LABEL_5c3957;
    case 15:
        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v29, v28);
        goto LABEL_5c3967;
    default:
        v13 = 0;
        v14 = v29;
        v15 = v28;
        v16 = 1;
        v9 = &v13;
        v10 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "invalid date format ";
        v1 = 1;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v8 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
        *((a0 + 16) as &&i64) = &g_710e78;
        *(a0 as &i64) = 1;
    }
    v9 = v17;
    v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(v10, *((&v17 as &char + 16) as &i64), v32, v31);
    if !v21 {
        uu_touch::parse_timestamp::{{closure}}(v10, v11);
        return Err(struct16 {
            field_0: v35
            field_8: &g_710e78
        });
    }
    v21 = struct12 {
        field_0: v34
        field_4: *((&v0 as &char + 4) as &i64)
    };
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v0, 1, &v21);
    v5 = chrono::offset::LocalResult<T>::and_then(&v0, &v21);
    if v5 {
        v36 = *((&v9 as &char + 8) as &i128);
        v13 = 0;
        v14 = v36;
        v16 = 1;
        v17 = &v13;
        v18 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = "invalid date ts format ";
        v1 = 1;
        v4 = 0;
        v2 = &v17;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        v0 = struct28 {
            field_0: v23
            field_16: v24
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v0);
        return Err(struct16 {
            field_0: v35
            field_8: &g_710e78
        });
    }
    *(&v12.field_0 as &struct16) = struct16 {
        field_0: *((&v5 as &char + 4) as &i128)
    };
    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v12, v12.field_12);
    if (*((&v0 as &char + 4) as &i32) * 4008636143 - 286331157 >> 2 | (*((&v0 as &char + 4) as &i32) * 4008636143 - 286331157) * 0x40000000) <= 71582787 && core::slice::<impl [T]>::ends_with(v10, v11, ".60") as i8 {
        v12 = <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign();
    }
    v0 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v12);
    match v0 {
        None => {
            v37 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
            v38 = &g_474e0c;
        },
        Some(_) => {
            *(&v5.field_0 as &struct16) = struct16 {
                field_0: v0
            };
            v0 = chrono::datetime::DateTime<Tz>::checked_sub_signed(&v5);
            match v0 {
                None => {
                    v37 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
                    v38 = &g_475369;
                },
                Some(_) => {
                    *(&v22.field_0 as &struct16) = struct16 {
                        field_0: v0
                    };
                    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v12, *((&v12 as &char + 12) as &i32) as u32 as u64);
                    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v22, *((&v0 as &char + 12) as &i32) as u32 as u64);
                    if (*((&v0 as &char + 4) as &i32) as u32 as u64 / 3600) as u32 == (*((&v0 as &char + 4) as &i32) as u32 as u64 / 3600) as u32 {
                        *((a0 + 8) as &long long) = uu_touch::datetime_to_filetime(&v12);
                        *((a0 + 16) as &i32) = v41;
                        *(a0 as &i64) = 0;
                    }
                    v5 = 0;
                    v6 = v19;
                    v8 = 1;
                    v13 = &v5 as i64;
                    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v0 = "invalid date format ";
                    v1 = 1;
                    v4 = 0;
                    v2 = &v13;
                    v3 = 1;
                    core::option::Option<T>::map_or_else();
                    v0 = struct28 {
                        field_0: v25
                        field_16: v26
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v0);
                },
            }
        },
    }
    core::option::expect_failed(v38, 33, v37); /* do not return */
}
