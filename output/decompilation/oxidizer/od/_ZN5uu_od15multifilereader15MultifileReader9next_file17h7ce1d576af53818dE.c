fn uu_od::multifilereader::MultifileReader::next_file() -> : struct16 {
    let a0: i64;  // rsi
    let v1: iNone;  // [bp-0xc8]
    let v3: i64;  // [bp-0x90]
    let v4: i64;  // [bp-0x88]
    let v5: i32;  // [bp-0x7c]
    let v7: i64;  // [bp-0x70]
    let v8: i64;  // [bp-0x68]
    let v9: i64;  // [bp-0x60]
    let v10: i8;  // [bp-0x58]
    let v12: i64;  // rdi
    let v13: i64;  // rdx
    let v16: i64;  // rax
    let v18: iNone;  // [bp-0x98]
    let v19: iNone;  // [bp-0x80]

    if *((v12 + 16) as &i64) {
        do {
            v18 = alloc::vec::Vec<T,A>::remove(v12, None, "src/uu/od/src/multifilereader.rs");
            if v18 as i64 {
                if v18 as i64 == 1 {
                    v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                    *((v12 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                    *((v12 + 32) as &unsigned long) = v16;
                    return;
                }
                *((v12 + 24) as &unsigned long) = v3;
                *((v12 + 32) as &unsigned long) = v4;
                return;
            }
            v19 = std::fs::File::open(v3, v4);
            if let Ok(_) = v19 {
                v1 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v5 as u64);
                *((v12 + 24) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((v12 + 32) as &unsigned long) = v16;
                return;
            }
            v7 = uucore::util_name();
            v8 = v13;
            eprint!("{}: ", &v7);
            v7 = 0;
            v8 = v3;
            v9 = v4;
            v10 = 0;
            eprintln!("{}: {}", &v7, &v0);
            *((v12 + 40) as &i8) = 1;
        } while (*((v12 + 16) as &i64));
    }
    *((v12 + 24) as &i64) = 0;
    return;
}
