fn uu_fold::fold(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0xac]
    let v1: i64;  // [sp-0xa8]
    let v2: Result<struct16, struct4>;  // [sp-0xa0]
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: Result<struct4, struct8>;  // [sp-0x78]
    let v7: struct56;  // [bp-0x68], Other Possible Types: char
    let v9: i64;  // rbx
    let v10: struct8;  // rax
    let v11: i64;  // r15
    let v12: i64;  // r14
    let v13: i64;  // r12
    let v14: i8;  // r13b
    let v15: i64;  // rcx
    let v16: i64;  // rdx
    let v17: i64;  // r12
    let v18: i64;  // r14
    let v19: i64;  // r12
    let v20: i64;  // rcx
    let v21: i64;  // rdx

    v9 = a4;
    v4 = a0;
    v5 = a0 + a1 * 24;
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v10 {
        return 0;
    }
    v3 = a4;
    v11 = &v7;
    if a2 {
        loop {
            v12 = *((v10 + 8) as &i64);
            v13 = *((v10 + 16) as &i64);
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, "-") as i8;
            if v14 {
                v1 = std::io::stdio::stdin();
                v15 = &g_51a900;
                v16 = &v1;
            } else {
                v6 = std::fs::File::open(v12, v13);
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, v12, v13);
                match v2 {
                    Ok(_) => {
                        return v17;
                    },
                    Err(v0) => {
                        v15 = &g_51a8a8;
                        v16 = &v0;
                        v9 = v3;
                    },
                }
            }
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v16, v15);
            v17 = uu_fold::fold_file_bytewise(&v7, a3 as u64, v9);
            if v17 {
                break;
            }
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v10 {
                return 0;
            }
        }
    } else {
        loop {
            v18 = *((v10 + 8) as &i64);
            v19 = *((v10 + 16) as &i64);
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, "-") as i8;
            if v14 {
                v1 = std::io::stdio::stdin();
                v20 = &g_51a900;
                v21 = &v1;
            } else {
                v6 = std::fs::File::open(v18, v19);
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, v18, v19);
                v17 = v2 as i64;
                match v2 {
                    Ok(_) => {
                        return v17;
                    },
                    Err(v0) => {
                        v20 = &g_51a8a8;
                        v21 = &v0;
                        v9 = v3;
                    },
                }
            }
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v11, 0x2000, v21, v20);
            v17 = uu_fold::fold_file(v11, a3 as u64, v9);
            if v17 {
                break;
            }
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v10 {
                return 0;
            }
        }
    }
    return v17;
}
