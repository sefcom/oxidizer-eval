fn uu_head::head_backwards_without_seek_file(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v2 = *(a1 as &i64);
    if v2 == 1 {
        return uu_head::read_but_last_n_lines(a0, *((a1 + 8) as &i64), *((a1 + 43) as &i8));
    } else if v2 != 3 {
        v0 = v2;
        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
    } else {
        return uu_head::read_but_last_n_bytes(a0, *((a1 + 8) as &i64));
    }
}
