fn uu_fold::fold(a0: i64, a1: i64, a2: i8, a3: i8, a4: i64) -> u64 {
    let v0: u32;  // [bp-0xac]
    let v1: u64;  // [bp-0xa8]
    let v3: std::io::stdio::Stdin;  // [bp-0xa0]
    let v4: Result<struct16, struct12>;  // [bp-0x98]
    let v5: u128;  // [bp-0x78]
    let v6: struct56;  // [bp-0x68]
    let v8: u64;  // r14
    let v9: void*;  // rbx
    let v10: u64;  // r12
    let v11: u64;  // r13
    let v12: i8;  // r15b
    let v13: u64;  // rdx
    let v14: i64;  // rsi
    let v15: u64;  // r14
    let v16: core::fmt::rt::Argument;  // rax
    let v17: u64;  // rbx
    let v18: struct640;  // rbp
    let v19: u64;  // r12
    let v20: u64;  // r13
    let v21: u64;  // rdx
    let v22: i64;  // rsi
    let v23: u64;  // r14
    let v24: u64;  // [bp-0x98]

    if !a1 {
        return 0;
    }
    v8 = a0;
    if a2 {
        v1 = a1 * 24;
        v9 = 0;
        do {
            v10 = *((8 + v8 + v9 as &u8) as &i64);
            v11 = *((16 + v8 + v9 as &u8) as &i64);
            v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, "-");
            if v12 {
                v3 = std::io::stdio::stdin();
                v13 = &g_4e6b38;
                v14 = &v3;
                v15 = v8;
                goto LABEL_45b83d;
            }
            std::fs::File::open(&v5, v10, v11);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, v10, v11);
            if let Ok(_) = v4 {
                break;
            }
            v0 = *((&v4 as &char + 8) as &i32);
            v13 = &g_4e6ae0;
            v14 = &v0;
            v15 = a0;
LABEL_45b83d:
            v8 = v15;
            v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v14, v13);
            v16 = uu_fold::fold_file_bytewise(&v6, a3, a4);
            if v16 {
                break;
            }
            v9 += 24;
        } while (v1 != v9);
    } else {
        do {
            v19 = *((v8 + v18 + 8) as &i64);
            v20 = *((v8 + v18 + 16) as &i64);
            v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v20, "-");
            if v12 {
                v3 = std::io::stdio::stdin();
                v21 = &g_4e6b38;
                v22 = &v3;
                v23 = v8;
                goto LABEL_45b93f;
            }
            std::fs::File::open(&v5, v19, v20);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, v19, v20);
            if let Ok(_) = v4 {
                return v24;
            }
            v0 = *((&v4 as &char + 8) as &i32);
            v21 = &g_4e6ae0;
            v22 = &v0;
            v23 = a0;
LABEL_45b93f:
            v8 = v23;
            v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v22, v21);
            v16 = uu_fold::fold_file(&v6, v1, a4);
            if v16 {
                return v16;
            }
            v18 += 24;
        } while (v17 != v18);
    }
    return 0;
}
