fn uu_chcon::fts::EntryRef::path(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x18]
    let v2: u64;  // rdx

    v2 = *((a0 + 64) as &i16);
    if !v2 {
        return 0;
    } else if *((a0 + 48) as &i64) {
        v0 = core::ffi::c_str::CStr::from_bytes_with_nul(*((a0 + 48) as &i64), v2 + 1);
        if v0.field_0 as i32 != 1 {
            return v0.field_8;
        }
        return 0;
    } else {
        return 0;
    }
}
