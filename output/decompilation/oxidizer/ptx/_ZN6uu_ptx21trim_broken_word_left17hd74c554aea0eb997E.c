fn uu_ptx::trim_broken_word_left(a0: i64, a1: u64, a2: i128, a3: u64) -> long long {
    let v0: u64;  // [bp-0x158]
    let v1: u64;  // [bp-0x38]
    let v3: u64;  // rax
    let v4: u32;  // edi
    let v5: u32;  // edi
    let v6: u64;  // r13
    let v7: u64;  // 4096
    let v8: u64;  // r13
    let v9: core::fmt::rt::Argument;  // 4096
    let v10: core::fmt::rt::Argument;  // rax
    let v11: u64;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if !a2 || a2 == a3 {
        return a2;
    }
    v4 = *((a0 + a2 * 4) as &i32);
    if v4 - 9 >= 5 && v4 != 32 && (v4 < 128 || !core::unicode::unicode_data::white_space::lookup(v4)) {
        v5 = *((a0 + a2 * 4 - 4) as &i32);
        if v5 - 9 >= 5 && v5 != 32 {
            if v5 >= 128 {
                if !a3 <= a2 && !core::unicode::unicode_data::white_space::lookup(v5) {
                    goto LABEL_52c352;
                }
            } else {
                if a2 < a3 {
LABEL_52c352:
                    v6 = a2 + 1;
                    if a3 > v6 {
                        v7 = a3;
                    } else {
                        v7 = v6;
                    }
                    v8 = v7;
                    v9 = a2;
                    loop {
                        v10 = v9;
                        v11 = *((a0 + v10 * 4) as &i32);
                        if v11 <= 32 {
                            v0 = 0x100003e00;
                            if (*((&v0 + ((v11 & 63) >> 3)) as &i8) >> (v11 & 63 & 7) & 1) {
                                return v10;
                            }
                        }
                        if v11 >= 128 && core::unicode::unicode_data::white_space::lookup(v11) {
                            return v10;
                        }
                        v9 = v10 + 1;
                        if v9 >= a3 {
                            return v8;
                        }
                    }
                }
            }
        }
    }
    return a2;
}
