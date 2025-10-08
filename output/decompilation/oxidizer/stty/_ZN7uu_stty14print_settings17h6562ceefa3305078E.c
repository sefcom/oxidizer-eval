fn uu_stty::print_settings(a0: i64, a1: i64) -> u64 {
    let v1: u64;  // rax
    let v2: u8;  // bpl
    let v3: u64;  // rax

    if *((a1 + 41) as &i8) {
        uu_stty::print_in_save_format(a0);
    } else {
        v1 = uu_stty::print_terminal_size(a0, a1);
        if v1 != 134 {
            return v1;
        }
        v2 = *((a1 + 40) as &i8);
        v3 = uu_stty::print_control_chars(a0, v2);
        if v3 != 134 {
            return v3;
        }
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
    }
    return 134;
}
