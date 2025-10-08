fn zoxide::config::data_dir(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x88], Other Possible Types: u8
    let v1: u128;  // [bp-0x88]
    let v2: &u8;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: struct24;  // [bp-0x68]
    let v5: u64;  // [bp-0x58]
    let v6: struct40;  // [bp-0x50], Other Possible Types: u8
    let v8: u64;  // rax

    v4 = std::env::var_os("_ZO_DATA_DIR");
    if (((0 ^ v4.field_0) & (0 ^ -(v4.field_0))) >> 63) as char {
        dirs::data_local_dir(&v6);
        v8 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(&v0, &v6);
        if *(&v0 as &i64) == 0x8000000000000000 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v2
            };
        }
        v0 = std::path::Path::join(v2, v3, "zoxide");
        core::mem::drop(v0.field_0, v2);
    } else {
        v3 = v5;
        v1 = *(&v4.field_0 as &i128);
    }
    if !std::path::Path::is_absolute(v2, v3) {
        v6 = struct40 {
            field_0: "_ZO_DATA_DIR must be an absolute path"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        *((a0 + 8) as &u64) = anyhow::__private::format_err(&v6);
        *(a0 as &i64) = 0x8000000000000000;
        return core::mem::drop();
    }
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v3
    };
}
