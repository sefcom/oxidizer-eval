fn uu_ls::is_hidden(a0: u32) -> u64 {
    let v0: i32;  // [sp-0x40], Other Possible Types: Result<struct16, struct10>
    let v1: struct24;  // [sp-0x28]
    let v5: i64;  // rdx
    let v6: i32;  // ebx

    v1 = std::fs::DirEntry::file_name(a0);
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v1.field_8, v1.field_16);
    match v0 {
        Err(_) => {
            return v6 as u64;
        },
        Ok(_) => {
            v0 = 0;
            core::slice::<impl [T]>::starts_with(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), core::char::methods::encode_utf8_raw(46, &v0), v5);
            return v6 as u64;
        },
    }
}
