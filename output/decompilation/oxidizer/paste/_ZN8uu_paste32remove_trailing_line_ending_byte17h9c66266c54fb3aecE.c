fn uu_paste::remove_trailing_line_ending_byte(a0: i8, a1: i64) -> long long {
    let v1: u64;  // rax

    v1 = *((a1 + 16) as &i64);
    if v1 && *((*((a1 + 8) as &i64) + v1 - 1) as &i8) == a0 {
        v1 -= 1;
        *((a1 + 16) as &u64) = v1;
    }
    return v1;
}
