fn uu_expand::is_digit_or_comma(a0: u64) -> u64 {
    let v1: u64;  // rax

    v1 = a0 - 48 & 4294967295;
    return v1 | -0x100 | a0 == 44 | v1 < 10;
}
