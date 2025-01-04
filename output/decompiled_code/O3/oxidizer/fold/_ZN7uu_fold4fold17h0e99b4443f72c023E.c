fn uu_fold::fold(a0: u32, a1: u32, a2: u8, a3: u32, a4: u32) -> u64 {
    let v0: i32;  // [sp-0xac]
    let v1: i64;  // [sp-0xa8]
    let v2: Result<struct16, struct12>;  // [sp-0xa0], Other Possible Types: i128
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: i64;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>
    let v7: i8;  // [bp-0x68], Other Possible Types: struct56
    let v9: i64;  // rbx
    let v10: struct8;  // rax
    let v11: i64;  // r15
    let v12: i64;  // r14
    let v13: i64;  // r12
    let v14: i8;  // r13b
    let v15: i64;  // rcx
    let v16: i64;  // rdx
    let v17: i64;  // rbx
    let v18: i64;  // r12
    let v19: i64;  // r14
    let v20: i64;  // r12
    let v21: i64;  // rcx
    let v22: i64;  // rdx
    let v23: i64;  // rbx

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
                if v2 {
                    return v18;
                }
                v0 = *((&v2 as &char + 8) as &i32);
                v15 = &g_51a8a8;
                v16 = &v0;
                v17 = v3;
            }
            v9 = v17;
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v16, v15);
            v18 = uu_fold::fold_file_bytewise(&v7, a3, v9);
            if v18 {
                break;
            }
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v10 {
                return 0;
            }
        }
    } else {
        loop {
            v19 = *((v10 + 8) as &i64);
            v20 = *((v10 + 16) as &i64);
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v20, "-") as i8;
            if v14 {
                v1 = std::io::stdio::stdin();
                v21 = &g_51a900;
                v22 = &v1;
            } else {
                v6 = std::fs::File::open(v19, v20);
                v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, v19, v20);
                v18 = v2;
                match v2 {
                    Ok(_) => {
                        return v18;
                    },
                    Err(_) => {
                        v0 = *((&v2 as &char + 8) as &i32);
                        v21 = &g_51a8a8;
                        v22 = &v0;
                        v23 = v3;
                    },
                }
            }
            v9 = v23;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v11, 0x2000, v22, v21);
            v18 = uu_fold::fold_file(v11, a3, v9);
            if v18 {
                break;
            }
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v10 {
                return 0;
            }
        }
    }
    if !v14 {
        return v18;
    }
    return v18;
}
