fn uu_od::multifilereader::MultifileReader::next_file(a0: &struct16) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: i352;  // [sp-0xc8], Other Possible Types: struct44, struct48
    let v2: i192;  // [sp-0x98], Other Possible Types: struct24
    let v3: i96;  // [sp-0x80], Other Possible Types: Result<struct4, struct8>
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: i8;  // [sp-0x58]
    let v9: i64;  // rax
    let v10: i64;  // rbp
    let v11: i64;  // r12
    let v12: i64;  // rdx
    let v13: i64;  // r12
    let v14: i64;  // r15
    let v15: i64;  // rax

    if *((a0 + 16) as &i64) {
        do {
            v2 = alloc::vec::Vec<T,A>::remove(a0, None, "src/uu/od/src/multifilereader.rs");
            v9 = v2;
            if v9 {
                if v9 == 1 {
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                    *((a0 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                    *((a0 + 32) as &&i64) = &g_543218;
                    return v15;
                }
                *((a0 + 24) as &i64) = v13;
                *((a0 + 32) as &i64) = v14;
                return v15;
            }
            v10 = *((&v2 as &char + 8) as &i64);
            v11 = *((&v2 as &char + 16) as &i64);
            v3 = std::fs::File::open(v10, v11);
            match v3 {
                Ok(_) => {
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v3 as &char + 4) as &i32) as u32 as u64);
                    *((a0 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                    v15 = &g_5431c0;
                    *((a0 + 32) as &i64) = v15;
                    return v15;
                },
                Err(v0) => {
                    v4 = uucore::util_name();
                    v5 = v12;
                    eprint!("{}: ", &v4);
                    v4 = 0;
                    v5 = v10;
                    v6 = v11;
                    v7 = 0;
                    eprintln!("{}: {}", &v4, &v0);
                },
            }
        } while (*((a0 + 16) as &i64));
    }
    *((a0 + 24) as &i64) = 0;
    return v15;
}
