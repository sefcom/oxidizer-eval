fn uu_ls::is_hidden(a0: u32) -> u64 {
    let v0: Result<struct16, struct10>;  // [sp-0x40], Other Possible Types: struct4, i136
    let v1: i192;  // [sp-0x28], Other Possible Types: struct24
    let v4: i64;  // rbx
    let v5: i64;  // r14
    let v6: i64;  // rdx

    v1 = std::fs::DirEntry::file_name(a0);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
    if v0 {
        return 0;
    }
    v4 = *((&v0 as &char + 8) as &i64);
    v5 = v0;
    v0 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    return core::slice::<impl [T]>::starts_with(v4, v5, core::char::methods::encode_utf8_raw(46, &v0), v6) as i32;
}
