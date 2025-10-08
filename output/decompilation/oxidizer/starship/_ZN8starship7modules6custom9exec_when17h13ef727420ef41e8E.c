fn starship::modules::custom::exec_when(a0: i192, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct40;  // [bp-0x130], Other Possible Types: struct8, core::result::Result<&str, core::str::error::Utf8Error>
    let v1: struct24;  // [bp-0x128], Other Possible Types: struct40
    let v2: core::fmt::rt::Argument;  // [bp-0x120], Other Possible Types: struct_2 *
    let v3: Option<struct56>;  // [bp-0x118], Other Possible Types: u64
    let v4: struct24;  // [bp-0x110], Other Possible Types: void*
    let v5: struct24;  // [bp-0x100], Other Possible Types: struct_0 *, struct_1 *
    let v6: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xf8], Other Possible Types: struct72
    let v7: struct24;  // [bp-0xf0], Other Possible Types: u64
    let v8: u64;  // [bp-0xe8]
    let v9: struct40;  // [bp-0xe0]
    let v10: struct24;  // [bp-0xb8], Other Possible Types: struct48, u128
    let v11: struct72;  // [bp-0xb0], Other Possible Types: struct80
    let v12: iNone;  // [bp-0xa8], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct16
    let v13: u64;  // [bp-0xa0]
    let v14: struct24;  // [bp-0x98], Other Possible Types: u128
    let v15: i64;  // [bp-0x90]
    let v16: u128;  // [bp-0x88]
    let v17: struct24;  // [bp-0x84]
    let v18: struct8;  // [bp-0x70]
    let v19: struct40;  // [bp-0x60], Other Possible Types: u64
    let v20: struct40;  // [bp-0x60]
    let v21: u64;  // [bp-0x40]
    let v22: i8;  // [bp-0x30]
    let v24: struct8;  // 4096
    let v26: u128;  // xmm0
    let v27: iNone;  // xmm1
    let v28: Option<struct40>;  // xmm2
    let v29: struct16;  // bl
    let v30: struct24;  // r14
    let v31: core::result::Result<(), std::io::error::Error>;  // rax

    v18 = a0;
    v24 = a0;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v0 = &v18;
        v1 = <&T as core::fmt::Display>::fmt;
        v10 = "Running '";
        v11 = 2;
        v14 = 0;
        v12 = &v0;
        v13 = 1;
        v20 = struct40 {
            field_0: "starship::modules::custom"
            field_16: "starship::modules::custom"
            field_32: log::__private_api::loc("src/modules/custom.rs")
        };
        log::__private_api::log(&v10, 5, &v20);
        v24 = v18;
    }
    starship::modules::custom::shell_command(&v19, v24, a1, a2, a3);
    if !((((0 ^ v19) & (0 ^ -(v19))) >> 63) as char) {
        v26 = *(&v20.field_0 as &i128);
        v27 = *(&v20.field_16 as &i128);
        v28 = *(&v21 as &i128);
        v16 = *(&v22 as &i128);
        *(&v14 as &Option<struct40>) = v28;
        v12 = v27;
        v10 = v26;
        v29 = *((&v16 as &char + 8) as &i8);
        v30 = v17 as u64;
        if !v30 as u32 && !v29 != 2 {
            return !v30 as u32 & v29 == 2;
        }
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v7 = v31;
            v5 = &v7;
            v6 = <core::option::Option<T> as core::fmt::Debug>::fmt;
            v0 = "non-zero exit code '";
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v9 = struct40 {
                field_0: "starship::modules::custom"
                field_16: "starship::modules::custom"
                field_32: log::__private_api::loc("src/modules/custom.rs")
            };
            log::__private_api::log(&v0, 5, &v9);
        }
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v0 = core::str::converts::from_utf8(v11, v12);
            v7 = (!v0 as i8 ? v1 : &g_53ef9c);
            v8 = (!v0 as i8 ? v2 : 14);
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = "stdout: ";
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v9 = struct40 {
                field_0: "starship::modules::custom"
                field_16: "starship::modules::custom"
                field_32: log::__private_api::loc("src/modules/custom.rs")
            };
            log::__private_api::log(&v0, 5, &v9);
        }
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v0 = core::str::converts::from_utf8(v14, v15);
            v7 = (!v0 as i8 ? v1 : &g_53ef9c);
            v8 = (!v0 as i8 ? v2 : 14);
            v5 = &v7;
            v6 = <&T as core::fmt::Display>::fmt;
            v0 = "stderr: ";
            v1 = 1;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            v9 = struct40 {
                field_0: "starship::modules::custom"
                field_16: "starship::modules::custom"
                field_32: log::__private_api::loc("src/modules/custom.rs")
            };
            log::__private_api::log(&v0, 5, &v9);
        }
        return !v30 as u32 & v29 == 2;
    } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 3 {
        v10 = "Cannot start command";
        v11 = 1;
        v12 = 8;
        v13 = 0;
        v19 = struct40 {
            field_0: "starship::modules::custom"
            field_16: "starship::modules::custom"
            field_32: log::__private_api::loc("src/modules/custom.rs")
        };
        log::__private_api::log(&v10, 4, &v19);
        return 0;
    } else {
        return 0;
    }
}
