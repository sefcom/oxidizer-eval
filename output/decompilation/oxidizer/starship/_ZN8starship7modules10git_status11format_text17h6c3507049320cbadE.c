fn starship::modules::git_status::format_text(a0: i64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u8;  // [bp-0x109]
    let v1: struct40;  // [bp-0x108]
    let v2: u64;  // [bp-0xf0]
    let v3: &str;  // [bp-0xe0]
    let v4: Option<struct24>;  // [bp-0xd8]
    let v5: struct328;  // [bp-0xc8]
    let v6: &str;  // [bp-0xc0]
    let v7: Option<struct24>;  // [bp-0xb0], Other Possible Types: struct72
    let v8: struct16;  // [bp-0xa8]
    let v9: Result<struct48, struct32>;  // [bp-0xa0]
    let v10: Option<struct24>;  // [bp-0x98]
    let v11: struct24;  // [bp-0x90]
    let v12: Result<struct72, struct24>;  // [bp-0x68]

    v6 = "git_status.up_to_date";
    v12 = starship::formatter::string_formatter::StringFormatter::new(a1, a2);
    if (((0 ^ v12 as i64) & (0 ^ -(v12 as i64))) >> 63) as char {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 1 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v5 = &v6 as u64;
        v3 = &v5;
        v4 = <&T as core::fmt::Display>::fmt;
        v7 = "Error parsing format string `";
        v8 = 2;
        v11 = 0;
        v9 = &v3;
        v10 = 1;
        v1 = struct40 {
            field_0: "starship::modules::git_status"
            field_16: "starship::modules::git_status"
            field_32: log::__private_api::loc("src/modules/git_status.rs")
        };
        log::__private_api::log(&v7, 2, &v1);
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v7 = starship::formatter::string_formatter::StringFormatter::map(&v12, &v0);
        v1 = struct40 {
            field_0: starship::formatter::string_formatter::StringFormatter::parse(&v7, &v3 as u32, a3)
            padding_32: <UNKNOWN>
            field_40: <UNKNOWN>
        };
        if !(v1.field_0 as i8 & 1) {
            return struct24 {
                field_0: *(&v1.field_8 as &i128)
                field_16: v2
            };
        }
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
