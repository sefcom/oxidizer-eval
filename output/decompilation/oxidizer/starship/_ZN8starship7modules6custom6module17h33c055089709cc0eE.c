fn starship::modules::custom::module(a0: i64, a1: u32, a2: u32, a3: u64) -> int {
    let v0: struct40;  // [bp-0x2c0], Other Possible Types: struct72, struct_0 *
    let v1: Result<struct72, struct24>;  // [bp-0x2c0]
    let v2: u64;  // [bp-0x2c0]
    let v3: u64;  // [bp-0x2b8]
    let v4: u64;  // [bp-0x2a8]
    let v5: iNone;  // [bp-0x290]
    let v6: u64;  // [bp-0x280]
    let v7: Option<struct56>;  // [bp-0x278], Other Possible Types: u64
    let v8: u64;  // [bp-0x278]
    let v9: u64;  // [bp-0x270]
    let v10: i64;  // [bp-0x268], Other Possible Types: struct_3 *, u128
    let v11: u64;  // [bp-0x260]
    let v12: iNone;  // [bp-0x258], Other Possible Types: void*
    let v13: iNone;  // [bp-0x248]
    let v14: u64;  // [bp-0x238]
    let v15: u8;  // [bp-0x228]
    let v16: iNone;  // [bp-0x220]
    let v17: u64;  // [bp-0x210]
    let v18: iNone;  // [bp-0x208]
    let v19: u64;  // [bp-0x1f8]
    let v20: struct16;  // [bp-0x1e8]
    let v21: i64;  // [bp-0x1d8]
    let v22: u64;  // [bp-0x1d0]
    let v23: i64;  // [bp-0x1c8]
    let v24: u64;  // [bp-0x1c0]
    let v25: i64;  // [bp-0x1b8]
    let v26: u64;  // [bp-0x1b0]
    let v27: struct48;  // [bp-0x1a8]
    let v28: struct92;  // [bp-0x178]
    let v29: struct24;  // [bp-0x178]
    let v30: u128;  // [bp-0x168]
    let v31: u128;  // [bp-0x158]
    let v32: u128;  // [bp-0x148]
    let v33: u128;  // [bp-0x138]
    let v34: u128;  // [bp-0x128]
    let v35: Result<struct216, struct198>;  // [bp-0x118]
    let v36: u128;  // [bp-0xc8]
    let v37: u64;  // [bp-0xb8]
    let v38: u64;  // [bp-0xb0]
    let v39: u64;  // [bp-0x88]
    let v40: u64;  // [bp-0x80]
    let v41: u64;  // [bp-0x68]
    let v42: u64;  // [bp-0x60]
    let v43: u64;  // [bp-0x58]
    let v44: u64;  // [bp-0x50]
    let v45: &str;  // [bp-0x48]
    let v47: u64;  // rax
    let v48: struct16;  // rdx
    let v50: u128;  // xmm0

    v20 = struct16 {
        field_0: a1
        field_8: a2
    };
    v47 = starship::modules::custom::get_config(a1, a2, a3);
    if !v47 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v35 = starship::config::ModuleConfig::load(v47);
    if !*((&v35 as &char + 209) as &i8) && (!v43 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43, v44, "linux") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v43, v44, "unix")) && (!v45 || !starship::context::Context::get_repo(a3)) {
        v0 = &v20;
        v3 = <&T as core::fmt::Display>::fmt;
        v8 = "custom.";
        v9 = 1;
        v12 = 0;
        v10 = &v0;
        v11 = 1;
        core::option::Option<T>::map_or_else(&v35 as u8, 0, v48, &v8);
        v28 = starship::module::Module::new(&v35 as u8, v39, v40);
        v7 = starship::context::Context::try_begin_scan(a3);
        match v7 {
            None => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Some(_) => {
                v0 = struct72 {
                    field_0: v7 as i64
                    field_8: *((&v35 as &char + 32) as &i64)
                    field_16: *((&v35 as &char + 40) as &i64)
                    field_24: v36
                    field_40: *((&v35 as &char + 56) as &i128)
                    field_56: <UNKNOWN>
                    field_64: <UNKNOWN>
                };
                if !starship::context::ScanDir::is_match(&v0) as u8 {
                    if v41 {
                        if !starship::modules::custom::exec_when(v41, v42, &v35, a3) as u8 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                    } else {
                        if !(&v41)[1] as i8 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                    }
                }
                v21 = &v35;
                v22 = a3;
                v1 = starship::formatter::string_formatter::StringFormatter::new(v37, v38);
                v27 = struct48 {
                    field_0: *((&v35 as &char + 112) as &i128)
                    field_16: &v35 as u8
                    field_24: &v35 as u8
                    field_32: &v21
                    field_40: a3
                };
                if (((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char {
                    v17 = v4;
                    v16 = *((&v1 as &char + 8) as &i128);
LABEL_b8a3ea:
                    v19 = v17;
                    v18 = v16;
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                        v23 = &v20;
                        v24 = <&T as core::fmt::Display>::fmt;
                        v25 = &v18;
                        v26 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                        v7 = "Error in module `custom.";
                        v9 = 2;
                        v12 = 0;
                        v10 = &v23;
                        v11 = 2;
                        v0 = struct40 {
                            field_0: "starship::modules::custom"
                            field_16: "starship::modules::custom"
                            field_32: log::__private_api::loc("src/modules/custom.rs")
                        };
                        log::__private_api::log(&v7, 2, &v0);
                    }
                } else {
                    v14 = v6;
                    v50 = v1 as i128;
                    v13 = v5;
                    v12 = *((&v1 as &char + 32) as &i128);
                    v10 = *((&v1 as &char + 16) as &i128) as u128;
                    v8 = v50;
                    starship::modules::custom::module::{{closure}}(&v15, &v27, &v7);
                    if (v15 & 1) {
                        goto LABEL_b8a3ea;
                    }
                    v29 = starship::module::Module::set_segments(&v16 as u8);
                }
                return struct96 {
                    field_0: v28.field_0
                    field_16: v30
                    field_32: v31
                    field_48: v32
                    field_64: v33
                    field_80: v34
                };
            },
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
