fn uu_fmt::parasplit::FileLines::match_anti_prefix(a0: i64, a1: i32, a2: i32) -> char {
    let v2: u8;  // al

    v2 = 1;
    if *((a0 + 24) as &i64) != 0x8000000000000000 {
        v2 = uu_fmt::parasplit::FileLines::match_prefix_generic(*((a0 + 32) as &i64), *((a0 + 40) as &i64), a1, a2, *((a0 + 77) as &i8)) as i8 ^ 1;
    }
    return v2 & 1;
}
