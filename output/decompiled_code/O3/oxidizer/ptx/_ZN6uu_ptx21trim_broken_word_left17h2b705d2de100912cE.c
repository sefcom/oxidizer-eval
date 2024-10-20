fn uu_ptx::trim_broken_word_left(a0: &u32, a1: u64, a2: &u32, a3: &u32) -> u64 {
    let v0: u64;  // [sp-0x148]
    let v2: &u32;  // rdx
    let v3: u32;  // eax
    let v4: u32;  // esi
    let v5: u32;  // eax
    let v6: u8;  // al
    let v7: &u32;  // 4096
    let v9: &u32;  // rcx
    let v10: &u32;  // rdx
    let v14: u64;  // rax
    let v15: &u32;  // rcx
    let v16: &u32;  // rdx

    v2 = a2;
    if a2 > a3 {
        core::panicking::panic(); /* do not return */
    } else if a3 > a1 {
        core::panicking::panic(); /* do not return */
    } else if !a2 {
        return v2;
    } else if a2 == a3 {
        return v2;
    } else if a2 >= a1 {
        core::panicking::panic_bounds_check(); /* do not return */
    } else {
        v3 = *((a0 + 0x4 * a2 as u64) as &i32);
        if v3 - 9 < 5 {
            return v2;
        } else if v3 == 32 {
            return v2;
        } else {
            if v3 < 128 {
                goto LABEL_53a249;
            }
            if v3 >> 8 > 31 {
                switch (v4) {
                case 32:
                    break;
                case 48:
                    goto LABEL_53a223;
                default:
LABEL_53a249:
                    v5 = *((-4 + a0 + 0x4 * a2 as u64) as &i32);
                    if v5 - 9 < 5 {
                        return v2;
                    }
                }
            } else {
                switch (v4) {
                case 0:
LABEL_53a223:
                    if !v3 == 5760 {
                        goto LABEL_53a249;
                    }
                    return v2;
                case 22:
                    break;
                default:
LABEL_53a249:
                    v5 = *((-4 + a0 + 0x4 * a2 as u64) as &i32);
                    if v5 - 9 < 5 {
                        return v2;
                    }
                }
            }
            if v5 == 32 {
                return v2;
            }
            if v5 >= 128 {
                v6 = core::unicode::unicode_data::white_space::lookup(v5) as i8;
                v2 = a2;
                if v2 >= a3 {
                    return v2;
                }
                if v6 {
                    return v2;
                }
            } else if a2 >= a3 {
                return v2;
            }
            v9 = v7;
            loop {
                v14 = *((a0 + 0x4 * v10 as u64) as &i32);
                if v14 <= 32 {
                    v0 = 0x100003e00;
                    if (*((&v0 + ((v14 & 63) >> 3)) as &i8) >> (v14 & 63 & 7) & 1) {
                        return v2;
                    }
                }
                if v14 >= 128 {
                    v16 = v10;
                    if core::unicode::unicode_data::white_space::lookup(v14 & 4294967295) as i8 {
                        return v2;
                    }
                }
                v9 = v15;
                v10 = v16 as &char + 1;
                if v10 >= v9 {
                    return v2;
                }
            }
        }
    }
}
