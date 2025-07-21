fn uu_head::head_backwards_without_seek_file(a0: i64, a1: i64) -> long long {
    let v0: struct48;  // [bp-0x38]
    let v2: u64;  // rax

    v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
    if *(a1 as &i64) == 1 {
        v2 = uu_head::read_but_last_n_lines(&v0, *((a1 + 8) as &i64), *((a1 + 43) as &i8));
    } else if *(a1 as &i64) == 3 {
        v2 = uu_head::read_but_last_n_bytes(&v0, *((a1 + 8) as &i64)) as i64;
    } else {
        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
    }
    return 0;
}
