fn starship::modules::env_var::filter_config(a0: i64, a1: i64) -> int {
    let v0: struct72;  // [bp-0xf8]
    let v1: core::str::pattern::CharSearcher;  // [bp-0xf8]
    let v2: Option<struct24>;  // [bp-0xf8]
    let v3: Result<struct24, struct16>;  // [bp-0xe8]
    let v4: Result<struct24, struct16>;  // [bp-0xd8]
    let v5: <anon>;  // [bp-0xc8]
    let v6: Option<struct40>;  // [bp-0xb8]
    let v7: core::option::Option<&str>;  // [bp-0xa0]
    let v8: Option<struct24>;  // [bp-0x98]
    let v9: Option<struct80>;  // [bp-0x90], Other Possible Types: struct24
    let v10: u64;  // [bp-0x88]
    let v11: struct176;  // [bp-0x80]
    let v12: struct24;  // [bp-0x78]
    let v13: void*;  // [bp-0x70]
    let v14: u128;  // [bp-0x60]
    let v15: iNone;  // [bp-0x50]
    let v16: struct40;  // [bp-0x40]

    if *(a1 as &i64) > 9223372036854775813 {
        v0 = core::iter::traits::iterator::Iterator::collect(*((a1 + 8) as &i64), *((a1 + 16) as &i64) * 112 + *((a1 + 8) as &i64));
    }
    v9 = core::option::Option<T>::filter(&v2 as u8);
    if let Some(_) = v9 {
        v6 = v15;
        v5 = v14;
        v4 = *((&v9 as &char + 32) as &i128);
        v3 = *((&v9 as &char + 16) as &i128);
        v1 = v9 as i128;
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 5 {
        return struct80 {
            field_0: v1
            field_16: v3
            field_32: v4
            field_48: v5
            field_64: v6
        };
    }
    v7 = &v1;
    v8 = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v9 = "Filtered top-level env_var config: ";
    v10 = 1;
    v13 = 0;
    v11 = &v7;
    v12 = 1;
    v16 = struct40 {
        field_0: "starship::modules::env_var"
        field_16: "starship::modules::env_var"
        field_32: log::__private_api::loc("src/modules/env_var.rs")
    };
    log::__private_api::log(&v9, 5, &v16);
    return struct80 {
        field_0: v1
        field_16: v3
        field_32: v4
        field_48: v5
        field_64: v6
    };
}
