fn uu_mktemp::exec(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: struct24;  // [sp-0x68], Other Possible Types: i192, Result<struct16, struct10>
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: struct24;  // [sp-0x38]
    let v8: i8;  // [bp+0x18]
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // rdi

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
    v12 = std::path::Path::file_name(v4, v5);
    if !v12 {
        v14 = "src/uu/mktemp/src/mktemp.rs";
    } else {
        v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v12, v13);
        match v2 {
            Ok(_) => {
                v6 = std::path::Path::join(a1, a2, *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
            },
            Err(_) => {
                v14 = "src/uu/mktemp/src/mktemp.rs";
            },
        }
    }
    core::option::unwrap_failed(v14); /* do not return */
}
