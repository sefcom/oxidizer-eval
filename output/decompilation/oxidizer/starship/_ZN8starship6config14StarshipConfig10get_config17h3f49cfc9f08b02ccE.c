fn starship::config::StarshipConfig::get_config(a0: i64, a1: &struct16, a2: i64) -> u64 {
    let v0: i64;  // [bp-0x100], Other Possible Types: struct_5 *, struct_6 *
    let v1: i64;  // [bp-0xf8], Other Possible Types: u64
    let v2: struct40;  // [bp-0xe8], Other Possible Types: u64
    let v3: u64;  // [bp-0xe0]
    let v4: i64;  // [bp-0xd8], Other Possible Types: struct_3 *, struct_4 *
    let v5: u64;  // [bp-0xd0]
    let v6: void*;  // [bp-0xc8]
    let v7: i64;  // [bp-0xb8], Other Possible Types: struct_1 *, struct_8 *
    let v8: u64;  // [bp-0xb0]
    let v9: std::io::stdio::Stdin;  // [bp-0xa8], Other Possible Types: struct_12 *, struct_2 *
    let v10: u64;  // [bp-0xa0]
    let v11: struct40;  // [bp-0x98]
    let v12: u64;  // [bp-0x70]
    let v13: Result<struct24, struct24>;  // [bp-0x68]
    let v14: struct32;  // [bp-0x50]
    let v15: i64;  // [bp-0x50]
    let v17: core::fmt::rt::Argument;  // rbx, Other Possible Types: struct_9 *
    let v18: u64;  // r12
    let v19: core::fmt::Arguments;  // r13
    let v20: core::fmt::Arguments;  // r13
    let v21: u64;  // rcx
    let v22: struct40;  // rax
    let v23: u64;  // r13
    let v24: i64;  // r12
    let v25: Result<struct32, struct16>;  // rax

    if (((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char {
        return 0;
    }
    v12 = a2;
    if !a2 {
        v2 = struct40 {
            field_0: "Starship::get_config called with an empty path"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        core::panicking::assert_failed(1, &v12, &g_523ff0, &v2, "src/config.rs"); /* do not return */
    }
    v17 = a0;
    v18 = a2 - 1;
    v14 = core::slice::<impl [T]>::split_at_unchecked(a1, a2, v18);
    if v14.field_8 {
        do {
            v20 = v19;
            v1 = v15;
            v22 = indexmap::map::IndexMap<K,V,S>::get(v17, *(v15 as &i64), *((v15 + 8) as &i64), v21);
            if !v22 {
                if indexmap::map::IndexMap<K,V,S>::get_index_of(v17, *(v15 as &i64), *((v15 + 8) as &i64), v21) != 1 {
                    continue;
                }
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
                    v13 = alloc::str::join_generic_copy(a1, a2, ".");
                    v0 = &v1;
                    v7 = &v13;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v2 = "No config found for \"";
                    v3 = 3;
                    v6 = 0;
                    v4 = &v7;
                    v5 = 2;
                    v11 = struct40 {
                        field_0: "starship::config"
                        field_16: "starship::config"
                        field_32: log::__private_api::loc("src/config.rs")
                    };
                    log::__private_api::log(&v2, 5, &v11);
                }
                goto LABEL_0xb62804;
            } else {
                v17 = v22;
                if *(v17 as &i64) < 9223372036854775814 {
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 4 {
                        return 0;
                    }
                    v13 = alloc::str::join_generic_copy(a1, a2, ".");
                    v0 = &v1;
                    v7 = &v13;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v9 = &v0;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v2 = "No config found for \"";
                    v3 = 3;
                    v6 = 0;
                    v4 = &v7;
                    v5 = 2;
                    v11 = struct40 {
                        field_0: "starship::config"
                        field_16: "starship::config"
                        field_32: log::__private_api::loc("src/config.rs")
                    };
                    log::__private_api::log(&v2, 5, &v11);
                    return 0;
                }
            }
            v15 += 16;
            v23 = v20 - 16;
            v19 = v23;
        } while (v20 != 16);
    }
    v24 = v18 * 16;
    v1 = a1 + v24;
    v25 = indexmap::map::IndexMap<K,V,S>::get(v17, *((a1 + v24) as &i64), *((a1 + v24 + 8) as &i64), v21);
    if v25 {
        return v25;
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
        v13 = alloc::str::join_generic_copy(a1, a2, ".");
        v0 = &v1;
        v7 = &v13;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &v0;
        v10 = <&T as core::fmt::Display>::fmt;
        v2 = "No config found for \"";
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v11 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v2, 5, &v11);
        return 0;
    } else {
        return 0;
    }
}
