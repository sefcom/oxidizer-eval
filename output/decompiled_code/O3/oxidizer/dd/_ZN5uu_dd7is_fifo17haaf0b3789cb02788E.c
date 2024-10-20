fn uu_dd::is_fifo(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i8;  // [bp-0x128]
    let v3: i1408;  // [sp-0xb0], Other Possible Types: Enum
    let v5: i64;  // rax

    v3 = std::sys::pal::unix::fs::stat(a0, a1);
    if v3 == 2 {
        v1 = *((&v3 as &char + 8) as &i64);
        v0 = 2;
    } else {
        memcpy(&v0, &v3, 176);
        if v0 != 2 {
            v5 = 0xf000 & v2;
            if v5 != 0x1000 {
                return 0;
            }
            return v5 | -0x100 | 1;
        }
    }
    return 0;
}
