fn uu_touch::parse_timestamp(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x148], Other Possible Types: struct12, struct16, Option<struct16>, struct28
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: i64;  // [bp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i96;  // [sp-0x118], Other Possible Types: struct12, Option<Result<struct16, struct32>>, struct16
    let v6: i128;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i32;  // [bp-0x100]
    let v9: struct16;  // [bp-0xe8], Other Possible Types: i128
    let v10: i128;  // [bp-0xd8]
    let v11: i64;  // [sp-0xd0]
    let v12: i64;  // [sp-0xc8]
    let v13: i64;  // [bp-0xb8]
    let v14: i128;  // [sp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i8;  // [sp-0xa0]
    let v17: struct24;  // [sp-0x98], Other Possible Types: i192
    let v18: i64;  // [sp-0x80]
    let v19: i64;  // [sp-0x78]
    let v20: i32;  // [sp-0x6c], Other Possible Types: struct20
    let v21: struct16;  // [bp-0x60]
    let v22: i192;  // [sp-0x50]
    let v23: i192;  // [sp-0x38]
    let v25: i64;  // r14
    let v26: i64;  // r15
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rsi
    let v31: i64;  // rdx
    let v32: i64;  // r8
    let v33: i64;  // rcx
    let v34: i64;  // rdx
    let v36: i64;  // rax
    let v37: i128;  // xmm0
    let v40: i32;  // edx

    v25 = a2;
    v26 = a1;
    v18 = a1;
    v19 = a2;
    switch (<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v26, a1 + a2, a2)) {
    case 8:
        v0 = chrono::offset::local::Local::now(v28, v29);
        v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, *((&v0 as &char + 12) as &i32));
        v13 = v5 >> 13;
        v5 = &v13;
        v5.8 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v7 = &v18;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_46c850;
        v0.field_8 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 2;
LABEL_5c309a:
        v17 = core::option::Option<T>::map_or_else(&v0);
LABEL_5c30bf:
        v32 = 10;
        v33 = &g_475496;
        break;
    case 10:
        v5 = &v18;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = "20";
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        goto LABEL_5c309a;
    case 11:
        v0 = chrono::offset::local::Local::now(v30, v31);
        v5 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v0, *((&v0 as &char + 12) as &i32));
        v13 = v5 >> 13;
        v5 = &v13;
        v5.8 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v7 = &v18;
        v8 = <&T as core::fmt::Display>::fmt;
        v0 = &g_46c850;
        v0.field_8 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 2;
LABEL_5c3117:
        v17 = core::option::Option<T>::map_or_else(&v0);
LABEL_5c3127:
        v32 = 13;
        v33 = &g_475489;
        break;
    case 12:
        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v26, v25);
        goto LABEL_5c30bf;
    case 13:
        v5 = &v18;
        v6 = <&T as core::fmt::Display>::fmt;
        v0 = "20";
        v1 = 1;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        goto LABEL_5c3117;
    case 15:
        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec(v26, v25);
        goto LABEL_5c3127;
    default:
        v13 = 0;
        v14 = v26;
        v15 = v25;
        v16 = 1;
        v5 = format!("invalid date format {:?}", &v13);
        v8 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v5);
        *((a0 + 16) as &&i64) = &g_711120;
        *(a0 as &i64) = 1;
        return a0;
    }
    v34 = *((&v17 as &char + 16) as &i64);
    v12 = *((&v17 as &char + 16) as &i64);
    v10 = v17;
    v0 = chrono::naive::datetime::NaiveDateTime::parse_from_str(v11, v34, v33, v32);
    if !v20 {
        v36 = uu_touch::parse_timestamp::{{closure}}(v11, v12);
        goto LABEL_5c3455;
    }
    v20 = struct20 {
        field_0: v35
        field_4: <UNKNOWN>
    };
    <chrono::offset::local::Local as chrono::offset::TimeZone>::offset_from_local_datetime(&v0, 1, &v20);
    v5 = chrono::offset::LocalResult<T>::and_then(&v0, &v20);
    if v5 {
        v37 = *((&v10 as &char + 8) as &i128);
        v13 = 0;
        v14 = v37;
        v16 = 1;
        v22 = format!("invalid date ts format {:?}", &v13);
        v0 = struct28 {
            field_0: v22
            field_16: *((&v22 as &char + 16) as &i64)
            field_24: 1
        };
        v36 = alloc::boxed::Box<T>::new(&v0);
        goto LABEL_5c3455;
    } else {
        v9 = struct16 {
            field_0: *((&v5 as &char + 4) as &i128)
        };
        v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v9, *((&v9.field_0 as &char + 12) as &i32));
        if (*((&v0 as &char + 4) as &i32) * 4008636143 - 286331157 >> 2 | *((&v0 as &char + 4) as &i32) * 4008636143 - 286331157 << 30) <= 71582787 && core::slice::<impl [T]>::ends_with(v11, v12, ".60") as i8 {
            v9 = <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign();
        }
        v0 = chrono::datetime::DateTime<Tz>::checked_add_signed(&v9);
        if !v0 {
            core::option::expect_failed(); /* do not return */
        }
        v5 = struct16 {
            field_0: v0
        };
        v0 = chrono::datetime::DateTime<Tz>::checked_sub_signed(&v5);
        if v0 {
            v21 = struct16 {
                field_0: v0
            };
            v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v9, *((&v9 as &char + 12) as &i32));
            v0 = chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&v21, *((&v0 as &char + 12) as &i32));
            if *((&v0 as &char + 4) as &i32) / 3600 == *((&v0 as &char + 4) as &i32) / 3600 {
                v40 = *((&v9 as &char + 8) as &i32);
                *((a0 + 8) as &u64) = -62135683200 + *((&v9 as &char + 4) as &i32) + chrono::naive::date::NaiveDate::num_days_from_ce(v9) as i32 * 86400;
                *((a0 + 16) as &i32) = v40;
                *(a0 as &i64) = 0;
            } else {
                v5 = 0;
                v6 = v18;
                v8 = 1;
                v23 = format!("invalid date format {:?}", &v5);
                v0 = struct28 {
                    field_0: v23
                    field_16: *((&v23 as &char + 16) as &i64)
                    field_24: 1
                };
                v36 = alloc::boxed::Box<T>::new(&v0);
LABEL_5c3455:
                *((a0 + 8) as &i64) = v36;
                *((a0 + 16) as &&i64) = &g_711120;
                *(a0 as &i64) = 1;
            }
            return a0;
        }
    }
}
