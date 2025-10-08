fn uu_fmt::parasplit::FileLines::match_anti_prefix(a0: i64, a1: u8, a2: u64) -> char {
    let v2: u8;  // al

    v2 = 1;
    if !((((0 ^ *((a0 + 24) as &i64)) & (0 ^ -(*((a0 + 24) as &i64)))) >> 63) as char) {
        v2 = uu_fmt::parasplit::FileLines::match_prefix_generic(*((a0 + 32) as &i64), *((a0 + 40) as &i64), a1, a2, *((a0 + 77) as &i8)) ^ 1;
    }
    return v2 & 1;
}
