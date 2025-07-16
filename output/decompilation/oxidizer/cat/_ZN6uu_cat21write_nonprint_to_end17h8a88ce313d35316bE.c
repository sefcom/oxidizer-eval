fn uu_cat::write_nonprint_to_end(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x4c]
    let v1: u64;  // [bp-0x4c]
    let v2: u64;  // [bp-0x4c]
    let v4: u8;  // [sp-0x4a]
    let v5: u8;  // [bp-0x49]
    let v6: alloc::string::String;  // [bp-0x40]
    let v7: u64;  // [bp-0x38]
    let v9: struct8;  // rax
    let v10: std::io::stdio::StderrLock;  // r12
    let v11: std::io::stdio::StderrLock;  // r12
    let v12: u64;  // rax
    let v14: i64;  // rsi
    let v15: u64;  // rdx
    let v16: u64;  // rdi
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v20: u64;  // r12

    v6 = a0;
    v7 = a1 + a0;
    v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    v10 = 0;
    if !v9 {
        return 0;
    }
    loop {
        v11 = v10;
        v12 = *(v9 as &i8);
        if v12 == 9 {
            v14 = a3;
            v15 = a4;
            v16 = a2;
            goto LABEL_4b0e4f;
        }
        if v12 == 127 {
            v15 = 2;
            v14 = &g_41ce2a.field_0;
            v16 = a2;
            goto LABEL_4b0e4f;
        }
        if v12 == 10 {
            return v11;
        }
        if (v12 & 255) >= 32 && (v12 - 32 & 255) >= 95 {
            if v12 < 160 {
                *(&v1 as &i16) = 11597;
                v4 = 94;
                v5 = v12 - 64;
                v15 = 4;
                goto LABEL_4b0f00;
            }
            if v12 + 96 < 95 {
                *(&v2 as &i16) = 11597;
                v4 = v12 & 127;
                v15 = 3;
                goto LABEL_4b0f00;
            } else {
                v15 = 4;
                v14 = &g_413f58.field_0;
                v16 = a2;
LABEL_4b0e4f:
                v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v16, v14, v15);
                core::result::Result<T,E>::unwrap(v19, "src/uu/cat/src/cat.rs");
                v20 = v11 + 1;
                v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                v10 = v20;
                if !v9 {
                    return v11 + 1;
                }
            }
        } else {
LABEL_4b0f00:
            v14 = &v0;
            v16 = a2;
            goto LABEL_4b0e4f;
        }
    }
}
