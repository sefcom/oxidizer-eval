fn uu_od::multifilereader::MultifileReader::next_file(a0: &struct16) -> u64 {
    let v0: i64;  // [bp-0xd0]
    let v1: i384;  // [sp-0xc8], Other Possible Types: struct48, struct44
    let v2: i192;  // [sp-0x98], Other Possible Types: struct24
    let v3: i64;  // [sp-0x80], Other Possible Types: Result<struct4, struct8>
    let v4: i8;  // [bp-0x78]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i8;  // [sp-0x58]
    let v10: i64;  // rax
    let v11: i64;  // rbp
    let v12: i64;  // r12
    let v13: i64;  // rdx
    let v15: i64;  // r15
    let v16: i64;  // rax

    if *((a0 + 16) as &i64) {
        do {
            v2 = alloc::vec::Vec<T,A>::remove(a0, None, "src/uu/od/src/multifilereader.rs");
            v10 = v2;
            if v10 {
                if v10 == 1 {
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                    *((a0 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                    *((a0 + 32) as &&i64) = &g_543218;
                    return v16;
                }
                v15 = *((&v2 as &char + 16) as &i64);
                *((a0 + 24) as &i64) = *((&v2 as &char + 8) as &i64);
                *((a0 + 32) as &i64) = v15;
                return v16;
            }
            v11 = *((&v2 as &char + 8) as &i64);
            v12 = *((&v2 as &char + 16) as &i64);
            v3 = std::fs::File::open(v11, v12) as u64;
            match v3 {
                Ok(_) => {
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v3 as &char + 4) as &i32) as u32 as u64);
                    *((a0 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                    v16 = &g_5431c0;
                    *((a0 + 32) as &i64) = v16;
                    return v16;
                },
                Err(v0) => {
                    v5 = uucore::util_name();
                    v6 = v13;
                    eprint!("{:?}: ", &v5);
                    v5 = 0;
                    v6 = v11;
                    v7 = v12;
                    v8 = 0;
                    eprintln!("{:?}: {:?}", &v5, &v0);
                    *((a0 + 40) as &i8) = 1;
                },
            }
        } while (*((a0 + 16) as &i64));
    }
    *((a0 + 24) as &i64) = 0;
    return v16;
}
