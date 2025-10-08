fn starship::modules::dotnet::module(a0: i64, a1: u64) -> void {
    let v0: u8;  // [bp-0x269]
    let v1: u64;  // [bp-0x268]
    let v2: iNone;  // [bp-0x260]
    let v3: struct32;  // [bp-0x250]
    let v4: struct32;  // [bp-0x248]
    let v5: Result<struct68, struct55>;  // [bp-0x238]
    let v6: Option<struct56>;  // [bp-0x230], Other Possible Types: u64
    let v7: struct16;  // [bp-0x230]
    let v8: u64;  // [bp-0x230]
    let v9: u64;  // [bp-0x228]
    let v10: i64;  // [bp-0x220]
    let v11: u64;  // [bp-0x218]
    let v12: void*;  // [bp-0x210]
    let v13: struct32;  // [bp-0x1f8]
    let v14: struct92;  // [bp-0x1e8]
    let v15: struct40;  // [bp-0x1e0], Other Possible Types: struct72
    let v16: struct40;  // [bp-0x1a8]
    let v17: u64;  // [bp-0x1a0]
    let v18: struct64;  // [bp-0x198]
    let v19: struct92;  // [bp-0x158]
    let v20: struct24;  // [bp-0x158]
    let v21: iNone;  // [bp-0x148]
    let v22: struct24;  // [bp-0x138]
    let v23: struct32;  // [bp-0x128]
    let v24: iNone;  // [bp-0x118]
    let v25: u64;  // [bp-0x100]
    let v26: Option<struct138>;  // [bp-0xf8]
    let v27: core::fmt::Arguments;  // [bp-0xc0]
    let v28: u64;  // [bp-0xb0]
    let v29: u64;  // [bp-0xa8]
    let v30: u128;  // [bp-0xa0]
    let v31: Result<struct72, struct24>;  // [bp-0x68]
    let v32: iNone;  // [bp-0x60]
    let v34: struct64;  // xmm0

    v19 = starship::context::Context::new_module(a1, "dotnet");
    v26 = starship::config::ModuleConfig::try_load(v25);
    v6 = starship::context::Context::try_begin_scan(a1);
    if let None = v6 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = *((&v26 as &char + 8) as &i128);
    v15 = struct72 {
        field_0: v6 as i64
        field_8: *((&v26 as &char + 32) as &i64)
        field_16: *((&v26 as &char + 40) as &i64)
        field_24: v27
        field_40: v34
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v15) {
        v7 = starship::modules::dotnet::get_local_dotnet_files(a1);
        if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v2 = *((&v6 as &char + 8) as &i128);
        v1 = v7.field_0;
        v0 = *((&v26 as &char + 136) as &i8);
        v31 = starship::formatter::string_formatter::StringFormatter::new(v28, v29);
        v18 = struct64 {
            field_0: v30
            field_16: &v26 as u8
            field_24: &v26 as u8
            field_32: &v0
            field_40: a1
            field_48: &v1
            field_56: &v19
        };
        match v31 {
            Err(_) => {
                v5 = *((&v31 as &char + 24) as &i64);
                v4 = v32;
            },
            Ok(_) => {
                v3 = starship::modules::dotnet::module::{{closure}}(&v18, &v31);
                if v3.field_0 as i32 != 1 {
                    v20 = starship::module::Module::set_segments(&v3 as u8);
                    return struct96 {
                        field_0: v19.field_0
                        field_16: v21
                        field_32: v22
                        field_48: v23
                        field_64: v24
                        field_80: *(&v19.field_80 as &i128)
                    };
                }
            },
        }
        v14 = v5;
        v13 = v4;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v13;
        v17 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
        v6 = "Error in module `dotnet`:\n";
        v9 = 1;
        v12 = 0;
        v10 = &v16;
        v11 = 1;
        v15 = struct40 {
            field_0: "starship::modules::dotnet"
            field_16: "starship::modules::dotnet"
            field_32: log::__private_api::loc("src/modules/dotnet.rs")
        };
        log::__private_api::log(&v6, 2, &v15);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
