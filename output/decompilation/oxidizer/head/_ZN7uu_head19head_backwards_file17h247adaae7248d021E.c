fn uu_head::head_backwards_file(a0: u32, a1: u64) -> u64 {
    let v0: struct16;  // [sp-0xd0]
    let v1: i8;  // [bp-0x80]
    let v2: i8;  // [bp-0x78]
    let v5: u64;  // r12
    let v7: u64;  // rcx

    v0 = std::fs::File::metadata(a0);
    if v0.field_0 as i32 == 2 {
        return v0.field_8;
    }
    v5 = *(&v2 as &i64);
    v7 = (v5 < 536870913 ? v5 : 0x200);
    if !v5 {
        v7 = 0x200;
    }
    if !(uu_head::is_seekable(a0) as i8 && *(&v1 as &i64) > v7) {
        return uu_head::head_backwards_without_seek_file(a0, a1);
    }
    return uu_head::head_backwards_on_seekable_file(a0, a1);
}
