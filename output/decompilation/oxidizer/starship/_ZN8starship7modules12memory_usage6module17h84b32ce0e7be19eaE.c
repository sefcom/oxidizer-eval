fn starship::modules::memory_usage::module(a0: i64, a1: u64) -> int {
    let v0: struct24;  // [bp-0x268], Other Possible Types: struct32, struct40, u128
    let v1: struct24;  // [bp-0x268], Other Possible Types: struct92
    let v2: struct24;  // [bp-0x260], Other Possible Types: struct72
    let v3: u128;  // [bp-0x258]
    let v4: &str;  // [bp-0x248], Other Possible Types: u64
    let v5: struct8;  // [bp-0x238]
    let v6: struct40;  // [bp-0x230]
    let v7: struct16;  // [bp-0x230], Other Possible Types: struct24
    let v8: u64;  // [bp-0x228]
    let v9: u64;  // [bp-0x208]
    let v10: struct72;  // [bp-0x200], Other Possible Types: u64
    let v11: struct216;  // [bp-0x1f8]
    let v12: Result<struct72, struct24>;  // [bp-0x1f0], Other Possible Types: struct24, struct40
    let v13: struct24;  // [bp-0x1f0], Other Possible Types: struct32
    let v14: struct24;  // [bp-0x1e8], Other Possible Types: struct48
    let v15: Result<struct216, struct198>;  // [bp-0x1e8]
    let v16: struct176;  // [bp-0x1e0]
    let v17: Result<struct72, struct24>;  // [bp-0x1e0]
    let v18: struct24;  // [bp-0x1d8], Other Possible Types: u64
    let v19: &str;  // [bp-0x1d8]
    let v20: struct40;  // [bp-0x1d0]
    let v21: Option<struct56>;  // [bp-0x1d0]
    let v22: struct243;  // [bp-0x1c0]
    let v23: struct72;  // [bp-0x1b0]
    let v24: i64;  // [bp-0x1a8], Other Possible Types: u128
    let v25: struct92;  // [bp-0x1a0]
    let v26: struct32;  // [bp-0x198]
    let v27: &str;  // [bp-0x188]
    let v28: struct32;  // [bp-0x188]
    let v29: u128;  // [bp-0x180]
    let v30: u128;  // [bp-0x178]
    let v31: struct32;  // [bp-0x170]
    let v32: struct40;  // [bp-0x168]
    let v33: struct40;  // [bp-0x160]
    let v34: Result<struct80, struct8>;  // [bp-0x158], Other Possible Types: struct40, struct72
    let v35: struct40;  // [bp-0x150], Other Possible Types: struct8
    let v36: u64;  // [bp-0x140]
    let v37: u64;  // [bp-0x130]
    let v38: u128;  // [bp-0x128]
    let v39: struct64;  // [bp-0xf8]
    let v40: struct92;  // [bp-0xb8]
    let v41: struct24;  // [bp-0xb8]
    let v42: u128;  // [bp-0xa8]
    let v43: u128;  // [bp-0x98]
    let v44: u128;  // [bp-0x88]
    let v45: u128;  // [bp-0x78]
    let v46: u64;  // [bp-0x60]
    let v47: Result<struct65, struct57>;  // [bp-0x58]
    let v48: u64;  // [bp-0x50]
    let v49: iNone;  // [bp-0x38]
    let v50: u64;  // [bp-0x28]
    let v52: &str;  // xmm0
    let v53: struct32;  // xmm0
    let v54: struct40;  // xmm0lq
    let v55: iNone;  // xmm0
    let v56: core::slice::iter::Iter<u8>;  // xmm1
    let v57: struct24;  // xmm0
    let v59: struct24;  // cc_ndep
    let v60: struct24;  // xmm0
    let v61: struct24;  // xmm1
    let v62: core::slice::iter::Iter<u8>;  // [bp-0x218]
    let v63: i64;  // [bp-0x148]
    let v64: void*;  // [bp-0x138]

    v40 = starship::context::Context::new_module(a1, "memory_usage");
    v47 = starship::config::ModuleConfig::try_load(v46);
    if *((&v47 as &char + 56) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = <systemstat::platform::linux::PlatformImpl as systemstat::platform::common::Platform>::memory_and_swap();
    if v34 as i32 == 1 {
        v5 = v35;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
            v1 = &v5;
            v2 = <std::io::error::Error as core::fmt::Display>::fmt;
            v13 = "Failed to retrieve both memory and swap, falling back to memory only: ";
            v14 = 1;
            v20 = 0;
            v16 = &v1;
            v18 = 1;
            v6 = struct40 {
                field_0: "starship::modules::memory_usage"
                field_16: "starship::modules::memory_usage"
                field_32: log::__private_api::loc("src/modules/memory_usage.rs")
            };
            log::__private_api::log(&v13, 4, &v6);
        }
        vvar_763{stack -560} = struct16 OrderedDict([(0, 𝜙@64b [((12223320, None), None), ((12223429, None), vvar_641{stack -560})]), (8, 𝜙@64b [((12223320, None), None), ((12223429, None), vvar_642{stack -552})])])
        <systemstat::platform::linux::PlatformImpl as systemstat::platform::common::Platform>::memory(&v7);
        if v7.field_0 as i32 == 1 {
            v10 = v8;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v24 = &v10;
            v25 = <std::io::error::Error as core::fmt::Display>::fmt;
            v12 = "Failed to retrieve memory: ";
            v15 = 1;
            v21 = 0;
            v17 = &v24;
            v19 = 1;
            v0 = struct40 {
                field_0: "starship::modules::memory_usage"
                field_16: "starship::modules::memory_usage"
                field_32: log::__private_api::loc("src/modules/memory_usage.rs")
            };
            log::__private_api::log(&v12, 2, &v0);
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else {
            v32 = v9;
            v52 = *(&v6.field_8 as &i128);
            v30 = *(&v6.field_24 as &i128);
            v27 = v52;
            v4 = v32;
            v53 = *(&v27.data_ptr as &i128);
            v54 = v53 as u64;
            v3 = v30;
            v0 = v53;
            v7 = 0;
        }
    } else if *((&v34 as &char + 48) as &i64) {
        v4 = v37;
        v55 = *((&v34 as &char + 8) as &i128);
        v3 = *((&v34 as &char + 24) as &i128);
        *(&v0 as void*) = v55;
        v7 = 1;
        v54 = v38;
        v56 = *((&v34 as &char + 64) as &i128);
        v8 = v38;
        v62 = v56;
        v9 = *((&v34 as &char + 80) as &i64);
    } else {
        v4 = v37;
        v57 = *((&v34 as &char + 8) as &i128);
        v54 = v57 as u64;
        v3 = *((&v34 as &char + 24) as &i128);
        v0 = v57;
        v7 = 0;
    }
    starship::modules::memory_usage::pct(v1, v2);
    v33 = v54;
    round();
    if (_ccall(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v59) as char ? v54 : 0) < v50 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = starship::formatter::string_formatter::StringFormatter::new(v47 as i64, v48);
    v39 = struct64 {
        field_0: &v47 as u8
        field_8: v49
        field_24: &v1
        field_32: &v2
        field_40: &v33
        field_48: &v7
        field_56: a1
    };
    if (((0 ^ v12 as i64) & (0 ^ -(v13))) >> 63) as char {
        v31 = v18;
        v29 = v14.field_48;
    } else {
        v60 = v12 as i128;
        v61 = *((&v12 as &char + 16) as &i128);
        v34 = struct72 {
            field_0: v60
            field_16: v61
            field_32: *((&v12 as &char + 32) as &i128)
            field_48: v22
            field_64: v23
        };
        v28 = starship::modules::memory_usage::module::{{closure}}(&v39, &v34);
        if !(v28.field_0 as i8 & 1) {
            v41 = starship::module::Module::set_segments(&v28 as u8);
            return struct96 {
                field_0: v40.field_0
                field_16: v42
                field_32: v43
                field_48: v44
                field_64: v45
                field_80: *(&v40.field_80 as &i128)
            };
        }
    }
    v26 = v31;
    v24 = *(&v28.field_8 as &i128);
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v10 = &v24;
    v11 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v34 = "Error in module `memory_usage`:\n";
    v35 = 1;
    v64 = 0;
    v63 = &v10;
    v36 = 1;
    v12 = struct40 {
        field_0: "starship::modules::memory_usage"
        field_16: "starship::modules::memory_usage"
        field_32: log::__private_api::loc("src/modules/memory_usage.rs")
    };
    log::__private_api::log(&v34, 2, &v12);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
