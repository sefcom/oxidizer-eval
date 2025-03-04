fn uu_touch::parse_timestamp(a0: &Result<struct12, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: struct12;  // [sp-0x148], Other Possible Types: Option<struct16>, struct16, int, unsigned long
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [bp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i64;  // [bp-0x118], Other Possible Types: struct12, Option<Result<struct16, struct32>>, struct16, String
    let v6: i64;  // [bp-0x110], Other Possible Types: int
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [bp-0x100], Other Possible Types: char, unsigned int
    let v9: struct24;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: struct16;  // [sp-0xc8], Other Possible Types: int
    let v13: i32;  // [bp-0xb8], Other Possible Types: unsigned long
    let v14: iNone;  // [sp-0xb0], Other Possible Types: unsigned long
    let v15: i64;  // [sp-0xa8]
    let v16: i8;  // [sp-0xa0]
    let v17: struct24;  // [sp-0x98], Other Possible Types: int
    let v18: i64;  // [sp-0x80]
    let v19: i64;  // [sp-0x78]
    let v20: struct12;  // [sp-0x6c], Other Possible Types: unsigned int
    let v21: struct16;  // [bp-0x60]
    let v22: String;  // [sp-0x50]
    let v23: String;  // [sp-0x38]
    let v26: i64;  // r8
    let v27: i64;  // rcx
    let v31: iNone;  // xmm0
    let v32: i64;  // rdx
    let v33: i64;  // rdi
    let v36: i32;  // edx

    v18 = a1;
    v19 = a2;
    match (<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a1, a1 + a2)) {
        8 => {
            v0 = chrono::offset::local::Local::now();
            v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, v0.field_12);
            *(&v13 as &u32) = v5.field_0 >> 13;
            v5 = &v13;
            v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v7 = &v18;
            *(&v8 as &void*) = <&T as core::fmt::Display>::fmt;
            v0 = &g_46c700;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            *(&v3 as &i64) = 2;
LABEL_5c38da:
            v17 = core::option::Option<T>::map_or_else(&v0);
LABEL_5c38ff:
            v26 = 10;
            v27 = &g_475397;
            break;
        }
        10 => {
            v5 = &v18;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = "20";
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            *(&v3 as &i64) = 1;
            goto LABEL_5c38da;
        }
        11 => {
            v0 = chrono::offset::local::Local::now();
            v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, v0.field_12);
            *(&v13 as &u32) = v5.field_0 >> 13;
            v5 = &v13;
            v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v7 = &v18;
            *(&v8 as &void*) = <&T as core::fmt::Display>::fmt;
            v0 = &g_46c700;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            *(&v3 as &i64) = 2;
LABEL_5c3957:
            v17 = core::option::Option<T>::map_or_else(&v0);
LABEL_5c3967:
            v26 = 13;
            v27 = &g_47538a;
            break;
        }
        12 => {
            v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            goto LABEL_5c38ff;
        }
        13 => {
            v5 = &v18;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = "20";
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            *(&v3 as &i64) = 1;
            goto LABEL_5c3957;
        }
        15 => {
            v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
            goto LABEL_5c3967;
        }
        _ => {
            *(&v13 as &i64) = 0;
            v14 = a1;
            v15 = a2;
            v16 = 1;
            v5 = format!("invalid date format {}", &v13);
            *(&v8 as &i32) = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
            *((a0 + 16) as &&i64) = &g_710e78;
            *(a0 as &i64) = 1;
        }
    }
    v9 = v17;
    v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(v10, (&v17)[16] as i64, v27, v26);
    if !v20 {
        uu_touch::parse_timestamp::{{closure}}(v10, v11);
        return Err(struct16 {
            field_0: v30
            field_8: &g_710e78
        });
    }
    v20 = struct12 {
        field_0: v29
        field_4: v0.field_4
    };
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v0, 1, &v20);
    v5 = chrono::offset::LocalResult<T>::and_then(&v0, &v20);
    if v5 as i32 {
        v31 = *(&v9.field_8 as &i128);
        *(&v13 as &i64) = 0;
        v14 = v31;
        v16 = 1;
        v22 = format!("invalid date ts format {}", &v13);
        v0 = *(&v22 as &i224);
        alloc::boxed::Box<T>::new(&v0);
        return Err(struct16 {
            field_0: v30
            field_8: &g_710e78
        });
    }
    *(&v12.field_0 as &struct16) = struct16 {
        field_0: *((&v5 as &char + 4) as &i128)
    };
    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v12, v12.field_12);
    if (v0.field_4 as i32 * 4008636143 - 286331157 >> 2 | (v0.field_4 as i32 * 4008636143 - 286331157) * 0x40000000) <= 71582787 && core::slice::<impl [T]>::ends_with(v10, v11, ".60") as i8 {
        v12 = <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign();
    }
    v0 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v12);
    match v0 {
        None => {
            v32 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
            v33 = &g_474e0c;
        },
        Some(_) => {
            *(&v5.field_0 as &struct16) = struct16 {
                field_0: v0
            };
            v0 = chrono::datetime::DateTime<Tz>::checked_sub_signed(&v5);
            match v0 {
                None => {
                    v32 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/chrono-0.4.38/src/datetime/mod.rs";
                    v33 = &g_475369;
                },
                Some(_) => {
                    *(&v21.field_0 as &struct16) = struct16 {
                        field_0: v0
                    };
                    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v12, (&v12)[12] as i32 as u32 as u64);
                    v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v21, *((&v0 as &char + 12) as &i32) as u32 as u64);
                    if (v0.field_4 as i32 as u32 as u64 / 3600) as u32 != (v0.field_4 as i32 as u32 as u64 / 3600) as u32 {
                        v5 = 0;
                        *(&v6 as &i128) = *(&v18 as &i128);
                        *(&v8 as &i8) = 1;
                        v23 = format!("invalid date format {}", &v5);
                        v0 = *(&v23 as &i224);
                        alloc::boxed::Box<T>::new(&v0);
                        return Err(struct16 {
                            field_0: v30
                            field_8: &g_710e78
                        });
                    }
                    *((a0 + 8) as &long long) = uu_touch::datetime_to_filetime(&v12);
                    *((a0 + 16) as &unsigned int) = v36;
                    *(a0 as &i64) = 0;
                },
            }
        },
    }
    core::option::expect_failed(v33, 33, v32); /* do not return */
}
