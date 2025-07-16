fn uu_fold::fold(a0: i64, a1: i64, a2: i8, a3: i32, a4: i64) -> long long {
    let v0: u64;  // [bp-0xac]
    let v1: std::io::stdio::Stdin;  // [bp-0xa8]
    let v2: Result<struct16, struct12>;  // [bp-0xa0]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: u128;  // [bp-0x78]
    let v7: u8;  // [bp-0x68], Other Possible Types: struct56
    let v9: u64;  // rbx
    let v10: struct8;  // rax
    let v11: i64;  // r15
    let v12: u64;  // r14
    let v13: u64;  // r12
    let v14: u8;  // r13b
    let v15: u64;  // rcx
    let v16: i64;  // rdx
    let v17: u64;  // rbx
    let v19: u64;  // rax
    let v21: u64;  // r14
    let v22: u64;  // r12
    let v23: u64;  // rcx
    let v24: i64;  // rdx
    let v25: u64;  // rbx
    let v30: u64;  // [bp-0xa0]

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
        do {
            v12 = *((v10 + 8) as &i64);
            v13 = *((v10 + 16) as &i64);
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, "-") as i8;
            if v14 {
                v1 = std::io::stdio::stdin();
                v15 = &g_51a900;
                v16 = &v1;
                v17 = v9;
                goto LABEL_4b187d;
            }
            std::fs::File::open(&v6, v12, v13);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, v12, v13);
            if !(!v2 as i64) {
                break;
            }
            v0 = *((&v2 as &char + 8) as &i32);
            v15 = &g_51a8a8;
            v16 = &v0;
            v17 = v3;
LABEL_4b187d:
            v9 = v17;
            v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v16, v15);
            v19 = uu_fold::fold_file_bytewise(&v7, a3, v9);
            if !(!v19) {
                break;
            }
        } while ((v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v10));
    } else {
        do {
            v21 = *((v10 + 8) as &i64);
            v22 = *((v10 + 16) as &i64);
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "-") as i8;
            if v14 {
                v1 = std::io::stdio::stdin();
                v23 = &g_51a900;
                v24 = &v1;
                v25 = v9;
                goto LABEL_4b1973;
            }
            std::fs::File::open(&v6, v21, v22);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, v21, v22);
            if let Ok(_) = v2 {
                return v30;
            }
            v0 = *((&v2 as &char + 8) as &i32);
            v23 = &g_51a8a8;
            v24 = &v0;
            v25 = v3;
LABEL_4b1973:
            v9 = v25;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v11, 0x2000, v24, v23);
            v19 = uu_fold::fold_file(v11, a3, v9);
            if v19 {
                return v19;
            }
        } while ((v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v10));
    }
    return 0;
}
