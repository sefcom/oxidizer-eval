fn starship::bug_report::get_shell_info() -> : struct72 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0xd0], Other Possible Types: struct24
    let v2: u64;  // [bp-0xc0]
    let v3: iNone;  // [bp-0xb8]
    let v4: struct16;  // [bp-0xb8]
    let v5: u64;  // [bp-0xa8]
    let v6: iNone;  // [bp-0x98], Other Possible Types: struct24
    let v7: struct16;  // [bp-0x88], Other Possible Types: u64
    let v8: struct24;  // [bp-0x80]
    let v9: void*;  // [bp-0x78]
    let v10: u32;  // [bp-0x70]
    let v11: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x68]
    let v12: struct24;  // [bp-0x48]
    let v13: i64;  // [bp-0x38]
    let v14: Option<struct24>;  // [bp-0x30]

    v11 = std::env::var("STARSHIP_SHELL");
    match v11 {
        Err(_) => {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("<unknown shell>");
            v7 = v2;
            v6 = *(&v0.field_0 as &i128);
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("<unknown version>");
            v5 = v2;
            v3 = *(&v0.field_0 as &i128);
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("<unknown config>");
            return struct72 {
                field_0: v6
                field_16: v7
                field_24: v3
                field_40: v5
                field_48: *(&v0.field_0 as &i128)
                field_64: v2
            };
        },
        Ok(_) => {
            v8 = core::result::Result<T,E>::unwrap(&v11);
            v6 = starship::bug_report::get_shell_version(v9, v10);
            v14 = starship::bug_report::get_config_path(v9, v10);
            if !((((0 ^ v14 as i64) & (0 ^ -(v14 as i64))) >> 63) as char) {
                v0 = std::fs::read_to_string(&v14);
            }
            v12 = core::option::Option<T>::map_or_else(&v4);
            return struct72 {
                field_0: *(&v8.field_0 as &i128)
                field_16: v10
                field_24: *((&v0 as &char + 56) as &i128)
                field_40: v7
                field_48: *(&v12.field_0 as &i128)
                field_64: v13
            };
        },
    }
}
