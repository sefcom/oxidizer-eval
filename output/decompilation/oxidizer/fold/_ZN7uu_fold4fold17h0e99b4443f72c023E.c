fn uu_fold::fold(a0: i64, a1: i64, a2: i8, a3: i32, a4: i64) -> long long {
    let v0: u64;  // [bp-0xac]
    let v1: std::io::stdio::Stdin;  // [bp-0xa8]
    let v2: struct16;  // [bp-0xa0]
    let v3: u64;  // [bp-0x90]
    let v4: struct16;  // [bp-0x88]
    let v5: u128;  // [bp-0x78]
    let v6: struct56;  // [bp-0x68], Other Possible Types: u8
    let v8: u64;  // rbx
    let v9: i64;  // rax
    let v10: i64;  // r15
    let v11: u64;  // r14
    let v12: u64;  // r12
    let v13: u8;  // r13b
    let v14: u64;  // rcx
    let v15: i64;  // rdx
    let v16: u64;  // rbx
    let v18: u64;  // rax
    let v20: u64;  // r14
    let v21: u64;  // r12
    let v22: u64;  // rcx
    let v23: i64;  // rdx
    let v24: u64;  // rbx
    let v30: u64;  // [bp-0xa0]

    v8 = a4;
    v4 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v4 = struct16 {
        field_0: a0
        field_8: a0 + a1 * 24
    };
    v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    if !v9 {
        return 0;
    }
    v3 = a4;
    v10 = &v6;
    if a2 {
        do {
            v11 = *((v9 + 8) as &i64);
            v12 = *((v9 + 16) as &i64);
            v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, "-") as i8;
            if v13 {
                v1 = std::io::stdio::stdin();
                v14 = &g_51a900;
                v15 = &v1;
                v16 = v8;
                goto LABEL_4b187d;
            }
            std::fs::File::open(&v5, v11, v12);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, v11, v12);
            if !(!v2.field_0) {
                break;
            }
            v0 = v2.field_8 as i32;
            v14 = &g_51a8a8;
            v15 = &v0;
            v16 = v3;
LABEL_4b187d:
            v8 = v16;
            v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v15, v14);
            v18 = uu_fold::fold_file_bytewise(&v6, a3, v8);
            if !(!v18) {
                break;
            }
        } while ((v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4), v9));
    } else {
        do {
            v20 = *((v9 + 8) as &i64);
            v21 = *((v9 + 16) as &i64);
            v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v21, "-") as i8;
            if v13 {
                v1 = std::io::stdio::stdin();
                v22 = &g_51a900;
                v23 = &v1;
                v24 = v8;
                goto LABEL_4b1973;
            }
            std::fs::File::open(&v5, v20, v21);
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, v20, v21);
            if v2.field_0 {
                return v30;
            }
            v0 = v2.field_8 as i32;
            v22 = &g_51a8a8;
            v23 = &v0;
            v24 = v3;
LABEL_4b1973:
            v8 = v24;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v10, 0x2000, v23, v22);
            v18 = uu_fold::fold_file(v10, a3, v8);
            if v18 {
                return v18;
            }
        } while ((v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4), v9));
    }
    return 0;
}
