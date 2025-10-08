fn starship::modules::character::module(a0: i64, a1: void*) -> int {
    let v1: iNone;  // [bp-0x228], Other Possible Types: u8
    let v2: struct8;  // [bp-0x218]
    let v3: struct32;  // [bp-0x210]
    let v4: core::fmt::Arguments;  // [bp-0x208]
    let v5: struct8;  // [bp-0x1f8]
    let v6: Result<struct72, struct24>;  // [bp-0x1f0], Other Possible Types: struct40
    let v7: struct72;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1d8]
    let v9: i64;  // [bp-0x1a8]
    let v10: u64;  // [bp-0x1a0]
    let v11: u64;  // [bp-0x198]
    let v12: i64;  // [bp-0x190]
    let v18: struct92;  // [bp-0x120]
    let v19: u128;  // [bp-0x110]
    let v20: u128;  // [bp-0x100]
    let v21: u128;  // [bp-0xf0]
    let v22: u128;  // [bp-0xe0]
    let v23: u64;  // [bp-0xc8]
    let v24: struct72;  // [bp-0xc0], Other Possible Types: u64
    let v25: u64;  // [bp-0xb8]
    let v26: i64;  // [bp-0xb0]
    let v27: u64;  // [bp-0xa8]
    let v28: void*;  // [bp-0xa0]
    let v29: struct72;  // [bp-0x78]
    let v31: Result<struct24, struct16>;  // rax
    let v32: struct24;  // rdi
    let v34: u64;  // rdi
    let v35: struct24;  // rdi
    let v38: u8;  // bpl
    let v39: u32;  // r13d
    let v40: core::result::Result<u8, core::num::error::ParseIntError>;  // r15
    let v43: u64;  // r12
    let v44: struct24;  // rax

    v18 = starship::context::Context::new_module(a1, "character");
    v31 = starship::config::ModuleConfig::try_load(&v11, v23);
    if !v32 {
        v34 = &g_5354a1.field_0;
    } else {
        v34 = v32;
    }
    v35 = v34;
    v38 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v31, "0");
    v39 = a1[1736] as i8;
    v6 = starship::formatter::string_formatter::StringFormatter::new(v11, v12);
    match v6 {
        Err(_) => {
            v5 = v8;
            v4 = *((&v6 as &char + 8) as &i128);
        },
        Ok(v29) => {
            v24 = starship::formatter::string_formatter::StringFormatter::map_meta(&v29, v43, v40);
            v1 = 2;
            v3 = starship::formatter::string_formatter::StringFormatter::parse(&v24, &v1 as u128 as u32, a1);
            if v3.field_0 as i32 != 1 {
                v44 = starship::module::Module::set_segments(&v3 as u8);
                return struct96 {
                    field_0: v18.field_0
                    field_16: v19
                    field_32: v20
                    field_48: v21
                    field_64: v22
                    field_80: *(&v18.field_80 as &i128)
                };
            }
        },
    }
    v2 = v5;
    v1 = v4;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v9 = &v1;
    v10 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v24 = "Error in module `character`:\n";
    v25 = 1;
    v28 = 0;
    v26 = &v9;
    v27 = 1;
    v6 = struct40 {
        field_0: "starship::modules::character"
        field_16: "starship::modules::character"
        field_32: log::__private_api::loc("src/modules/character.rs")
    };
    log::__private_api::log(&v24, 2, &v6);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
