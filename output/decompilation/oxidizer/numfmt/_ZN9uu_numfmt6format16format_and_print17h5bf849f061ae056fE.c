fn uu_numfmt::format::format_and_print(a0: u64, a1: u64, a2: u64, a3: i64) -> long long {
    if (((0 ^ *((a3 + 112) as &i64)) & (0 ^ -(*((a3 + 112) as &i64)))) >> 63) as char {
        uu_numfmt::format::format_and_print_whitespace(a0, a1, a2, a3);
    } else {
        uu_numfmt::format::format_and_print_delimited(a0, a1, a2);
    }
    return a0;
}
