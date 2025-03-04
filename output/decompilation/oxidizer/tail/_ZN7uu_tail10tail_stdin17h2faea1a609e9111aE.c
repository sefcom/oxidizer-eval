fn uu_tail::tail_stdin(a0: u32, a1: u32, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xe8]
    let v1: Option<struct24>;  // [sp-0xd8]
    let v2: i64;  // [sp-0xc8]
    let v3: struct24;  // [sp-0xb8], Other Possible Types: struct48
    let v4: struct24;  // [sp-0x88], Other Possible Types: int
    let v5: iNone;  // [bp-0x78]
    let v6: iNone;  // [sp-0x68]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: Option<struct24>;  // [sp-0x40]
    let v12: i64;  // rdx
    let v13: i64;  // r15
    let v14: i64;  // r14
    let v15: iNone;  // xmm0
    let v16: i64;  // rax
    let v17: i64;  // rbx

    v9 = uu_tail::paths::Input::resolve(a2);
    match v9 {
        Some(_) => {
            v1 = v9;
            v3 = same_file::Handle::stdin();
            if *((&v3.field_16 as &char + 4) as &i8) != 2 {
                v4 = v3;
                v7 = <std::fs::File as std::io::Seek>::seek(same_file::Handle::as_file_mut(&v4), 2, 0);
                v8 = v12;
            }
            v0 = 0;
            if uu_tail::tail_file(a0, a1, a2, *((&v1 as &char + 8) as &i64), v2, a3) {
                v16 = v17;
                return v16;
            }
        },
        None => {
            uu_tail::paths::HeaderPrinter::print_input(a1, a2);
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            if uu_tail::unbounded_tail(&v3, a0) {
                return v16;
            }
            v13 = *((a2 + 8) as &i64);
            v14 = *((a2 + 16) as &i64);
            v15 = *(&v3.field_0 as &i128);
            v6 = *(&v3.field_32 as &i128);
            *(&v5 as &u128) = v3.field_16;
            v4 = v15;
            v16 = uu_tail::follow::watch::Observer::add_stdin(a3, v13, v14, alloc::boxed::Box<T>::new(&v4), &g_5bb9d0, 1);
            if v16 {
                return v16;
            }
        },
    }
    return 0;
}
