fn uu_echo::Base::ascii_to_number(a0: u8, a1: u32) -> u8 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    if a0 {
        v0 = v2;
        return uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number(a1) as i8;
    }
    return a1 - 48 < 8;
}
