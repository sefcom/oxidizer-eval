fn uu_ptx::trim_broken_word_right(a0: &u32, a1: u64, a2: &u32, a3: &u32) -> u64 {
    let v0: u64;  // [sp-0x158]
    let v1: u64;  // [sp-0x38]
    let v3: u64;  // rax
    let v4: &u32;  // 4096
    let v7: u64;  // rdi
    let v11: u64;  // rdi
    let v20: &u32;  // rbx
    let v21: &u32;  // rbp
    let v22: u64;  // rdi

    v1 = v3;
    uu_ptx::assert_str_integrity(a1, a2, a3);
    v4 = a3;
    if a2 == a3 {
        return v4;
    } else if a3 == a1 {
        return v4;
    } else {
        v7 = *((-4 + a0 + 0x4 * a3 as u64) as &i32);
        if v7 - 9 < 5 {
            return v4;
        } else if v7 == 32 {
            return v4;
        } else {
            if v7 >= 128 && core::unicode::unicode_data::white_space::lookup(v7) as i8 {
                return v4;
            }
            if a3 < a1 {
                v11 = *((a0 + 0x4 * a3 as u64) as &i32);
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
                    loop {
                        v20 = a3;
                        v21 = v20 as &char + 1;
                        if v21 < a1 {
                            v22 = *((a0 + 0x4 * v21 as u64) as &i32);
                            if v22 <= 32 {
                                v0 = 0x100003e00;
                                if (*((&v0 + ((v22 & 63) >> 3)) as &i8) >> (v22 & 63 & 7) & 1) {
                                    return v4;
                                }
                            }
                            if v22 >= 128 && core::unicode::unicode_data::white_space::lookup(v22) as i8 {
                                return v4;
                            }
                            if v21 <= a2 {
                                return v4;
                            }
                        }
                    }
                }
            }
        }
    }
}
