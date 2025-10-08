fn bat::config::get_args_from_env_opts_var() -> : struct24 {
    let a0: u64;  // rdi
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x48], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x38]
    let v2: struct24;  // [bp-0x28]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // rax

    v0 = std::env::var("BAT_OPTS");
    if let Ok(_) = v0 {
        v4 = *((&v0 as &char + 8) as &i64);
        v2 = v1;
        if let Ok(_) = v4 {
            v0 = struct24 {
                field_0: v4
                field_8: v2
            };
            bat::config::get_args_from_env_opts_var::{{closure}}(a0, &v0);
            return;
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
