fn uu_head::head_backwards_file(a0: u64, a1: u64) -> u64 {
    let v0: struct16;  // [sp-0xd0], Other Possible Types: u128
    let v1: i8;  // [bp-0x80]
    let v2: i8;  // [bp-0x78]
    let v5: u64;  // r12

    v0 = std::fs::File::metadata(a0);
    if v0 as i32 == 2 {
        return *((&v0 as &char + 8) as &i64);
    }
    v5 = v2;
    if !(uu_head::is_seekable(a0) as i8 && v1 > 0x200) {
        return uu_head::head_backwards_without_seek_file(a0, a1);
    }
    return uu_head::head_backwards_on_seekable_file(a0, a1);
}
