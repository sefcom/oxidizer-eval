fn uu_numfmt::format::format_and_print(a0: u32, a1: u32, a2: u32, a3: void*, a4: u32, a5: u32) -> u64 {
    if a3->field_70 != 0x8000000000000000 {
        uu_numfmt::format::format_and_print_delimited(a0, a1, a2, a3, a4, a5);
        return a0;
    }
    uu_numfmt::format::format_and_print_whitespace(a0, a1, a2, a3);
    return a0;
}
