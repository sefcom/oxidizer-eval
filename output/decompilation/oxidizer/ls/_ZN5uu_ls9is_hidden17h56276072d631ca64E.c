fn uu_ls::is_hidden(a0: void*) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x50], Other Possible Types: struct36
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: struct24;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v6: u32;  // ebp
    let v7: u64;  // rdx
    let v9: &mut [u8];  // rax:rdx

    v3 = std::fs::DirEntry::file_name(a0);
    v0 = core::str::converts::from_utf8(v4, v3.field_16);
    if let Ok(_) = v0 {
        v0 = 0;
        v9 = core::char::methods::encode_utf8_raw(46, &v0, v7);
        v6 = core::slice::<impl [T]>::starts_with(v1, v2, v9.data_ptr, v9.length) as u32;
    }
    return v6;
}
