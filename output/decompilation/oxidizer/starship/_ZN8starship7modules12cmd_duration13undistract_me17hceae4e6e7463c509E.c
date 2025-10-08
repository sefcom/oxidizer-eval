fn starship::modules::cmd_duration::undistract_me(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct96 {
    let a0: i64;  // rdi
    let v0: Option<struct56>;  // [bp-0x328], Other Possible Types: u128
    let v1: struct92;  // [bp-0x320]
    let v2: struct16;  // [bp-0x318]
    let v3: struct16;  // [bp-0x310], Other Possible Types: struct40
    let v4: Result<struct24, struct24>;  // [bp-0x2e8], Other Possible Types: u8
    let v5: Result<struct24, struct24>;  // [bp-0x2e0]
    let v6: struct16;  // [bp-0x2d8], Other Possible Types: struct40
    let v7: struct40;  // [bp-0x2d0]
    let v8: struct32;  // [bp-0x2c8]
    let v9: struct16;  // [bp-0x2b8]
    let v10: Result<struct24, struct24>;  // [bp-0x2b0]
    let v11: struct24;  // [bp-0x2a8], Other Possible Types: struct64
    let v12: Option<struct24>;  // [bp-0x268], Other Possible Types: Result<struct296, struct72>, struct72
    let v13: u64;  // [bp-0x268]
    let v14: struct56;  // [bp-0x260]
    let v15: u512;  // [bp-0x260]
    let v16: struct40;  // [bp-0x258]
    let v17: struct80;  // [bp-0x250]
    let v18: struct72;  // [bp-0x248]
    let v19: struct16;  // [bp-0x140], Other Possible Types: struct272
    let v21: Result<struct16, struct64>;  // xmm0
    let v22: Result<struct24, struct16>;  // xmm1
    let v23: u128;  // xmm2
    let v24: iNone;  // xmm3
    let v25: struct24;  // ebp
    let v26: core::option::Option<&str>;  // rax
    let v27: Result<struct16, struct64>;  // xmm0
    let v28: Result<struct24, struct16>;  // xmm1
    let v29: u128;  // xmm2
    let v30: iNone;  // xmm3
    let v31: u128;  // xmm3
    let v32: u128;  // xmm2
    let v33: u128;  // xmm1
    let v34: u128;  // xmm0

    if *((a2 + 58) as &i8) && !(_ccall(2, 16, a4, *((a2 + 48) as &i64) >> 63 ^ (a3 < *((a2 + 48) as &i64)) as u8 as u64, (a3 < *((a2 + 48) as &i64)) as u8 as u64) as char) {
        v19 = struct16 {
            field_0: "DISPLAY"
            field_8: "src/modules/cmd_duration.rs"
        };
        v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v19);
        if (((0 ^ v12 as i64) & (0 ^ -(v13))) >> 63) as char {
            *((a0 + 80) as &i128) = *((a1 + 80) as &i128);
            *((a0 + 64) as &i128) = *((a1 + 64) as &i128);
            v21 = *(a1 as &i128);
            v22 = *((a1 + 16) as &i128);
            v23 = *((a1 + 32) as &i128);
            v24 = *((a1 + 48) as &i128);
        }
        starship::module::Module::ansi_strings(&v19 as u32, a1, a2, a3);
        *(&v3.field_0 as &i128) = *(&v19.field_0 as &i128);
        v11 = nu_ansi_term::util::unstyle(&v3 as u8);
        v0 = &v11;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = "Command execution ";
        v14 = 1;
        v18 = 0;
        v16 = &v0;
        v17 = 1;
        core::option::Option<T>::map_or_else(&v4, 0, a2, &v12);
        v0 = *(&v4 as &i128);
        v2 = v6;
        v25 = *((a2 + 4) as &i32);
        v19 = notify_rust::notification::Notification::new();
        v26 = notify_rust::notification::Notification::icon(notify_rust::notification::Notification::body(notify_rust::notification::Notification::summary(&v19, "Command finished"), <alloc::string::String as core::fmt::Display>::fmt, v2), "utilities-terminal");
        *((v26 + 176) as &i32) = *(a2 as &i32) * 2;
        *((v26 + 180) as &struct24) = v25;
        v12 = notify_rust::notification::Notification::show(&v19);
        if let Err(_) = v12 {
            v11 = v15;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
                v9 = &v11;
                v10 = <notify_rust::error::Error as core::fmt::Display>::fmt;
                v4 = "Cannot show notification: ";
                v5 = 1;
                v8 = 0;
                v6 = &v9;
                v7 = 1;
                v3 = struct40 {
                    field_0: "starship::modules::cmd_duration"
                    field_16: "starship::modules::cmd_duration"
                    field_32: log::__private_api::loc("src/modules/cmd_duration.rs")
                };
                log::__private_api::log(&v4, 5, &v3);
            }
        }
    }
    v27 = *(a1 as &i128);
    v28 = *((a1 + 16) as &i128);
    v29 = *((a1 + 32) as &i128);
    v30 = *((a1 + 48) as &i128);
    return struct96 {
        field_0: v34
        field_16: v33
        field_32: v32
        field_48: v31
        field_64: *((a1 + 64) as &i128)
        field_80: *((a1 + 80) as &i128)
    };
}
