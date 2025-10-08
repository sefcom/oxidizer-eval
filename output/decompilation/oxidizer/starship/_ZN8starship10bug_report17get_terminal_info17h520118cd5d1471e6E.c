fn starship::bug_report::get_terminal_info() -> : struct48 {
    let a0: i64;  // rdi
    let v0: Result<struct32, struct16>;  // [bp-0xa8]
    let v1: u128;  // [bp-0xa8]
    let v2: Result<struct32, struct16>;  // [bp-0xa8]
    let v3: u128;  // [bp-0xa8]
    let v4: struct24;  // [bp-0x98], Other Possible Types: u128
    let v5: i64;  // [bp-0x90]
    let v6: struct24;  // [bp-0x88]
    let v7: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x78]
    let v8: struct24;  // [bp-0x68], Other Possible Types: u128
    let v9: u64;  // [bp-0x58]
    let v10: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x50]
    let v11: struct24;  // [bp-0x40]
    let v12: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x30]
    let v14: i64;  // r14
    let v15: iNone;  // xmm0
    let v16: u128;  // xmm0

    v10 = std::env::var("TERM_PROGRAM");
    match v10 {
        Err(_) => {
            v2 = starship::bug_report::get_terminal_info::{{closure}}(&v10 as u8);
            v14 = &v0 as u8;
            if let Err(_) = v2 {
                goto LABEL_b46b94;
            }
LABEL_b46b62:
            v7 = v5;
            v6 = *((&v2 as &char + 8) as &i128);
        },
        Ok(_) => {
            v15 = v10 as i128;
            v4 = v11;
            *(&v3 as void*) = v15;
            v14 = &v3 as u8;
            if v3 as i32 != 1 {
                goto LABEL_b46b62;
            }
LABEL_b46b94:
            v6 = starship::bug_report::get_terminal_info::{{closure}}(&v0 as u8);
        },
    }
    v12 = std::env::var("TERM_PROGRAM_VERSION");
    match v12 {
        Err(_) => {
            v0 = starship::bug_report::get_terminal_info::{{closure}}(&v12 as u8);
            if let Err(_) = v0 {
                goto LABEL_b46bd4;
            }
        },
        Ok(_) => {
            v16 = v12 as i128;
            v4 = *((&v12 as &char + 16) as &i128) as u128;
            v1 = v16;
            if let Err(_) = v2 {
LABEL_b46bd4:
                v8 = starship::bug_report::get_terminal_info::{{closure}}(&v0 as u8);
            }
        },
    }
    return struct48 {
        field_0: v6
        field_16: v7
        field_24: v8
        field_40: v9
    };
}
