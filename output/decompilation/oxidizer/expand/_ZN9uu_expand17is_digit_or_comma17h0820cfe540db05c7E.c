fn uu_expand::is_digit_or_comma(a0: u32) -> long long {
    return a0 - 48 & 0xffffffffffffff00 | a0 == 44 | a0 - 48 < 10;
}
