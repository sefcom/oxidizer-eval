fn starship::config::get_palette(a0: &u64, a1: u64, a2: u64) -> long long {
    let v0: struct40;  // [bp-0x88]
    let v1: i64;  // [bp-0x60], Other Possible Types: struct_2 *
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: struct56;  // [bp-0x48], Other Possible Types: u64
    let v5: i64;  // [bp-0x40], Other Possible Types: struct16
    let v6: u128;  // [bp-0x38]
    let v7: void*;  // [bp-0x30], Other Possible Types: struct40
    let v8: struct16;  // [bp-0x20]
    let v10: struct40;  // r14
    let v11: u64;  // rax
    let v12: struct168;  // rbx, Other Possible Types: u64
    let v13: Option<struct48>;  // rdi
    let v14: i64;  // rdx
    let v15: u64;  // rsi

    if a1 {
        v8 = struct16 {
            field_0: a1
            field_8: a2
        };
        v10 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a0, a1, a2);
        v11 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64;
        if v10 {
            if v11 > 4 {
                v1 = &v8;
                v2 = <&T as core::fmt::Display>::fmt;
                v3 = "Found color palette: ";
                v4 = 1;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                v0 = struct40 {
                    field_0: "starship::config"
                    field_16: "starship::config"
                    field_32: log::__private_api::loc("src/config.rs")
                };
                v13 = &v3;
                v14 = &v0;
                v15 = 5;
            } else {
                return v12;
            }
        } else {
            if v11 > 1 {
                v1 = &v8;
                v2 = <&T as core::fmt::Display>::fmt;
                v3 = "Could not find color palette: ";
                v4 = 1;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                v0 = struct40 {
                    field_0: "starship::config"
                    field_16: "starship::config"
                    field_32: log::__private_api::loc("src/config.rs")
                };
                v13 = &v3;
                v14 = &v0;
                v15 = 2;
            } else {
                return v12;
            }
        }
        log::__private_api::log(v13, v15, v14);
        return v12;
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
        v3 = "No color palette specified, using defaults";
        v4 = 1;
        v5 = 8;
        v6 = 0;
        v0 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v3, 5, &v0);
        return 0;
    } else {
        return 0;
    }
}
