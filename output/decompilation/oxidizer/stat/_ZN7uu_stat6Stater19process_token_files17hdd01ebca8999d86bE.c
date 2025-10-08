fn uu_stat::Stater::process_token_files(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i32, a7: i8) -> long long {
    let v0: struct24;  // [bp-0x188]
    let v1: u128;  // [bp-0x188]
    let v3: struct24;  // [bp-0x188]
    let v4: struct24;  // [bp-0x188]
    let v5: u64;  // [bp-0x188]
    let v6: u64;  // [bp-0x188]
    let v7: struct24;  // [bp-0x188]
    let v8: core::fmt::rt::Argument;  // [bp-0x188]
    let v9: alloc::string::String;  // [bp-0x188]
    let v11: core::fmt::Arguments;  // [bp-0x180], Other Possible Types: unsigned long, u64
    let v12: u64;  // [bp-0x17c]
    let v13: u64;  // [bp-0x178]
    let v14: u32;  // [bp-0x174]
    let v15: struct24;  // [bp-0x168], Other Possible Types: Option<struct24>, Result<struct24, struct12>, struct20
    let v16: <anon>;  // [bp-0x168], Other Possible Types: struct16, struct24
    let v17: iNone;  // [bp-0x168], Other Possible Types: u128
    let v19: u64;  // [bp-0x158], Other Possible Types: unsigned long
    let v20: u32;  // [bp-0x154]
    let v21: struct24;  // [bp-0x130], Other Possible Types: u32
    let v22: alloc::string::String;  // [bp-0x130]
    let v23: u64;  // [bp-0x120]
    let v24: u128;  // [bp-0x118]
    let v25: u64;  // [bp-0x108]
    let v26: struct12;  // [bp-0xf8]
    let v27: u64;  // [bp-0xf8]
    let v28: struct24;  // [bp-0xe8], Other Possible Types: u64
    let v29: u64;  // [bp-0xe0]
    let v30: u64;  // [bp-0xd8]
    let v31: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v32: u64;  // [bp-0xc8]
    let v33: u64;  // [bp-0xc0]
    let v34: u64;  // [bp-0xb8]
    let v35: Result<struct128, struct16>;  // [bp-0xb0]
    let v36: core::option::Option<u32>;  // rbx
    let v37: Result<struct99, struct24>;  // r10
    let v38: u64;  // rbp
    let v39: u64;  // r15
    let v40: u64;  // r14
    let v41: u64;  // r12
    let v46: core::fmt::rt::Argument;  // rax
    let v47: core::fmt::Arguments;  // edx
    let v49: core::fmt::Arguments;  // rsi
    let v50: u64;  // rax
    let v51: core::fmt::Arguments;  // eax
    let v52: core::fmt::Arguments;  // rdx
    let v53: iNone;  // xmm0
    let v54: u128;  // xmm1

    v36 = *(a1 as &i64);
    v37 = v36 - 3;
    if !v37 {
        v21 = a1[8] as i32;
        print!("{}", &v21 as u64);
    } else if v37 == 1 {
        uu_stat::write_raw_byte(a1[8] as i32);
    } else {
        v38 = a1[28] as i32;
        v39 = a1[32] as i32;
        v40 = a1[8] as i64;
        v41 = a1[16] as i64;
        match (a1[24] as i32) {
            65 => {
                v0 = uucore::features::fs::display_permissions(a2, 1);
            }
            66 => {
                v11 = 0x200;
                goto LABEL_476c2f;
            }
            67 => {
                v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("unsupported for this operating system");
            }
            70 => {
                v4 = uucore::features::fsext::pretty_filetype(*((a2 + 56) as &i32), *((a2 + 80) as &i64));
            }
            71 => {
                v15 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(*((a2 + 64) as &i32));
                if let Err(_) = v15 {
                    v28 = uu_stat::Stater::process_token_files::{{closure}}(*((&v15 as &char + 8) as &i64));
                }
                v13 = v30;
                v6 = v28;
                v11 = v29;
                goto LABEL_476c2f;
            }
            78 => {
                v15 = uu_stat::get_quoted_file_name(a3, a4, a5, a6, a7);
                v46 = v15 as i64;
                v47 = *((&v15 as &char + 8) as &i32);
                if v46 == 0x8000000000000000 {
                    return 1;
                }
                v14 = v20;
                v12 = *((&v15 as &char + 12) as &i64);
                v8 = v46;
                v11 = v47;
                goto LABEL_476c2f;
            }
            82 => {
                v34 = *((a2 + 72) as &i64) >> 8;
                v21 = *((a2 + 72) as &i64) & 4294967295;
                v9 = format!("{},{}", &v34, &v21);
            }
            85 => {
                v35 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(*((a2 + 60) as &i32));
                if let Ok(_) = v35 {
                    v15 = uucore::features::entries::uid2usr::{{closure}}(&v35);
                    v49 = *((&v15.field_0 as &char + 8) as &i64);
                    if v15.field_0 as i64 != 0x8000000000000000 {
                        goto LABEL_476e2e;
                    }
                }
                v31 = uu_stat::Stater::process_token_files::{{closure}}(v49);
LABEL_476e2e:
                v13 = v33;
                v5 = v31;
                v11 = v32;
                goto LABEL_476c2f;
            }
            87 => {
                v15 = <std::fs::Metadata as uucore::features::fsext::BirthTime>::birth(a2);
                break;
            }
            89 => {
                v15 = chrono::datetime::DateTime<chrono::offset::utc::Utc>::from_timestamp(*((a2 + 120) as &i64), *((a2 + 128) as &i32));
                if let None = v15 {
                    v26 = <chrono::datetime::DateTime<chrono::offset::utc::Utc> as core::default::Default>::default();
                }
                v16 = <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<chrono::datetime::DateTime<chrono::offset::utc::Utc>>>::from(&v27);
                if !(chrono::datetime::DateTime<Tz>::timestamp_nanos_opt(&v16) & 1) {
                    v51 = chrono::naive::date::NaiveDate::num_days_from_ce(v16.field_0);
                }
                *(&v11 as &u64) = (BinaryOp DivV) as u64;
                v50 = 9223372036854775812;
                goto LABEL_476c2f;
            }
            109 => {
                v15 = uu_stat::Stater::find_mount_point(a0, a5);
                v16 = core::option::unwrap(v15);
                v13 = v16.field_0.field_16;
                v1 = v16.field_0.field_0;
                goto LABEL_476c2f;
            }
            110 => {
                v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a3, a4);
            }
            119 => {
                v15 = <std::fs::Metadata as uucore::features::fsext::BirthTime>::birth(a2);
                if (v15.field_0 as i8 & 1) {
                    v21 = uu_stat::pretty_time(*(&v15.field_8 as &i64), v15.field_16);
                }
                v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
                v25 = v16.field_16;
                v24 = v16.field_0;
                if v22 == 0x8000000000000000 {
                    v19 = v25;
                    v17 = v24;
                } else {
                    *(&v19 as &u64) = v23;
                    *(&v17 as &u128) = v21.field_0;
                }
                v1 = v17 as i128;
                *(&v13 as &unsigned long) = v19;
                goto LABEL_476c2f;
            }
            _ => {
LABEL_476c2f:
                uu_stat::print_it(&v8 as u8, v39 * 0x100000000 | v38, v41, v36, v40);
            }
        }
    }
    return 0;
}
