fn uu_paste::remove_trailing_line_ending_byte(a0: u8, a1: &u64) -> u64 {
    let v1: u64;  // rax

    v1 = a1[2];
    if v1 && *((a1[1] + v1 - 1) as &i8) == a0 {
        v1 -= 1;
        a1[2] = v1;
    }
    return v1;
}
