fn uu_cat::write_nonprint_to_end(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x4c], Other Possible Types: u64
    let v1: core::fmt::Arguments;  // [bp-0x4c]
    let v2: core::fmt::rt::Argument;  // [bp-0x4c]
    let v3: u64;  // [bp-0x4c]
    let v4: core::fmt::Arguments;  // [bp-0x4a], Other Possible Types: core::fmt::rt::Argument
    let v5: u8;  // [bp-0x49]
    let v6: alloc::string::String;  // [bp-0x40]
    let v7: u64;  // [bp-0x38]
    let v9: core::cell::UnsafeCell<u64>;  // rax
    let v10: std::io::stdio::StderrLock;  // r12
    let v11: std::io::stdio::StderrLock;  // r12
    let v12: u64;  // rax
    let v14: i64;  // rsi
    let v15: u64;  // rdx
    let v16: std::io::stdio::Stdin;  // rdi
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
            v14 = &g_41ce2a.value;
            v16 = a2;
            goto LABEL_4b0e4f;
        }
        if v12 == 10 {
            return v11;
        }
        if (v12 & 255) < 32 {
            v0 = struct2 {
                field_0: 94
                field_1: v12 as u8 | 64
            };
            v15 = 2;
            v0 = v2;
            goto LABEL_4b0f00;
        }
        if (v12 - 32 & 255) < 95 {
            v0 = v12;
            v15 = 1;
            goto LABEL_4b0f00;
        }
        if v12 < 160 {
            *(&v3 as &i16) = 11597;
            v4 = 94;
            v5 = v12 - 64;
            v15 = 4;
            v0 = v1;
            goto LABEL_4b0f00;
        } else if v12 + 96 < 95 {
            *(&v0 as &i16) = 11597;
            v4 = v12 & 127;
            v15 = 3;
            v0 = v1;
LABEL_4b0f00:
            v1 = v0;
            v14 = &v1;
            v16 = a2;
            goto LABEL_4b0e4f;
        } else {
            v15 = 4;
            v14 = &g_413f58.value;
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
    }
}
