fn uu_ptx::trim_broken_word_right(a0: &u32, a1: u64, a2: &u32, a3: &u32) -> u64 {
    let v0: u64;  // [sp-0x158]
    let v1: u64;  // [sp-0x38]
    let v3: &u32;  // rcx
    let v4: u64;  // rax
    let v5: &u32;  // rbx
    let v6: u32;  // eax
    let v7: u32;  // r8d
    let v8: u64;  // rax
    let v10: &u32;  // 4096
    let v12: &u32;  // rdx
    let v15: &u32;  // rcx
    let v16: &u32;  // r12
    let v17: u64;  // rax
    let v18: &u32;  // rdx

    v3 = a3;
    v1 = v4;
    if a2 > a3 {
        core::panicking::panic(); /* do not return */
    } else if a3 > a1 {
        core::panicking::panic(); /* do not return */
    } else if a2 == a3 {
        return v3;
    } else if a3 == a1 {
        return v3;
    } else {
        v5 = a3 as &char + 1;
        if v5 >= a1 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v6 = *((-4 + a0 + 0x4 * a3 as u64) as &i32);
        if v6 - 9 < 5 {
            return v3;
        } else if v6 == 32 {
            return v3;
        } else {
            if v6 < 128 {
                goto LABEL_53a400;
            }
            if v6 >> 8 > 31 {
                switch (v7) {
                case 32:
                    break;
                case 48:
                    goto LABEL_53a3d8;
                default:
LABEL_53a400:
                    if a3 >= a1 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                }
            } else {
                switch (v7) {
                case 0:
LABEL_53a3d8:
                    if !v6 == 5760 {
                        goto LABEL_53a400;
                    }
                    return v3;
                case 22:
                    break;
                default:
LABEL_53a400:
                    if a3 >= a1 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                }
            }
            v8 = *((a0 + 0x4 * a3 as u64) as &i32);
            if v8 - 9 < 5 {
                return v3;
            } else if v8 == 32 {
                return v3;
            } else {
                if v8 >= 128 {
                    v3 = a3;
                    if v3 <= a2 {
                        return v3;
                    }
                    if core::unicode::unicode_data::white_space::lookup(v8 & 4294967295) as i8 {
                        return v3;
                    }
                } else if a3 <= a2 {
                    return v3;
                }
                v12 = v10;
                loop {
                    v15 = v3;
                    v16 = v15 as &char + 1;
                    if v16 >= a1 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    v17 = *((a0 + 0x4 * v16 as u64) as &i32);
                    if v17 <= 32 {
                        v0 = 0x100003e00;
                        if (*((&v0 + ((v17 & 63) >> 3)) as &i8) >> (v17 & 63 & 7) & 1) {
                            return v3;
                        }
                    }
                    if v17 >= 128 && core::unicode::unicode_data::white_space::lookup(v17 & 4294967295) as i8 {
                        return v3;
                    }
                    v12 = v18;
                    if v16 <= v12 {
                        return v3;
                    }
                }
            }
        }
    }
}
