fn uu_mktemp::exec(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i8) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x68], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>, u64
    let v1: &u8;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: &u8;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: struct24;  // [bp-0x38]
    let v7: u64;  // rax

    if a8 {
        v0 = uu_mktemp::make_temp_dir(a1, a2, a3, a4, a5, a6, a7);
    } else {
        v0 = uu_mktemp::make_temp_file(a1, a2, a3, a4, a5, a6, a7);
    }
    if v0 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v4
            field_16: v5
        };
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    v7 = std::path::Path::file_name(v4, v5);
    if v7 {
        v0 = core::str::converts::from_utf8(v7, a2);
        if let Ok(_) = v0 {
            v6 = std::path::Path::join(a1, a2, v1, v2);
            return Ok(struct24 {
                field_0: v6.field_0
                field_16: v6.field_16
            });
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
