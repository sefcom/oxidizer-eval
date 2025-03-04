fn uu_mktemp::exec(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32, a8: u8) -> u64 {
    let v0: struct24;  // [sp-0x68], Other Possible Types: int
    let v1: Result<struct16, struct10>;  // [sp-0x68]
    let v2: i64;  // [sp-0x50]
    let v3: i64;  // [sp-0x48]
    let v4: i64;  // [sp-0x40]
    let v5: struct24;  // [sp-0x38]
    let v9: i64;  // rax
    let v10: i64;  // rdi

    if !a8 {
        v0 = uu_mktemp::make_temp_file(a1, a2, a3, a4, a5, a6, a7);
    } else {
        v0 = uu_mktemp::make_temp_dir(a1, a2, a3, a4, a5, a6, a7);
    }
    if v2 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v3
            field_16: v4
        };
    }
    v2 = v0 as i64;
    v3 = (&v0)[8] as i64;
    v4 = (&v0)[16] as i64;
    v9 = std::path::Path::file_name(v3, v4);
    if !v9 {
        v10 = "src/uu/mktemp/src/mktemp.rs";
    } else {
        v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v9, a2);
        match v1 {
            Ok(_) => {
                v5 = std::path::Path::join(a1, a2, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
            },
            Err(_) => {
                v10 = "src/uu/mktemp/src/mktemp.rs";
            },
        }
    }
    core::option::unwrap_failed(v10); /* do not return */
}
