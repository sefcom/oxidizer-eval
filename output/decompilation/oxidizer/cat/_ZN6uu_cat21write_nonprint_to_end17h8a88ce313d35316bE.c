fn uu_cat::write_nonprint_to_end(a0: u32, a1: u32, a2: u32, a3: &u8, a4: u32) -> u64 {
    let v0: u16;  // [sp-0x4c]
    let v1: u8;  // [sp-0x4b]
    let v2: u8;  // [sp-0x4a]
    let v3: u8;  // [sp-0x49]
    let v4: u64;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v7: struct8;  // rax
    let v8: void*;  // r12
    let v9: u64;  // rax
    let v10: u64;  // 4096
    let v11: &u8;  // 4096
    let v12: u64;  // 4096
    let v16: u64;  // rdx

    v4 = a0;
    v5 = a1 + a0;
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    v8 = 0;
    if !v7 {
        return 0;
    }
    loop {
        v9 = *(v7 as &i8);
        if v9 == 9 {
            v10 = a2;
            v11 = a3;
            v12 = a4;
            goto LABEL_4b0e4f;
        }
        if v9 == 127 {
            v11 = &g_41ce2a;
            v12 = 2;
            goto LABEL_4b0e4f;
        }
        if v9 == 10 {
            return v8;
        }
        if (v9 & 255) < 32 {
            v0 = 94;
            v1 = v9 | 64;
            v16 = 2;
            goto LABEL_4b0f00;
        }
        if (v9 - 32 & 255) < 95 {
            v0 = v9;
            v16 = 1;
            goto LABEL_4b0f00;
        }
        if v9 < 160 {
            v0 = 11597;
            v2 = 94;
            v3 = v9 - 64;
            v16 = 4;
            goto LABEL_4b0f00;
        } else if (v9 + 96 & 255) >= 95 {
            v11 = &g_413f58;
            v12 = 4;
LABEL_4b0e4f:
            core::result::Result<T,E>::unwrap(<std::io::stdio::StdoutLock as std::io::Write>::write_all(v10, v11, v12), "src/uu/cat/src/cat.rs");
            v8 += 1;
            v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v7 {
                return v8;
            }
        } else {
            v0 = 11597;
            v2 = v9 & 127;
            v16 = 3;
LABEL_4b0f00:
            v11 = stack_base + -76;
            v12 = v16;
            goto LABEL_4b0e4f;
        }
    }
}
