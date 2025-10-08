fn starship::modules::aws::module(a0: i64, a1: u64) -> void {
    let v0: struct24;  // [bp-0x448]
    let v1: u128;  // [bp-0x448]
    let v2: u64;  // [bp-0x438]
    let v3: Result<struct48, struct32>;  // [bp-0x428], Other Possible Types: struct72, struct24, u64
    let v4: u64;  // [bp-0x420]
    let v5: i64;  // [bp-0x418], Other Possible Types: u64
    let v6: u64;  // [bp-0x410]
    let v7: void*;  // [bp-0x408]
    let v8: u64;  // [bp-0x400]
    let v9: iNone;  // [bp-0x3d8]
    let v12: struct8;  // [bp-0x3b8]
    let v13: struct24;  // [bp-0x3b8]
    let v14: u64;  // [bp-0x3a8]
    let v15: struct24;  // [bp-0x398], Other Possible Types: struct40, u128
    let v17: Result<struct72, struct24>;  // [bp-0x398]
    let v18: u64;  // [bp-0x388]
    let v19: u64;  // [bp-0x380]
    let v20: u128;  // [bp-0x368]
    let v21: struct32;  // [bp-0x348]
    let v22: iNone;  // [bp-0x340]
    let v23: u64;  // [bp-0x330]
    let v24: iNone;  // [bp-0x328]
    let v25: u64;  // [bp-0x318]
    let v26: i64;  // [bp-0x308]
    let v27: u64;  // [bp-0x300]
    let v28: struct24;  // [bp-0x2f8]
    let v29: struct24;  // [bp-0x2e0]
    let v30: struct56;  // [bp-0x2c8]
    let v31: struct92;  // [bp-0x290]
    let v32: struct24;  // [bp-0x290]
    let v33: u128;  // [bp-0x280]
    let v34: u128;  // [bp-0x270]
    let v35: u128;  // [bp-0x260]
    let v36: u128;  // [bp-0x250]
    let v37: u64;  // [bp-0x238]
    let v38: struct161;  // [bp-0x230]
    let v39: u64;  // [bp-0x1d0]
    let v40: u64;  // [bp-0x1c8]
    let v41: u128;  // [bp-0x1c0]
    let v42: u64;  // [bp-0x1a0]
    let v43: u64;  // [bp-0x188]
    let v44: u64;  // [bp-0xd8]
    let v46: struct24;  // r15
    let v49: u8;  // al
    let v50: struct24;  // rsi
    let v51: u64;  // rdx
    let v52: u64;  // r8
    let v53: u64;  // r9

    v31 = starship::context::Context::new_module(a1, "aws");
    v38 = starship::config::ModuleConfig::try_load(v37);
    v43 = 9223372036854775809;
    v44 = 9223372036854775809;
    v3 = starship::modules::aws::get_aws_profile_and_region(a1, &v43);
    v2 = v5;
    v1 = v3 as i128;
    v14 = v8;
    v12 = *((&v3 as &char + 24) as &i128);
    if v1 as i64 == 0x8000000000000000 && v12.field_0 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if !*((&(&v38)[20].field_0 as &char + 1) as &i8) && (starship::modules::aws::has_credential_process_or_sso(a1, (v1 as i64 != 0x8000000000000000 ? &v1 : 0), &v43, &v44) == 2 || !(starship::modules::aws::has_credential_process_or_sso(a1, (v1 as i64 != 0x8000000000000000 ? &v1 : 0), &v43, &v44) & 1)) && (starship::modules::aws::has_source_profile(a1, (v1 as i64 != 0x8000000000000000 ? &v1 : 0), &v43, &v44) == 2 || !(starship::modules::aws::has_source_profile(a1, (v1 as i64 != 0x8000000000000000 ? &v1 : 0), &v43, &v44) & 1)) {
        v49 = starship::modules::aws::has_defined_credentials(a1, v46, &v44);
        if v49 == 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else if !(v49 & 1) {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    if (starship::modules::aws::get_credentials_duration(a1, v50, &v43, &v44) & 1) {
        if v51 > 0 {
            v15 = starship::utils::render_time(v51 * 1000, v51 * 1000 >> 63, 0, v52, v53);
        } else {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, v42);
            v18 = v5;
            v15 = *(&v3.field_0 as &i128);
        }
    }
    v3 = v13;
    v28 = starship::modules::aws::alias_name(&v3, &v38);
    v3 = v0;
    v29 = starship::modules::aws::alias_name(&v3, &v38 as u8);
    v17 = starship::formatter::string_formatter::StringFormatter::new(v39, v40);
    v30 = struct56 {
        field_0: v41
        field_16: &v38 as u8
        field_24: &v29
        field_32: &v28
        field_40: &v9
        field_48: a1
    };
    match v17 {
        Err(_) => {
            v23 = v19;
            v22 = *((&v17 as &char + 8) as &i128);
        },
        Ok(_) => {
            v3 = struct72 {
                field_0: v17 as i128
                field_16: *((&v17 as &char + 16) as &i128)
                field_32: *((&v17 as &char + 32) as &i128)
                field_48: v20
                field_64: *((&v17 as &char + 64) as &i64)
            };
            v21 = starship::modules::aws::module::{{closure}}(&v30, &v3);
            if !(v21.field_0 as i8 & 1) {
                v32 = starship::module::Module::set_segments(&v21 as u8);
                return struct96 {
                    field_0: v31.field_0
                    field_16: v33
                    field_32: v34
                    field_48: v35
                    field_64: v36
                    field_80: *(&v31.field_80 as &i128)
                };
            }
        },
    }
    v25 = v23;
    v24 = v22;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v26 = &v24;
    v27 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v3 = "Error in module `aws`: \n";
    v4 = 1;
    v7 = 0;
    v5 = &v26;
    v6 = 1;
    v15 = struct40 {
        field_0: "starship::modules::aws"
        field_16: "starship::modules::aws"
        field_32: log::__private_api::loc("src/modules/aws.rs")
    };
    log::__private_api::log(&v3, 2, &v15);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
