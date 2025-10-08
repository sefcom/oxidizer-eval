fn uu_head::head_backwards_file(a0: u64, a1: void*) -> long long {
    let v0: struct16;  // [bp-0xd0]
    let v1: u64;  // [bp-0x80]
    let v2: i8;  // [bp-0x78]
    let v4: core::result::Result<(), std::io::error::Error>;  // r12

    v0 = std::fs::File::metadata(a0);
    if v0.field_0 as i32 == 2 {
        return 1;
    }
    v4 = *(&v2 as &i64);
    if !uu_head::is_seekable(a0) || v1 <= v4 {
        return uu_head::head_backwards_without_seek_file(a0, a1);
    }
    return uu_head::head_backwards_on_seekable_file(a0, a1);
    return uu_head::head_backwards_without_seek_file(a0, a1);
}
