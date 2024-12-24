fn uu_cat::write_nonprint_to_end(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> u64 {
    let v0: u8;  // [sp-0x4c]
    let v1: u8;  // [sp-0x4b]
    let v2: u8;  // [sp-0x4a]
    let v3: u8;  // [sp-0x49]
    let v4: u64;  // [sp-0x40]
    let v5: u64;  // [sp-0x38]
    let v7: struct8;  // rax
    let v8: void*;  // r12
    let v9: u64;  // rax
    let v10: u64;  // 4096
    let v11: u64;  // 4096
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
            goto LABEL_4b12ef;
        }
        if v9 == 127 {
            goto LABEL_4b12ef;
        }
        if v9 == 10 {
            return v8;
        }
        if (v9 & 255) < 32 {
            v0 = 94;
            v1 = v9 | 64;
            v16 = 2;
            goto LABEL_4b13a0;
        }
        if (v9 - 32 & 255) < 95 {
            v0 = v9;
            v16 = 1;
            goto LABEL_4b13a0;
        }
        if v9 < 160 {
            v0 = 11597;
            v2 = 94;
            v3 = v9 - 64;
            v16 = 4;
            goto LABEL_4b13a0;
        } else if (v9 + 96 & 255) >= 95 {
LABEL_4b12ef:
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
LABEL_4b13a0:
            goto LABEL_4b12ef;
        }
    }
}
