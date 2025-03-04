fn uu_ptx::trim_broken_word_right(a0: &u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x158]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rax
    let v4: u64;  // rbx
    let v5: u64;  // r13
    let v6: u64;  // rdi
    let v7: u64;  // rdi
    let v9: u64;  // rbp
    let v10: u64;  // rdi

    v1 = v3;
    v4 = a3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    if a2 == a3 {
        return v4;
    } else if a3 == a1 {
        return v4;
    } else {
        v5 = a3 - 1;
        v6 = a0[1 + a3];
        if v6 - 9 < 5 {
            return v4;
        } else if v6 == 32 {
            return v4;
        } else {
            if v6 >= 128 && core::unicode::unicode_data::white_space::lookup(v6) as i8 {
                return v4;
            }
            if a3 < a1 {
                v7 = a0[a3];
                if v7 - 9 < 5 {
                    return v4;
                } else if v7 == 32 {
                    return v4;
                } else {
                    if v7 < 128 {
                        if a3 <= a2 {
                            return v4;
                        }
                    } else {
                        if a3 <= a2 {
                            return v4;
                        } else if core::unicode::unicode_data::white_space::lookup(v7) as i8 {
                            return v4;
                        }
                    }
                    if a2 < v5 {
                        v5 = a2;
                    }
                    loop {
                        v9 = v4 - 1;
                        if v9 < a1 {
                            v10 = a0[v9];
                            if v10 <= 32 {
                                v0 = 0x100003e00;
                                if (*((&v0 + ((v10 & 63) >> 3)) as &i8) >> (v10 & 63 & 7) & 1) {
                                    return v4;
                                }
                            }
                            if v10 >= 128 && core::unicode::unicode_data::white_space::lookup(v10) as i8 {
                                return v4;
                            }
                            v4 = v9;
                            if v9 <= a2 {
                                v4 = v5;
                                return v4;
                            }
                        }
                    }
                }
            }
        }
    }
}
