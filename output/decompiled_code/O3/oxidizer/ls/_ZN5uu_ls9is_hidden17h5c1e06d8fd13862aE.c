fn uu_ls::is_hidden(a0: i64) -> u64 {
    let v0: struct4;  // [sp-0x40], Other Possible Types: Result<struct16, struct10>, i128
    let v1: i8;  // [bp-0x30]
    let v2: i192;  // [sp-0x28], Other Possible Types: struct24
    let v5: i64;  // rbx
    let v6: i64;  // r14
    let v7: i64;  // rdx

    v2 = std::fs::DirEntry::file_name(a0);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
    if v0 {
        return 0;
    }
    v5 = *((&v0 as &char + 8) as &i64);
    v6 = v1;
    v0 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    return core::slice::<impl [T]>::starts_with(v5, v6, core::char::methods::encode_utf8_raw(46, &v0), v7) as i32;
}
