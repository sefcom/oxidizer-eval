fn uu_tail::tail_stdin(a0: u32, a1: u32, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xe8]
    let v1: i192;  // [bp-0xd8]
    let v2: i64;  // [sp-0xc8]
    let v3: i384;  // [sp-0xb8], Other Possible Types: struct48, struct24
    let v4: i128;  // [sp-0x88]
    let v5: i64;  // [bp-0x78]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: i192;  // [sp-0x40], Other Possible Types: Option<struct24>
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // r15
    let v15: i64;  // r14
    let v16: i128;  // xmm0

    v9 = uu_tail::paths::Input::resolve(a2, a2, a3, a4, a5);
    match v9 {
        Some(_) => {
            v1 = v9;
            v3 = same_file::Handle::stdin();
            v5 = *((&v3 as &char + 16) as &i64);
            v4 = v3;
            v7 = <std::fs::File as std::io::Seek>::seek(same_file::Handle::as_file_mut(&v4), 2);
            v8 = v13;
            v0 = 0;
            v12 = uu_tail::tail_file(a0, a1, a2, *((&v1 as &char + 8) as &i64), v2, a3);
            if v12 {
LABEL_500a4b:
                return v12;
            }
        },
        None => {
            uu_tail::paths::HeaderPrinter::print_input(a1, a2);
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            v12 = uu_tail::unbounded_tail(&v3, a0, v11);
            if v12 {
                goto LABEL_500a4b;
            } else {
                v14 = *((a2 + 8) as &i64);
                v15 = *((a2 + 16) as &i64);
                v16 = v3;
                v6 = *((&v3 as &char + 32) as &i128);
                v5 = *((&v3 as &char + 16) as &i128);
                v4 = v16;
                v12 = uu_tail::follow::watch::Observer::add_stdin(a3, v14, v15, alloc::boxed::Box<T>::new(&v4), &g_5bb9d0, 1);
                if v12 {
                    return v12;
                }
            }
        },
    }
    return 0;
}
