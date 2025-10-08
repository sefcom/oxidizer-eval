fn uu_sort::tokenize(a0: i64, a1: i64, a2: i32, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    if *((a3 + 16) as &i64) {
        v0 = v2;
        core::panicking::panic("assertion failed: token_buffer.is_empty()"); /* do not return */
    } else if a2 != 0x110000 {
        return uu_sort::tokenize_with_separator(a0, a1, a2, a3);
    } else {
        return uu_sort::tokenize_default(a0, a1, a3);
    }
}
