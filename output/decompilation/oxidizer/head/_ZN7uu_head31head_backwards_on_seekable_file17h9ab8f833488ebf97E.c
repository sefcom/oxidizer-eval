fn uu_head::head_backwards_on_seekable_file(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8], Other Possible Types: struct48
    let v1: struct48;  // [bp-0xc8]
    let v3: u64;  // rdx
    let v4: u64;  // rdx
    let v5: core::result::Result<u64, std::io::error::Error>;  // rax

    if *(a1 as &i64) != 1 {
        if *(a1 as &i64) == 3 {
            v0 = std::fs::File::metadata(a0);
            if v0 as i32 == 2 {
                return *((&v0 as &char + 8) as &i64);
            } else if *((&v0 as &char + 80) as &i64) > *((a1 + 8) as &i64) {
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
                v5 = uu_head::read_n_bytes(&v1, *((&v0 as &char + 80) as &i64) - *((a1 + 8) as &i64));
            } else {
                return 0;
            }
        } else {
            core::panicking::panic("internal error: entered unreachable code"); /* do not return */
        }
    } else {
        if !uu_head::find_nth_line_from_end(a0, *((a1 + 8) as &i64), *((a1 + 43) as &i8)) as i64 {
            v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
            v5 = uu_head::read_n_bytes(&v0, v4);
        } else {
            return v3;
        }
    }
    return v5;
}
