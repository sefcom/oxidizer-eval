fn uu_truncate::truncate(a0: i8, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v1: u8;  // dil
    let v2: u64;  // r15
    let v3: u64;  // rax

    v1 = a0 ^ 1;
    v2 = *(a3 as &i64);
    if (((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63) as char {
        if v2 != 0x8000000000000000 {
            v3 = uu_truncate::truncate_size_only(*((a3 + 8) as &i64), *((a3 + 16) as &i64), a4, a5, v1);
        } else {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
    } else {
        if v2 == 0x8000000000000000 {
            v3 = uu_truncate::truncate_reference_file_only(*((a2 + 8) as &i64), *((a2 + 16) as &i64), a4, a5, v1);
        } else {
            v3 = uu_truncate::truncate_reference_and_size(*((a2 + 8) as &i64), *((a2 + 16) as &i64), *((a3 + 8) as &i64), *((a3 + 16) as &i64), a4, a5, v1);
        }
    }
    return v3;
}
