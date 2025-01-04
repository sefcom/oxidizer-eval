fn uu_head::head_backwards_on_seekable_file(a0: u32, a1: void*) -> u64 {
    let v0: i128;  // [sp-0xc8], Other Possible Types: struct48, struct16
    let v1: i8;  // [bp-0x78]
    let v3: i64;  // rax
    let v4: i64;  // r15
    let v5: i64;  // rbx
    let v6: i64;  // rbx
    let v7: i64;  // rdx
    let v8: i64;  // rdx

    v3 = *(a1 as &i64);
    if v3 == 1 {
        if uu_head::find_nth_line_from_end() as i64 {
            return v5;
        }
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
        v5 = uu_head::read_n_bytes(&v0, v5, v7);
    } else {
        if v3 != 3 {
            core::panicking::panic(); /* do not return */
        }
        v4 = *((a1 + 8) as &i64);
        v0 = std::fs::File::metadata(a0);
        if v0 == 2 {
            v5 = *((&v0 as &char + 8) as &i64);
            return v5;
        }
        v6 = v1;
        if v6 <= v4 {
            return 0;
        }
        v0 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, a0);
        v5 = uu_head::read_n_bytes(&v0, v6 - v4, v8);
    }
    return v5;
}
