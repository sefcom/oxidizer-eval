fn starship::modules::localip::module(a0: i64, a1: u64) -> void {
    let v0: struct72;  // [bp-0x1d8]
    let v1: Option<struct153>;  // [bp-0x1d0]
    let v2: struct32;  // [bp-0x1c8]
    let v3: Result<struct24, struct16>;  // [bp-0x1c8]
    let v4: struct24;  // [bp-0x1c0]
    let v5: struct24;  // [bp-0x1b0]
    let v6: u64;  // [bp-0x1a8]
    let v8: struct9;  // [bp-0x1a8], Other Possible Types: u64
    let v9: struct40;  // [bp-0x1a4]
    let v10: struct24;  // [bp-0x1a0], Other Possible Types: struct72
    let v11: Option<struct56>;  // [bp-0x198], Other Possible Types: struct40
    let v12: Result<struct72, struct24>;  // [bp-0x190], Other Possible Types: struct24
    let v13: struct16;  // [bp-0x188], Other Possible Types: struct32
    let v15: struct32;  // [bp-0x158], Other Possible Types: u128
    let v16: struct32;  // [bp-0x150]
    let v17: struct24;  // [bp-0x148]
    let v18: struct40;  // [bp-0x140]
    let v19: Option<struct24>;  // [bp-0x118]
    let v20: struct24;  // [bp-0x100]
    let v21: Result<struct40, struct34>;  // [bp-0xe8]
    let v22: u64;  // [bp-0xe0]
    let v23: i8;  // [bp-0xc8]
    let v24: struct92;  // [bp-0xc0]
    let v25: struct24;  // [bp-0xc0]
    let v26: u128;  // [bp-0xb0]
    let v27: u128;  // [bp-0xa0]
    let v28: u128;  // [bp-0x90]
    let v29: u128;  // [bp-0x80]
    let v30: u64;  // [bp-0x68]
    let v31: Result<struct72, struct24>;  // [bp-0x60]
    let v32: struct24;  // [bp-0x58]
    let v34: Result<struct4, struct8>;  // [bp-0x178]

    v24 = starship::context::Context::new_module(a1, "localip");
    v21 = starship::config::ModuleConfig::try_load(v30);
    if *((&v21 as &char + 33) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = starship::context_env::Env::get_env("SSH_CONNECTION");
    if v23 == 1 && v19 as i64 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v3 = starship::modules::localip::get_local_ipv4();
    if let Err(_) = v3 {
        v0 = *((&v3 as &char + 8) as &i64);
        v6 as u128 = std::io::error::repr_bitpacked::decode_repr(*((&v3 as &char + 8) as &i64));
        if !v8.field_0 as i8 && v9 == 101 {
            v8 as u192 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("NetworkUnreachable");
        } else {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v15 = &v0;
            v16 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(&v6 as &&str) = "unable to determine local ipv4 address: ";
            v10 = 1;
            v13 = 0;
            v11 = &v15;
            v12 = 1;
            v18 = struct40 {
                field_0: "starship::modules::localip"
                field_16: "starship::modules::localip"
                field_32: log::__private_api::loc("src/modules/localip.rs")
            };
            log::__private_api::log(&v6 as u128, 2, &v18);
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v31 = starship::formatter::string_formatter::StringFormatter::new(v21 as i64, v22);
    v20 = struct24 {
        field_0: &v21 as u8
        field_8: &v34
        field_16: a1
    };
    match v31 {
        Err(_) => {
            v5 = *((&v31 as &char + 24) as &i64);
            v4 = v32;
        },
        Ok(_) => {
            v2 = starship::modules::localip::module::{{closure}}(&v20, &v31);
            if !(v2.field_0 as i8 & 1) {
                v25 = starship::module::Module::set_segments(&v2 as u8);
                return struct96 {
                    field_0: v24.field_0
                    field_16: v26
                    field_32: v27
                    field_48: v28
                    field_64: v29
                    field_80: *(&v24.field_80 as &i128)
                };
            }
        },
    }
    v17 = v5;
    v15 = *((&v3 as &char + 8) as &i128);
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = &v15;
    v1 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    *(&v8 as &&str) = "Error in module `localip`:\n";
    v10 = 1;
    v13 = 0;
    v11 = &v0;
    v12 = 1;
    v18 = struct40 {
        field_0: "starship::modules::localip"
        field_16: "starship::modules::localip"
        field_32: log::__private_api::loc("src/modules/localip.rs")
    };
    log::__private_api::log(&v8, 2, &v18);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
