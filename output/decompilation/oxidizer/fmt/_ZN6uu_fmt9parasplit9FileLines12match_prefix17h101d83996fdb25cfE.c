fn uu_fmt::parasplit::FileLines::match_prefix(a0: i64, a1: i64, a2: i64) -> long long {
    if *(a0 as &i64) != 0x8000000000000000 {
        return uu_fmt::parasplit::FileLines::match_prefix_generic(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a1, a2, *((a0 + 76) as &i8));
    }
    return 9223372036854775809;
}
