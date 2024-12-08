fn uu_yes::splice::maybe_unsupported(a0: u32) -> u64 {
    let v0: u64;  // [sp-0x120]

    if a0 <= 38 {
        v0 = 0x4000400200;
        if (*((&v0 + ((a0 & 63) >> 3)) as &i8) >> (a0 & 63 & 7) & 1) {
            return 0;
        }
    }
    return a0 * 0x100000000 | 2;
}
