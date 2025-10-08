fn starship::utils::read_file(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x90]
    let v1: struct40;  // [bp-0x68], Other Possible Types: struct8, u128
    let v2: struct24;  // [bp-0x68]
    let v3: Result<struct32, struct9>;  // [bp-0x60], Other Possible Types: core::str::pattern::CharSearcher, struct24
    let v4: Option<struct24>;  // [bp-0x58], Other Possible Types: struct16, struct24, struct40
    let v5: struct16;  // [bp-0x50], Other Possible Types: u64
    let v6: Option<struct24>;  // [bp-0x48], Other Possible Types: Result<struct24, struct24>
    let v7: struct40;  // [bp-0x38]
    let v8: Result<struct24, struct16>;  // [bp-0x38]
    let v9: struct40;  // [bp-0x30]
    let v10: i64;  // [bp-0x28]
    let v11: Option<struct24>;  // [bp-0x20]
    let v12: struct16;  // [bp-0x18]

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v7 = a1;
        v9 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v2 = "Trying to read from ";
        v3 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        v0 = struct40 {
            field_0: "starship::utils"
            field_16: "starship::utils"
            field_32: log::__private_api::loc("src/utils.rs")
        };
        log::__private_api::log(&v2, 5, &v0);
    }
    v4 = *((a1 + 16) as &i64);
    v1 = *(a1 as &i128);
    v8 = std::fs::read_to_string(&v1);
    if (((0 ^ v8 as i64) & (0 ^ -(v7))) >> 63) as char {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
            v11 = &v8;
            v12 = <core::result::Result<T,E> as core::fmt::Debug>::fmt;
            v1 = "Error reading file: ";
            v3 = 1;
            v6 = 0;
            v4 = &v11;
            v5 = 1;
            v0 = struct40 {
                field_0: "starship::utils"
                field_16: "starship::utils"
                field_32: log::__private_api::loc("src/utils.rs")
            };
            log::__private_api::log(&v1, 4, &v0);
        }
    } else {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
            v1 = "File read successfully";
            v3 = 1;
            v4 = 8;
            v5 = 0;
            v0 = struct40 {
                field_0: "starship::utils"
                field_16: "starship::utils"
                field_32: log::__private_api::loc("src/utils.rs")
            };
            log::__private_api::log(&v1, 5, &v0);
        }
    }
    return struct24 {
        field_0: v8 as i128
        field_16: v10
    };
}
