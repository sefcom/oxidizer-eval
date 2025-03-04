fn uu_head::head_backwards_without_seek_file(a0: u32, a1: void*) -> u64 {
    let v0: struct48;  // [sp-0x38]
    let v2: i64;  // rax
    let v3: i64;  // rax

    v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
    v2 = *(a1 as &i64);
    if v2 == 1 {
        v3 = uu_head::read_but_last_n_lines(&v0, *((a1 + 8) as &i64), *((a1 + 43) as &i8));
    } else {
        if v2 as u32 != 3 {
            core::panicking::panic("internal error: entered unreachable code", "src/uu/head/src/head.rs"); /* do not return */
        }
        v3 = uu_head::read_but_last_n_bytes() as i64;
    }
    if v3 {
        return v3;
    }
    return 0;
}
