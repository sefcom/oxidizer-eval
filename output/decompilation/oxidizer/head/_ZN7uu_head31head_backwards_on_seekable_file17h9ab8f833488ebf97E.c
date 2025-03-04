fn uu_head::head_backwards_on_seekable_file(a0: u32, a1: void*) -> u64 {
    let v0: struct48;  // [sp-0xc8], Other Possible Types: struct16
    let v1: i8;  // [bp-0x78]
    let v3: i64;  // rax
    let v4: i64;  // r15
    let v5: i64;  // rdx
    let v7: i64;  // rbx
    let v8: i64;  // rbx
    let v11: i64;  // rbx

    v3 = *(a1 as &i64);
    if v3 == 1 {
        v7 = v5;
        if uu_head::find_nth_line_from_end() as i64 {
            return v7;
        }
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
        uu_head::read_n_bytes(&v0, v5);
    } else {
        if v3 as u32 != 3 {
            core::panicking::panic("internal error: entered unreachable code", "src/uu/head/src/head.rs"); /* do not return */
        }
        v4 = *((a1 + 8) as &i64);
        v0 = std::fs::File::metadata(a0);
        if v0.field_0 as i32 == 2 {
            v7 = v0.field_8;
            return v7;
        }
        v8 = *(&v1 as &i64);
        if v8 <= v4 {
            return 0;
        }
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
        uu_head::read_n_bytes(&v0, v8 - v4);
    }
    v7 = v11;
    return v7;
}
