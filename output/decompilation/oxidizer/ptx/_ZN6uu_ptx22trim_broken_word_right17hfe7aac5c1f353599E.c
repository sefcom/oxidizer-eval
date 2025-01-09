fn uu_ptx::trim_broken_word_right(a0: &u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x158]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rax
    let v4: u64;  // 4096
    let v6: u64;  // r13
    let v7: u64;  // rdi
    let v11: u64;  // rdi
    let v18: u64;  // 4096
    let v20: u64;  // rbx
    let v21: u64;  // rbp
    let v22: u64;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    v4 = a3;
    if a2 == a3 {
        return v4;
    } else if a3 == a1 {
        return v4;
    } else {
        v6 = a3 - 1;
        v7 = a0[1 + a3];
        if v7 - 9 < 5 {
            return v4;
        } else if v7 == 32 {
            return v4;
        } else {
            if v7 >= 128 && core::unicode::unicode_data::white_space::lookup(v7) as i8 {
                return v4;
            }
            if a3 < a1 {
                v11 = a0[a3];
                if v11 - 9 < 5 {
                    return v4;
                } else if v11 == 32 {
                    return v4;
                } else {
                    if v11 < 128 {
                        if a3 <= a2 {
                            return v4;
                        }
                    } else {
                        if a3 <= a2 {
                            return v4;
                        } else if core::unicode::unicode_data::white_space::lookup(v11) as i8 {
                            return v4;
                        }
                    }
                    if a2 < v6 {
                        v18 = a2;
                    } else {
                        v18 = v6;
                    }
                    loop {
                        v20 = a3;
                        v21 = v20 - 1;
                        if v21 < a1 {
                            v22 = a0[v21];
                            if v22 <= 32 {
                                v0 = 0x100003e00;
                                v4 = v20;
                                if (*((&v0 + ((v22 & 63) >> 3)) as &i8) >> (v22 & 63 & 7) & 1) {
                                    return v4;
                                }
                            }
                            if v22 >= 128 {
                                v4 = v20;
                                if core::unicode::unicode_data::white_space::lookup(v22) as i8 {
                                    return v4;
                                }
                            }
                            a3 = v21;
                            if v21 <= a2 {
                                v4 = v18;
                                return v4;
                            }
                        }
                    }
                }
            }
        }
    }
}
