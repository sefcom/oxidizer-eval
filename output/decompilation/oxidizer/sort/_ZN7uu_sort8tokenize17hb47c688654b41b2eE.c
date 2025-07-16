fn uu_sort::tokenize(a0: i64, a1: i64, a2: i32, a3: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    if !*((a3 + 16) as &i64) {
        return uu_sort::tokenize_default(a0, a1, a3);
    }
    v0 = v2;
    core::panicking::panic("assertion failed: token_buffer.is_empty()"); /* do not return */
}
