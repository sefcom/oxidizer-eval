fn uu_cp::handle_no_preserve_mode(a0: u8, a1: u8, a2: u32) -> u64 {
    let v1: u32;  // eax
    let v2: u64;  // rax

    if a1 {
        v1 = 438;
    } else {
        v1 = a2 & 511;
    }
    v2 = (a0 ? a2 : v1);
    return v2;
}
