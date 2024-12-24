fn uu_mktemp::exec(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i192;  // [sp-0x68], Other Possible Types: struct24, Result<struct16, struct10>
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: struct24;  // [sp-0x38], Other Possible Types: i192
    let v8: i8;  // [bp+0x18]
    let v9: i64;  // rdx
    let v13: i64;  // rcx
    let v14: i64;  // rax
    let v15: i64;  // rdx

    if !v8 {
        v1 = v1;
        v0 = v0;
        v2 = uu_mktemp::make_temp_file(a1, a2, a3, a4, a5);
    } else {
        v1 = v1;
        v0 = v0;
        v2 = uu_mktemp::make_temp_dir(a1, a2, a3, a4, a5);
    }
    if v3 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v4
            field_16: v5
        };
    }
    v3 = v2;
    v4 = *((&v2 as &char + 8) as &i64);
    v5 = *((&v2 as &char + 16) as &i64);
    v14 = std::path::Path::file_name(v4, v5, v9, v13);
    if !v14 {
        core::option::unwrap_failed(); /* do not return */
    }
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v14, v15);
    if !v2 {
        v6 = std::path::Path::join(a1, a2, *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
        *((a0 + 16) as &i64) = *((&v6 as &char + 16) as &i64);
        *(a0 as &i192) = v6;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v4
            field_16: v5
        };
    }
}
