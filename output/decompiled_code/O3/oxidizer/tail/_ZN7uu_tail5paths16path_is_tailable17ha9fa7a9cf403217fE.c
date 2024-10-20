fn uu_tail::paths::path_is_tailable(a0: u32, a1: u32) -> u64 {
    let v0: i1408;  // [sp-0xc8], Other Possible Types: Enum
    let v2: i64;  // rbx
    let v3: i64;  // rbx
    let v4: i32;  // eax

    v3 = v2 | -0x100 | 1;
    if !std::path::Path::is_file(a0, a1) as i8 {
        v0 = std::sys::pal::unix::fs::stat(a0, a1);
        if v0 == 2 || (v0 = std::sys::pal::unix::fs::stat(a0, a1), v0 == 2) {
            v3 = 0;
        } else {
            v4 = 0xf000 & *((&v0 as &char + 56) as &i32);
            if v4 != 0x2000 && v4 != 0x8000 {
                v3 = v3 | -0x100 | v4 == 0x1000;
            }
        }
    }
    return v3 & 4294967295;
}
