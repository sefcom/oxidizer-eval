fn uu_echo::Base::ascii_to_number(a0: i8, a1: i8) -> long long {
    let v3: u64;  // rax

    if !a0 {
        return v3 & -0x100 | a1 - 48 < 8;
    }
    return uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number(a1);
}
