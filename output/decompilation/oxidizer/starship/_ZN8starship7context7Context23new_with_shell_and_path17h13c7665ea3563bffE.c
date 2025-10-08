fn starship::context::Context::new_with_shell_and_path(a1: i64, a2: i8, a3: i64, a4: i64, a5: i64) -> : struct361 {
    let a0: i64;  // rdi
    let v1: i64;  // [bp-0x238]
    let v2: u32;  // [bp-0x22c]
    let v3: i64;  // [bp-0x228]
    let v4: Option<struct24>;  // [bp-0x218], Other Possible Types: struct24, u64
    let v5: u64;  // [bp-0x218]
    let v6: void*;  // [bp-0x210], Other Possible Types: u64
    let v7: i64;  // [bp-0x208], Other Possible Types: u64
    let v8: u64;  // [bp-0x200]
    let v9: void*;  // [bp-0x1f8]
    let v10: struct24;  // [bp-0x1e0], Other Possible Types: unsigned long
    let v11: u64;  // [bp-0x1d8]
    let v12: u64;  // [bp-0x1d0]
    let v13: struct24;  // [bp-0x1c8]
    let v14: struct24;  // [bp-0x1c8]
    let v15: struct16;  // [bp-0x1b0], Other Possible Types: struct40
    let v16: struct80;  // [bp-0x188], Other Possible Types: u8
    let v17: struct40;  // [bp-0x178]
    let v18: struct32;  // [bp-0x168]
    let v19: u128;  // [bp-0x158]
    let v20: struct40;  // [bp-0x148]
    let v21: struct258;  // [bp-0x138]
    let v24: void*;  // rsi
    let v25: struct96;  // r12
    let v26: i64;  // rbp
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: u64;  // r15

    v4 = starship::context::get_config_path_os();
    v24 = 0;
    if !((((0 ^ v4 as i64) & (0 ^ -(v5))) >> 63) as char) {
        v24 = v6;
    }
    v25 = &v16;
    v16 = starship::config::StarshipConfig::initialize(v24, v7);
    v2 = a2;
    v26 = a1 + 64;
    if *((a1 + 64) as &i64) != 0x8000000000000000 && *((a1 + 80) as &i64) == 1 {
        v28 = *((a1 + 72) as &i64);
        if !*((v28 + 16) as &i64) {
            *(v26 as &i64) = 0x8000000000000000;
            v28 = v29;
        }
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v10 = v26;
        v11 = <core::option::Option<T> as core::fmt::Debug>::fmt;
        v4 = "Received completed pipestatus of ";
        v6 = 1;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        v15 = struct40 {
            field_0: "starship::context"
            field_16: "starship::context"
            field_32: log::__private_api::loc("src/context.rs")
        };
        log::__private_api::log(&v4, 5, &v15);
    }
    if *((a1 + 40) as &i64) != 0x8000000000000000 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a1 + 48) as &i64), *((a1 + 56) as &i64), 1, 0) {
        *((a1 + 40) as &i64) = 0x8000000000000000;
    }
    v13 = starship::context::Context::expand_tilde(a4);
    v15 = dunce::canonicalize(&v13);
    v4 = v14;
    v10 = core::result::Result<T,E>::unwrap_or(&v15, &v4);
    v21 = core::option::Option<T>::map_or_else(v25);
    v30 = *((a1 + 160) as &i64);
    *((a0 + 552) as &struct40) = v20;
    *((a0 + 536) as &u128) = v19;
    *((a0 + 520) as &struct32) = v18;
    *((a0 + 504) as &struct40) = v17;
    *((a0 + 488) as &i128) = *(&v16.field_0 as &i128);
    memcpy(a0, a1, 176);
    *((a0 + 192) as &u64) = v12;
    *((a0 + 176) as &u128) = v10.field_0;
    *((a0 + 200) as &i128) = *(v1 as &i128);
    *((a0 + 216) as &i64) = *((v1 + 16) as &i64);
    *((a0 + 800) as &i32) = 0;
    *((a0 + 1720) as &i32) = 0;
    *((a0 + 1736) as &u8) = v2;
    *((a0 + 568) as &i128) = *(v3 as &i128);
    *((a0 + 584) as &i64) = *((v3 + 16) as &i64);
    *((a0 + 1728) as &u64) = v30;
    *((a0 + 592) as &i64) = 1;
    *((a0 + 600) as &&u8) = &g_11f34b0;
    memcpy(a0 + 224, &v21, 264);
    return;
}
