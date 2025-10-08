fn uu_ptx::trim_broken_word_right(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x158]
    let v1: u64;  // [bp-0x38]
    let v3: u64;  // rax
    let v4: u64;  // r13
    let v5: core::option::Option<&str>;  // edi
    let v6: u32;  // edi
    let v7: u64;  // 4096
    let v8: u64;  // r13
    let v9: u64;  // rbx
    let v10: u64;  // rbp
    let v11: u64;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if a3 == a1 || a2 == a3 {
        return a3;
    }
    v4 = a3 - 1;
    v5 = *((a0 + a3 * 4 - 4) as &i32);
    if v5 - 9 < 5 {
        return a3;
    } else if v5 == 32 {
        return a3;
    } else {
        if v5 >= 128 && core::unicode::unicode_data::white_space::lookup(v5 as u8) {
            return a3;
        }
        v6 = *((a0 + a3 * 4) as &i32);
        if v6 - 9 < 5 {
            return a3;
        } else if v6 == 32 {
            return a3;
        } else {
            if v6 >= 128 {
                if a3 <= a2 || core::unicode::unicode_data::white_space::lookup(v6) {
                    return a3;
                }
            } else {
                if a2 >= a3 {
                    return a3;
                }
            }
            if a2 < v4 {
                v7 = a2;
            } else {
                v7 = v4;
            }
            v8 = v7;
            loop {
                v9 = a3;
                v10 = v9 - 1;
                v11 = *((a0 + v10 * 4) as &i32);
                if v11 <= 32 {
                    v0 = 0x100003e00;
                    if (*((&v0 + ((v11 & 63) >> 3)) as &i8) >> (v11 & 63 & 7) & 1) {
                        return v9;
                    }
                }
                if v11 >= 128 && core::unicode::unicode_data::white_space::lookup(v11) {
                    return v9;
                }
                a3 = v10;
                if a2 >= a3 {
                    return v8;
                }
            }
        }
    }
}
