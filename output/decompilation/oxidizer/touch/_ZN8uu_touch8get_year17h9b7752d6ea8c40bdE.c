fn uu_touch::get_year(a0: u32, a1: u8) -> long long {
    return a0 * 2 * 5 & 0xffffff00 | a0 * 10 + a1 - 16;
}
