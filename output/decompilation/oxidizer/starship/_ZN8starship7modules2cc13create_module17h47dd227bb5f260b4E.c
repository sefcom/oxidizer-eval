fn starship::modules::cc::create_module(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) {
    let v0: struct24;  // [bp-0x168]
    let v1: struct16;  // [bp-0x150]
    let v2: struct32;  // [bp-0x140]
    let v3: struct24;  // [bp-0x138]
    let v4: i64;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: core::result::Result<u8, core::num::error::ParseIntError>;  // [bp-0x110]
    let v7: u64;  // [bp-0x108]
    let v8: struct40;  // [bp-0x100]
    let v9: u64;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: i64;  // [bp-0xc8]
    let v12: u64;  // [bp-0xc0]
    let v13: void*;  // [bp-0xb8]
    let v15: u8;  // al
    let v16: struct24;  // rax
    let v17: u128;  // xmm0
    let v18: iNone;  // xmm1
    let v19: iNone;  // xmm2

    v1 = struct16 {
        field_0: "cpp"
    };
    if *((a4 + 160) as &i8) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v15 = starship::modules::cc::is_cc_project(a4, a1);
    if v15 != 2 && (v15 & 1) {
        memcpy(&v9, a4, 168);
        v2 = starship::modules::cc::parse_module(a1, a3, &v9, a2);
        if v2.field_0 as i32 != 1 {
            v16 = starship::module::Module::set_segments(a3, &v2 as u8);
            v17 = *(a3 as &i128);
            v18 = *((a3 + 16) as &i128);
            v19 = *((a3 + 32) as &i128);
            return struct96 {
                field_0: v17
                field_16: v18
                field_32: v19
                field_48: *((a3 + 48) as &i128)
                field_64: *((a3 + 64) as &i128)
                field_80: *((a3 + 80) as &i128)
            };
        }
        v0 = v3;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v4 = &v1;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v0;
        v7 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v9 = "Error in module `cc` for `lang: ";
        v10 = 2;
        v13 = 0;
        v11 = &v4;
        v12 = 2;
        v8 = struct40 {
            field_0: "starship::modules::cc"
            field_16: "starship::modules::cc"
            field_32: log::__private_api::loc("src/modules/cc.rs")
        };
        log::__private_api::log(&v9, 2, &v8);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
