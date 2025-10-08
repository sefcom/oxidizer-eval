fn starship::modules::aws::get_credentials_duration(a0: u64, a1: u64, a2: u64, a3: void*) -> long long {
    let v0: struct16;  // [bp-0x108], Other Possible Types: struct24, u64
    let v1: u64;  // [bp-0xf8]
    let v2: i64;  // [bp-0xf0]
    let v3: u128;  // [bp-0xef]
    let v4: u64;  // [bp-0xe8]
    let v5: i8;  // [bp-0xe0], Other Possible Types: u128
    let v6: &str;  // [bp-0xd0], Other Possible Types: Result<struct16, struct5>, struct16, u64
    let v7: struct20;  // [bp-0xd0]
    let v8: void*;  // [bp-0xd0], Other Possible Types: Result<struct32, struct9>
    let v9: core::fmt::Arguments;  // [bp-0xc8], Other Possible Types: u64
    let v10: i64;  // [bp-0xc0], Other Possible Types: &str
    let v11: u64;  // [bp-0xb8]
    let v12: void*;  // [bp-0xb0], Other Possible Types: &str
    let v13: &str;  // [bp-0xa0]
    let v14: struct16;  // [bp-0x90], Other Possible Types: u64
    let v15: iNone;  // [bp-0x88]
    let v16: u64;  // [bp-0x78]
    let v17: iNone;  // [bp-0x70]
    let v18: struct24;  // [bp-0x60]
    let v19: u8;  // [bp-0x48]
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: u64;  // rax
    let v24: struct160;  // ebp
    let v25: struct24;  // rax
    let v26: core::result::Result<(), std::io::error::Error>;  // rax
    let v27: struct24;  // rax
    let v28: u8;  // al
    let v29: struct16;  // rax
    let v30: u64;  // [bp-0x100]
    let v31: Result<struct16, struct5>;  // [bp-0xf0], Other Possible Types: u8

    v8 = 0;
    v9 = 3;
    v10 = "AWS_CREDENTIAL_EXPIRATION";
    v12 = "AWS_SESSION_EXPIRATION";
    v13 = "AWSUME_EXPIRATION";
    <core::ops::index_range::IndexRange as core::iter::traits::iterator::Iterator>::try_fold(&v31, &v8 as u8);
    if !((((0 ^ *(&v31 as &i64)) & (0 ^ -(*(&v31 as &i64)))) >> 63) as char) {
        v0 = *(&v31 as &i128);
        v1 = *(&v5 as &i64);
        if v0 == 0x8000000000000000 {
            goto LABEL_b83e42;
        }
        v31 = chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>::parse_from_rfc3339(v30, v1);
        if v24 {
            goto LABEL_b84043;
        }
    } else {
LABEL_b83e42:
        v21 = starship::modules::aws::get_creds(a0, a3);
        if v21 {
            v22 = starship::modules::aws::get_profile_creds(v21, a1);
            if !v22 {
                goto LABEL_b83ed6;
            }
            v6 = "expiration";
            v10 = "x_security_token_expires";
            v0 = struct16 {
                field_0: &v8 as u8
                field_8: &v12 as u64
            };
            v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v0, v22);
            if v23 {
                v31 = chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>::parse_from_rfc3339(v23, a2);
                v24 = v31 as i32;
                if v24 {
                    goto LABEL_b84043;
                }
            } else {
                v24 = 0;
                if !(1) {
                    goto LABEL_b84043;
                }
            }
        } else {
LABEL_b83ed6:
            v25 = starship::modules::aws::get_config(a0, a2);
            if v25 {
                v26 = starship::modules::aws::get_profile_config(v25, a1, a2);
                if let Err(_) = v26 {
                    v27 = ini::Properties::get(v26, "sso_start_url");
                    if v27 {
                        v6 as u192 = <D as digest::digest::Digest>::digest(v27, a2);
                        v18 = starship::utils::encode_to_hex(&v6 as u192);
                        starship::context::Context::get_home(&v6 as u192);
                        if v7.field_0 as i64 != 0x8000000000000000 {
                            v15 = *((&v7.field_0 as &char + 8) as &i128);
                            v14 = v7.field_0 as i64;
                            *(&v2 as &&struct24) = &v18;
                            v4 = <alloc::string::String as core::fmt::Display>::fmt;
                            *(&v6 as &&str) = ".aws/sso/cache/";
                            v9 = 2;
                            v12 = 0;
                            v10 = &v2 as u8;
                            v11 = 1;
                            core::option::Option<T>::map_or_else(&v19, 0, a2, &v6 as u192);
                            v14 = std::path::PathBuf::push(&v19);
                            v0 = starship::utils::read_file(&v14);
                            if v0.field_0 as i64 != 0x8000000000000000 {
                                v17 = *((&v0.field_0 as &char + 8) as &i128);
                                v16 = v0.field_0 as i64;
                                v0 = struct24 {
                                    field_0: v17
                                    field_16: 0
                                };
                                v8 = serde_json::de::from_trait(&v0, a2 as u8);
                                v28 = v8 as i8;
                                if v28 != 6 {
                                    v5 = *((&v8 as &char + 16) as &i128);
                                    v3 = *((&v8 as &char + 1) as &i128) as u128;
                                    v31 = v28;
                                    v29 = serde_json::value::Value::get(&v31, "expiresAt");
                                    if v29 && *(v29 as &i8) == 3 {
                                        v6 = chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>::parse_from_rfc3339(*((v29 + 16) as &i64), *((v29 + 24) as &i64));
                                        if v24 {
LABEL_b84043:
                                            chrono::naive::date::NaiveDate::num_days_from_ce(v24 as u64);
                                            v6 = chrono::offset::local::Local::now();
                                            chrono::naive::date::NaiveDate::num_days_from_ce(v6.field_0 as i32 as u32 as u64);
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
