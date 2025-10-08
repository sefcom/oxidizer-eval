fn starship::utils::create_command(a0: &struct224, a1: i64, a2: i64) -> u64 {
    let v0: struct40;  // [bp-0x1a0]
    let v1: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x178]
    let v2: struct8;  // [bp-0x178]
    let v3: struct24;  // [bp-0x168], Other Possible Types: struct_0 *, struct_1 *
    let v4: Result<struct4, struct8>;  // [bp-0x160], Other Possible Types: struct32, unsigned long
    let v5: struct44;  // [bp-0x158], Other Possible Types: struct8
    let v6: Option<struct24>;  // [bp-0x150], Other Possible Types: Result<struct72, struct16>
    let v7: iNone;  // [bp-0x148], Other Possible Types: struct16
    let v8: iNone;  // [bp-0x148]
    let v9: u64;  // [bp-0x138]
    let v10: Result<struct24, struct9>;  // [bp-0x130]
    let v11: u64;  // [bp-0x130]
    let v12: u64;  // [bp-0x120]
    let v13: struct24;  // [bp-0x118]
    let v14: struct224;  // [bp-0x100], Other Possible Types: struct32, struct8
    let v15: Option<struct24>;  // [bp-0xf8], Other Possible Types: core::result::Result<usize, core::num::error::ParseIntError>, struct8
    let v16: struct32;  // [bp-0xf0], Other Possible Types: struct48, struct_2 *
    let v17: struct96;  // [bp-0xe8], Other Possible Types: struct24
    let v18: void*;  // [bp-0xe0], Other Possible Types: Option<struct24>, struct73
    let v20: u64;  // r15
    let v21: Option<struct48>;  // rbp

    v1 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    v2 = v1;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
        v3 = &v1;
        v4 = <&T as core::fmt::Debug>::fmt;
        v14 = "Creating Command for binary ";
        v15 = 1;
        v18 = 0;
        v16 = &v3;
        v17 = 1;
        v0 = struct40 {
            field_0: "starship::utils"
            field_16: "starship::utils"
            field_32: log::__private_api::loc("src/utils.rs")
        };
        log::__private_api::log(&v14, 5, &v0);
        v2 = v1;
    }
    v10 = which::which(v2, v20);
    if (((0 ^ v10 as i64) & (0 ^ -(v11))) >> 63) as char {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 4 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: std::io::error::Error::new(0, v21 & 4294967295)
            };
        }
        v3 = &v1;
        v4 = <&T as core::fmt::Debug>::fmt;
        v5 = &v7 as u128;
        v6 = <which::error::Error as core::fmt::Debug>::fmt;
        v14 = "Unable to find ";
        v15 = 2;
        v18 = 0;
        v16 = &v3;
        v17 = 2;
        v0 = struct40 {
            field_0: "starship::utils"
            field_16: "starship::utils"
            field_32: log::__private_api::loc("src/utils.rs")
        };
        log::__private_api::log(&v14, 5, &v0);
        return struct16 {
            field_0: 0x8000000000000000
            field_8: std::io::error::Error::new(0, v21 & 4294967295)
        };
    } else {
        v9 = v12;
        v7 = v10 as i128;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v3 = &v7;
            v4 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v5 = &v1;
            v6 = <&T as core::fmt::Debug>::fmt;
            v14 = "Using ";
            v15 = 2;
            v18 = 0;
            v16 = &v3;
            v17 = 2;
            v0 = struct40 {
                field_0: "starship::utils"
                field_16: "starship::utils"
                field_32: log::__private_api::loc("src/utils.rs")
            };
            log::__private_api::log(&v14, 5, &v0);
        }
        v13 = v8;
        std::process::Command::new(&v14, &v13);
        v14 = std::process::Command::stderr(0x2);
        v14 = std::process::Command::stdout(0x2);
        v14 = std::process::Command::stdin(0x1);
        return memcpy(a0, &v14, 224);
    }
}
